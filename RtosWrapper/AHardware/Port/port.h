#pragma once
#include <cstdint> // for uint8_t
#include "gpiocregisters.hpp" // for GPIOC
#include "gpioaregisters.hpp" // for GPIOC
#include "gpiocregisters.hpp" 
#include "gpiobregisters.hpp" 
#include "rccregisters.hpp" 

enum Moder
{
  Input=0,
  Output=1,
  Alternate=2,
  Analog=3,
  
}; 

template<typename PortType>
struct AHB1ENR_of
{
};
template<>
struct AHB1ENR_of<GPIOC>
{
  using Enable = RCC::AHB1ENR::GPIOCEN::Enable;
  using Disable = RCC::AHB1ENR::GPIOCEN::Disable;
};
template<>
struct AHB1ENR_of<GPIOA>
{
  using Enable = RCC::AHB1ENR::GPIOAEN::Enable;
  using Disable = RCC::AHB1ENR::GPIOAEN::Disable;
};
template<>
struct AHB1ENR_of<GPIOB>
{
  using Enable = RCC::AHB1ENR::GPIOBEN::Enable;
  using Disable = RCC::AHB1ENR::GPIOBEN::Disable;
};

template<typename Reg>
class Port
{
 public:  
  static void Toggle(uint8_t num) 
  {
    Reg::ODR::Toggle(1U << num);
  }
  static bool IsSet(uint8_t num)
  {
    return (Reg::IDR::Get()&(1<<num))!=0;
  }
  static uint32_t Get()
  {
    return Reg::IDR::Get();
  }
  static void Write(uint32_t value)
  {
    Reg::ODR::Write(value);
  }
  static void Set(uint32_t value) 
  {
    Reg::BSRR::Write(value);
  }
  static void Reset(uint32_t value) 
  {
    Reg::BSRR::Write(value<<16);
  }
  static void ModeSet(uint8_t num, Moder moder) 
  {
    auto value = Reg::MODER::Get();
    value &= ~(3U<<(num*2U));
    value |= moder<<(num*2U);
    Reg::MODER::Write(value);
  }
  static void Enable() 
  {
    AHB1ENR_of<Reg>::Enable::Set();
  }
  static void Disable() 
  {
    AHB1ENR_of<Reg>::Disable::Set();
  }
  static bool IsEnable() 
  {
    return AHB1ENR_of<Reg>::Enable::IsSet();
  }
};



