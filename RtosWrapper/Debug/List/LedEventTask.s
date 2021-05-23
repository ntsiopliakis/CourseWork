///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V8.40.2.214/W32 for ARM        04/Apr/2021  13:44:23
// Copyright 1999-2019 IAR Systems AB.
//
//    Cpu mode     =  
//    Endian       =  little
//    Source file  =
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\MyTasks\LedEventTask.cpp
//    Command line =
//        -f C:\Users\D13C~1\AppData\Local\Temp\EW2497.tmp
//        (C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\MyTasks\LedEventTask.cpp
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
//        C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\Debug\List\LedEventTask.s
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

        EXTERN _ZN3Led6ToggleEv
        EXTERN _ZTVN10__cxxabiv117__class_type_infoE
        EXTERN _ZTVN10__cxxabiv120__si_class_type_infoE
        EXTERN xEventGroupWaitBits

        PUBLIC _ZN12LedEventTask7ExecuteEv
        PUBLIC _ZN9OsWrapper11RtosWrapper10wWaitEventERKPvjjNS_9EventModeE
        PUBLIC _ZNK9OsWrapper5Event4WaitENS_9EventModeEj
        PUBLIC _ZNSt6chrono12steady_clock9is_steadyE
        PUBLIC _ZNSt6chrono12system_clock12is_monotonicE
        PUBLIC _ZNSt6chrono12system_clock9is_steadyE
        PUBLIC _ZTI12LedEventTask
        PUBLIC _ZTIN9OsWrapper6ThreadILj128EEE
        PUBLIC _ZTIN9OsWrapper7IThreadE
        PUBLIC _ZTISt10ctype_base
        PUBLIC _ZTS12LedEventTask
        PUBLIC _ZTSN9OsWrapper6ThreadILj128EEE
        PUBLIC _ZTSN9OsWrapper7IThreadE
        PUBLIC _ZTSSt10ctype_base
        PUBLIC _ZTV12LedEventTask
        
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
        SECTION_GROUP _ZTIN9OsWrapper7IThreadE
        DATA
// __absolute __class_type_info const <Typeinfo for OsWrapper::IThread>
_ZTIN9OsWrapper7IThreadE:
        DATA32
        DC32 _ZTVN10__cxxabiv117__class_type_infoE + 0x8
        DC32 _ZTSN9OsWrapper7IThreadE

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTV12LedEventTask
        DATA
// __absolute void (*const LedEventTask::__vtbl[3])()
_ZTV12LedEventTask:
        DATA32
        DC32 0x0, _ZTI12LedEventTask, _ZN12LedEventTask7ExecuteEv

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTI12LedEventTask
        DATA
// __absolute __si_class_type_info const <Typeinfo for LedEventTask>
_ZTI12LedEventTask:
        DATA32
        DC32 _ZTVN10__cxxabiv120__si_class_type_infoE + 0x8, _ZTS12LedEventTask
        DC32 _ZTIN9OsWrapper6ThreadILj128EEE

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTIN9OsWrapper6ThreadILj128EEE
        DATA
// __absolute __si_class_type_info const <Typeinfo for OsWrapper::Thread<(unsigned int)128>>
_ZTIN9OsWrapper6ThreadILj128EEE:
        DATA32
        DC32 _ZTVN10__cxxabiv120__si_class_type_infoE + 0x8
        DC32 _ZTSN9OsWrapper6ThreadILj128EEE, _ZTIN9OsWrapper7IThreadE

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTSN9OsWrapper7IThreadE
        DATA
// __absolute char const <Typeinfo name for OsWrapper::IThread>[21]
_ZTSN9OsWrapper7IThreadE:
        DATA8
        DC8 "N9OsWrapper7IThreadE"
        DATA
        DC8 0, 0, 0

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTSN9OsWrapper6ThreadILj128EEE
        DATA
// __absolute char const <Typeinfo name for OsWrapper::Thread<(unsigned int)128>>[28]
_ZTSN9OsWrapper6ThreadILj128EEE:
        DATA8
        DC8 "N9OsWrapper6ThreadILj128EEE"

        SECTION `.rodata`:CONST:REORDER:NOROOT(2)
        SECTION_GROUP _ZTS12LedEventTask
        DATA
// __absolute char const <Typeinfo name for LedEventTask>[15]
_ZTS12LedEventTask:
        DATA8
        DC8 "12LedEventTask"
        DC8 0

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
// C:\Users\@@@@@@@@\Documents\MyIARprojects\KursovoiK\RtosWrapper\MyTasks\LedEventTask.cpp
//    1 #include "LedEventTask.hpp"

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

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZN9OsWrapper11RtosWrapper10wWaitEventERKPvjjNS_9EventModeE
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function _ZN9OsWrapper11RtosWrapper10wWaitEventERKPvjjNS_9EventModeE
        THUMB
// __interwork __vfp uint32_t OsWrapper::RtosWrapper::wWaitEvent(void * const &, uint32_t, uint32_t, OsWrapper::EventMode)
_ZN9OsWrapper11RtosWrapper10wWaitEventERKPvjjNS_9EventModeE:
        PUSH     {R2-R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+16
        MOVS     R4,R3
        MOVS     R3,#+0
        CMP      R4,#+0
        BNE.N    ??wWaitEvent_0
        MOVS     R3,#+0
??wWaitEvent_0:
        STR      R2,[SP, #+0]
        MOVS     R2,#+1
        LDR      R0,[R0, #+0]
          CFI FunCall xEventGroupWaitBits
        BL       xEventGroupWaitBits
        POP      {R1,R2,R4,PC}    ;; return
          CFI EndBlock cfiBlock0

        SECTION `.text`:CODE:REORDER:NOROOT(1)
        SECTION_GROUP _ZNK9OsWrapper5Event4WaitENS_9EventModeEj
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function _ZNK9OsWrapper5Event4WaitENS_9EventModeEj
        THUMB
// __interwork __vfp uint32_t OsWrapper::Event::Wait(OsWrapper::EventMode, uint32_t) const
_ZNK9OsWrapper5Event4WaitENS_9EventModeEj:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
        MOVS     R3,R1
        MOVS     R1,R2
        LDR      R2,[R0, #+28]
          CFI FunCall _ZN9OsWrapper11RtosWrapper10wWaitEventERKPvjjNS_9EventModeE
        BL       _ZN9OsWrapper11RtosWrapper10wWaitEventERKPvjjNS_9EventModeE
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock1
//    2 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function _ZN12LedEventTask7ExecuteEv
        THUMB
//    3 void LedEventTask::Execute()
//    4 {
_ZN12LedEventTask7ExecuteEv:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//    5   for(;;)
//    6   {
//    7     if (event.Wait() != 0)
??Execute_0:
        MOVS     R2,#+255
        MOVS     R1,#+0
        LDR      R0,[R4, #+608]
          CFI FunCall _ZNK9OsWrapper5Event4WaitENS_9EventModeEj
        BL       _ZNK9OsWrapper5Event4WaitENS_9EventModeEj
        CMP      R0,#+0
        BEQ.N    ??Execute_0
//    8     {
//    9       led.Toggle();
        LDR      R0,[R4, #+604]
          CFI FunCall _ZN3Led6ToggleEv
        BL       _ZN3Led6ToggleEv
        B.N      ??Execute_0
//   10     }
//   11   }
//   12 }
          CFI EndBlock cfiBlock2

        SECTION `.iar_vfe_vtableinfo_ZTV12LedEventTask`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        SECTION_GROUP _ZTV12LedEventTask
        DATA
        DC32    _ZTV12LedEventTask
        DC32    3
        DC32    3
        DC32    _ZTI12LedEventTask
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTIN9OsWrapper6ThreadILj128EEE
        DC32    0
        DC32    1
        DC32    _ZTI12LedEventTask
        DC32    1
        DC32    2
        DC32    0
        DC32    _ZTIN9OsWrapper7IThreadE
        DC32    0
        DC32    1
        DC32    _ZTIN9OsWrapper6ThreadILj128EEE
        DC32    0
        DC32    1
        DC32    _ZTI12LedEventTask
        DC32    1
        DC32    2
        DC32    0

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        END
// 
// 139 bytes in section .rodata
//  68 bytes in section .text
// 
// 30 bytes of CODE  memory (+  38 bytes shared)
//  0 bytes of CONST memory (+ 139 bytes shared)
//
//Errors: none
//Warnings: none
