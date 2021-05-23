#pragma once
#include "pin.h"         // for Pin
#include "portsconfig.h" // for PortC, PortA

using PinLed1 = Pin<PortA, 5>;
using PinLed2 = Pin<PortC, 9>;
using PinLed3 = Pin<PortC, 8>;
using PinLed4 = Pin<PortC, 5>;

using PinButton = Pin<PortC, 13>;

using PinCSforBME280 = Pin<PortB, 10>;

using PinCSforEPD = Pin<PortB, 1>;
using PinDCforEPD = Pin<PortB, 2>;
using PinRSTforEPD = Pin<PortC, 3>;
using PinBSYforEPD = Pin<PortC, 2>;
