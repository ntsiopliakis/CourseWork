/*******************************************************************************
* Filename      : diofieldvalues.hpp
*
* Details       : Enumerations related with DIO peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(DIOENUMS_HPP)
#define DIOENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAIN_P1IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAIN_P2IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAOUT_P2OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAOUT_P1OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PADIR_P1DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PADIR_P2DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAREN_P1REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAREN_P2REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PADS_P1DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PADS_P2DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PASEL0_P1SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PASEL0_P2SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PASEL1_P1SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PASEL1_P2SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P1IV_P1IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P1IV_0 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 0U> ;
  using P1IV_2 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 2U> ;
  using P1IV_4 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 4U> ;
  using P1IV_6 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 6U> ;
  using P1IV_8 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 8U> ;
  using P1IV_10 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 10U> ;
  using P1IV_12 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 12U> ;
  using P1IV_14 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 14U> ;
  using P1IV_16 = FieldValue<DIO_P1IV_P1IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PASELC_P1SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PASELC_P2SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAIES_P1IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAIES_P2IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAIE_P1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAIE_P2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAIFG_P1IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PAIFG_P2IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P2IV_P2IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P2IV_0 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 0U> ;
  using P2IV_2 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 2U> ;
  using P2IV_4 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 4U> ;
  using P2IV_6 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 6U> ;
  using P2IV_8 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 8U> ;
  using P2IV_10 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 10U> ;
  using P2IV_12 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 12U> ;
  using P2IV_14 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 14U> ;
  using P2IV_16 = FieldValue<DIO_P2IV_P2IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBIN_P3IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBIN_P4IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBOUT_P3OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBOUT_P4OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBDIR_P3DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBDIR_P4DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBREN_P3REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBREN_P4REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBDS_P3DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBDS_P4DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBSEL0_P4SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBSEL0_P3SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBSEL1_P3SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBSEL1_P4SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P3IV_P3IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P3IV_0 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 0U> ;
  using P3IV_2 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 2U> ;
  using P3IV_4 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 4U> ;
  using P3IV_6 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 6U> ;
  using P3IV_8 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 8U> ;
  using P3IV_10 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 10U> ;
  using P3IV_12 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 12U> ;
  using P3IV_14 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 14U> ;
  using P3IV_16 = FieldValue<DIO_P3IV_P3IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBSELC_P3SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBSELC_P4SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBIES_P3IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBIES_P4IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBIE_P3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBIE_P4IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBIFG_P3IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PBIFG_P4IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P4IV_P4IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P4IV_0 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 0U> ;
  using P4IV_2 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 2U> ;
  using P4IV_4 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 4U> ;
  using P4IV_6 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 6U> ;
  using P4IV_8 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 8U> ;
  using P4IV_10 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 10U> ;
  using P4IV_12 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 12U> ;
  using P4IV_14 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 14U> ;
  using P4IV_16 = FieldValue<DIO_P4IV_P4IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCIN_P5IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCIN_P6IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCOUT_P5OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCOUT_P6OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCDIR_P5DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCDIR_P6DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCREN_P5REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCREN_P6REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCDS_P5DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCDS_P6DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCSEL0_P5SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCSEL0_P6SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCSEL1_P5SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCSEL1_P6SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P5IV_P5IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P5IV_0 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 0U> ;
  using P5IV_2 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 2U> ;
  using P5IV_4 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 4U> ;
  using P5IV_6 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 6U> ;
  using P5IV_8 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 8U> ;
  using P5IV_10 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 10U> ;
  using P5IV_12 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 12U> ;
  using P5IV_14 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 14U> ;
  using P5IV_16 = FieldValue<DIO_P5IV_P5IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCSELC_P5SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCSELC_P6SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCIES_P5IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCIES_P6IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCIE_P5IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCIE_P6IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCIFG_P5IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PCIFG_P6IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P6IV_P6IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P6IV_0 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 0U> ;
  using P6IV_2 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 2U> ;
  using P6IV_4 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 4U> ;
  using P6IV_6 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 6U> ;
  using P6IV_8 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 8U> ;
  using P6IV_10 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 10U> ;
  using P6IV_12 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 12U> ;
  using P6IV_14 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 14U> ;
  using P6IV_16 = FieldValue<DIO_P6IV_P6IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDIN_P7IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDIN_P8IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDOUT_P7OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDOUT_P8OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDDIR_P7DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDDIR_P8DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDREN_P7REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDREN_P8REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDDS_P7DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDDS_P8DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDSEL0_P7SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDSEL0_P8SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDSEL1_P7SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDSEL1_P8SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P7IV_P7IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P7IV_0 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 0U> ;
  using P7IV_2 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 2U> ;
  using P7IV_4 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 4U> ;
  using P7IV_6 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 6U> ;
  using P7IV_8 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 8U> ;
  using P7IV_10 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 10U> ;
  using P7IV_12 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 12U> ;
  using P7IV_14 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 14U> ;
  using P7IV_16 = FieldValue<DIO_P7IV_P7IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDSELC_P7SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDSELC_P8SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDIES_P7IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDIES_P8IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDIE_P7IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDIE_P8IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDIFG_P7IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PDIFG_P8IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P8IV_P8IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P8IV_0 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 0U> ;
  using P8IV_2 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 2U> ;
  using P8IV_4 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 4U> ;
  using P8IV_6 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 6U> ;
  using P8IV_8 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 8U> ;
  using P8IV_10 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 10U> ;
  using P8IV_12 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 12U> ;
  using P8IV_14 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 14U> ;
  using P8IV_16 = FieldValue<DIO_P8IV_P8IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEIN_P9IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEIN_P10IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEOUT_P9OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEOUT_P10OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEDIR_P9DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEDIR_P10DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEREN_P9REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEREN_P10REN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEDS_P9DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEDS_P10DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PESEL0_P9SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PESEL0_P10SEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PESEL1_P9SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PESEL1_P10SEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P9IV_P9IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P9IV_0 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 0U> ;
  using P9IV_2 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 2U> ;
  using P9IV_4 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 4U> ;
  using P9IV_6 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 6U> ;
  using P9IV_8 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 8U> ;
  using P9IV_10 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 10U> ;
  using P9IV_12 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 12U> ;
  using P9IV_14 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 14U> ;
  using P9IV_16 = FieldValue<DIO_P9IV_P9IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PESELC_P9SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PESELC_P10SELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEIES_P9IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEIES_P10IES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEIE_P9IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEIE_P10IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEIFG_P9IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PEIFG_P10IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_P10IV_P10IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using P10IV_0 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 0U> ;
  using P10IV_2 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 2U> ;
  using P10IV_4 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 4U> ;
  using P10IV_6 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 6U> ;
  using P10IV_8 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 8U> ;
  using P10IV_10 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 10U> ;
  using P10IV_12 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 12U> ;
  using P10IV_14 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 14U> ;
  using P10IV_16 = FieldValue<DIO_P10IV_P10IV_Values, BaseType, 16U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PJIN_PJIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PJOUT_PJOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PJDIR_PJDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PJREN_PJREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PJDS_PJDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PJSEL0_PJSEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PJSEL1_PJSEL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DIO_PJSELC_PJSELC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(DIOENUMS_HPP)
