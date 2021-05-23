///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V8.40.2.214/W32 for ARM        15/Apr/2021  22:07:51
// Copyright 1999-2019 IAR Systems AB.
//
//    Cpu mode     =  
//    Endian       =  little
//    Source file  =
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Application\Led\led.cpp
//    Command line =
//        -f C:\Users\D13C~1\AppData\Local\Temp\EW434E.tmp
//        (C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Application\Led\led.cpp
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
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Debug\List\led.s
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

        PUBLIC _ZN3Led6EnableEv
        PUBLIC _ZN3Led6ToggleEv
        PUBLIC _ZN3Led6TurnOnEv
        PUBLIC _ZN3Led7TurnOffEv
        PUBLIC _ZN3LedC1ER7ILedPin
        PUBLIC _ZN3LedC2ER7ILedPin
        PUBLIC _ZTI7ILedPin
        PUBLIC _ZTS7ILedPin
        
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
        
// C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK_\RtosWrapper\Application\Led\led.cpp
//    1 #include "led.h"
//    2 
//    3 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function _ZN3LedC2ER7ILedPin
        THUMB
// __code __interwork __vfp Led::subobject Led(ILedPin &)
_ZN3LedC2ER7ILedPin:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        MOVS     R0,R4
          CFI FunCall _ZN3LedC1ER7ILedPin
        BL       _ZN3LedC1ER7ILedPin
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock0

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function _ZN3LedC1ER7ILedPin
          CFI NoCalls
        THUMB
//    4 Led::Led(ILedPin& aPin): pin(aPin)
//    5 {
_ZN3LedC1ER7ILedPin:
        STR      R1,[R0, #+0]
//    6 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock1
//    7 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function _ZN3Led6ToggleEv
        THUMB
//    8 void Led::Toggle()
//    9 {
_ZN3Led6ToggleEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   10   pin.Toggle();
        LDR      R0,[R4, #+0]
        LDR      R1,[R4, #+0]
        LDR      R1,[R1, #+0]
        LDR      R1,[R1, #+0]
          CFI FunCall
        BLX      R1
//   11 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock2

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock3 Using cfiCommon0
          CFI Function _ZN3Led6TurnOnEv
        THUMB
//   12 void Led::TurnOn()
//   13 {
_ZN3Led6TurnOnEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   14   pin.Set();
        LDR      R0,[R4, #+0]
        LDR      R1,[R4, #+0]
        LDR      R1,[R1, #+0]
        LDR      R1,[R1, #+4]
          CFI FunCall
        BLX      R1
//   15 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock3

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock4 Using cfiCommon0
          CFI Function _ZN3Led7TurnOffEv
        THUMB
//   16 void Led::TurnOff()
//   17 {
_ZN3Led7TurnOffEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   18   pin.Reset();
        LDR      R0,[R4, #+0]
        LDR      R1,[R4, #+0]
        LDR      R1,[R1, #+0]
        LDR      R1,[R1, #+8]
          CFI FunCall
        BLX      R1
//   19 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock4
//   20 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock5 Using cfiCommon0
          CFI Function _ZN3Led6EnableEv
        THUMB
//   21 void Led::Enable()
//   22 {
_ZN3Led6EnableEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   23   pin.Enable();
        LDR      R0,[R4, #+0]
        LDR      R1,[R4, #+0]
        LDR      R1,[R1, #+0]
        LDR      R1,[R1, #+16]
          CFI FunCall
        BLX      R1
//   24   pin.SelectOutputMode();
        LDR      R0,[R4, #+0]
        LDR      R1,[R4, #+0]
        LDR      R1,[R1, #+0]
        LDR      R1,[R1, #+12]
          CFI FunCall
        BLX      R1
//   25 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock5

        SECTION `.iar_vfe_vcallinfo_ZN3Led6ToggleEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Led6ToggleEv
        DATA
        DC32    _ZN3Led6ToggleEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI7ILedPin
        DC32    1
        DC32    1
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Led6TurnOnEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Led6TurnOnEv
        DATA
        DC32    _ZN3Led6TurnOnEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI7ILedPin
        DC32    1
        DC32    2
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Led7TurnOffEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Led7TurnOffEv
        DATA
        DC32    _ZN3Led7TurnOffEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI7ILedPin
        DC32    1
        DC32    4
        DC32    0
        DC32    0

        SECTION `.iar_vfe_vcallinfo_ZN3Led6EnableEv`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZN3Led6EnableEv
        DATA
        DC32    _ZN3Led6EnableEv
        DC32    0
        DC32    0
        DC32    1
        DC32    _ZTI7ILedPin
        DC32    1
        DC32    24
        DC32    0
        DC32    0

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI7ILedPin
        DATA
// __absolute __class_type_info const <Typeinfo for ILedPin>
_ZTI7ILedPin:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8, _ZTS7ILedPin

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS7ILedPin
        DATA
// __absolute char const <Typeinfo name for ILedPin>[9]
_ZTS7ILedPin:
        DATA8
        DC8 "7ILedPin"
        DATA
        DC8 0, 0, 0

        END
// 
// 20 bytes in section .rodata
// 90 bytes in section .text
// 
// 90 bytes of CODE  memory
//  0 bytes of CONST memory (+ 20 bytes shared)
//
//Errors: none
//Warnings: none
