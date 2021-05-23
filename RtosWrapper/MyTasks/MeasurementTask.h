#pragma once
#include "thread.hpp"
#include "ledconfig.h"
#include "measurementconfig.h"
#include "event.hpp";
#include "bme280driverConfig.h"
using namespace OsWrapper;
template<auto& event>
class MeasurementTask:public Thread<128U>
{
public:
  const std::chrono::milliseconds period = 100ms;

  void Execute() override
  {

    for(;;)
    { 
      bme280.Measure();
      Led2::Toggle();
      Sleep(period);
      
      if (event.Wait() != 0)
        {
          UnitsUpdate();
        }
      
    }
  }
  
  
   void UnitsUpdate()
  {
    static int counter = 0;
    
    counter=(counter<2)?(counter+1):0;
    switch(counter)
    {
    case 0:
      userUnits[0]=Unit::F;
      userUnits[3]=Unit::F;
      break;
    case 1:
      userUnits[0]=Unit::K;
      userUnits[3]=Unit::K;
      break;
    case 2:
      userUnits[0]=Unit::C;
      userUnits[3]=Unit::C;
      break;
    }
  }
};