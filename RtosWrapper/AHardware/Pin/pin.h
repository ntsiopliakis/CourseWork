#pragma once
#include <cstdint> // for uint8_t
#include "port.h" 


template<typename Port, uint8_t number>
class Pin
{  
public: 
  static void Toggle()
  {
    Port::Toggle(number);
  }
  static void Set()
  {
    Port::Set(1<<number);
  }
  static void Reset()
  {
    Port::Reset(1<<number);
  }
  static bool IsSet()
  {
    return Port::IsSet(number);
  }
  static uint8_t Get()
  {
    return IsSet()?1U:0U;
  }
  static void Enable()
  {
    if(!Port::IsEnable())Port::Enable();
  }
  static void SelectInputMode()
  {
    Port::ModeSet(number,Moder::Input);
  }
  static void SelectOutputMode()
  {
    Port::ModeSet(number,Moder::Output);
  }
  static void SelectMode(Moder moder)
  {
    Port::ModeSet(number,moder);
  }
};