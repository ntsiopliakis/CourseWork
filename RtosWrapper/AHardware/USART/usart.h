#pragma once
#include "usart2registers.hpp"
#include "usart1registers.hpp"


struct UsartConfig
{
  UsartConfig();
};

template<typename USARTx, auto& tranceiver>
class USART
{
  static UsartConfig config;
  
public:
  
  static void Config(UsartConfig config);
  
  static void SendByte(uint8_t byte)
  {
    USARTx::DR::Write(byte);
  }
  static uint8_t ReadByte()
  {
    return USARTx::DR::Get();
  }
  
  static void TransmiteEnable()
  {
    USARTx::CR1::TE::Enable::Set();
  }
  static void TransmiteBufEmptyInterruptEnable()
  {
    USARTx::CR1::TXEIE::InterruptWhenTXE::Set();
  }  
  
  static void TransmiteDisable()
  {
    USARTx::CR1::TE::Disable::Set();
  }
  static void TransmiteBufEmptyInterruptDisable()
  {
    USARTx::CR1::TXEIE::InterruptInhibited::Set();
  } 
  static void ReceiveEnable()
  {
    USARTx::CR1::RE::Enable::Set();
  }
  static void ReceiveDisable()
  {
    USARTx::CR1::RE::Disable::Set();
  }
  
  static void IdleLineDetectedInterruptEnable()
  {
    USARTx::CR1::IDLEIE::InterruptWhenIDLE::Set();
  }
  static void IdleLineDetectedInterruptDisable()
  {
    USARTx::CR1::IDLEIE::InterruptInhibited::Set();
  }
  static bool TransmitionCompleted()
  {
    return USARTx::SR::TC::TransmitionComplete::IsSet();
  }
  static void UsartInterruptHandler()
  {
    if(USARTx::SR::RXNE::DataRecieved::IsSet())
    {
      tranceiver.OnNextByteReceive();
    }
    if(USARTx::CR1::TE::Enable::IsSet()&&USART2::SR::TXE::DataRegisterEmpty::IsSet())
    {
      tranceiver.OnNextByteTransmite();
    }
    if(USARTx::CR1::IDLEIE::InterruptWhenIDLE::IsSet()&&USARTx::SR::IDLE::IdleLineDetected::IsSet())
    {
      tranceiver.OnIdleLineDetected();
    }
  }
};