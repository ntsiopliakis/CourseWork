#pragma once
#include "spiDriver.h"
#include "math.h"


constexpr char ReadModeMask = 0x80;
constexpr char WriteModeMask = 0x7F;

struct BME280Registers
{
  enum: char
  {
    Id=0xD0,
    Calibrate=0x88,
    SoftReset = 0xE0, //BME280 SOFT RESET REGISTER
    Status=0xF3,  //BME280 STATUS REGISTER
    Config=0xF5,  // Configuration register
    PressureData=0xF7,
    TemperatureData=0xFA,
    HumidityData=0xFD,
    CalibrateDigH1 = 0xA1,
    CalibrateDigH2 = 0xE1,
    CalibrateDigH4 = 0xE4,
    CalibrateDigH4H5 = 0xE5,
    CalibrateDigH5 = 0xE6,
    CalibrateDigH6 = 0xE7,
    CtrlHumidityMeasurement = 0xF2,
    CtrlMeasurements=0xF4
  };
};

struct BME280RegisterValues 
{
enum: char
{
  Id = 0x60, //BME280 ID
  StatusMeasuring = 0x08, //Running conversion
  StatusImUpdate = 0x01, //NVM data copying
  SoftReset = 0xB6, //BME280 SOFT RESET VALUE
  SingleHumidityMeasurementMode=0x1,
  SingleMeasurementsStart =  0x20|0x4|0x3
};
};

template<auto& spiDriver,typename CSPin>
class BME280Driver
{
  struct
  {
    uint16_t dig_T1;
    
    int16_t dig_T2;
    
    int16_t dig_T3;
    
    uint16_t dig_P1;
    
    int16_t dig_P2;
    
    int16_t dig_P3;
    
    int16_t dig_P4;
    
    int16_t dig_P5;
    
    int16_t dig_P6;
    
    int16_t dig_P7;
    
    int16_t dig_P8;
    
    int16_t dig_P9;
    
    uint8_t dig_H1;
    
    int16_t dig_H2;
    
    uint8_t dig_H3;
    
    int16_t dig_H4;
    
    int16_t dig_H5;
    
    int8_t dig_H6;
    
  } __attribute__((packed)) calibStruct;
  
  double temperature;
  double pressure;
  double humidity;
  double dewPoint;
  uint32_t tempInt=138347U;
  uint32_t pressInt;
  
public:

  BME280Driver()
  {
    CSPin::Set();
  }
  double GetTemperature()
  {
    return temperature;
  }
  double GetPressure()
  {
    return pressure;
  }
  double GetHumidity()
  {
    return humidity;
  }
  double GetDewPoint()
  {
    return dewPoint;
  }
  char ReadRegister(char byte)
  {
    CSPin::Reset();
    spiDriver.SetReceivedMesLength(1);
    spiDriver.SendByte(((char)byte)|ReadModeMask);
    while(!spiDriver.IsMessageReceived())
    {}
    CSPin::Set();
    return spiDriver.GetByte();
  }
  
  void WriteRegister(char address, char regdata)
  {
    spiDriver.SetReceivedMesLength(0);
    char mes[2]={address & WriteModeMask,regdata};
    CSPin::Reset();
    spiDriver.SendMessage(mes,2);
    CSPin::Set();
  }
  
  void ReadSpanOfRegisters(char firstAddress, char* outBuf, std::size_t length)
  {
    spiDriver.SetReceivedMesLength(length);
    CSPin::Reset();
    spiDriver.SendByte(firstAddress|ReadModeMask);
    while(!spiDriver.IsMessageReceived())
    {}
    CSPin::Set();
    spiDriver.GetMessage(outBuf);
  }
  
  void InitializeCalibrateData()
  {
    ReadSpanOfRegisters(BME280Registers::Calibrate,reinterpret_cast<char*>(&calibStruct), 24);
    calibStruct.dig_H1=ReadRegister(BME280Registers::CalibrateDigH1);
    ReadSpanOfRegisters(BME280Registers::CalibrateDigH2,reinterpret_cast<char*>(&calibStruct.dig_H2), 3);
    short byteDigH4 = ReadRegister(BME280Registers::CalibrateDigH4);
    short byteDigH4H5 = ReadRegister(BME280Registers::CalibrateDigH4H5);
    short byteDigH6 = ReadRegister(BME280Registers::CalibrateDigH5);
    calibStruct.dig_H4 = (byteDigH4<<4)|(byteDigH4H5&0x0F);
    calibStruct.dig_H5 = (byteDigH6<<4)|((byteDigH4H5&0xF0)>>4);
    calibStruct.dig_H6 = ReadRegister(BME280Registers::CalibrateDigH6);
  }
  void StartMeasurements()
  {
    WriteRegister(BME280Registers::CtrlHumidityMeasurement,BME280RegisterValues::SingleHumidityMeasurementMode);//hum
    WriteRegister(BME280Registers::CtrlMeasurements,BME280RegisterValues::SingleMeasurementsStart);//temp and press
  }
  void Reset()
  {
    WriteRegister(BME280Registers::SoftReset,BME280RegisterValues::SoftReset);
    while(ReadRegister(BME280Registers::Status)&0x9&((char)BME280RegisterValues::StatusImUpdate));
  }
  
  void Measure()
  {
    temperature = ReadTemperature();
    pressure = ReadPressure();
    humidity =ReadHumidity();
    dewPoint =CalcDewPoint();
  }
  
  
  float ReadTemperature()
  {
    char pTemp[3] = {0};
    ReadSpanOfRegisters(BME280Registers::TemperatureData,pTemp, 3);
    uint32_t tempRaw = (pTemp[0]<<16)+(pTemp[1]<<8)+pTemp[2];
    tempRaw>>=4;
    int32_t val1 = ((((tempRaw>>3) - ((int32_t) calibStruct.dig_T1 <<1))) *
                    
                    ((int32_t) calibStruct.dig_T2)) >> 11;
    
    int32_t val2 = (((((tempRaw>>4) - ((int32_t) calibStruct.dig_T1)) *
                      
                      ((tempRaw>>4) - ((int32_t) calibStruct.dig_T1))) >> 12) *
                    
                    ((int32_t) calibStruct.dig_T3)) >> 14;
    
    uint32_t tempInt = val1 + val2;
    float tempFloat = ((tempInt * 5 + 128) >> 8);
    tempFloat /= 100.0f;
    return tempFloat;
  }
  
  
  float ReadPressure()
  {
    char pPress[3] = {0};
    ReadSpanOfRegisters(BME280Registers::PressureData,pPress, 3);
    uint32_t pressRaw = (pPress[0]<<16)+(pPress[1]<<8)+pPress[2];
    pressRaw >>= 4;
    
    int64_t val1 = ((int64_t) tempInt) - 128000;
    
    int64_t val2 = val1 * val1 * (int64_t)calibStruct.dig_P6;
    
    val2 = val2 + ((val1 * (int64_t)calibStruct.dig_P5) << 17);
    
    val2 = val2 + ((int64_t)calibStruct.dig_P4 << 35);
    
    val1 = ((val1 * val1 * (int64_t)calibStruct.dig_P3) >> 8) + ((val1 * (int64_t)calibStruct.dig_P2) << 12);
    
    val1 = (((((int64_t)1) << 47) + val1)) * ((int64_t)calibStruct.dig_P1) >> 33;
    
    if (val1 == 0) {
      
      return 0; 
      
    }
    
    int64_t p = 1048576 - pressRaw;
    
    p = (((p << 31) - val2) * 3125) / val1;
    
    val1 = (((int64_t)calibStruct.dig_P9) * (p >> 13) * (p >> 13)) >> 25;
    
    val2 = (((int64_t)calibStruct.dig_P8) * p) >> 19;
    
    p = ((p + val1 + val2) >> 8) + ((int64_t)calibStruct.dig_P7 << 4);
    
    pressInt = p; //((p >> 8) * 1000) + (((p & 0xff) * 390625) / 100000);
    
    float pressFloat = p;
    pressFloat = pressFloat/ 25600;
    return pressFloat;
  } 
  
  float ReadHumidity()
  {
    char pHumid[2] = {0};
    ReadSpanOfRegisters(BME280Registers::HumidityData,pHumid, 2);
    uint16_t humidRaw = (pHumid[0]<<8)+pHumid[1];
    int32_t humidRawSign = ((int32_t)humidRaw)&0x0000FFFF;
    int32_t v_x1_u32r = (tempInt - ((int32_t)76800));
    
    v_x1_u32r = (((((humidRawSign << 14) - (((int32_t)calibStruct.dig_H4) << 20) -
                    
                    (((int32_t)calibStruct.dig_H5) * v_x1_u32r)) + ((int32_t)16384)) >> 15) *
                 
                 (((((((v_x1_u32r * ((int32_t)calibStruct.dig_H6)) >> 10) *
                      
                      (((v_x1_u32r * ((int32_t)calibStruct.dig_H3)) >> 11) + ((int32_t)32768))) >> 10) +
                    
                    ((int32_t)2097152)) * ((int32_t)calibStruct.dig_H2) + 8192) >> 14));
    
    v_x1_u32r = (v_x1_u32r - (((((v_x1_u32r >> 15) * (v_x1_u32r >> 15)) >> 7) *
                               
                               ((int32_t)calibStruct.dig_H1)) >> 4));
    
    v_x1_u32r = (v_x1_u32r < 0) ? 0 : v_x1_u32r;
    
    v_x1_u32r = (v_x1_u32r > 419430400) ? 419430400 : v_x1_u32r;
    
    float humidFloat = (v_x1_u32r>>12);//humidRaw;
    
    humidFloat /= 1024.0f;
    return humidFloat;
  }
  
  float CalcDewPoint()
  {
    float a = 17.27;
    float b = 237.7;
    float T = temperature;
    float RH = humidity/100;
    float gamma = a*T/(b+T)+log(RH);
    float Tp = b*gamma/(a-gamma);
    return Tp;
  }
  
};