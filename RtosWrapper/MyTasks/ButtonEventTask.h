#pragma once
#include "thread.hpp"
#include "Button.h"
#include "event.hpp"
using namespace OsWrapper;

template<typename Button, auto& event>
class ButtonEventTask:public Thread<128U>
{
public:
  ButtonEventTask()
  {
    Button::Enable(); 
  }
  void Execute()
  {
    for(;;)
    {
      if (Button::WasPressed())
      {
        event.Signal();
        
      }
      Sleep(100ms);
    }
  }
};