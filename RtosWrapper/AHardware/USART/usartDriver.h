#pragma once
#include "usart.h"

template<typename usart>
class usartDriver
{
  std::array<char,1024> transmiteBuf;
  std::array<char,1024> receiveBuf;
  uint32_t transmiteMessLength=0;
  uint32_t receiveMessLength=0;
  bool messageWasReceived=false;
  bool messageWasTransmited=false;
  uint32_t Rit=0;
  uint32_t Tit=0;
 public:
  void SendMessage(char* message, uint32_t size)
  {
    uint32_t L=size;
    if(transmiteBuf.size()<L) L=transmiteBuf.size();
    transmiteMessLength=L;
    std::memcpy(transmiteBuf.data(), message,L);
    usart::TransmiteEnable();
    usart::TransmiteBufEmptyInterruptEnable();
    messageWasTransmited=false;
    messageWasReceived=false;
  }
  
  void OnNextByteTransmite()
  {
    if(Tit<transmiteMessLength-1)
    {
      usart::SendByte(transmiteBuf[Tit++]);
    }
    else
    {
      usart::SendByte(transmiteBuf[Tit]);
      Tit=0;
      while(!usart::TransmitionCompleted())
      {
      }
      usart::TransmiteDisable();
      usart::TransmiteBufEmptyInterruptDisable();
      messageWasTransmited=true;
    }
  }

  void OnNextByteReceive()
  {
    uint8_t bf=usart::ReadByte();
    if(!messageWasReceived)
    {
      receiveBuf[Rit++]=bf;
      usart::IdleLineDetectedInterruptEnable();
    }
  }
  
  void OnIdleLineDetected()
  {
    receiveMessLength=Rit;
    Rit=0;
    usart::IdleLineDetectedInterruptDisable();
    messageWasReceived=true;
  }

  
   bool MessageWasReceived()
   {
     return messageWasReceived;
   }
  
  void GetMessage(char* outBuf, std::size_t& length)
   {
     length=receiveMessLength;
     std::memcpy(outBuf, receiveBuf.data(),receiveMessLength);
     messageWasReceived=false;
   }
    
};
