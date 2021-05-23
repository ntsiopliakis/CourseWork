#include "rtos.hpp"         // for Rtos
#include "event.hpp"        // for Event
#include "ledconfig.h"
#include "Button.h"
#include "BluetoothTask.h"
#include "ButtonEventTask.h"
#include "MeasurementTask.h"
#include "DisplayUpdateTask.h"
#include "rccregisters.hpp" // for RCC

#include "Application/Diagnostic/GlobalStatus.hpp"
#include <gpioaregisters.hpp>  // for GPIOA
#include <gpiobregisters.hpp>  // for GPIOB
#include <gpiocregisters.hpp>  // for GPIOC

#include "Measurementconfig.h"
#include "epddriverconfig.h"
std::uint32_t SystemCoreClock = 16'000'000U;
#include "stdio.h"
#include <iostream>
#include "usart2registers.hpp"
#include "nvicregisters.hpp"
#include "spi1registers.hpp"
#include "spi2registers.hpp"
#include "Math.h"
#include "Display.h"
#include <iostream>

extern "C" {
  int __low_level_init(void)
  {
    //Switch on external 16 MHz oscillator
    RCC::CR::HSION::On::Set();
    while (RCC::CR::HSIRDY::NotReady::IsSet())
    {
      
    }
    //Switch system clock on external oscillator
    RCC::CFGR::SW::Hsi::Set();
    while (!RCC::CFGR::SWS::Hsi::IsSet())
    {
    }
    
    RCC::AHB1ENR::GPIOAEN::Enable::Set();
    //USART config
    RCC::APB1ENR::USART2EN::Enable::Set();
    GPIOA::MODER::MODER3::Alternate::Set();
    GPIOA::MODER::MODER2::Alternate::Set();
    GPIOA::AFRL::AFRL3::Af7::Set();
    GPIOA::AFRL::AFRL2::Af7::Set();
    GPIOA::PUPDR::PUPDR2::NoPullUpNoPullDown::Set();
    GPIOA::PUPDR::PUPDR3::PullUp::Set();
    USART2::CR1::OVER8::OversamplingBy16::Set();
    USART2::CR1::M::Data8bits::Set();
    USART2::CR2::STOP::OneStopBit::Set();
    USART2::CR1::PCE::ParityControlDisable::Set();
    USART2::CR1::RE::Enable::Set();
    NVIC::ISER1::Write(1<<6);
    USART2::CR1::RXNEIE::InterruptWhenRXNE::Set();
    constexpr uint32_t CLC = 16'000'000U;
    constexpr uint32_t BaudRate=9600;
    double UsartDivDouble = 1.0/(BaudRate*8*(2 - USART2::CR1::OVER8::Get()))*CLC;
    uint32_t UsartDivMantissa=UsartDivDouble;
    uint16_t UsartDivFraction=round((UsartDivDouble-UsartDivMantissa)*16);
    USART2::BRR::DIV_Mantissa::Set(UsartDivMantissa);
    USART2::BRR::DIV_Fraction::Set(UsartDivFraction);
    
    RCC::AHB1ENRPack<
      RCC::AHB1ENR::GPIOCEN::Enable,
      RCC::AHB1ENR::GPIOBEN::Enable,
      RCC::AHB1ENR::GPIOAEN::Enable
        >::Set();
    
    //SPI2 config(for e-Ink Display)
    RCC::APB1ENR::SPI2EN::Enable::Set();
    NVIC::ISER1::Write(1<<4);
    SPI2::CR1::MSTR::Master::Set();
    SPI2::CR1::BIDIMODE::Unidirectional2Line::Set();
    SPI2::CR1::DFF::Data8bit::Set();
    SPI2::CR1::CPOL::High::Set();
    SPI2::CR1::CPHA::Phase2edge::Set();
    SPI2::CR1::SSM::NssSoftwareEnable::Set();
    SPI2::CR1::SSI::Value1::Set();
    SPI2::CR1::BR::PclockDiv2::Set();
    SPI2::CR1::LSBFIRST::MsbFisrt::Set();
    SPI2::CR1::CRCEN::CrcCalcDisable::Set();
    SPI2::CRCPR::CRCPOLY::Set(10U) ;
    
    // PortB.13 - SPI2_CLK, PortB.15 - SPI2_MOSI, PB1 -CS, PB2- DC,
    GPIOB::MODERPack<
      GPIOB::MODER::MODER1::Output,         //CS
      GPIOB::MODER::MODER2::Output,         //DC
      GPIOB::MODER::MODER13::Alternate,     //SPI2_CLK
      GPIOB::MODER::MODER15::Alternate      //SPI2_MOSI
        >::Set() ;
    GPIOB::AFRHPack<
      GPIOB::AFRH::AFRH13::Af5,
      GPIOB::AFRH::AFRH15::Af5
        >::Set() ;
    GPIOB::BSRR::BS1::High::Write() ;
    
    GPIOC::MODERPack<
      GPIOC::MODER::MODER2::Input,         //Busy
      GPIOC::MODER::MODER3::Output         //Reset
        >::Set() ;        
    
    //SPI1 config
    RCC::APB2ENR::SPI1EN::Enable::Set();
    NVIC::ISER1::Write(1<<3);
    SPI1::CR1::MSTR::Master::Set();
    SPI1::CR1::DFF::Data8bit::Set();
    SPI1::CR1::BR::PclockDiv2::Set();
    SPI1::CR1::CRCEN::CrcCalcDisable::Set();
    SPI1::CR1::CPOL::High::Set();
    SPI1::CR1::CPHA::Phase2edge::Set();
    SPI1::CR1::LSBFIRST::MsbFisrt::Set();
    SPI1::CR2::SSOE::SsOutputEnable::Set(); 
    SPI1::CR1::SSM::NssSoftwareEnable::Set();
    SPI1::CR1::SSI::Value1::Set();
    
    GPIOB::MODERPack<
      GPIOB::MODER::MODER3::Alternate, //sck
      GPIOB::MODER::MODER4::Alternate, //miso
      GPIOB::MODER::MODER5::Alternate, //mosi
      GPIOB::MODER::MODER10::Output,   //cs for bme280
      >::Set();
    
    GPIOB::AFRLPack<
      GPIOB::AFRL::AFRL3::Af5,
      GPIOB::AFRL::AFRL4::Af5,
      GPIOB::AFRL::AFRL5::Af5,
      >::Set();  
    GPIOB::BSRR::BS10::High::Write() ;
    
    return 1;
  }
}
OsWrapper::Event event(100ms, 1);
ButtonEventTask<UserButton, event> buttonEventTask;
BluetoothTask bluetoothTask;
DisplayUpdateTask displayUpdateTask;
MeasurementTask<event> measurementTask;

int main()
{  
  USART2::CR1::UE::Enable::Set();    
  
  SPI2::CR1::SPE::Enable::Set();
  SPI1::CR1::SPE::Enable::Set();
  bme280.InitializeCalibrateData();
  bme280.StartMeasurements();
  
  eInkDisplay.Init();
  eInkDisplay.Clear();
  using namespace OsWrapper;
  
  Rtos::CreateThread(displayUpdateTask,"displayUpdateTask", ThreadPriority::lowest);
  Rtos::CreateThread(bluetoothTask,"bluetoothTask", ThreadPriority::lowest);
  Rtos::CreateThread(buttonEventTask,"buttonEventTask", ThreadPriority::highest);
  Rtos::CreateThread(measurementTask,"measurementTask", ThreadPriority::priorityMax);
  
  Rtos::Start();
  return 0;
}


