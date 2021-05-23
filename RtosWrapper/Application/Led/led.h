#pragma once
#include "pin.h"

template<typename Pin>
class Led
{
public:

static void Toggle()
{
  Pin::Toggle();
}
static void TurnOn()
{
  Pin::Set();
}
static void TurnOff()
{
  Pin::Reset();
}

static void Enable()
{
  Pin::Enable();
  Pin::SelectOutputMode();
}
};