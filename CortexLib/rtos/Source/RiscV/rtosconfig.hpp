#pragma once

#include "susudefs.hpp"      // for forceinline 
#include "csrcustomregisters.hpp" // for CSRCUSTOM
#include "csrregisters.hpp" //for CSR


extern "C" void Schedule() ;

inline constexpr bool CORTEXM = true;

__forceinline inline static void IsrExitProceed()
{ 
  CSRCUSTOM::MSUBMPack<CSRCUSTOM::MSUBM::PTYP::Interrupt,
                       CSRCUSTOM::MSUBM::PTYP::Exception,
                       CSRCUSTOM::MSUBM::PTYP::NMI
                       >::ClearValueBits();
  __asm volatile (                  
                  "la t0, returnPoint \n"
                  "csrw mepc, t0 \n"  
                  "mret \n"
                  "returnPoint:"
                 ) ; 
  Schedule() ;
} ;
