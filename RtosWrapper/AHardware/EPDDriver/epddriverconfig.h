#pragma once
#include "epddriver.h"
#include "spiconfig.h"
#include "pinsconfig.h"

inline EPDDriver<spi2Transceiver,PinCSforEPD, PinDCforEPD, PinRSTforEPD, PinBSYforEPD> eInkDisplay;
