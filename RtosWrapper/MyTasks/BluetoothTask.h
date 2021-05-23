#pragma once
#include "thread.hpp"
#include "usartconfig.h"
#include "bme280driverconfig.h"
#include "measurementconfig.h"
#include "stdio.h"
#include "ledconfig.h"

using namespace OsWrapper;
class BluetoothTask:public Thread<400U>
{
  
public:
  const std::chrono::milliseconds period = 1000ms;
  
  BluetoothTask(){}
  
  void Execute() override
  {
    for(;;)
    {    
      char transmittedMess[150]={0};
      size_t lengthTransmitedMess;
      
      for(int k=0;k<4;k++)
      {
        char str[100]={0};
        std::sprintf(str,"%11s : %5.2f %5s \n",measurements[k]->quantityName.c_str(),
                     measurements[k]->GetValue(userUnits[k]),Measurement::ShowUnitName(userUnits[k]).c_str());
        strncat(transmittedMess,str,100);
      }

      lengthTransmitedMess = std::strlen(transmittedMess);
      bluetoothTransceiver.SendMessage(transmittedMess,lengthTransmitedMess);
      Led1::Toggle();
      Sleep(period);
    }
  }
};