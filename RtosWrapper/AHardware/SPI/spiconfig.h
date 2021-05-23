#pragma once
#include "spiDriver.h"
#include "spi.h"

class spi1;
inline SpiDriver<spi1> spi1Transceiver;
class spi1 : public  SPI<SPI1, spi1Transceiver> {};

class spi2;
inline SpiDriverOnlyTransmit<spi2> spi2Transceiver;
class spi2 : public  SPI<SPI2,spi2Transceiver> {};

