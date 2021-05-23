extern "C" {
  void SysCtlDelay(unsigned long ulCount)
  {
    __asm("    subs    r0, #1\n"
          "    bne.n   SysCtlDelay\n"
          "    bx      lr");
  }
}

  void Delay_ms(uint64_t time_ms)
  {
    SysCtlDelay(time_ms*SystemCoreClock/3000);
  }


struct EPDDriverCommands
{
  enum: char
  {
    PanelSetting = 0x0,
    PowerOff = 0x02,
    PowerOn = 0x04,
    BoosterSoftStart = 0x06U,
    DataStartTransmission1 = 0x10U,
    DisplayRefresh = 0x12U,
    DataStartTransmission2 = 0x13U,
    BuildLookupTableForBlackWhite = 0x15,
    VcomLut = 0x20,
    W2wLut = 0x21,
    B2wLut = 0x22,  
    W2bLut = 0x23,
    B2bLut = 0x24,
    PllControl = 0x30,
    VcomAndDataIntervalSetting = 0x50,
    VcmDcSetting = 0x82,
    PartialWindow = 0x90,
    PartialIn = 0x91,
    PartialOut = 0x92,
  };
};

//Soft start period of phase 00b: 10mS
//Driving strength of phase 010b: strength 3
//Minimum OFF time setting of GDR in phase: 111b: 6.58uS
static constexpr auto BtphaDefaultValue = std::uint8_t{0x17} ;
static constexpr auto BtphbDefaultValue = std::uint8_t{0x17} ;
static constexpr auto BtphcDefaultValue = std::uint8_t{0x17} ;

static constexpr auto BlackColor =  std::uint8_t{0xFF} ;

static constexpr auto DispalyWidth =  std::uint16_t{400U} ;
static constexpr auto DispalyHeight = std::uint16_t{300U} ;

static constexpr std::uint16_t RealDisplayWidth = (DispalyWidth % 8U == 0U) ? (DispalyWidth / 8U ): (DispalyWidth / 8U + 1U) ;
static constexpr std::uint16_t RealDisplayHeight = DispalyHeight ;


static constexpr unsigned char EPD_4IN2_lut_vcom0[] = {
    0x00, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x00, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0x00, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_vcom0_quick[] = {
    0x00, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_ww[] = {
    0x40, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x90, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x40, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0xA0, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_ww_quick[] = {
    0xA0, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_bw[] = {
    0x40, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x90, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x40, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0xA0, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_bw_quick[] = {
    0xA0, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_wb[] = {
    0x80, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x90, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x80, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0x50, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_wb_quick[] = {
    0x50, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_bb[] = {
    0x80, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x90, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x80, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0x50, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_bb_quick[] = {
    0x50, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

template <auto& spiDriver,typename CsPin, typename DcPin, typename ResetPin,   typename BusyPin>
struct EPDDriver
{
 
  void SendCommand(const std::uint8_t command)
  {
    DcPin::Reset() ;
    CsPin::Reset() ;
    spiDriver.SendByte(command) ;
    CsPin::Set() ; 
    CsPin::Set() ;
  }
  
  
  void SendData(const std::uint8_t data)
  {
    DcPin::Set() ;
    CsPin::Reset() ;
    spiDriver.SendByte(data) ;
    CsPin::Set() ;
  }
  void SendData(const std::uint8_t* data, const std::size_t length)
  {
    DcPin::Set();
    CsPin::Reset() ;
    spiDriver.SendMessage((char*)data, length);
    CsPin::Set() ;
  }

  void Refresh()
  {
    SetLut() ;
    SendCommand(EPDDriverCommands::DisplayRefresh) ;
    Delay_ms(100) ;
    WaitUntilBusy() ;
  }

  void RefreshQuick()
  {
    SetLutQuick() ;
    SendCommand(EPDDriverCommands::DisplayRefresh) ;       
    //WaitUntilBusy();
  }
  
  
  void SetLut()
  {
    
    SendCommand(EPDDriverCommands::VcomLut);         //g vcom
    for(std::uint8_t count = 0; count < 44U; ++count) 
    {
      SendData(EPD_4IN2_lut_vcom0[count]);
    }

    SendCommand(EPDDriverCommands::W2wLut);
    for(std::uint8_t count = 0; count < 42; ++count) 
    {
      SendData(EPD_4IN2_lut_ww[count]);
    }

    SendCommand(EPDDriverCommands::B2wLut);
    for(std::uint8_t count = 0; count < 42U; ++count) 
    {
      SendData(EPD_4IN2_lut_bw[count]);
    }

    SendCommand(EPDDriverCommands::W2bLut);
    for(std::uint8_t count = 0; count < 42U; ++count)  
    {
      SendData(EPD_4IN2_lut_wb[count]);
    }

    SendCommand(EPDDriverCommands::B2bLut);
    for(std::uint8_t count = 0; count < 42U; ++count) 
    {
      SendData(EPD_4IN2_lut_bb[count]);
    }
  }
  
  void SetLutQuick()
  {
    
    SendCommand(EPDDriverCommands::VcomLut);         //g vcom
    for(std::uint8_t count = 0; count < 44U; ++count) 
    {
      SendData(EPD_4IN2_lut_vcom0_quick[count]);
    }

    SendCommand(EPDDriverCommands::W2wLut);
    for(std::uint8_t count = 0; count < 42; ++count) 
    {
      SendData(EPD_4IN2_lut_ww_quick[count]);
    }

    SendCommand(EPDDriverCommands::B2wLut);
    for(std::uint8_t count = 0; count < 42U; ++count) 
    {
      SendData(EPD_4IN2_lut_bw_quick[count]);
    }

    SendCommand(EPDDriverCommands::W2bLut);
    for(std::uint8_t count = 0; count < 42U; ++count)  
    {
      SendData(EPD_4IN2_lut_wb_quick[count]);
    }

    SendCommand(EPDDriverCommands::B2bLut);
    for(std::uint8_t count = 0; count < 42U; ++count) 
    {
      SendData(EPD_4IN2_lut_bb_quick[count]);
    }
  }
  
  void Init()
  {
    Reset();
    SendCommand(EPDDriverCommands::BoosterSoftStart);
    SendData(BtphaDefaultValue) ;
    SendData(BtphbDefaultValue) ;
    SendData(BtphcDefaultValue) ;
    
    SendCommand(EPDDriverCommands::PowerOff);
    WaitUntilBusy() ;
    
    SendCommand(EPDDriverCommands::PowerOn);
    WaitUntilBusy() ;
  
    SendCommand(EPDDriverCommands::PanelSetting) ;
    SendData(0x3f); // KW-BF   KWR-AF	BWROTP 0f	BWOTP 1f

    SendCommand(EPDDriverCommands::PllControl); // PLL setting
    SendData(0x3C); // 3A 100HZ   29 150Hz 39 200HZ	31 171HZ
 
    SendCommand(EPDDriverCommands::VcmDcSetting); // vcom_DC setting
    SendData(0x3A);

    SendCommand(EPDDriverCommands::VcomAndDataIntervalSetting); // VCOM AND DATA INTERVAL SETTING
    SendData(0x97); // 97white border 77black border		VBDF 17|D7 VBDW 97 VBDB 57		VBDF F7 VBDW 77 VBDB 37  VBDR B7

    SetLut();
  }
  
  
  void UpdatePartialWindow(const std::uint8_t *bufferBlack,
                               std::uint16_t x,
                               std::uint16_t y,
                               std::uint16_t width,
                               std::uint16_t height                               
                               )
  {
    const size_t counts  = (width / 8) * height ;
    
    SetPartialMode() ;
    SendCommand(EPDDriverCommands::PartialWindow) ;
    SendData(x >> 8U) ;
    SendData(x & 0xf8) ;
    SendData(((x & 0xf8) + width - 1U) >> 8) ;
    SendData(((x & 0xf8) + width - 1U) | 0x07U) ;
    SendData(y >> 8) ;
    SendData( y & 0xff) ;
    SendData((y + height - 1U) >> 8U) ;
    SendData((y + height - 1U) & 0xff) ;
    SendData(0x01) ;
    SendCommand(EPDDriverCommands::DataStartTransmission2);
    SendData(bufferBlack,counts);
    
//    for (size_t j = 0; j < counts; ++j)
//    {
//       SendData(bufferBlack[j]);
//    }
    SendCommand(EPDDriverCommands::PartialWindow) ;
 //   ClearPartialMode() ;
    RefreshQuick();
  }
  
  void SetPartialMode()
  {
    SendCommand(EPDDriverCommands::PartialIn) ;
  }
 
  void ClearPartialMode()
  {
    SendCommand(EPDDriverCommands::PartialOut) ;
  }
  
  void Clear()
  {
 
    SendCommand(EPDDriverCommands::DataStartTransmission1) ;
    for (std::uint16_t j = 0; j < RealDisplayHeight;  ++j)
    {
      for (std::uint16_t i = 0; i < RealDisplayWidth; ++i)
      {
        SendData(BlackColor) ;
      }
    }
  
    SendCommand(EPDDriverCommands::DataStartTransmission2);
   for (std::uint16_t j = 0; j < RealDisplayHeight; ++j)
    {
      for (std::uint16_t i = 0; i < RealDisplayWidth; ++i) 
      {
        SendData(BlackColor);
      }
    }
    Refresh();
  }
  
  
  /******************************************************************************
function :	Sends the image buffer in RAM to e-Paper and displays
parameter:
******************************************************************************/
void Display(/*const uint8_t *blackimage,*/ const uint8_t *ryimage)
{   
    SendCommand(EPDDriverCommands::DataStartTransmission2);
    for (std::uint16_t j = 0; j < RealDisplayHeight; ++j)
    {
      for (std::uint16_t i = 0; i < RealDisplayWidth; ++i) 
      {
           SendData(ryimage[i + j * RealDisplayWidth]);
      }
    }
   RefreshQuick();
}
  
private:
  void Reset()
  {
    ResetPin::Set() ;
    Delay_ms(200) ;
    ResetPin::Reset() ;
    Delay_ms(200) ;
    ResetPin::Set() ;
    Delay_ms(200) ;
  }
  
  auto IsBusy()
  {
    auto result = BusyPin::Get() ;
    return (result == static_cast<decltype(result)> (1U)) ;
  }
  
  void WaitUntilBusy()
  {
    while (!IsBusy())
    {
      Delay_ms(10) ;
    }
  }
};
