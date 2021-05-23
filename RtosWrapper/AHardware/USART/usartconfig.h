#pragma once
#include "usartDriver.h"
#include "usart.h"

class usart2;

inline usartDriver<usart2> bluetoothTransceiver;

class usart2 : public  USART<USART2,bluetoothTransceiver> {};


