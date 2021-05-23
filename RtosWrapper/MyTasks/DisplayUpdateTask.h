#pragma once
#include "thread.hpp"
#include "bme280driverconfig.h"
#include "measurementconfig.h"
#include "stdio.h"
#include "ledconfig.h"
#include "display.h"

using namespace OsWrapper;
class DisplayUpdateTask:public Thread<400U>
{
  
public:
  const std::chrono::milliseconds period = 3000ms;
  
  DisplayUpdateTask(){}
  
  void Execute() override
  {
    for(;;)
    {    
      Point point{10U, 40U};
      
      for(int k=0;k<4;k++)
      {
        char str[100]={0};
        std::sprintf(str,"%11s : %3.2f",measurements[k]->quantityName.c_str(),
                     measurements[k]->GetValue(userUnits[k]));
        display.DrawString(point, str);
        uint32_t offset=(3-Measurement::ShowUnitName(userUnits[k]).length())*8;
        point.x+=330+offset;
        display.DrawString(point,Measurement::ShowUnitName(userUnits[k]).c_str());
        point.x-=330+offset;
        point.y+=30;
      }
      display.UpdateWindow(Point(0, 0), Point(400, 300)) ;
      display.UpdateWindow(Point(0, 0), Point(400, 300)) ;
      display.ResetImage();
      Led3::Toggle();
      Sleep(period);
    }
  }
};