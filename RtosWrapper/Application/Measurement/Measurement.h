#include <string>
#include <cassert>
#pragma once

enum class Unit
{
  K,
  F,
  C,
  hPa,
  percent
};

class Measurement
{
protected:
  double(*DataSourceFcn)();
public:  
  const Unit *const units;
  const std::size_t countOfUnits;
  const Unit defaultUnit;
  std::string quantityName;

  Measurement(std::string quantityName, Unit* units, std::size_t countOfUnits, Unit defaultUnit, double(*DataSourceFcn)()):
    quantityName(quantityName),units(units), countOfUnits(countOfUnits),defaultUnit(defaultUnit), DataSourceFcn(DataSourceFcn)
  {
    assert(CheckUnit(defaultUnit) &&" defalt unit must match measurement's units");
  }
  Measurement(std::string quantityName, Unit unit, double(*DataSourceFcn)()):
    quantityName(quantityName),defaultUnit(unit),units(&defaultUnit), countOfUnits(1), DataSourceFcn(DataSourceFcn)
  {
  }
  
  virtual double GetValue()
  {
    return DataSourceFcn();
  }
  virtual double GetValue(Unit unit)
  {
    assert(CheckUnit(unit)&&" defalt unit must match measurement's units");
    return DataSourceFcn();
  }
  bool CheckUnit(Unit unit)
  {
    bool flag=false;
    for(int i=0;i<countOfUnits;i++)
    {
      if(unit==units[i])
      {
        flag=true;
      }
    }
    return flag;
  }
  
  static string ShowUnitName(Unit unit)
  {
    string str;
    switch(unit)
    {  
    case Unit::K:
      str = "K";
      break;
    case Unit::F:
      str = "F";
      break;
    case Unit::C:
      str = "C";
      break;
    case Unit::hPa:
      str = "hPa";
      break;
    case Unit::percent:
      str = "%";
      break;  
    default:
      assert(false &&" unit must match measurement's units");
      break;
    }
    return str;
  }
};