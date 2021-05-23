#pragma once
#include "Measurement.h"
#include <cassert>

Unit temperatureUnits[3]={Unit::K,Unit::C,Unit::F};

class Temperature: public Measurement
{
public:
  Temperature(string quantityName, double(*DataSourceFcn)())
    :Measurement(quantityName, temperatureUnits, 3, Unit::C, DataSourceFcn){}
  
  virtual double GetValue()
  {
    return DataSourceFcn();
  }
  virtual double GetValue(Unit unit)
  {
    double value;
    switch(unit)
    {
    case Unit::C:
      value = Measurement::GetValue();
      break;
    case Unit::K:
      value = GetValue()+273.15;
      break;
    case Unit::F:
      value = GetValue()*1.8+32.0;
      break;
    default:
      assert(false &&"unit must match measurement's units");
      break;
    }
    return value;
  }
};