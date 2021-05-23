///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V8.40.2.214/W32 for ARM        04/Apr/2021  16:09:24
// Copyright 1999-2019 IAR Systems AB.
//
//    Cpu mode     =  
//    Endian       =  little
//    Source file  =
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\MyTasks\ButtonEventTask.cpp
//    Command line =
//        -f C:\Users\D13C~1\AppData\Local\Temp\EWE8ED.tmp
//        (C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\MyTasks\ButtonEventTask.cpp
//        -lC
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Debug\List
//        -lA
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Debug\List
//        -o
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Debug\Obj
//        --no_cse --no_unroll --no_inline --no_code_motion --no_tbaa
//        --no_clustering --no_scheduling --debug --endian=little
//        --cpu=Cortex-M4 -e --fpu=VFPv4_sp --dlib_config "C:\Program Files
//        (x86)\IAR Systems\Embedded Workbench
//        8.3\arm\inc\c\DLib_Config_Normal.h" -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\wrapper\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\wrapper\FreeRtos\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\FreeRtos\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\FreeRtos\include\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\FreeRtos\portable\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\FreeRtos\portable\Common\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\FreeRtos\portable\IAR\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\FreeRtos\portable\IAR\ARM_CM4F\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Rtos\FreeRtos\portable\MemMang\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\MyTasks\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Common\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\CMSIS\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Application\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Application\Diagnostic\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\AHardware\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\AHardware\GpioPort\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\AHardware\IrqController\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\AbstractHardware\Pin\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\AbstractHardware\Registers\STM32F411\FieldValues\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\AbstractHardware\Registers\STM32F411\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\AbstractHardware\Registers\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\AbstractHardware\Port\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\AbstractHardware\Atomic\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\Common\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\Common\Singleton\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\Common\RomObject\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\AHardware\Port\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\AHardware\Pin\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Application\Button\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Application\Led\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Application\Measurement\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\AHardware\USART\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\AbstractHardware\Registers\CortexM4\
//        -I
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\..\CortexLib\AbstractHardware\Registers\CortexM4\FieldValues\
//        -Ol --c++ --no_exceptions --no_rtti)
//    Locale       =  C
//    List file    =
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Debug\List\ButtonEventTask.s
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
        #define SHT_INIT_ARRAY 0xe

        EXTERN _ZN3PinC1EhR5IPort
        EXTERN _ZN6ButtonC1ER10IButtonPin
        EXTERN _ZTVN10__cxxabiv117__class_type_infoE
        EXTERN _ZTVN10__cxxabiv120__si_class_type_infoE

        PUBLIC _ZGV6button
        PUBLIC _ZGV7pinLed1
        PUBLIC _ZGV7pinLed2
        PUBLIC _ZGV7pinLed3
        PUBLIC _ZGV7pinLed4
        PUBLIC _ZGV9pinButton
        PUBLIC _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073872912ELj32E8ReadModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073872920ELj32E9WriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073874968ELj32E9WriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN4PortI5GPIOAE3GetEv
        PUBLIC _ZN4PortI5GPIOAE3SetEj
        PUBLIC _ZN4PortI5GPIOAE5IsSetEh
        PUBLIC _ZN4PortI5GPIOAE5ResetEj
        PUBLIC _ZN4PortI5GPIOAE5WriteEj
        PUBLIC _ZN4PortI5GPIOAE6EnableEv
        PUBLIC _ZN4PortI5GPIOAE6ToggleEh
        PUBLIC _ZN4PortI5GPIOAE7DisableEv
        PUBLIC _ZN4PortI5GPIOAE7ModeSetEh5Moder
        PUBLIC _ZN4PortI5GPIOAE8IsEnableEv
        PUBLIC _ZN4PortI5GPIOCE3GetEv
        PUBLIC _ZN4PortI5GPIOCE3SetEj
        PUBLIC _ZN4PortI5GPIOCE5IsSetEh
        PUBLIC _ZN4PortI5GPIOCE5ResetEj
        PUBLIC _ZN4PortI5GPIOCE5WriteEj
        PUBLIC _ZN4PortI5GPIOCE6EnableEv
        PUBLIC _ZN4PortI5GPIOCE6ToggleEh
        PUBLIC _ZN4PortI5GPIOCE7DisableEv
        PUBLIC _ZN4PortI5GPIOCE7ModeSetEh5Moder
        PUBLIC _ZN4PortI5GPIOCE8IsEnableEv
        PUBLIC _ZNSt6chrono12steady_clock9is_steadyE
        PUBLIC _ZNSt6chrono12system_clock12is_monotonicE
        PUBLIC _ZNSt6chrono12system_clock9is_steadyE
        PUBLIC _ZTI4PortI5GPIOAE
        PUBLIC _ZTI4PortI5GPIOCE
        PUBLIC _ZTI5IPort
        PUBLIC _ZTISt10ctype_base
        PUBLIC _ZTS4PortI5GPIOAE
        PUBLIC _ZTS4PortI5GPIOCE
        PUBLIC _ZTS5IPort
        PUBLIC _ZTSSt10ctype_base
        PUBLIC _ZTV4PortI5GPIOAE
        PUBLIC _ZTV4PortI5GPIOCE
        PUBLIC button
        PUBLIC flagIndicatorSwitch
        PUBLIC pinButton
        PUBLIC pinLed1
        PUBLIC pinLed2
        PUBLIC pinLed3
        PUBLIC pinLed4
        PUBLIC portA
        PUBLIC portC
        
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
        

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTV4PortI5GPIOCE
        DATA
// __absolute void (*const Port<GPIOC>::__vtbl[12])()
_ZTV4PortI5GPIOCE:
        DATA32
        DC32 0x0, _ZTI4PortI5GPIOCE, _ZN4PortI5GPIOCE6ToggleEh
        DC32 _ZN4PortI5GPIOCE5WriteEj, _ZN4PortI5GPIOCE3SetEj
        DC32 _ZN4PortI5GPIOCE5ResetEj, _ZN4PortI5GPIOCE3GetEv
        DC32 _ZN4PortI5GPIOCE5IsSetEh, _ZN4PortI5GPIOCE7ModeSetEh5Moder
        DC32 _ZN4PortI5GPIOCE6EnableEv, _ZN4PortI5GPIOCE7DisableEv
        DC32 _ZN4PortI5GPIOCE8IsEnableEv

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTV4PortI5GPIOAE
        DATA
// __absolute void (*const Port<GPIOA>::__vtbl[12])()
_ZTV4PortI5GPIOAE:
        DATA32
        DC32 0x0, _ZTI4PortI5GPIOAE, _ZN4PortI5GPIOAE6ToggleEh
        DC32 _ZN4PortI5GPIOAE5WriteEj, _ZN4PortI5GPIOAE3SetEj
        DC32 _ZN4PortI5GPIOAE5ResetEj, _ZN4PortI5GPIOAE3GetEv
        DC32 _ZN4PortI5GPIOAE5IsSetEh, _ZN4PortI5GPIOAE7ModeSetEh5Moder
        DC32 _ZN4PortI5GPIOAE6EnableEv, _ZN4PortI5GPIOAE7DisableEv
        DC32 _ZN4PortI5GPIOAE8IsEnableEv

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI5IPort
        DATA
// __absolute __class_type_info const <Typeinfo for IPort>
_ZTI5IPort:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8, _ZTS5IPort

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI4PortI5GPIOCE
        DATA
// __absolute __si_class_type_info const <Typeinfo for Port<GPIOC>>
_ZTI4PortI5GPIOCE:
        DATA32
        DC32 _ZTVN10__cxxabiv120__si_class_type_infoE + 0x8, _ZTS4PortI5GPIOCE
        DC32 _ZTI5IPort

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI4PortI5GPIOAE
        DATA
// __absolute __si_class_type_info const <Typeinfo for Port<GPIOA>>
_ZTI4PortI5GPIOAE:
        DATA32
        DC32 _ZTVN10__cxxabiv120__si_class_type_infoE + 0x8, _ZTS4PortI5GPIOAE
        DC32 _ZTI5IPort

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS5IPort
        DATA
// __absolute char const <Typeinfo name for IPort>[7]
_ZTS5IPort:
        DATA8
        DC8 "5IPort"
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS4PortI5GPIOCE
        DATA
// __absolute char const <Typeinfo name for Port<GPIOC>>[14]
_ZTS4PortI5GPIOCE:
        DATA8
        DC8 "4PortI5GPIOCE"
        DATA16
        DC8 0, 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS4PortI5GPIOAE
        DATA
// __absolute char const <Typeinfo name for Port<GPIOA>>[14]
_ZTS4PortI5GPIOAE:
        DATA8
        DC8 "4PortI5GPIOAE"
        DATA16
        DC8 0, 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTISt10ctype_base
        DATA
// __absolute __class_type_info const <Typeinfo for std::ctype_base>
_ZTISt10ctype_base:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8, _ZTSSt10ctype_base

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTSSt10ctype_base
        DATA
// __absolute char const <Typeinfo name for std::ctype_base>[15]
_ZTSSt10ctype_base:
        DATA8
        DC8 "St10ctype_base"
        DC8 0
// C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\MyTasks\ButtonEventTask.cpp
//    1 #include "ButtonEventTask.hpp"

        SECTION `.rodata`:CONST:REORDER:NOROOT(0)
        SECTION_GROUP _ZNSt6chrono12system_clock9is_steadyE
        DATA
// __absolute bool const std::chrono::system_clock::is_steady
_ZNSt6chrono12system_clock9is_steadyE:
        DATA8
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(0)
        SECTION_GROUP _ZNSt6chrono12system_clock12is_monotonicE
        DATA
// __absolute bool const std::chrono::system_clock::is_monotonic
_ZNSt6chrono12system_clock12is_monotonicE:
        DATA8
        DC8 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(0)
        SECTION_GROUP _ZNSt6chrono12steady_clock9is_steadyE
        DATA
// __absolute bool const std::chrono::steady_clock::is_steady
_ZNSt6chrono12steady_clock9is_steadyE:
        DATA8
        DC8 1

        SECTION `.data`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP portC
        DATA
// __absolute Port<GPIOC> portC
portC:
        DATA32
        DC32 _ZTV4PortI5GPIOCE + 0x8

        SECTION `.data`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP portA
        DATA
// __absolute Port<GPIOA> portA
portA:
        DATA32
        DC32 _ZTV4PortI5GPIOAE + 0x8

        SECTION `.text`:CODE:NOROOT(2)
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function __sti__routine
        THUMB
// static __intrinsic __interwork __vfp void __sti__routine()
__sti__routine:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        LDR.N    R1,??__sti__routine_0
        LDRB     R0,[R1, #+0]
        CMP      R0,#+0
        BNE.N    ??__sti__routine_1
        MOVS     R0,#+1
        STRB     R0,[R1, #+0]
        LDR.N    R2,??__sti__routine_0+0x4
        MOVS     R1,#+5
        LDR.N    R0,??__sti__routine_0+0x8
          CFI FunCall _ZN3PinC1EhR5IPort
        BL       _ZN3PinC1EhR5IPort
??__sti__routine_1:
        LDR.N    R1,??__sti__routine_0+0xC
        LDRB     R0,[R1, #+0]
        CMP      R0,#+0
        BNE.N    ??__sti__routine_2
        MOVS     R0,#+1
        STRB     R0,[R1, #+0]
        LDR.N    R2,??__sti__routine_0+0x10
        MOVS     R1,#+9
        LDR.N    R0,??__sti__routine_0+0x14
          CFI FunCall _ZN3PinC1EhR5IPort
        BL       _ZN3PinC1EhR5IPort
??__sti__routine_2:
        LDR.N    R1,??__sti__routine_0+0x18
        LDRB     R0,[R1, #+0]
        CMP      R0,#+0
        BNE.N    ??__sti__routine_3
        MOVS     R0,#+1
        STRB     R0,[R1, #+0]
        LDR.N    R2,??__sti__routine_0+0x10
        MOVS     R1,#+8
        LDR.N    R0,??__sti__routine_0+0x1C
          CFI FunCall _ZN3PinC1EhR5IPort
        BL       _ZN3PinC1EhR5IPort
??__sti__routine_3:
        LDR.N    R1,??__sti__routine_0+0x20
        LDRB     R0,[R1, #+0]
        CMP      R0,#+0
        BNE.N    ??__sti__routine_4
        MOVS     R0,#+1
        STRB     R0,[R1, #+0]
        LDR.N    R2,??__sti__routine_0+0x10
        MOVS     R1,#+5
        LDR.N    R0,??__sti__routine_0+0x24
          CFI FunCall _ZN3PinC1EhR5IPort
        BL       _ZN3PinC1EhR5IPort
??__sti__routine_4:
        LDR.N    R1,??__sti__routine_0+0x28
        LDRB     R0,[R1, #+0]
        CMP      R0,#+0
        BNE.N    ??__sti__routine_5
        MOVS     R0,#+1
        STRB     R0,[R1, #+0]
        LDR.N    R2,??__sti__routine_0+0x10
        MOVS     R1,#+13
        LDR.N    R0,??__sti__routine_0+0x2C
          CFI FunCall _ZN3PinC1EhR5IPort
        BL       _ZN3PinC1EhR5IPort
??__sti__routine_5:
        LDR.N    R1,??__sti__routine_0+0x30
        LDRB     R0,[R1, #+0]
        CMP      R0,#+0
        BNE.N    ??__sti__routine_6
        MOVS     R0,#+1
        STRB     R0,[R1, #+0]
        LDR.N    R1,??__sti__routine_0+0x2C
        LDR.N    R0,??__sti__routine_0+0x34
          CFI FunCall _ZN6ButtonC1ER10IButtonPin
        BL       _ZN6ButtonC1ER10IButtonPin
??__sti__routine_6:
        POP      {R0,PC}          ;; return
        Nop      
        DATA
??__sti__routine_0:
        DATA32
        DC32     _ZGV7pinLed1
        DC32     portA
        DC32     pinLed1
        DC32     _ZGV7pinLed2
        DC32     portC
        DC32     pinLed2
        DC32     _ZGV7pinLed3
        DC32     pinLed3
        DC32     _ZGV7pinLed4
        DC32     pinLed4
        DC32     _ZGV9pinButton
        DC32     pinButton
        DC32     _ZGV6button
        DC32     button
          CFI EndBlock cfiBlock0

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<RCC_AHB1ENR_GPIOCEN_Values<RCC::AHB1ENR, 2U, 1U, ReadWriteMode, RCC::RCCAHB1ENRBase>, RCC::RCCAHB1ENRBase, 1U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_0       ;; 0x40023830
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x4
        ORRS     R0,R0,#0x4
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_0:
        DATA32
        DC32     0x40023830
          CFI EndBlock cfiBlock1

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<RCC_AHB1ENR_GPIOCEN_Values<RCC::AHB1ENR, 2U, 1U, ReadWriteMode, RCC::RCCAHB1ENRBase>, RCC::RCCAHB1ENRBase, 0U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_1       ;; 0x40023830
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x4
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_1:
        DATA32
        DC32     0x40023830
          CFI EndBlock cfiBlock2

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
          CFI Block cfiBlock3 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<RCC_AHB1ENR_GPIOAEN_Values<RCC::AHB1ENR, 0U, 1U, ReadWriteMode, RCC::RCCAHB1ENRBase>, RCC::RCCAHB1ENRBase, 1U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_2       ;; 0x40023830
        LDR      R0,[R1, #+0]
        LSRS     R0,R0,#+1
        LSLS     R0,R0,#+1
        ORRS     R0,R0,#0x1
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_2:
        DATA32
        DC32     0x40023830
          CFI EndBlock cfiBlock3

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
          CFI Block cfiBlock4 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<RCC_AHB1ENR_GPIOAEN_Values<RCC::AHB1ENR, 0U, 1U, ReadWriteMode, RCC::RCCAHB1ENRBase>, RCC::RCCAHB1ENRBase, 0U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_3       ;; 0x40023830
        LDR      R0,[R1, #+0]
        LSRS     R0,R0,#+1
        LSLS     R0,R0,#+1
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_3:
        DATA32
        DC32     0x40023830
          CFI EndBlock cfiBlock4

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock5 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<RCC_AHB1ENR_GPIOCEN_Values<RCC::AHB1ENR, 2U, 1U, ReadWriteMode, RCC::RCCAHB1ENRBase>, RCC::RCCAHB1ENRBase, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_0     ;; 0x40023830
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+2
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_0:
        DATA32
        DC32     0x40023830
          CFI EndBlock cfiBlock5

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock6 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<RCC_AHB1ENR_GPIOAEN_Values<RCC::AHB1ENR, 0U, 1U, ReadWriteMode, RCC::RCCAHB1ENRBase>, RCC::RCCAHB1ENRBase, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_1     ;; 0x40023830
        LDR      R0,[R0, #+0]
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        Nop      
        DATA
??IsSet_1:
        DATA32
        DC32     0x40023830
          CFI EndBlock cfiBlock6

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock7 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073874944U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_0     ;; 0x40020800
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_0:
        DATA32
        DC32     0x40020800
          CFI EndBlock cfiBlock7

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock8 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073874964U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_1     ;; 0x40020814
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_1:
        DATA32
        DC32     0x40020814
          CFI EndBlock cfiBlock8

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874968ELj32E9WriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock9 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874968ELj32E9WriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073874968U, 32U, WriteMode>::Write<WriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073874968ELj32E9WriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_2     ;; 0x40020818
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_2:
        DATA32
        DC32     0x40020818
          CFI EndBlock cfiBlock9

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock10 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073872896U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_3     ;; 0x40020000
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_3:
        DATA32
        DC32     0x40020000
          CFI EndBlock cfiBlock10

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock11 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073872916U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_4     ;; 0x40020014
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_4:
        DATA32
        DC32     0x40020014
          CFI EndBlock cfiBlock11

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073872920ELj32E9WriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock12 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073872920ELj32E9WriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073872920U, 32U, WriteMode>::Write<WriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073872920ELj32E9WriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_5     ;; 0x40020018
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_5:
        DATA32
        DC32     0x40020018
          CFI EndBlock cfiBlock12

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
          CFI Block cfiBlock13 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073874964U, 32U, ReadWriteMode>::Toggle<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE6ToggleIS0_vEEvj:
        LDR.N    R1,??Toggle_0    ;; 0x40020814
        LDR      R2,[R1, #+0]
        EORS     R0,R0,R2
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Toggle_0:
        DATA32
        DC32     0x40020814
          CFI EndBlock cfiBlock13

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
          CFI Block cfiBlock14 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073872916U, 32U, ReadWriteMode>::Toggle<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE6ToggleIS0_vEEvj:
        LDR.N    R1,??Toggle_1    ;; 0x40020014
        LDR      R2,[R1, #+0]
        EORS     R0,R0,R2
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Toggle_1:
        DATA32
        DC32     0x40020014
          CFI EndBlock cfiBlock14

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI Block cfiBlock15 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073874944U, 32U, ReadWriteMode>::Get<ReadWriteMode, void>()
_ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_0       ;; 0x40020800
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_0:
        DATA32
        DC32     0x40020800
          CFI EndBlock cfiBlock15

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
          CFI Block cfiBlock16 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073874960U, 32U, ReadMode>::Get<ReadMode, void>()
_ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_1       ;; 0x40020810
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_1:
        DATA32
        DC32     0x40020810
          CFI EndBlock cfiBlock16

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI Block cfiBlock17 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073872896U, 32U, ReadWriteMode>::Get<ReadWriteMode, void>()
_ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_2       ;; 0x40020000
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_2:
        DATA32
        DC32     0x40020000
          CFI EndBlock cfiBlock17

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073872912ELj32E8ReadModeE3GetIS0_vEEjv
          CFI Block cfiBlock18 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073872912ELj32E8ReadModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073872912U, 32U, ReadMode>::Get<ReadMode, void>()
_ZN12RegisterBaseILj1073872912ELj32E8ReadModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_3       ;; 0x40020010
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_3:
        DATA32
        DC32     0x40020010
          CFI EndBlock cfiBlock18

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE6ToggleEh
          CFI Block cfiBlock19 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE6ToggleEh
        THUMB
// __interwork __vfp void Port<GPIOC>::Toggle(uint8_t)
_ZN4PortI5GPIOCE6ToggleEh:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R0,R1
        MOVS     R1,#+1
        LSLS     R0,R1,R0
          CFI FunCall _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock19

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE6ToggleEh
          CFI Block cfiBlock20 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE6ToggleEh
        THUMB
// __interwork __vfp void Port<GPIOA>::Toggle(uint8_t)
_ZN4PortI5GPIOAE6ToggleEh:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R0,R1
        MOVS     R1,#+1
        LSLS     R0,R1,R0
          CFI FunCall _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE6ToggleIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock20

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE5IsSetEh
          CFI Block cfiBlock21 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE5IsSetEh
        THUMB
// __interwork __vfp bool Port<GPIOC>::IsSet(uint8_t)
_ZN4PortI5GPIOCE5IsSetEh:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R1
          CFI FunCall _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
        LSRS     R0,R0,R4
        ANDS     R0,R0,#0x1
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock21

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE5IsSetEh
          CFI Block cfiBlock22 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE5IsSetEh
        THUMB
// __interwork __vfp bool Port<GPIOA>::IsSet(uint8_t)
_ZN4PortI5GPIOAE5IsSetEh:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R1
          CFI FunCall _ZN12RegisterBaseILj1073872912ELj32E8ReadModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073872912ELj32E8ReadModeE3GetIS0_vEEjv
        LSRS     R0,R0,R4
        ANDS     R0,R0,#0x1
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock22

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE3GetEv
          CFI Block cfiBlock23 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE3GetEv
        THUMB
// __interwork __vfp uint32_t Port<GPIOC>::Get()
_ZN4PortI5GPIOCE3GetEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874960ELj32E8ReadModeE3GetIS0_vEEjv
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock23

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE3GetEv
          CFI Block cfiBlock24 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE3GetEv
        THUMB
// __interwork __vfp uint32_t Port<GPIOA>::Get()
_ZN4PortI5GPIOAE3GetEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073872912ELj32E8ReadModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073872912ELj32E8ReadModeE3GetIS0_vEEjv
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock24

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE5WriteEj
          CFI Block cfiBlock25 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE5WriteEj
        THUMB
// __interwork __vfp void Port<GPIOC>::Write(uint32_t)
_ZN4PortI5GPIOCE5WriteEj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R0,R1
          CFI FunCall _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874964ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock25

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE5WriteEj
          CFI Block cfiBlock26 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE5WriteEj
        THUMB
// __interwork __vfp void Port<GPIOA>::Write(uint32_t)
_ZN4PortI5GPIOAE5WriteEj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R0,R1
          CFI FunCall _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073872916ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock26

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE3SetEj
          CFI Block cfiBlock27 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE3SetEj
        THUMB
// __interwork __vfp void Port<GPIOC>::Set(uint32_t)
_ZN4PortI5GPIOCE3SetEj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R0,R1
          CFI FunCall _ZN12RegisterBaseILj1073874968ELj32E9WriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874968ELj32E9WriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock27

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE3SetEj
          CFI Block cfiBlock28 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE3SetEj
        THUMB
// __interwork __vfp void Port<GPIOA>::Set(uint32_t)
_ZN4PortI5GPIOAE3SetEj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R0,R1
          CFI FunCall _ZN12RegisterBaseILj1073872920ELj32E9WriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073872920ELj32E9WriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock28

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE5ResetEj
          CFI Block cfiBlock29 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE5ResetEj
        THUMB
// __interwork __vfp void Port<GPIOC>::Reset(uint32_t)
_ZN4PortI5GPIOCE5ResetEj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R0,R1
        LSLS     R0,R0,#+16
          CFI FunCall _ZN12RegisterBaseILj1073874968ELj32E9WriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874968ELj32E9WriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock29

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE5ResetEj
          CFI Block cfiBlock30 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE5ResetEj
        THUMB
// __interwork __vfp void Port<GPIOA>::Reset(uint32_t)
_ZN4PortI5GPIOAE5ResetEj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R0,R1
        LSLS     R0,R0,#+16
          CFI FunCall _ZN12RegisterBaseILj1073872920ELj32E9WriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073872920ELj32E9WriteModeE5WriteIS0_vEEvj
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock30

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE7ModeSetEh5Moder
          CFI Block cfiBlock31 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE7ModeSetEh5Moder
        THUMB
// __interwork __vfp void Port<GPIOC>::ModeSet(uint8_t, Moder)
_ZN4PortI5GPIOCE7ModeSetEh5Moder:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
        MOVS     R4,R1
        MOVS     R5,R2
          CFI FunCall _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE3GetIS0_vEEjv
        MOVS     R2,#+3
        UXTB     R4,R4            ;; ZeroExt  R4,R4,#+24,#+24
        LSLS     R1,R4,#+1
        LSLS     R2,R2,R1
        BICS     R0,R0,R2
        UXTB     R5,R5            ;; ZeroExt  R5,R5,#+24,#+24
        UXTB     R4,R4            ;; ZeroExt  R4,R4,#+24,#+24
        LSLS     R1,R4,#+1
        LSLS     R5,R5,R1
        ORRS     R5,R5,R0
        MOVS     R0,R5
          CFI FunCall _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073874944ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,R4,R5,PC}    ;; return
          CFI EndBlock cfiBlock31

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE7ModeSetEh5Moder
          CFI Block cfiBlock32 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE7ModeSetEh5Moder
        THUMB
// __interwork __vfp void Port<GPIOA>::ModeSet(uint8_t, Moder)
_ZN4PortI5GPIOAE7ModeSetEh5Moder:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
        MOVS     R4,R1
        MOVS     R5,R2
          CFI FunCall _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE3GetIS0_vEEjv
        MOVS     R2,#+3
        UXTB     R4,R4            ;; ZeroExt  R4,R4,#+24,#+24
        LSLS     R1,R4,#+1
        LSLS     R2,R2,R1
        BICS     R0,R0,R2
        UXTB     R5,R5            ;; ZeroExt  R5,R5,#+24,#+24
        UXTB     R4,R4            ;; ZeroExt  R4,R4,#+24,#+24
        LSLS     R1,R4,#+1
        LSLS     R5,R5,R1
        ORRS     R5,R5,R0
        MOVS     R0,R5
          CFI FunCall _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073872896ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R0,R4,R5,PC}    ;; return
          CFI EndBlock cfiBlock32

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE6EnableEv
          CFI Block cfiBlock33 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE6EnableEv
        THUMB
// __interwork __vfp void Port<GPIOC>::Enable()
_ZN4PortI5GPIOCE6EnableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock33

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE6EnableEv
          CFI Block cfiBlock34 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE6EnableEv
        THUMB
// __interwork __vfp void Port<GPIOA>::Enable()
_ZN4PortI5GPIOAE6EnableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock34

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE7DisableEv
          CFI Block cfiBlock35 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE7DisableEv
        THUMB
// __interwork __vfp void Port<GPIOC>::Disable()
_ZN4PortI5GPIOCE7DisableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock35

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE7DisableEv
          CFI Block cfiBlock36 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE7DisableEv
        THUMB
// __interwork __vfp void Port<GPIOA>::Disable()
_ZN4PortI5GPIOAE7DisableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj0EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock36

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOCE8IsEnableEv
          CFI Block cfiBlock37 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOCE8IsEnableEv
        THUMB
// __interwork __vfp bool Port<GPIOC>::IsEnable()
_ZN4PortI5GPIOCE8IsEnableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOCEN_ValuesIN3RCC7AHB1ENRELj2ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock37

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN4PortI5GPIOAE8IsEnableEv
          CFI Block cfiBlock38 Using cfiCommon0
          CFI Function _ZN4PortI5GPIOAE8IsEnableEv
        THUMB
// __interwork __vfp bool Port<GPIOA>::IsEnable()
_ZN4PortI5GPIOAE8IsEnableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI26RCC_AHB1ENR_GPIOAEN_ValuesIN3RCC7AHB1ENRELj0ELj1E13ReadWriteModeNS1_14RCCAHB1ENRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock38

        SECTION `.bss`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP _ZGV7pinLed1
        DATA
// __absolute unsigned char <_ZGV7pinLed1>
_ZGV7pinLed1:
        DS8 1

        SECTION `.bss`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP _ZGV7pinLed2
        DATA
// __absolute unsigned char <_ZGV7pinLed2>
_ZGV7pinLed2:
        DS8 1

        SECTION `.bss`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP _ZGV7pinLed3
        DATA
// __absolute unsigned char <_ZGV7pinLed3>
_ZGV7pinLed3:
        DS8 1

        SECTION `.bss`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP _ZGV7pinLed4
        DATA
// __absolute unsigned char <_ZGV7pinLed4>
_ZGV7pinLed4:
        DS8 1

        SECTION `.bss`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP _ZGV9pinButton
        DATA
// __absolute unsigned char <_ZGV9pinButton>
_ZGV9pinButton:
        DS8 1

        SECTION `.bss`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP _ZGV6button
        DATA
// __absolute unsigned char <_ZGV6button>
_ZGV6button:
        DS8 1

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP pinLed1
        DATA
// __absolute Pin pinLed1
pinLed1:
        DS8 16

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP pinLed2
        DATA
// __absolute Pin pinLed2
pinLed2:
        DS8 16

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP pinLed3
        DATA
// __absolute Pin pinLed3
pinLed3:
        DS8 16

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP pinLed4
        DATA
// __absolute Pin pinLed4
pinLed4:
        DS8 16

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP pinButton
        DATA
// __absolute Pin pinButton
pinButton:
        DS8 16

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP button
        DATA
// __absolute Button button
button:
        DS8 4

        SECTION `.bss`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP flagIndicatorSwitch
        DATA
// __absolute bool flagIndicatorSwitch
flagIndicatorSwitch:
        DS8 1

        SECTION `.iar_vfe_vtableinfo_ZTV4PortI5GPIOCE`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZTV4PortI5GPIOCE
        DATA
        DC32    _ZTV4PortI5GPIOCE
        DC32    12
        DC32    2
        DC32    _ZTI4PortI5GPIOCE
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTI5IPort
        DC32    0
        DC32    1
        DC32    _ZTI4PortI5GPIOCE
        DC32    1
        DC32    2
        DC32    0

        SECTION `.iar_vfe_vtableinfo_ZTV4PortI5GPIOAE`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZTV4PortI5GPIOAE
        DATA
        DC32    _ZTV4PortI5GPIOAE
        DC32    12
        DC32    2
        DC32    _ZTI4PortI5GPIOAE
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTI5IPort
        DC32    0
        DC32    1
        DC32    _ZTI4PortI5GPIOAE
        DC32    1
        DC32    2
        DC32    0

        SECTION `.init_array`:CODE:ROOT(2)
        SECTION_TYPE SHT_INIT_ARRAY, 0
        DATA
        DC32    RELOC_ARM_TARGET1 __sti__routine

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        END
//    2 
// 
//  91 bytes in section .bss
//   8 bytes in section .data
//   4 bytes in section .init_array
// 195 bytes in section .rodata
// 716 bytes in section .text
// 
// 196 bytes of CODE  memory (+ 524 bytes shared)
//   0 bytes of CONST memory (+ 195 bytes shared)
//   0 bytes of DATA  memory (+  99 bytes shared)
//
//Errors: none
//Warnings: none
