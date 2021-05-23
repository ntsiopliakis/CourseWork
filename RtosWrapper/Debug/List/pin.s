///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V8.40.2.214/W32 for ARM        15/Apr/2021  22:08:04
// Copyright 1999-2019 IAR Systems AB.
//
//    Cpu mode     =  
//    Endian       =  little
//    Source file  =
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\Pin\pin.cpp
//    Command line =
//        -f C:\Users\D13C~1\AppData\Local\Temp\EW702D.tmp
//        (C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\Pin\pin.cpp
//        -lC
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Debug\List
//        -lA
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Debug\List
//        -o
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Debug\Obj
//        --no_cse --no_unroll --no_inline --no_code_motion --no_tbaa
//        --no_clustering --no_scheduling --debug --endian=little
//        --cpu=Cortex-M4 -e --fpu=VFPv4_sp --dlib_config "C:\Program Files
//        (x86)\IAR Systems\Embedded Workbench
//        8.3\arm\inc\c\DLib_Config_Normal.h" -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\wrapper\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\wrapper\FreeRtos\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\FreeRtos\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\FreeRtos\include\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\Common\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\IAR\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\IAR\ARM_CM4F\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\MemMang\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\MyTasks\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Common\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\CMSIS\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Application\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Application\Diagnostic\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\GpioPort\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\IrqController\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Pin\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\STM32F411\FieldValues\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\STM32F411\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Port\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Atomic\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\Common\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\Common\Singleton\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\Common\RomObject\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\Port\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\Pin\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Application\Button\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Application\Led\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Application\Measurement\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\USART\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\CortexM4\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\CortexM4\FieldValues\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\SPI\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\BME280Driver\
//        -On --c++ --no_exceptions --no_rtti)
//    Locale       =  C
//    List file    =
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Debug\List\pin.s
//
///////////////////////////////////////////////////////////////////////////////

        RTMODEL "__CPP_Exceptions", "Disabled"
        RTMODEL "__CPP_Language", "C++14"
        RTMODEL "__SystemLibrary", "DLib"
        RTMODEL "__dlib_file_descriptor", "0"
        RTMODEL "__dlib_full_locale_support", "0"
        RTMODEL "__dlib_version", "6"
        AAPCS BASE,INTERWORK,VFP
        PRESERVE8
        REQUIRE8

        #define SHT_PROGBITS 0x1

        EXTERN _ZTVN10__cxxabiv117__class_type_infoE
        EXTERN _ZTVN10__cxxabiv121__vmi_class_type_infoE

        PUBLIC _ZN10IButtonPinC1Ev
        PUBLIC _ZN10IButtonPinC2Ev
        PUBLIC _ZN3Pin10SelectModeE5Moder
        PUBLIC _ZN3Pin15SelectInputModeEv
        PUBLIC _ZN3Pin16SelectOutputModeEv
        PUBLIC _ZN3Pin3GetEv
        PUBLIC _ZN3Pin3SetEv
        PUBLIC _ZN3Pin5IsSetEv
        PUBLIC _ZN3Pin5ResetEv
        PUBLIC _ZN3Pin6EnableEv
        PUBLIC _ZN3Pin6ToggleEv
        PUBLIC _ZN3PinC1EhR5IPort
        PUBLIC _ZN3PinC2EhR5IPort
        PUBLIC _ZN7ILedPinC1Ev
        PUBLIC _ZN7ILedPinC2Ev
        PUBLIC _ZTI10IButtonPin
        PUBLIC _ZTI3Pin
        PUBLIC _ZTI5IPort
        PUBLIC _ZTI7ILedPin
        PUBLIC _ZTS10IButtonPin
        PUBLIC _ZTS3Pin
        PUBLIC _ZTS5IPort
        PUBLIC _ZTS7ILedPin
        PUBLIC _ZTV3Pin
        PUBLIC _ZThn4_N3Pin16SelectOutputModeEv
        PUBLIC _ZThn4_N3Pin3SetEv
        PUBLIC _ZThn4_N3Pin5ResetEv
        PUBLIC _ZThn4_N3Pin6EnableEv
        PUBLIC _ZThn4_N3Pin6ToggleEv
        
          CFI Names cfiNames0
          CFI StackFrame CFA R13 DATA
          CFI Resource R0:32, R1:32, R2:32, R3:32, R4:32, R5:32, R6:32, R7:32
          CFI Resource R8:32, R9:32, R10:32, R11:32, R12:32, R13:32, R14:32
          CFI Resource D0:64, D1:64, D2:64, D3:64, D4:64, D5:64, D6:64, D7:64
          CFI Resource D8:64, D9:64, D10:64, D11:64, D12:64, D13:64, D14:64
          CFI Resource D15:64
          CFI EndNames cfiNames0
        
          CFI Common cfiCommon0 Using cfiNames0
          CFI CodeAlign 2
          CFI DataAlign 4
          CFI ReturnAddress R14 CODE
          CFI CFA R13+0
          CFI R0 Undefined
          CFI R1 Undefined
          CFI R2 Undefined
          CFI R3 Undefined
          CFI R4 SameValue
          CFI R5 SameValue
          CFI R6 SameValue
          CFI R7 SameValue
          CFI R8 SameValue
          CFI R9 SameValue
          CFI R10 SameValue
          CFI R11 SameValue
          CFI R12 Undefined
          CFI R14 SameValue
          CFI D0 Undefined
          CFI D1 Undefined
          CFI D2 Undefined
          CFI D3 Undefined
          CFI D4 Undefined
          CFI D5 Undefined
          CFI D6 Undefined
          CFI D7 Undefined
          CFI D8 SameValue
          CFI D9 SameValue
          CFI D10 SameValue
          CFI D11 SameValue
          CFI D12 SameValue
          CFI D13 SameValue
          CFI D14 SameValue
          CFI D15 SameValue
          CFI EndCommon cfiCommon0
        
// C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\AHardware\Pin\pin.cpp
//    1 #include "pin.h" //for Pin

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN7ILedPinC2Ev
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function _ZN7ILedPinC2Ev
        THUMB
// __code __interwork __vfp ILedPin::subobject ILedPin()
_ZN7ILedPinC2Ev:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        MOVS     R0,R4
          CFI FunCall _ZN7ILedPinC1Ev
        BL       _ZN7ILedPinC1Ev
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock0
//    2 
//    3 
//    4 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function _ZN3PinC2EhR5IPort
        THUMB
// __code __interwork __vfp Pin::subobject Pin(uint8_t, IPort &)
_ZN3PinC2EhR5IPort:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        UXTB     R1,R1            ;; ZeroExt  R1,R1,#+24,#+24
        MOVS     R0,R4
          CFI FunCall _ZN3PinC1EhR5IPort
        BL       _ZN3PinC1EhR5IPort
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock1

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function _ZN3PinC1EhR5IPort
        THUMB
//    5 Pin::Pin(uint8_t aNumber, IPort& aPort): number(aNumber), 
//    6                                          port(aPort)
//    7 {
_ZN3PinC1EhR5IPort:
        PUSH     {R4-R6,LR}
          CFI R14 Frame(CFA, -4)
          CFI R6 Frame(CFA, -8)
          CFI R5 Frame(CFA, -12)
          CFI R4 Frame(CFA, -16)
          CFI CFA R13+16
        MOVS     R4,R0
        MOVS     R5,R1
        MOVS     R6,R2
        MOVS     R0,R4
          CFI FunCall _ZN10IButtonPinC2Ev
        BL       _ZN10IButtonPinC2Ev
        ADDS     R0,R4,#+4
          CFI FunCall _ZN7ILedPinC2Ev
        BL       _ZN7ILedPinC2Ev
        LDR.N    R0,??DataTable1
        ADDS     R1,R0,#+8
        STR      R1,[R4, #+0]
        ADDS     R0,R0,#+44
        STR      R0,[R4, #+4]
        STRB     R5,[R4, #+8]
        STR      R6,[R4, #+12]
//    8 }
        MOVS     R0,R4
        POP      {R4-R6,PC}       ;; return
          CFI EndBlock cfiBlock2

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable1:
        DATA32
        DC32     _ZTV3Pin

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock3 Using cfiCommon0
          CFI Function _ZThn4_N3Pin6ToggleEv
          CFI TailCall _ZN3Pin6ToggleEv
        THUMB
// __interwork __vfp void Pin::Toggle for ILedPin/-4/()
_ZThn4_N3Pin6ToggleEv:
        SUBS     R0,R0,#+4
          CFI EndBlock cfiBlock3
        REQUIRE _ZN3Pin6ToggleEv
        ;; // Fall through to label Pin::Toggle()
//    9 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock4 Using cfiCommon0
          CFI Function _ZN3Pin6ToggleEv
        THUMB
//   10 void Pin::Toggle()
//   11 {
_ZN3Pin6ToggleEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   12   port.Toggle(number);
        LDRB     R1,[R4, #+8]
        LDR      R0,[R4, #+12]
        LDR      R2,[R4, #+12]
        LDR      R2,[R2, #+0]
        LDR      R2,[R2, #+0]
          CFI FunCall
        BLX      R2
//   13 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock4

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock5 Using cfiCommon0
          CFI Function _ZThn4_N3Pin3SetEv
          CFI TailCall _ZN3Pin3SetEv
        THUMB
// __interwork __vfp void Pin::Set for ILedPin/-4/()
_ZThn4_N3Pin3SetEv:
        SUBS     R0,R0,#+4
          CFI EndBlock cfiBlock5
        REQUIRE _ZN3Pin3SetEv
        ;; // Fall through to label Pin::Set()

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock6 Using cfiCommon0
          CFI Function _ZN3Pin3SetEv
        THUMB
//   14 void Pin::Set()
//   15 {
_ZN3Pin3SetEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   16      port.Set(1<<number);
        MOVS     R1,#+1
        LDRSB    R0,[R4, #+8]
        LSLS     R1,R1,R0
        LDR      R0,[R4, #+12]
        LDR      R2,[R4, #+12]
        LDR      R2,[R2, #+0]
        LDR      R2,[R2, #+8]
          CFI FunCall
        BLX      R2
//   17 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock6

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock7 Using cfiCommon0
          CFI Function _ZThn4_N3Pin5ResetEv
          CFI TailCall _ZN3Pin5ResetEv
        THUMB
// __interwork __vfp void Pin::Reset for ILedPin/-4/()
_ZThn4_N3Pin5ResetEv:
        SUBS     R0,R0,#+4
          CFI EndBlock cfiBlock7
        REQUIRE _ZN3Pin5ResetEv
        ;; // Fall through to label Pin::Reset()

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock8 Using cfiCommon0
          CFI Function _ZN3Pin5ResetEv
        THUMB
//   18 void Pin::Reset()
//   19 {
_ZN3Pin5ResetEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   20      port.Reset(1<<number);
        MOVS     R1,#+1
        LDRSB    R0,[R4, #+8]
        LSLS     R1,R1,R0
        LDR      R0,[R4, #+12]
        LDR      R2,[R4, #+12]
        LDR      R2,[R2, #+0]
        LDR      R2,[R2, #+12]
          CFI FunCall
        BLX      R2
//   21 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock8

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock9 Using cfiCommon0
          CFI Function _ZN3Pin5IsSetEv
        THUMB
//   22 bool Pin::IsSet()
//   23 {
_ZN3Pin5IsSetEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   24   return port.IsSet(number);
        LDRB     R1,[R4, #+8]
        LDR      R0,[R4, #+12]
        LDR      R2,[R4, #+12]
        LDR      R2,[R2, #+0]
        LDR      R2,[R2, #+20]
          CFI FunCall
        BLX      R2
        POP      {R4,PC}          ;; return
//   25 }
          CFI EndBlock cfiBlock9

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock10 Using cfiCommon0
          CFI Function _ZN3Pin3GetEv
        THUMB
//   26 uint8_t Pin::Get()
//   27 {
_ZN3Pin3GetEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   28   return Pin::IsSet()?1U:0U;
        MOVS     R0,R4
          CFI FunCall _ZN3Pin5IsSetEv
        BL       _ZN3Pin5IsSetEv
        CMP      R0,#+0
        BEQ.N    ??Get_0
        MOVS     R0,#+1
        B.N      ??Get_1
??Get_0:
        MOVS     R0,#+0
??Get_1:
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
        POP      {R4,PC}          ;; return
//   29 }
          CFI EndBlock cfiBlock10

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock11 Using cfiCommon0
          CFI Function _ZThn4_N3Pin6EnableEv
          CFI TailCall _ZN3Pin6EnableEv
        THUMB
// __interwork __vfp void Pin::Enable for ILedPin/-4/()
_ZThn4_N3Pin6EnableEv:
        SUBS     R0,R0,#+4
          CFI EndBlock cfiBlock11
        REQUIRE _ZN3Pin6EnableEv
        ;; // Fall through to label Pin::Enable()

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock12 Using cfiCommon0
          CFI Function _ZN3Pin6EnableEv
        THUMB
//   30 void Pin::Enable()
//   31 {
_ZN3Pin6EnableEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   32   if(!port.IsEnable())port.Enable();
        LDR      R0,[R4, #+12]
        LDR      R1,[R4, #+12]
        LDR      R1,[R1, #+0]
        LDR      R1,[R1, #+36]
          CFI FunCall
        BLX      R1
        CMP      R0,#+0
        BNE.N    ??Enable_0
        LDR      R0,[R4, #+12]
        LDR      R1,[R4, #+12]
        LDR      R1,[R1, #+0]
        LDR      R1,[R1, #+28]
          CFI FunCall
        BLX      R1
//   33 }
??Enable_0:
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock12

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock13 Using cfiCommon0
          CFI Function _ZN3Pin15SelectInputModeEv
        THUMB
//   34 void Pin::SelectInputMode()
//   35 {
_ZN3Pin15SelectInputModeEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   36   port.ModeSet(number,Moder::Input);
        MOVS     R2,#+0
        LDRB     R1,[R4, #+8]
        LDR      R0,[R4, #+12]
        LDR      R3,[R4, #+12]
        LDR      R3,[R3, #+0]
        LDR      R3,[R3, #+24]
          CFI FunCall
        BLX      R3
//   37 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock13

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock14 Using cfiCommon0
          CFI Function _ZThn4_N3Pin16SelectOutputModeEv
          CFI TailCall _ZN3Pin16SelectOutputModeEv
        THUMB
// __interwork __vfp void Pin::SelectOutputMode for ILedPin/-4/()
_ZThn4_N3Pin16SelectOutputModeEv:
        SUBS     R0,R0,#+4
          CFI EndBlock cfiBlock14
        REQUIRE _ZN3Pin16SelectOutputModeEv
        ;; // Fall through to label Pin::SelectOutputMode()

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock15 Using cfiCommon0
          CFI Function _ZN3Pin16SelectOutputModeEv
        THUMB
//   38 void Pin::SelectOutputMode()
//   39 {
_ZN3Pin16SelectOutputModeEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   40   port.ModeSet(number,Moder::Output);
        MOVS     R2,#+1
        LDRB     R1,[R4, #+8]
        LDR      R0,[R4, #+12]
        LDR      R3,[R4, #+12]
        LDR      R3,[R3, #+0]
        LDR      R3,[R3, #+24]
          CFI FunCall
        BLX      R3
//   41 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock15

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock16 Using cfiCommon0
          CFI Function _ZN3Pin10SelectModeE5Moder
        THUMB
//   42 void Pin::SelectMode(Moder moder)
//   43 {
_ZN3Pin10SelectModeE5Moder:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
        MOVS     R4,R0
        MOVS     R5,R1
//   44   port.ModeSet(number,moder);
        MOVS     R2,R5
        UXTB     R2,R2            ;; ZeroExt  R2,R2,#+24,#+24
        LDRB     R1,[R4, #+8]
        LDR      R0,[R4, #+12]
        LDR      R3,[R4, #+12]
        LDR      R3,[R3, #+0]
        LDR      R3,[R3, #+24]
          CFI FunCall
        BLX      R3
//   45 }
        POP      {R0,R4,R5,PC}    ;; return
          CFI EndBlock cfiBlock16

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN7ILedPinC1Ev
          CFI Block cfiBlock17 Using cfiCommon0
          CFI Function _ZN7ILedPinC1Ev
          CFI NoCalls
        THUMB
// __code __interwork __vfp ILedPin::ILedPin()
_ZN7ILedPinC1Ev:
        BX       LR               ;; return
          CFI EndBlock cfiBlock17

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN10IButtonPinC2Ev
          CFI Block cfiBlock18 Using cfiCommon0
          CFI Function _ZN10IButtonPinC2Ev
        THUMB
// __code __interwork __vfp IButtonPin::subobject IButtonPin()
_ZN10IButtonPinC2Ev:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        MOVS     R0,R4
          CFI FunCall _ZN10IButtonPinC1Ev
        BL       _ZN10IButtonPinC1Ev
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock18

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN10IButtonPinC1Ev
          CFI Block cfiBlock19 Using cfiCommon0
          CFI Function _ZN10IButtonPinC1Ev
          CFI NoCalls
        THUMB
// __code __interwork __vfp IButtonPin::IButtonPin()
_ZN10IButtonPinC1Ev:
        BX       LR               ;; return
          CFI EndBlock cfiBlock19

        SECTION `.iar_vfe_vtableinfo_ZTV3Pin`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZTV3Pin
        DATA
        DC32    _ZTV3Pin
        DC32    16
        DC32    3
        DC32    _ZTI10IButtonPin
        DC32    0
        DC32    1
        DC32    _ZTI3Pin
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTI3Pin
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTI7ILedPin
        DC32    0
        DC32    1
        DC32    _ZTI3Pin
        DC32    1
        DC32    11
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Pin6ToggleEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Pin6ToggleEv
        DATA
        DC32    _ZN3Pin6ToggleEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI5IPort
        DC32    1
        DC32    1
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Pin3SetEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Pin3SetEv
        DATA
        DC32    _ZN3Pin3SetEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI5IPort
        DC32    1
        DC32    4
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Pin5ResetEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Pin5ResetEv
        DATA
        DC32    _ZN3Pin5ResetEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI5IPort
        DC32    1
        DC32    8
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Pin5IsSetEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Pin5IsSetEv
        DATA
        DC32    _ZN3Pin5IsSetEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI5IPort
        DC32    1
        DC32    32
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Pin6EnableEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Pin6EnableEv
        DATA
        DC32    _ZN3Pin6EnableEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI5IPort
        DC32    1
        DC32    640
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Pin15SelectInputModeEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Pin15SelectInputModeEv
        DATA
        DC32    _ZN3Pin15SelectInputModeEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI5IPort
        DC32    1
        DC32    64
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Pin16SelectOutputModeEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Pin16SelectOutputModeEv
        DATA
        DC32    _ZN3Pin16SelectOutputModeEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI5IPort
        DC32    1
        DC32    64
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Pin10SelectModeE5Moder`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Pin10SelectModeE5Moder
        DATA
        DC32    _ZN3Pin10SelectModeE5Moder
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI5IPort
        DC32    1
        DC32    64
        DC32    0
        DC32    0

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTV3Pin
        DATA
// __absolute void (*const Pin::__vtbl[16])()
_ZTV3Pin:
        DATA32
        DC32 0x0, _ZTI3Pin, _ZN3Pin5IsSetEv, _ZN3Pin15SelectInputModeEv
        DC32 _ZN3Pin6EnableEv, _ZN3Pin6ToggleEv, _ZN3Pin3SetEv, _ZN3Pin5ResetEv
        DC32 _ZN3Pin16SelectOutputModeEv, 0xffff'fffc, _ZTI3Pin
        DC32 _ZThn4_N3Pin6ToggleEv, _ZThn4_N3Pin3SetEv, _ZThn4_N3Pin5ResetEv
        DC32 _ZThn4_N3Pin16SelectOutputModeEv, _ZThn4_N3Pin6EnableEv

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI5IPort
        DATA
// __absolute __class_type_info const <Typeinfo for IPort>
_ZTI5IPort:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8, _ZTS5IPort

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI7ILedPin
        DATA
// __absolute __class_type_info const <Typeinfo for ILedPin>
_ZTI7ILedPin:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8, _ZTS7ILedPin

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI10IButtonPin
        DATA
// __absolute __class_type_info const <Typeinfo for IButtonPin>
_ZTI10IButtonPin:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8, _ZTS10IButtonPin

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI3Pin
        DATA
// __absolute __vmi_class_type_info const <Typeinfo for Pin>
_ZTI3Pin:
        DATA32
        DC32 _ZTVN10__cxxabiv121__vmi_class_type_infoE + 0x8, _ZTS3Pin, 0, 2
        DC32 _ZTI10IButtonPin, 2, _ZTI7ILedPin, 1'026

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS5IPort
        DATA
// __absolute char const <Typeinfo name for IPort>[7]
_ZTS5IPort:
        DATA8
        DC8 "5IPort"
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS7ILedPin
        DATA
// __absolute char const <Typeinfo name for ILedPin>[9]
_ZTS7ILedPin:
        DATA8
        DC8 "7ILedPin"
        DATA
        DC8 0, 0, 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS10IButtonPin
        DATA
// __absolute char const <Typeinfo name for IButtonPin>[13]
_ZTS10IButtonPin:
        DATA8
        DC8 "10IButtonPin"
        DATA
        DC8 0, 0, 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS3Pin
        DATA
// __absolute char const <Typeinfo name for Pin>[5]
_ZTS3Pin:
        DATA8
        DC8 "3Pin"
        DATA
        DC8 0, 0, 0

        END
// 
// 164 bytes in section .rodata
// 298 bytes in section .text
// 
// 270 bytes of CODE  memory (+  28 bytes shared)
//   0 bytes of CONST memory (+ 164 bytes shared)
//
//Errors: none
//Warnings: none
