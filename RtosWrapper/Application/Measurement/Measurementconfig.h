#pragma once
#include "Measurement.h"
#include "Temperature.h"
#include "bme280driverconfig.h"
double fcnTemp()
{
  return bme280.GetTemperature();
};

double fcnPress()
{
  return bme280.GetPressure();
};

double fcnHum()
{
  return bme280.GetHumidity();
};

double fcnDewP()
{
  return bme280.GetDewPoint();
};

inline Temperature temperature("Temperature", fcnTemp);

inline Measurement pressure("Pressure", Unit::hPa, fcnPress);
inline Measurement humidity("Humidity", Unit::percent, fcnHum);

inline Temperature dewPoint("Dew point",  fcnDewP);

inline Measurement* measurements[4] = {&temperature, &pressure, &humidity, &dewPoint};
inline Unit userUnits[4]={Unit::F, Unit::hPa, Unit::percent, Unit::F};