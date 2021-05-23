///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V8.40.2.214/W32 for ARM        15/May/2021  12:19:39
// Copyright 1999-2019 IAR Systems AB.
//
//    Cpu mode     =  
//    Endian       =  little
//    Source file  =
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\startupF411RE.cpp
//    Command line =
//        -f C:\Users\-08~1\AppData\Local\Temp\EW772A.tmp
//        (C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\startupF411RE.cpp
//        -lC
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Debug\List
//        -lA
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Debug\List
//        -o
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Debug\Obj
//        --no_cse --no_unroll --no_inline --no_code_motion --no_tbaa
//        --no_clustering --no_scheduling --debug --endian=little
//        --cpu=Cortex-M4 -e --fpu=VFPv4_sp --dlib_config "C:\Program Files
//        (x86)\IAR Systems\Embedded Workbench
//        8.3\arm\inc\c\DLib_Config_Normal.h" -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\wrapper\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\wrapper\FreeRtos\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\FreeRtos\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\FreeRtos\include\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\Common\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\IAR\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\IAR\ARM_CM4F\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Rtos\FreeRtos\portable\MemMang\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\MyTasks\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Common\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\CMSIS\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Application\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Application\Diagnostic\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\GpioPort\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\IrqController\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Pin\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\STM32F411\FieldValues\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\STM32F411\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Port\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Atomic\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\Common\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\Common\Singleton\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\Common\RomObject\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\Port\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\Pin\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Application\Button\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Application\Led\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Application\Measurement\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\USART\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\CortexM4\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\..\CortexLib\AbstractHardware\Registers\CortexM4\FieldValues\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\SPI\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\BME280Driver\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\AHardware\EPDDriver\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Application\GUI\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Application\GUI\Fonts\
//        -I
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Application\Display\
//        -On --c++ --no_exceptions --no_rtti)
//    Locale       =  C
//    List file    =
//        C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\Debug\List\startupF411RE.s
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

        SECTION CSTACK:DATA:NOALLOC:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        EXTERN _ZN13IrqController22HandleIrqExtiLine15_10Ev
        EXTERN _ZTVN10__cxxabiv117__class_type_infoE
        EXTERN __cmain
        EXTWEAK __iar_init_core
        EXTWEAK __iar_init_vfp
        EXTERN vPortSVCHandler
        EXTERN xPortPendSVHandler
        EXTERN xPortSysTickHandler

        PUBLIC _ZGV20bluetoothTransceiver
        PUBLIC _ZN11DummyModule7handlerEv
        PUBLIC _ZN11usartDriverI6usart2E17OnNextByteReceiveEv
        PUBLIC _ZN11usartDriverI6usart2E18OnIdleLineDetectedEv
        PUBLIC _ZN11usartDriverI6usart2E19OnNextByteTransmiteEv
        PUBLIC _ZN11usartDriverI6usart2EC1Ev
        PUBLIC _ZN12RegisterBaseILj1073756172ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE3GetIS0_vEEjv
        PUBLIC _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        PUBLIC _ZN14FieldValueBaseI18SPI1_SR_BSY_ValuesIN4SPI12SRELj7ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI18SPI1_SR_TXE_ValuesIN4SPI12SRELj1ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI18SPI2_SR_BSY_ValuesIN4SPI22SRELj7ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI18SPI2_SR_TXE_ValuesIN4SPI22SRELj1ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI19SPI1_SR_RXNE_ValuesIN4SPI12SRELj0ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI19SPI2_SR_RXNE_ValuesIN4SPI22SRELj0ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI19USART2_SR_TC_ValuesIN6USART22SRELj6ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI20USART2_SR_TXE_ValuesIN6USART22SRELj7ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI21USART2_SR_IDLE_ValuesIN6USART22SRELj4ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI21USART2_SR_RXNE_ValuesIN6USART22SRELj5ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI22SPI2_CR2_RXNEIE_ValuesIN4SPI23CR2ELj6ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN14FieldValueBaseI23USART2_CR1_TXEIE_ValuesIN6USART23CR1ELj7ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE3SetIS3_vEEvv
        PUBLIC _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
        PUBLIC _ZN21SpiDriverOnlyTransmitI4spi2E17OnNextByteReceiveEv
        PUBLIC _ZN21SpiDriverOnlyTransmitI4spi2E19OnNextByteTransmiteEv
        PUBLIC _ZN3SPII4SPI1L_Z15spi1TransceiverEE19SpiInterruptHandlerEv
        PUBLIC _ZN3SPII4SPI1L_Z15spi1TransceiverEE21TransmittionCompletedEv
        PUBLIC _ZN3SPII4SPI1L_Z15spi1TransceiverEE33TransmiteBufEmptyInterruptDisableEv
        PUBLIC _ZN3SPII4SPI1L_Z15spi1TransceiverEE34ReceiveBufNotEmptyInterruptDisableEv
        PUBLIC _ZN3SPII4SPI1L_Z15spi1TransceiverEE8ReadByteEv
        PUBLIC _ZN3SPII4SPI1L_Z15spi1TransceiverEE8SendByteEc
        PUBLIC _ZN3SPII4SPI2L_Z15spi2TransceiverEE19SpiInterruptHandlerEv
        PUBLIC _ZN3SPII4SPI2L_Z15spi2TransceiverEE21TransmittionCompletedEv
        PUBLIC _ZN3SPII4SPI2L_Z15spi2TransceiverEE33TransmiteBufEmptyInterruptDisableEv
        PUBLIC _ZN3SPII4SPI2L_Z15spi2TransceiverEE8SendByteEc
        PUBLIC _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE16TransmiteDisableEv
        PUBLIC _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE20TransmitionCompletedEv
        PUBLIC _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE21UsartInterruptHandlerEv
        PUBLIC _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE31IdleLineDetectedInterruptEnableEv
        PUBLIC _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE32IdleLineDetectedInterruptDisableEv
        PUBLIC _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE33TransmiteBufEmptyInterruptDisableEv
        PUBLIC _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8ReadByteEv
        PUBLIC _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8SendByteEh
        PUBLIC _ZN9OsWrapper11RtosWrapper19wHandleSvcInterruptEv
        PUBLIC _ZN9OsWrapper11RtosWrapper23wHandleSysTickInterruptEv
        PUBLIC _ZN9OsWrapper4Rtos18HandleSvcInterruptEv
        PUBLIC _ZN9OsWrapper4Rtos22HandleSysTickInterruptEv
        PUBLIC _ZN9SpiDriverI4spi1E17OnNextByteReceiveEv
        PUBLIC _ZN9SpiDriverI4spi1E19OnNextByteTransmiteEv
        PUBLIC _ZNSt5arrayIcLj1024EEixEj
        PUBLIC _ZNSt5arrayIcLj20000EEixEj
        PUBLIC _ZNSt5arrayIcLj200EEixEj
        PUBLIC _ZNSt6chrono12steady_clock9is_steadyE
        PUBLIC _ZNSt6chrono12system_clock12is_monotonicE
        PUBLIC _ZNSt6chrono12system_clock9is_steadyE
        PUBLIC _ZTISt10ctype_base
        PUBLIC _ZTSSt10ctype_base
        PUBLIC _ZZN9SpiDriverI4spi1E17OnNextByteReceiveEvE7isfirst
        PUBLIC __iar_program_start
        PUBLIC __vector_table
        PUBLIC bluetoothTransceiver
        PUBLIC spi1Transceiver
        PUBLIC spi2Transceiver
        
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
// C:\Users\@@@@@@@-08\Documents\Motovn\KursovoiK_\RtosWrapper\startupF411RE.cpp
//    1 /******************************************************************************
//    2  *  FILENAME: startupF411RE.cpp
//    3  *  
//    4  * DESCRIPTION: Файл с векторами прерывания для Cortex-M. для С++.
//    5  * Поскольку почему-то в Cortex-M все обработчики должны по имени точно 
//    6  *  совпадать с имена в таблице векторов, а название метода из С++ класса 
//    7  * совпасть с такой таблицей со стандратными стартап файлами никак не может
//    8  * то вот приходиться такой же писать на С++. 
//    9  * Внимание!!!!!! Имена классов точно должны совпадать с именами у вас в проекте
//   10  * Можно изменить и сократить количество классов, если есть желание, например
//   11  *
//   12  * Copyright (c) 2018 by South Ural State University
//   13  * Author: Сергей Колодий
//   14  ******************************************************************************/
//   15 
//   16 #pragma language = extended
//   17 #pragma segment = "CSTACK"
//   18 #include "AHardware/IrqController/irqcontroller.hpp"
//   19 #include "Rtos/wrapper/rtos.hpp"

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
//   20 #include "usartconfig.h"

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function __sti__routine
        THUMB
// static __intrinsic __interwork __vfp void __sti__routine()
__sti__routine:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        LDR.N    R1,??DataTable0
        LDRB     R0,[R1, #+0]
        CMP      R0,#+0
        BNE.N    ??__sti__routine_0
        MOVS     R0,#+1
        STRB     R0,[R1, #+0]
        LDR.N    R0,??DataTable0_1
          CFI FunCall _ZN11usartDriverI6usart2EC1Ev
        BL       _ZN11usartDriverI6usart2EC1Ev
??__sti__routine_0:
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock0

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable0:
        DATA32
        DC32     _ZGV20bluetoothTransceiver

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable0_1:
        DATA32
        DC32     bluetoothTransceiver

        SECTION `.bss`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP _ZGV20bluetoothTransceiver
        DATA
// __absolute unsigned char <_ZGV20bluetoothTransceiver>
_ZGV20bluetoothTransceiver:
        DS8 1

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP bluetoothTransceiver
        DATA
// __absolute usartDriver<usart2> bluetoothTransceiver
bluetoothTransceiver:
        DS8 2'068
//   21 #include "spiconfig.h"

        SECTION `.data`:DATA:REORDER:NOROOT(0)
        SECTION_GROUP _ZZN9SpiDriverI4spi1E17OnNextByteReceiveEvE7isfirst
        DATA
// __absolute bool isfirst
_ZZN9SpiDriverI4spi1E17OnNextByteReceiveEvE7isfirst:
        DATA8
        DC8 1

        SECTION `.data`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP spi1Transceiver
        DATA
// __absolute SpiDriver<spi1> spi1Transceiver
spi1Transceiver:
        DATA8
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0
        DATA32
        DC32 1, 1
        DATA8
        DC8 0, 0, 0, 0
        DATA32
        DC32 0, 0

        SECTION `.data`:DATA:REORDER:NOROOT(2)
        SECTION_GROUP spi2Transceiver
        DATA
// __absolute SpiDriverOnlyTransmit<spi2> spi2Transceiver
spi2Transceiver:
        DATA8
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DC8 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        DATA32
        DC32 1
        DATA8
        DC8 0, 0, 0, 0
        DATA32
        DC32 0
//   22 
//   23 extern "C" void __iar_program_start( void );
//   24 extern "C" void xPortPendSVHandler(void);
//   25 
//   26 
//   27 class DummyModule
//   28 {
//   29   public:
//   30     static void handler();
//   31 };
//   32 
//   33 using tIntFunct = void(*)();
//   34 //cstat !MISRAC++2008-9-5-1
//   35 using tIntVectItem = union {tIntFunct __fun; void * __ptr;};
//   36 
//   37 // The vector table is normally located at address 0.
//   38 // When debugging in RAM, it can be located in RAM, aligned to at least 2^6.
//   39 // If you need to define interrupt service routines,
//   40 // make a copy of this file and include it in your project.
//   41 // The name "__vector_table" has special meaning for C-SPY:
//   42 // it is where the SP start value is found, and the NVIC vector
//   43 // table register (VTOR) is initialized to this address if != 0.
//   44 
//   45 #pragma location = ".intvec"
//   46 //cstat !MISRAC++2008-0-1-4_b !MISRAC++2008-9-5-1

        SECTION `.intvec`:CONST:REORDER:NOROOT(2)
        DATA
//   47 extern "C" const tIntVectItem __vector_table[] =
__vector_table:
        DATA32
        DC32 SFE(CSTACK), __iar_program_start, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv, 0x0, 0x0
        DC32 0x0, 0x0, _ZN9OsWrapper4Rtos18HandleSvcInterruptEv
        DC32 _ZN11DummyModule7handlerEv, 0x0, xPortPendSVHandler
        DC32 _ZN9OsWrapper4Rtos22HandleSysTickInterruptEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, 0x0, 0x0, 0x0, 0x0
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN3SPII4SPI1L_Z15spi1TransceiverEE19SpiInterruptHandlerEv
        DC32 _ZN3SPII4SPI2L_Z15spi2TransceiverEE19SpiInterruptHandlerEv
        DC32 _ZN11DummyModule7handlerEv
        DC32 _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE21UsartInterruptHandlerEv
        DC32 0x0, _ZN13IrqController22HandleIrqExtiLine15_10Ev
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv, 0x0, 0x0
        DC32 0x0, 0x0, _ZN11DummyModule7handlerEv, 0x0
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, 0x0, 0x0, 0x0, 0x0
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
        DC32 _ZN11DummyModule7handlerEv, 0x0, 0x0, _ZN11DummyModule7handlerEv
        DC32 _ZN11DummyModule7handlerEv
//   48 {
//   49   { .__ptr = __sfe( "CSTACK" ) },
//   50   __iar_program_start,
//   51 
//   52   DummyModule::handler,
//   53   DummyModule::handler,
//   54   DummyModule::handler,
//   55   DummyModule::handler,
//   56   DummyModule::handler,
//   57   0,
//   58   0,
//   59   0,
//   60   0,
//   61   OsWrapper::Rtos::HandleSvcInterrupt,
//   62   DummyModule::handler,
//   63   0,
//   64   xPortPendSVHandler,
//   65   OsWrapper::Rtos::HandleSysTickInterrupt,
//   66   //External Interrupts
//   67   DummyModule::handler,         //Window Watchdog
//   68   DummyModule::handler,         //PVD through EXTI Line detect/EXTI16
//   69   DummyModule::handler,         //Tamper and Time Stamp/EXTI21 
//   70   DummyModule::handler,         //RTC Wakeup/EXTI22 
//   71   DummyModule::handler,         //FLASH
//   72   DummyModule::handler,         //RCC
//   73   DummyModule::handler,         //EXTI Line 0
//   74   DummyModule::handler,         //EXTI Line 1
//   75   DummyModule::handler,         //EXTI Line 2
//   76   DummyModule::handler,         //EXTI Line 3
//   77   DummyModule::handler,         //EXTI Line 4
//   78   DummyModule::handler,         //DMA1 Stream 0
//   79   DummyModule::handler,         //DMA1 Stream 1
//   80   DummyModule::handler,         //DMA1 Stream 2
//   81   DummyModule::handler,         //DMA1 Stream 3
//   82   DummyModule::handler,         //DMA1 Stream 4
//   83   DummyModule::handler,         //DMA1 Stream 5
//   84   DummyModule::handler,         //DMA1 Stream 6
//   85   DummyModule::handler,         //ADC1
//   86   0,                            //USB High Priority
//   87   0,                            //USB Low  Priority
//   88   0,                            //DAC
//   89   0,                            //COMP through EXTI Line
//   90   DummyModule::handler,         //EXTI Line 9..5
//   91   DummyModule::handler,         //TIM9/TIM1 Break interrupt 
//   92   DummyModule::handler,         //TIM10/TIM1 Update interrupt
//   93   DummyModule::handler,         //TIM11/TIM1 Trigger/Commutation interrupts
//   94   DummyModule::handler,		//TIM1 Capture Compare interrupt
//   95   DummyModule::handler,         //TIM2  	
//   96   DummyModule::handler,         //TIM3
//   97   DummyModule::handler,         //TIM4
//   98   DummyModule::handler,         //I2C1 Event
//   99   DummyModule::handler,         //I2C1 Error
//  100   DummyModule::handler,         //I2C2 Event
//  101   DummyModule::handler,         //I2C2 Error
//  102   spi1::SpiInterruptHandler,         //SPI1
//  103   spi2::SpiInterruptHandler,         //SPI2
//  104   DummyModule::handler,         //USART1
//  105   usart2::UsartInterruptHandler,//USART2
//  106   0,
//  107   IrqController::HandleIrqExtiLine15_10,         //EXTI Line 15..10
//  108   DummyModule::handler,         //EXTI Line 17 interrupt / RTC Alarms (A and B) through EXTI line interrupt
//  109   DummyModule::handler,         //EXTI Line 18 interrupt / USB On-The-Go  FS Wakeup through EXTI line interrupt
//  110   0,				//TIM6
//  111   0,				//TIM7  f0
//  112   0,
//  113   0,
//  114   DummyModule::handler,         //DMA1 Stream 7 global interrupt fc
//  115   0,
//  116   DummyModule::handler,	        //SDIO global interrupt
//  117   DummyModule::handler,	        //TIM5 global interrupt
//  118   DummyModule::handler,	        //SPI3 global interrupt
//  119   0,			        // 110
//  120   0,
//  121   0,
//  122   0,
//  123   DummyModule::handler,		//DMA2 Stream0 global interrupt 120
//  124   DummyModule::handler,		//DMA2 Stream1 global interrupt
//  125   DummyModule::handler,		//DMA2 Stream2 global interrupt
//  126   DummyModule::handler,		//DMA2 Stream3 global interrupt
//  127   DummyModule::handler,		//DMA2 Stream4 global interrupt 130
//  128   0,
//  129   0,
//  130   0,
//  131   0,
//  132   0,
//  133   0,
//  134   DummyModule::handler,		//USB On The Go FS global interrupt, 14C
//  135   DummyModule::handler,		//DMA2 Stream5 global interrupt
//  136   DummyModule::handler,		//DMA2 Stream6 global interrupt
//  137   DummyModule::handler,		//DMA2 Stream7 global interrupt
//  138   DummyModule::handler,				//USART6 15C
//  139   DummyModule::handler,         //I2C3 Event
//  140   DummyModule::handler,         //I2C3 Error 164
//  141   0,
//  142   0,
//  143   0,
//  144   0,
//  145   0,
//  146   0,
//  147   0,
//  148   DummyModule::handler,		//FPU 184
//  149   0,
//  150   0,
//  151   DummyModule::handler,		//SPI 4 global interrupt
//  152   DummyModule::handler		//SPI 5 global interrupt
//  153 };
//  154 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function _ZN11DummyModule7handlerEv
          CFI NoCalls
        THUMB
//  155 void DummyModule::handler()   { for(;;) {} } ;
_ZN11DummyModule7handlerEv:
??handler_0:
        B.N      ??handler_0
          CFI EndBlock cfiBlock1
//  156 
//  157 extern "C" void __cmain( void );
//  158 extern "C" __weak void __iar_init_core( void );
//  159 extern "C" __weak void __iar_init_vfp( void );
//  160 
//  161 #pragma required=__vector_table

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function __iar_program_start
        THUMB
//  162 void __iar_program_start( void )
//  163 {
__iar_program_start:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
//  164   __iar_init_core();
          CFI FunCall __iar_init_core
        BL       __iar_init_core
//  165   __iar_init_vfp();
          CFI FunCall __iar_init_vfp
        BL       __iar_init_vfp
//  166   __cmain();
          CFI FunCall __cmain
        BL       __cmain
//  167 }
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock2
        REQUIRE __vector_table

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNSt5arrayIcLj1024EEixEj
          CFI Block cfiBlock3 Using cfiCommon0
          CFI Function _ZNSt5arrayIcLj1024EEixEj
          CFI NoCalls
        THUMB
// __interwork __vfp char & std::array<char, 1024U>::operator[](size_t)
_ZNSt5arrayIcLj1024EEixEj:
        ADD      R0,R0,R1
        BX       LR               ;; return
          CFI EndBlock cfiBlock3

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNSt5arrayIcLj200EEixEj
          CFI Block cfiBlock4 Using cfiCommon0
          CFI Function _ZNSt5arrayIcLj200EEixEj
          CFI NoCalls
        THUMB
// __interwork __vfp char & std::array<char, 200U>::operator[](size_t)
_ZNSt5arrayIcLj200EEixEj:
        ADD      R0,R0,R1
        BX       LR               ;; return
          CFI EndBlock cfiBlock4

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNSt5arrayIcLj20000EEixEj
          CFI Block cfiBlock5 Using cfiCommon0
          CFI Function _ZNSt5arrayIcLj20000EEixEj
          CFI NoCalls
        THUMB
// __interwork __vfp char & std::array<char, 20000U>::operator[](size_t)
_ZNSt5arrayIcLj20000EEixEj:
        ADD      R0,R0,R1
        BX       LR               ;; return
          CFI EndBlock cfiBlock5

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper11RtosWrapper19wHandleSvcInterruptEv
          CFI Block cfiBlock6 Using cfiCommon0
          CFI Function _ZN9OsWrapper11RtosWrapper19wHandleSvcInterruptEv
        THUMB
// __interwork __vfp void OsWrapper::RtosWrapper::wHandleSvcInterrupt()
_ZN9OsWrapper11RtosWrapper19wHandleSvcInterruptEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall vPortSVCHandler
        BL       vPortSVCHandler
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock6

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper11RtosWrapper23wHandleSysTickInterruptEv
          CFI Block cfiBlock7 Using cfiCommon0
          CFI Function _ZN9OsWrapper11RtosWrapper23wHandleSysTickInterruptEv
        THUMB
// __interwork __vfp void OsWrapper::RtosWrapper::wHandleSysTickInterrupt()
_ZN9OsWrapper11RtosWrapper23wHandleSysTickInterruptEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall xPortSysTickHandler
        BL       xPortSysTickHandler
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock7

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper4Rtos18HandleSvcInterruptEv
          CFI Block cfiBlock8 Using cfiCommon0
          CFI Function _ZN9OsWrapper4Rtos18HandleSvcInterruptEv
        THUMB
// __interwork __vfp void OsWrapper::Rtos::HandleSvcInterrupt()
_ZN9OsWrapper4Rtos18HandleSvcInterruptEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN9OsWrapper11RtosWrapper19wHandleSvcInterruptEv
        BL       _ZN9OsWrapper11RtosWrapper19wHandleSvcInterruptEv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock8

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper4Rtos22HandleSysTickInterruptEv
          CFI Block cfiBlock9 Using cfiCommon0
          CFI Function _ZN9OsWrapper4Rtos22HandleSysTickInterruptEv
        THUMB
// __interwork __vfp void OsWrapper::Rtos::HandleSysTickInterrupt()
_ZN9OsWrapper4Rtos22HandleSysTickInterruptEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN9OsWrapper11RtosWrapper23wHandleSysTickInterruptEv
        BL       _ZN9OsWrapper11RtosWrapper23wHandleSysTickInterruptEv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock9

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI Block cfiBlock10 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<SPI1_CR2_RXNEIE_Values<SPI1::CR2, 6U, 1U, ReadWriteMode, SPI1::SPI1CR2Base>, SPI1::SPI1CR2Base, 0U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_0       ;; 0x40013004
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x40
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_0:
        DATA32
        DC32     0x40013004
          CFI EndBlock cfiBlock10

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI Block cfiBlock11 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<SPI1_CR2_TXEIE_Values<SPI1::CR2, 7U, 1U, ReadWriteMode, SPI1::SPI1CR2Base>, SPI1::SPI1CR2Base, 0U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_1       ;; 0x40013004
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x80
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_1:
        DATA32
        DC32     0x40013004
          CFI EndBlock cfiBlock11

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI Block cfiBlock12 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<SPI2_CR2_TXEIE_Values<SPI2::CR2, 7U, 1U, ReadWriteMode, SPI2::SPI2CR2Base>, SPI2::SPI2CR2Base, 0U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj0EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_2       ;; 0x40003804
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x80
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_2:
        DATA32
        DC32     0x40003804
          CFI EndBlock cfiBlock12

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE3SetIS3_vEEvv
          CFI Block cfiBlock13 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<USART2_CR1_IDLEIE_Values<USART2::CR1, 4U, 1U, ReadWriteMode, USART2::USART2CR1Base>, USART2::USART2CR1Base, 1U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_3       ;; 0x4000440c
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x10
        ORRS     R0,R0,#0x10
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_3:
        DATA32
        DC32     0x4000440c
          CFI EndBlock cfiBlock13

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI Block cfiBlock14 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<USART2_CR1_TE_Values<USART2::CR1, 3U, 1U, ReadWriteMode, USART2::USART2CR1Base>, USART2::USART2CR1Base, 0U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_4       ;; 0x4000440c
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x8
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_4:
        DATA32
        DC32     0x4000440c
          CFI EndBlock cfiBlock14

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI23USART2_CR1_TXEIE_ValuesIN6USART23CR1ELj7ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI Block cfiBlock15 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI23USART2_CR1_TXEIE_ValuesIN6USART23CR1ELj7ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<USART2_CR1_TXEIE_Values<USART2::CR1, 7U, 1U, ReadWriteMode, USART2::USART2CR1Base>, USART2::USART2CR1Base, 0U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI23USART2_CR1_TXEIE_ValuesIN6USART23CR1ELj7ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_5       ;; 0x4000440c
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x80
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_5:
        DATA32
        DC32     0x4000440c
          CFI EndBlock cfiBlock15

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI Block cfiBlock16 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
          CFI NoCalls
        THUMB
// __interwork __vfp void FieldValueBase<USART2_CR1_IDLEIE_Values<USART2::CR1, 4U, 1U, ReadWriteMode, USART2::USART2CR1Base>, USART2::USART2CR1Base, 0U>::Set<ReadWriteMode, void>()
_ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv:
        LDR.N    R1,??Set_6       ;; 0x4000440c
        LDR      R0,[R1, #+0]
        BICS     R0,R0,#0x10
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        DATA
??Set_6:
        DATA32
        DC32     0x4000440c
          CFI EndBlock cfiBlock16

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI20USART2_SR_TXE_ValuesIN6USART22SRELj7ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock17 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI20USART2_SR_TXE_ValuesIN6USART22SRELj7ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<USART2_SR_TXE_Values<USART2::SR, 7U, 1U, ReadMode, USART2::USART2SRBase>, USART2::USART2SRBase, 1U>::IsSet<ReadMode, void>()
_ZN14FieldValueBaseI20USART2_SR_TXE_ValuesIN6USART22SRELj7ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_0     ;; 0x40004400
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+7
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_0:
        DATA32
        DC32     0x40004400
          CFI EndBlock cfiBlock17

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock18 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI1_CR2_RXNEIE_Values<SPI1::CR2, 6U, 1U, ReadWriteMode, SPI1::SPI1CR2Base>, SPI1::SPI1CR2Base, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_1     ;; 0x40013004
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+6
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_1:
        DATA32
        DC32     0x40013004
          CFI EndBlock cfiBlock18

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI19SPI1_SR_RXNE_ValuesIN4SPI12SRELj0ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock19 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI19SPI1_SR_RXNE_ValuesIN4SPI12SRELj0ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI1_SR_RXNE_Values<SPI1::SR, 0U, 1U, ReadMode, SPI1::SPI1SRBase>, SPI1::SPI1SRBase, 1U>::IsSet<ReadMode, void>()
_ZN14FieldValueBaseI19SPI1_SR_RXNE_ValuesIN4SPI12SRELj0ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_2     ;; 0x40013008
        LDR      R0,[R0, #+0]
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        Nop      
        DATA
??IsSet_2:
        DATA32
        DC32     0x40013008
          CFI EndBlock cfiBlock19

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock20 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI1_CR2_TXEIE_Values<SPI1::CR2, 7U, 1U, ReadWriteMode, SPI1::SPI1CR2Base>, SPI1::SPI1CR2Base, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_3     ;; 0x40013004
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+7
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_3:
        DATA32
        DC32     0x40013004
          CFI EndBlock cfiBlock20

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI18SPI1_SR_TXE_ValuesIN4SPI12SRELj1ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock21 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI18SPI1_SR_TXE_ValuesIN4SPI12SRELj1ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI1_SR_TXE_Values<SPI1::SR, 1U, 1U, ReadMode, SPI1::SPI1SRBase>, SPI1::SPI1SRBase, 1U>::IsSet<ReadMode, void>()
_ZN14FieldValueBaseI18SPI1_SR_TXE_ValuesIN4SPI12SRELj1ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_4     ;; 0x40013008
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+1
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_4:
        DATA32
        DC32     0x40013008
          CFI EndBlock cfiBlock21

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI18SPI1_SR_BSY_ValuesIN4SPI12SRELj7ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
          CFI Block cfiBlock22 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI18SPI1_SR_BSY_ValuesIN4SPI12SRELj7ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI1_SR_BSY_Values<SPI1::SR, 7U, 1U, ReadMode, SPI1::SPI1SRBase>, SPI1::SPI1SRBase, 0U>::IsSet<ReadMode, void>()
_ZN14FieldValueBaseI18SPI1_SR_BSY_ValuesIN4SPI12SRELj7ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj0EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_5     ;; 0x40013008
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+7
        ANDS     R0,R0,#0x1
        EORS     R0,R0,#0x1
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
        BX       LR               ;; return
        Nop      
        DATA
??IsSet_5:
        DATA32
        DC32     0x40013008
          CFI EndBlock cfiBlock22

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI22SPI2_CR2_RXNEIE_ValuesIN4SPI23CR2ELj6ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock23 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI22SPI2_CR2_RXNEIE_ValuesIN4SPI23CR2ELj6ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI2_CR2_RXNEIE_Values<SPI2::CR2, 6U, 1U, ReadWriteMode, SPI2::SPI2CR2Base>, SPI2::SPI2CR2Base, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI22SPI2_CR2_RXNEIE_ValuesIN4SPI23CR2ELj6ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_6     ;; 0x40003804
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+6
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_6:
        DATA32
        DC32     0x40003804
          CFI EndBlock cfiBlock23

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI19SPI2_SR_RXNE_ValuesIN4SPI22SRELj0ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock24 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI19SPI2_SR_RXNE_ValuesIN4SPI22SRELj0ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI2_SR_RXNE_Values<SPI2::SR, 0U, 1U, ReadMode, SPI2::SPI2SRBase>, SPI2::SPI2SRBase, 1U>::IsSet<ReadMode, void>()
_ZN14FieldValueBaseI19SPI2_SR_RXNE_ValuesIN4SPI22SRELj0ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_7     ;; 0x40003808
        LDR      R0,[R0, #+0]
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        Nop      
        DATA
??IsSet_7:
        DATA32
        DC32     0x40003808
          CFI EndBlock cfiBlock24

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock25 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI2_CR2_TXEIE_Values<SPI2::CR2, 7U, 1U, ReadWriteMode, SPI2::SPI2CR2Base>, SPI2::SPI2CR2Base, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_8     ;; 0x40003804
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+7
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_8:
        DATA32
        DC32     0x40003804
          CFI EndBlock cfiBlock25

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI18SPI2_SR_TXE_ValuesIN4SPI22SRELj1ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock26 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI18SPI2_SR_TXE_ValuesIN4SPI22SRELj1ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI2_SR_TXE_Values<SPI2::SR, 1U, 1U, ReadMode, SPI2::SPI2SRBase>, SPI2::SPI2SRBase, 1U>::IsSet<ReadMode, void>()
_ZN14FieldValueBaseI18SPI2_SR_TXE_ValuesIN4SPI22SRELj1ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_9     ;; 0x40003808
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+1
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_9:
        DATA32
        DC32     0x40003808
          CFI EndBlock cfiBlock26

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI18SPI2_SR_BSY_ValuesIN4SPI22SRELj7ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
          CFI Block cfiBlock27 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI18SPI2_SR_BSY_ValuesIN4SPI22SRELj7ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<SPI2_SR_BSY_Values<SPI2::SR, 7U, 1U, ReadMode, SPI2::SPI2SRBase>, SPI2::SPI2SRBase, 0U>::IsSet<ReadMode, void>()
_ZN14FieldValueBaseI18SPI2_SR_BSY_ValuesIN4SPI22SRELj7ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj0EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_10    ;; 0x40003808
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+7
        ANDS     R0,R0,#0x1
        EORS     R0,R0,#0x1
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
        BX       LR               ;; return
        Nop      
        DATA
??IsSet_10:
        DATA32
        DC32     0x40003808
          CFI EndBlock cfiBlock27

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI21USART2_SR_RXNE_ValuesIN6USART22SRELj5ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock28 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI21USART2_SR_RXNE_ValuesIN6USART22SRELj5ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<USART2_SR_RXNE_Values<USART2::SR, 5U, 1U, ReadWriteMode, USART2::USART2SRBase>, USART2::USART2SRBase, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI21USART2_SR_RXNE_ValuesIN6USART22SRELj5ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_11    ;; 0x40004400
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+5
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_11:
        DATA32
        DC32     0x40004400
          CFI EndBlock cfiBlock28

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock29 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<USART2_CR1_IDLEIE_Values<USART2::CR1, 4U, 1U, ReadWriteMode, USART2::USART2CR1Base>, USART2::USART2CR1Base, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_12    ;; 0x4000440c
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+4
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_12:
        DATA32
        DC32     0x4000440c
          CFI EndBlock cfiBlock29

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock30 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<USART2_CR1_TE_Values<USART2::CR1, 3U, 1U, ReadWriteMode, USART2::USART2CR1Base>, USART2::USART2CR1Base, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_13    ;; 0x4000440c
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+3
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_13:
        DATA32
        DC32     0x4000440c
          CFI EndBlock cfiBlock30

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI19USART2_SR_TC_ValuesIN6USART22SRELj6ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock31 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI19USART2_SR_TC_ValuesIN6USART22SRELj6ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<USART2_SR_TC_Values<USART2::SR, 6U, 1U, ReadWriteMode, USART2::USART2SRBase>, USART2::USART2SRBase, 1U>::IsSet<ReadWriteMode, void>()
_ZN14FieldValueBaseI19USART2_SR_TC_ValuesIN6USART22SRELj6ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_14    ;; 0x40004400
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+6
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_14:
        DATA32
        DC32     0x40004400
          CFI EndBlock cfiBlock31

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN14FieldValueBaseI21USART2_SR_IDLE_ValuesIN6USART22SRELj4ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI Block cfiBlock32 Using cfiCommon0
          CFI Function _ZN14FieldValueBaseI21USART2_SR_IDLE_ValuesIN6USART22SRELj4ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
          CFI NoCalls
        THUMB
// __interwork __vfp bool FieldValueBase<USART2_SR_IDLE_Values<USART2::SR, 4U, 1U, ReadMode, USART2::USART2SRBase>, USART2::USART2SRBase, 1U>::IsSet<ReadMode, void>()
_ZN14FieldValueBaseI21USART2_SR_IDLE_ValuesIN6USART22SRELj4ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv:
        LDR.N    R0,??IsSet_15    ;; 0x40004400
        LDR      R0,[R0, #+0]
        LSRS     R0,R0,#+4
        ANDS     R0,R0,#0x1
        BX       LR               ;; return
        DATA
??IsSet_15:
        DATA32
        DC32     0x40004400
          CFI EndBlock cfiBlock32

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock33 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073759236U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_0     ;; 0x40004404
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_0:
        DATA32
        DC32     0x40004404
          CFI EndBlock cfiBlock33

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073756172ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock34 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073756172ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073756172U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073756172ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_1     ;; 0x4000380c
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_1:
        DATA32
        DC32     0x4000380c
          CFI EndBlock cfiBlock34

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI Block cfiBlock35 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE5WriteIS0_vEEvj
          CFI NoCalls
        THUMB
// __interwork __vfp void RegisterBase<1073819660U, 32U, ReadWriteMode>::Write<ReadWriteMode, void>(uint32_t)
_ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE5WriteIS0_vEEvj:
        LDR.N    R1,??Write_2     ;; 0x4001300c
        STR      R0,[R1, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Write_2:
        DATA32
        DC32     0x4001300c
          CFI EndBlock cfiBlock35

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI Block cfiBlock36 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073759236U, 32U, ReadWriteMode>::Get<ReadWriteMode, void>()
_ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_0       ;; 0x40004404
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_0:
        DATA32
        DC32     0x40004404
          CFI EndBlock cfiBlock36

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI Block cfiBlock37 Using cfiCommon0
          CFI Function _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE3GetIS0_vEEjv
          CFI NoCalls
        THUMB
// __interwork __vfp uint32_t RegisterBase<1073819660U, 32U, ReadWriteMode>::Get<ReadWriteMode, void>()
_ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE3GetIS0_vEEjv:
        LDR.N    R0,??Get_1       ;; 0x4001300c
        LDR      R0,[R0, #+0]
        BX       LR               ;; return
        Nop      
        DATA
??Get_1:
        DATA32
        DC32     0x4001300c
          CFI EndBlock cfiBlock37

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8SendByteEh
          CFI Block cfiBlock38 Using cfiCommon0
          CFI Function _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8SendByteEh
        THUMB
// __interwork __vfp void USART<USART2, bluetoothTransceiver>::SendByte(uint8_t)
_ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8SendByteEh:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        MOVS     R0,R4
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
          CFI FunCall _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock38

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8ReadByteEv
          CFI Block cfiBlock39 Using cfiCommon0
          CFI Function _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8ReadByteEv
        THUMB
// __interwork __vfp uint8_t USART<USART2, bluetoothTransceiver>::ReadByte()
_ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8ReadByteEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073759236ELj32E13ReadWriteModeE3GetIS0_vEEjv
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock39

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE16TransmiteDisableEv
          CFI Block cfiBlock40 Using cfiCommon0
          CFI Function _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE16TransmiteDisableEv
        THUMB
// __interwork __vfp void USART<USART2, bluetoothTransceiver>::TransmiteDisable()
_ZN5USARTI6USART2L_Z20bluetoothTransceiverEE16TransmiteDisableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock40

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE33TransmiteBufEmptyInterruptDisableEv
          CFI Block cfiBlock41 Using cfiCommon0
          CFI Function _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE33TransmiteBufEmptyInterruptDisableEv
        THUMB
// __interwork __vfp void USART<USART2, bluetoothTransceiver>::TransmiteBufEmptyInterruptDisable()
_ZN5USARTI6USART2L_Z20bluetoothTransceiverEE33TransmiteBufEmptyInterruptDisableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI23USART2_CR1_TXEIE_ValuesIN6USART23CR1ELj7ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI23USART2_CR1_TXEIE_ValuesIN6USART23CR1ELj7ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock41

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE31IdleLineDetectedInterruptEnableEv
          CFI Block cfiBlock42 Using cfiCommon0
          CFI Function _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE31IdleLineDetectedInterruptEnableEv
        THUMB
// __interwork __vfp void USART<USART2, bluetoothTransceiver>::IdleLineDetectedInterruptEnable()
_ZN5USARTI6USART2L_Z20bluetoothTransceiverEE31IdleLineDetectedInterruptEnableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock42

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE32IdleLineDetectedInterruptDisableEv
          CFI Block cfiBlock43 Using cfiCommon0
          CFI Function _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE32IdleLineDetectedInterruptDisableEv
        THUMB
// __interwork __vfp void USART<USART2, bluetoothTransceiver>::IdleLineDetectedInterruptDisable()
_ZN5USARTI6USART2L_Z20bluetoothTransceiverEE32IdleLineDetectedInterruptDisableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj0EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock43

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE20TransmitionCompletedEv
          CFI Block cfiBlock44 Using cfiCommon0
          CFI Function _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE20TransmitionCompletedEv
        THUMB
// __interwork __vfp bool USART<USART2, bluetoothTransceiver>::TransmitionCompleted()
_ZN5USARTI6USART2L_Z20bluetoothTransceiverEE20TransmitionCompletedEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI19USART2_SR_TC_ValuesIN6USART22SRELj6ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI19USART2_SR_TC_ValuesIN6USART22SRELj6ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock44

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE21UsartInterruptHandlerEv
          CFI Block cfiBlock45 Using cfiCommon0
          CFI Function _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE21UsartInterruptHandlerEv
        THUMB
// __interwork __vfp void USART<USART2, bluetoothTransceiver>::UsartInterruptHandler()
_ZN5USARTI6USART2L_Z20bluetoothTransceiverEE21UsartInterruptHandlerEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI21USART2_SR_RXNE_ValuesIN6USART22SRELj5ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI21USART2_SR_RXNE_ValuesIN6USART22SRELj5ELj1E13ReadWriteModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??UsartInterruptHandler_1
        LDR.N    R0,??UsartInterruptHandler_0
          CFI FunCall _ZN11usartDriverI6usart2E17OnNextByteReceiveEv
        BL       _ZN11usartDriverI6usart2E17OnNextByteReceiveEv
??UsartInterruptHandler_1:
          CFI FunCall _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI20USART2_CR1_TE_ValuesIN6USART23CR1ELj3ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??UsartInterruptHandler_2
          CFI FunCall _ZN14FieldValueBaseI20USART2_SR_TXE_ValuesIN6USART22SRELj7ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI20USART2_SR_TXE_ValuesIN6USART22SRELj7ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??UsartInterruptHandler_2
        LDR.N    R0,??UsartInterruptHandler_0
          CFI FunCall _ZN11usartDriverI6usart2E19OnNextByteTransmiteEv
        BL       _ZN11usartDriverI6usart2E19OnNextByteTransmiteEv
??UsartInterruptHandler_2:
          CFI FunCall _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI24USART2_CR1_IDLEIE_ValuesIN6USART23CR1ELj4ELj1E13ReadWriteModeNS1_13USART2CR1BaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??UsartInterruptHandler_3
          CFI FunCall _ZN14FieldValueBaseI21USART2_SR_IDLE_ValuesIN6USART22SRELj4ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI21USART2_SR_IDLE_ValuesIN6USART22SRELj4ELj1E8ReadModeNS1_12USART2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??UsartInterruptHandler_3
        LDR.N    R0,??UsartInterruptHandler_0
          CFI FunCall _ZN11usartDriverI6usart2E18OnIdleLineDetectedEv
        BL       _ZN11usartDriverI6usart2E18OnIdleLineDetectedEv
??UsartInterruptHandler_3:
        POP      {R0,PC}          ;; return
        Nop      
        DATA
??UsartInterruptHandler_0:
        DATA32
        DC32     bluetoothTransceiver
          CFI EndBlock cfiBlock45

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN11usartDriverI6usart2EC1Ev
          CFI Block cfiBlock46 Using cfiCommon0
          CFI Function _ZN11usartDriverI6usart2EC1Ev
          CFI NoCalls
        THUMB
// __code __interwork __vfp usartDriver<usart2>::usartDriver()
_ZN11usartDriverI6usart2EC1Ev:
        MOVS     R1,#+0
        STR      R1,[R0, #+2048]
        MOVS     R1,#+0
        STR      R1,[R0, #+2052]
        MOVS     R1,#+0
        STRB     R1,[R0, #+2056]
        MOVS     R1,#+0
        STRB     R1,[R0, #+2057]
        MOVS     R1,#+0
        STR      R1,[R0, #+2060]
        MOVS     R1,#+0
        STR      R1,[R0, #+2064]
        BX       LR               ;; return
          CFI EndBlock cfiBlock46

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN11usartDriverI6usart2E19OnNextByteTransmiteEv
          CFI Block cfiBlock47 Using cfiCommon0
          CFI Function _ZN11usartDriverI6usart2E19OnNextByteTransmiteEv
        THUMB
// __interwork __vfp void usartDriver<usart2>::OnNextByteTransmite()
_ZN11usartDriverI6usart2E19OnNextByteTransmiteEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        LDR      R0,[R4, #+2064]
        LDR      R1,[R4, #+2048]
        SUBS     R1,R1,#+1
        CMP      R0,R1
        BCS.N    ??OnNextByteTransmite_0
        LDR      R1,[R4, #+2064]
        ADDS     R0,R1,#+1
        STR      R0,[R4, #+2064]
        MOVS     R0,R4
          CFI FunCall _ZNSt5arrayIcLj1024EEixEj
        BL       _ZNSt5arrayIcLj1024EEixEj
        LDRB     R0,[R0, #+0]
          CFI FunCall _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8SendByteEh
        BL       _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8SendByteEh
        B.N      ??OnNextByteTransmite_1
??OnNextByteTransmite_0:
        LDR      R1,[R4, #+2064]
        MOVS     R0,R4
          CFI FunCall _ZNSt5arrayIcLj1024EEixEj
        BL       _ZNSt5arrayIcLj1024EEixEj
        LDRB     R0,[R0, #+0]
          CFI FunCall _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8SendByteEh
        BL       _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8SendByteEh
        MOVS     R0,#+0
        STR      R0,[R4, #+2064]
??OnNextByteTransmite_2:
          CFI FunCall _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE20TransmitionCompletedEv
        BL       _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE20TransmitionCompletedEv
        CMP      R0,#+0
        BEQ.N    ??OnNextByteTransmite_2
          CFI FunCall _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE16TransmiteDisableEv
        BL       _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE16TransmiteDisableEv
          CFI FunCall _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE33TransmiteBufEmptyInterruptDisableEv
        BL       _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE33TransmiteBufEmptyInterruptDisableEv
        MOVS     R0,#+1
        STRB     R0,[R4, #+2057]
??OnNextByteTransmite_1:
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock47

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN11usartDriverI6usart2E17OnNextByteReceiveEv
          CFI Block cfiBlock48 Using cfiCommon0
          CFI Function _ZN11usartDriverI6usart2E17OnNextByteReceiveEv
        THUMB
// __interwork __vfp void usartDriver<usart2>::OnNextByteReceive()
_ZN11usartDriverI6usart2E17OnNextByteReceiveEv:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
        MOVS     R4,R0
          CFI FunCall _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8ReadByteEv
        BL       _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE8ReadByteEv
        MOVS     R5,R0
        LDRB     R0,[R4, #+2056]
        CMP      R0,#+0
        BNE.N    ??OnNextByteReceive_1
        LDR      R1,[R4, #+2060]
        ADDS     R0,R1,#+1
        STR      R0,[R4, #+2060]
        ADDS     R0,R4,#+1024
          CFI FunCall _ZNSt5arrayIcLj1024EEixEj
        BL       _ZNSt5arrayIcLj1024EEixEj
        STRB     R5,[R0, #+0]
          CFI FunCall _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE31IdleLineDetectedInterruptEnableEv
        BL       _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE31IdleLineDetectedInterruptEnableEv
??OnNextByteReceive_1:
        POP      {R0,R4,R5,PC}    ;; return
          CFI EndBlock cfiBlock48

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN11usartDriverI6usart2E18OnIdleLineDetectedEv
          CFI Block cfiBlock49 Using cfiCommon0
          CFI Function _ZN11usartDriverI6usart2E18OnIdleLineDetectedEv
        THUMB
// __interwork __vfp void usartDriver<usart2>::OnIdleLineDetected()
_ZN11usartDriverI6usart2E18OnIdleLineDetectedEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        LDR      R0,[R4, #+2060]
        STR      R0,[R4, #+2052]
        MOVS     R0,#+0
        STR      R0,[R4, #+2060]
          CFI FunCall _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE32IdleLineDetectedInterruptDisableEv
        BL       _ZN5USARTI6USART2L_Z20bluetoothTransceiverEE32IdleLineDetectedInterruptDisableEv
        MOVS     R0,#+1
        STRB     R0,[R4, #+2056]
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock49

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN3SPII4SPI1L_Z15spi1TransceiverEE8SendByteEc
          CFI Block cfiBlock50 Using cfiCommon0
          CFI Function _ZN3SPII4SPI1L_Z15spi1TransceiverEE8SendByteEc
        THUMB
// __interwork __vfp void SPI<SPI1, spi1Transceiver>::SendByte(char)
_ZN3SPII4SPI1L_Z15spi1TransceiverEE8SendByteEc:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        MOVS     R0,R4
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
          CFI FunCall _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock50

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN3SPII4SPI2L_Z15spi2TransceiverEE8SendByteEc
          CFI Block cfiBlock51 Using cfiCommon0
          CFI Function _ZN3SPII4SPI2L_Z15spi2TransceiverEE8SendByteEc
        THUMB
// __interwork __vfp void SPI<SPI2, spi2Transceiver>::SendByte(char)
_ZN3SPII4SPI2L_Z15spi2TransceiverEE8SendByteEc:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
        MOVS     R0,R4
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
          CFI FunCall _ZN12RegisterBaseILj1073756172ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        BL       _ZN12RegisterBaseILj1073756172ELj32E13ReadWriteModeE5WriteIS0_vEEvj
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock51

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN3SPII4SPI1L_Z15spi1TransceiverEE8ReadByteEv
          CFI Block cfiBlock52 Using cfiCommon0
          CFI Function _ZN3SPII4SPI1L_Z15spi1TransceiverEE8ReadByteEv
        THUMB
// __interwork __vfp char SPI<SPI1, spi1Transceiver>::ReadByte()
_ZN3SPII4SPI1L_Z15spi1TransceiverEE8ReadByteEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE3GetIS0_vEEjv
        BL       _ZN12RegisterBaseILj1073819660ELj32E13ReadWriteModeE3GetIS0_vEEjv
        UXTB     R0,R0            ;; ZeroExt  R0,R0,#+24,#+24
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock52

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN3SPII4SPI1L_Z15spi1TransceiverEE33TransmiteBufEmptyInterruptDisableEv
          CFI Block cfiBlock53 Using cfiCommon0
          CFI Function _ZN3SPII4SPI1L_Z15spi1TransceiverEE33TransmiteBufEmptyInterruptDisableEv
        THUMB
// __interwork __vfp void SPI<SPI1, spi1Transceiver>::TransmiteBufEmptyInterruptDisable()
_ZN3SPII4SPI1L_Z15spi1TransceiverEE33TransmiteBufEmptyInterruptDisableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock53

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN3SPII4SPI2L_Z15spi2TransceiverEE33TransmiteBufEmptyInterruptDisableEv
          CFI Block cfiBlock54 Using cfiCommon0
          CFI Function _ZN3SPII4SPI2L_Z15spi2TransceiverEE33TransmiteBufEmptyInterruptDisableEv
        THUMB
// __interwork __vfp void SPI<SPI2, spi2Transceiver>::TransmiteBufEmptyInterruptDisable()
_ZN3SPII4SPI2L_Z15spi2TransceiverEE33TransmiteBufEmptyInterruptDisableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock54

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN3SPII4SPI1L_Z15spi1TransceiverEE34ReceiveBufNotEmptyInterruptDisableEv
          CFI Block cfiBlock55 Using cfiCommon0
          CFI Function _ZN3SPII4SPI1L_Z15spi1TransceiverEE34ReceiveBufNotEmptyInterruptDisableEv
        THUMB
// __interwork __vfp void SPI<SPI1, spi1Transceiver>::ReceiveBufNotEmptyInterruptDisable()
_ZN3SPII4SPI1L_Z15spi1TransceiverEE34ReceiveBufNotEmptyInterruptDisableEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        BL       _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj0EE3SetIS3_vEEvv
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock55

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN3SPII4SPI1L_Z15spi1TransceiverEE21TransmittionCompletedEv
          CFI Block cfiBlock56 Using cfiCommon0
          CFI Function _ZN3SPII4SPI1L_Z15spi1TransceiverEE21TransmittionCompletedEv
        THUMB
// __interwork __vfp bool SPI<SPI1, spi1Transceiver>::TransmittionCompleted()
_ZN3SPII4SPI1L_Z15spi1TransceiverEE21TransmittionCompletedEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI18SPI1_SR_BSY_ValuesIN4SPI12SRELj7ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI18SPI1_SR_BSY_ValuesIN4SPI12SRELj7ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock56

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN3SPII4SPI2L_Z15spi2TransceiverEE21TransmittionCompletedEv
          CFI Block cfiBlock57 Using cfiCommon0
          CFI Function _ZN3SPII4SPI2L_Z15spi2TransceiverEE21TransmittionCompletedEv
        THUMB
// __interwork __vfp bool SPI<SPI2, spi2Transceiver>::TransmittionCompleted()
_ZN3SPII4SPI2L_Z15spi2TransceiverEE21TransmittionCompletedEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI18SPI2_SR_BSY_ValuesIN4SPI22SRELj7ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI18SPI2_SR_BSY_ValuesIN4SPI22SRELj7ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj0EE5IsSetIS3_vEEbv
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock57

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN3SPII4SPI1L_Z15spi1TransceiverEE19SpiInterruptHandlerEv
          CFI Block cfiBlock58 Using cfiCommon0
          CFI Function _ZN3SPII4SPI1L_Z15spi1TransceiverEE19SpiInterruptHandlerEv
        THUMB
// __interwork __vfp void SPI<SPI1, spi1Transceiver>::SpiInterruptHandler()
_ZN3SPII4SPI1L_Z15spi1TransceiverEE19SpiInterruptHandlerEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI22SPI1_CR2_RXNEIE_ValuesIN4SPI13CR2ELj6ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??SpiInterruptHandler_2
          CFI FunCall _ZN14FieldValueBaseI19SPI1_SR_RXNE_ValuesIN4SPI12SRELj0ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI19SPI1_SR_RXNE_ValuesIN4SPI12SRELj0ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??SpiInterruptHandler_2
        LDR.N    R0,??SpiInterruptHandler_0
          CFI FunCall _ZN9SpiDriverI4spi1E17OnNextByteReceiveEv
        BL       _ZN9SpiDriverI4spi1E17OnNextByteReceiveEv
??SpiInterruptHandler_2:
          CFI FunCall _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI21SPI1_CR2_TXEIE_ValuesIN4SPI13CR2ELj7ELj1E13ReadWriteModeNS1_11SPI1CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??SpiInterruptHandler_3
          CFI FunCall _ZN14FieldValueBaseI18SPI1_SR_TXE_ValuesIN4SPI12SRELj1ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI18SPI1_SR_TXE_ValuesIN4SPI12SRELj1ELj1E8ReadModeNS1_10SPI1SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??SpiInterruptHandler_3
        LDR.N    R0,??SpiInterruptHandler_0
          CFI FunCall _ZN9SpiDriverI4spi1E19OnNextByteTransmiteEv
        BL       _ZN9SpiDriverI4spi1E19OnNextByteTransmiteEv
??SpiInterruptHandler_3:
        POP      {R0,PC}          ;; return
        DATA
??SpiInterruptHandler_0:
        DATA32
        DC32     spi1Transceiver
          CFI EndBlock cfiBlock58

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN3SPII4SPI2L_Z15spi2TransceiverEE19SpiInterruptHandlerEv
          CFI Block cfiBlock59 Using cfiCommon0
          CFI Function _ZN3SPII4SPI2L_Z15spi2TransceiverEE19SpiInterruptHandlerEv
        THUMB
// __interwork __vfp void SPI<SPI2, spi2Transceiver>::SpiInterruptHandler()
_ZN3SPII4SPI2L_Z15spi2TransceiverEE19SpiInterruptHandlerEv:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
          CFI FunCall _ZN14FieldValueBaseI22SPI2_CR2_RXNEIE_ValuesIN4SPI23CR2ELj6ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI22SPI2_CR2_RXNEIE_ValuesIN4SPI23CR2ELj6ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??SpiInterruptHandler_4
          CFI FunCall _ZN14FieldValueBaseI19SPI2_SR_RXNE_ValuesIN4SPI22SRELj0ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI19SPI2_SR_RXNE_ValuesIN4SPI22SRELj0ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??SpiInterruptHandler_4
        LDR.N    R0,??SpiInterruptHandler_1
          CFI FunCall _ZN21SpiDriverOnlyTransmitI4spi2E17OnNextByteReceiveEv
        BL       _ZN21SpiDriverOnlyTransmitI4spi2E17OnNextByteReceiveEv
??SpiInterruptHandler_4:
          CFI FunCall _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI21SPI2_CR2_TXEIE_ValuesIN4SPI23CR2ELj7ELj1E13ReadWriteModeNS1_11SPI2CR2BaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??SpiInterruptHandler_5
          CFI FunCall _ZN14FieldValueBaseI18SPI2_SR_TXE_ValuesIN4SPI22SRELj1ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        BL       _ZN14FieldValueBaseI18SPI2_SR_TXE_ValuesIN4SPI22SRELj1ELj1E8ReadModeNS1_10SPI2SRBaseEES4_Lj1EE5IsSetIS3_vEEbv
        CMP      R0,#+0
        BEQ.N    ??SpiInterruptHandler_5
        LDR.N    R0,??SpiInterruptHandler_1
          CFI FunCall _ZN21SpiDriverOnlyTransmitI4spi2E19OnNextByteTransmiteEv
        BL       _ZN21SpiDriverOnlyTransmitI4spi2E19OnNextByteTransmiteEv
??SpiInterruptHandler_5:
        POP      {R0,PC}          ;; return
        DATA
??SpiInterruptHandler_1:
        DATA32
        DC32     spi2Transceiver
          CFI EndBlock cfiBlock59

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9SpiDriverI4spi1E19OnNextByteTransmiteEv
          CFI Block cfiBlock60 Using cfiCommon0
          CFI Function _ZN9SpiDriverI4spi1E19OnNextByteTransmiteEv
        THUMB
// __interwork __vfp void SpiDriver<spi1>::OnNextByteTransmite()
_ZN9SpiDriverI4spi1E19OnNextByteTransmiteEv:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
        MOVS     R4,R0
        LDR      R0,[R4, #+416]
        LDR      R1,[R4, #+400]
        CMP      R0,R1
        BCC.N    ??OnNextByteTransmite_3
        LDRB     R0,[R4, #+408]
        CMP      R0,#+0
        BNE.N    ??OnNextByteTransmite_4
??OnNextByteTransmite_3:
        LDR      R0,[R4, #+416]
        LDR      R1,[R4, #+400]
        CMP      R0,R1
        BCC.N    ??OnNextByteTransmite_5
        LDR      R1,[R4, #+416]
        MOVS     R0,R4
          CFI FunCall _ZNSt5arrayIcLj200EEixEj
        BL       _ZNSt5arrayIcLj200EEixEj
        MOVS     R5,R0
        LDR      R1,[R4, #+416]
        SUBS     R1,R1,#+1
        MOVS     R0,R4
          CFI FunCall _ZNSt5arrayIcLj200EEixEj
        BL       _ZNSt5arrayIcLj200EEixEj
        LDRB     R0,[R0, #+0]
        STRB     R0,[R5, #+0]
??OnNextByteTransmite_5:
        LDR      R1,[R4, #+416]
        ADDS     R0,R1,#+1
        STR      R0,[R4, #+416]
        MOVS     R0,R4
          CFI FunCall _ZNSt5arrayIcLj200EEixEj
        BL       _ZNSt5arrayIcLj200EEixEj
        LDRB     R0,[R0, #+0]
          CFI FunCall _ZN3SPII4SPI1L_Z15spi1TransceiverEE8SendByteEc
        BL       _ZN3SPII4SPI1L_Z15spi1TransceiverEE8SendByteEc
        B.N      ??OnNextByteTransmite_6
??OnNextByteTransmite_4:
        MOVS     R0,#+0
        STR      R0,[R4, #+416]
          CFI FunCall _ZN3SPII4SPI1L_Z15spi1TransceiverEE33TransmiteBufEmptyInterruptDisableEv
        BL       _ZN3SPII4SPI1L_Z15spi1TransceiverEE33TransmiteBufEmptyInterruptDisableEv
        LDR      R0,[R4, #+404]
        CMP      R0,#+0
        BNE.N    ??OnNextByteTransmite_7
??OnNextByteTransmite_8:
          CFI FunCall _ZN3SPII4SPI1L_Z15spi1TransceiverEE21TransmittionCompletedEv
        BL       _ZN3SPII4SPI1L_Z15spi1TransceiverEE21TransmittionCompletedEv
        CMP      R0,#+0
        BEQ.N    ??OnNextByteTransmite_8
??OnNextByteTransmite_7:
        MOVS     R0,#+1
        STRB     R0,[R4, #+409]
??OnNextByteTransmite_6:
        POP      {R0,R4,R5,PC}    ;; return
          CFI EndBlock cfiBlock60

        SECTION `.text`:CODE:REORDER:NOROOT(2)
        SECTION_GROUP _ZN9SpiDriverI4spi1E17OnNextByteReceiveEv
          CFI Block cfiBlock61 Using cfiCommon0
          CFI Function _ZN9SpiDriverI4spi1E17OnNextByteReceiveEv
        THUMB
// __interwork __vfp void SpiDriver<spi1>::OnNextByteReceive()
_ZN9SpiDriverI4spi1E17OnNextByteReceiveEv:
        PUSH     {R4-R6,LR}
          CFI R14 Frame(CFA, -4)
          CFI R6 Frame(CFA, -8)
          CFI R5 Frame(CFA, -12)
          CFI R4 Frame(CFA, -16)
          CFI CFA R13+16
        MOVS     R4,R0
          CFI FunCall _ZN3SPII4SPI1L_Z15spi1TransceiverEE8ReadByteEv
        BL       _ZN3SPII4SPI1L_Z15spi1TransceiverEE8ReadByteEv
        MOVS     R5,R0
        LDRB     R0,[R4, #+408]
        CMP      R0,#+0
        BNE.N    ??OnNextByteReceive_2
        LDR.N    R6,??OnNextByteReceive_0
        LDRB     R0,[R6, #+0]
        CMP      R0,#+0
        BNE.N    ??OnNextByteReceive_3
        LDR      R1,[R4, #+412]
        ADDS     R0,R1,#+1
        STR      R0,[R4, #+412]
        ADDS     R0,R4,#+200
          CFI FunCall _ZNSt5arrayIcLj200EEixEj
        BL       _ZNSt5arrayIcLj200EEixEj
        STRB     R5,[R0, #+0]
        LDR      R0,[R4, #+412]
        LDR      R1,[R4, #+404]
        CMP      R0,R1
        BNE.N    ??OnNextByteReceive_2
          CFI FunCall _ZN3SPII4SPI1L_Z15spi1TransceiverEE34ReceiveBufNotEmptyInterruptDisableEv
        BL       _ZN3SPII4SPI1L_Z15spi1TransceiverEE34ReceiveBufNotEmptyInterruptDisableEv
        MOVS     R0,#+0
        STR      R0,[R4, #+412]
        MOVS     R0,#+1
        STRB     R0,[R4, #+408]
        MOVS     R0,#+1
        STRB     R0,[R6, #+0]
        B.N      ??OnNextByteReceive_2
??OnNextByteReceive_3:
        MOVS     R0,#+0
        STRB     R0,[R6, #+0]
??OnNextByteReceive_2:
        POP      {R4-R6,PC}       ;; return
        Nop      
        DATA
??OnNextByteReceive_0:
        DATA32
        DC32     _ZZN9SpiDriverI4spi1E17OnNextByteReceiveEvE7isfirst
          CFI EndBlock cfiBlock61

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN21SpiDriverOnlyTransmitI4spi2E19OnNextByteTransmiteEv
          CFI Block cfiBlock62 Using cfiCommon0
          CFI Function _ZN21SpiDriverOnlyTransmitI4spi2E19OnNextByteTransmiteEv
        THUMB
// __interwork __vfp void SpiDriverOnlyTransmit<spi2>::OnNextByteTransmite()
_ZN21SpiDriverOnlyTransmitI4spi2E19OnNextByteTransmiteEv:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
        MOVS     R4,R0
        MOVW     R5,#+20008
        LDR      R0,[R4, R5]
        MOVW     R1,#+20000
        LDR      R1,[R4, R1]
        SUBS     R1,R1,#+1
        CMP      R0,R1
        BCS.N    ??OnNextByteTransmite_9
        LDR      R1,[R4, R5]
        ADDS     R0,R1,#+1
        STR      R0,[R4, R5]
        MOVS     R0,R4
          CFI FunCall _ZNSt5arrayIcLj20000EEixEj
        BL       _ZNSt5arrayIcLj20000EEixEj
        LDRB     R0,[R0, #+0]
          CFI FunCall _ZN3SPII4SPI2L_Z15spi2TransceiverEE8SendByteEc
        BL       _ZN3SPII4SPI2L_Z15spi2TransceiverEE8SendByteEc
        B.N      ??OnNextByteTransmite_10
??OnNextByteTransmite_9:
        LDR      R1,[R4, R5]
        MOVS     R0,R4
          CFI FunCall _ZNSt5arrayIcLj20000EEixEj
        BL       _ZNSt5arrayIcLj20000EEixEj
        LDRB     R0,[R0, #+0]
          CFI FunCall _ZN3SPII4SPI2L_Z15spi2TransceiverEE8SendByteEc
        BL       _ZN3SPII4SPI2L_Z15spi2TransceiverEE8SendByteEc
        MOVS     R0,#+0
        STR      R0,[R4, R5]
          CFI FunCall _ZN3SPII4SPI2L_Z15spi2TransceiverEE33TransmiteBufEmptyInterruptDisableEv
        BL       _ZN3SPII4SPI2L_Z15spi2TransceiverEE33TransmiteBufEmptyInterruptDisableEv
??OnNextByteTransmite_11:
          CFI FunCall _ZN3SPII4SPI2L_Z15spi2TransceiverEE21TransmittionCompletedEv
        BL       _ZN3SPII4SPI2L_Z15spi2TransceiverEE21TransmittionCompletedEv
        CMP      R0,#+0
        BEQ.N    ??OnNextByteTransmite_11
        MOVS     R0,#+1
        MOVW     R1,#+20004
        STRB     R0,[R4, R1]
??OnNextByteTransmite_10:
        POP      {R0,R4,R5,PC}    ;; return
          CFI EndBlock cfiBlock62

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN21SpiDriverOnlyTransmitI4spi2E17OnNextByteReceiveEv
          CFI Block cfiBlock63 Using cfiCommon0
          CFI Function _ZN21SpiDriverOnlyTransmitI4spi2E17OnNextByteReceiveEv
          CFI NoCalls
        THUMB
// __interwork __vfp void SpiDriverOnlyTransmit<spi2>::OnNextByteReceive()
_ZN21SpiDriverOnlyTransmitI4spi2E17OnNextByteReceiveEv:
        BX       LR               ;; return
          CFI EndBlock cfiBlock63

        SECTION `.init_array`:CODE:ROOT(2)
        SECTION_TYPE SHT_INIT_ARRAY, 0
        DATA
        DC32    RELOC_ARM_TARGET1 __sti__routine

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION CSTACK:DATA:NOALLOC:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        END
//  168 
// 
//  2'069 bytes in section .bss
// 20'433 bytes in section .data
//      4 bytes in section .init_array
//    408 bytes in section .intvec
//     27 bytes in section .rodata
//  1'352 bytes in section .text
// 
//  52 bytes of CODE  memory (+  1'304 bytes shared)
// 408 bytes of CONST memory (+     27 bytes shared)
//   0 bytes of DATA  memory (+ 22'502 bytes shared)
//
//Errors: none
//Warnings: none
