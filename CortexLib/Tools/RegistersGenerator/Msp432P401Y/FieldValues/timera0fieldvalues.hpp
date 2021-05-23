/*******************************************************************************
* Filename      : timera0fieldvalues.hpp
*
* Details       : Enumerations related with TIMER_A0 peripheral. This header
*                 file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(TIMERA0ENUMS_HPP)
#define TIMERA0ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCTL_TAIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TAIFG_0 = FieldValue<TIMER_A0_TAxCTL_TAIFG_Values, BaseType, 0U> ;
  using TAIFG_1 = FieldValue<TIMER_A0_TAxCTL_TAIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCTL_TAIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TAIE_0 = FieldValue<TIMER_A0_TAxCTL_TAIE_Values, BaseType, 0U> ;
  using TAIE_1 = FieldValue<TIMER_A0_TAxCTL_TAIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCTL_TACLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCTL_TACLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCTL_TACLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCTL_MC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MC_0 = FieldValue<TIMER_A0_TAxCTL_MC_Values, BaseType, 0U> ;
  using MC_1 = FieldValue<TIMER_A0_TAxCTL_MC_Values, BaseType, 1U> ;
  using MC_2 = FieldValue<TIMER_A0_TAxCTL_MC_Values, BaseType, 2U> ;
  using MC_3 = FieldValue<TIMER_A0_TAxCTL_MC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCTL_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ID_0 = FieldValue<TIMER_A0_TAxCTL_ID_Values, BaseType, 0U> ;
  using ID_1 = FieldValue<TIMER_A0_TAxCTL_ID_Values, BaseType, 1U> ;
  using ID_2 = FieldValue<TIMER_A0_TAxCTL_ID_Values, BaseType, 2U> ;
  using ID_3 = FieldValue<TIMER_A0_TAxCTL_ID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCTL_TASSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TASSEL_0 = FieldValue<TIMER_A0_TAxCTL_TASSEL_Values, BaseType, 0U> ;
  using TASSEL_1 = FieldValue<TIMER_A0_TAxCTL_TASSEL_Values, BaseType, 1U> ;
  using TASSEL_2 = FieldValue<TIMER_A0_TAxCTL_TASSEL_Values, BaseType, 2U> ;
  using TASSEL_3 = FieldValue<TIMER_A0_TAxCTL_TASSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxEX0_TAIDEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TAIDEX_0 = FieldValue<TIMER_A0_TAxEX0_TAIDEX_Values, BaseType, 0U> ;
  using TAIDEX_1 = FieldValue<TIMER_A0_TAxEX0_TAIDEX_Values, BaseType, 1U> ;
  using TAIDEX_2 = FieldValue<TIMER_A0_TAxEX0_TAIDEX_Values, BaseType, 2U> ;
  using TAIDEX_3 = FieldValue<TIMER_A0_TAxEX0_TAIDEX_Values, BaseType, 3U> ;
  using TAIDEX_4 = FieldValue<TIMER_A0_TAxEX0_TAIDEX_Values, BaseType, 4U> ;
  using TAIDEX_5 = FieldValue<TIMER_A0_TAxEX0_TAIDEX_Values, BaseType, 5U> ;
  using TAIDEX_6 = FieldValue<TIMER_A0_TAxEX0_TAIDEX_Values, BaseType, 6U> ;
  using TAIDEX_7 = FieldValue<TIMER_A0_TAxEX0_TAIDEX_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxIV_TAIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_CCIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIFG_0 = FieldValue<TIMER_A0_TAxCCTL0_CCIFG_Values, BaseType, 0U> ;
  using CCIFG_1 = FieldValue<TIMER_A0_TAxCCTL0_CCIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_COV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using COV_0 = FieldValue<TIMER_A0_TAxCCTL0_COV_Values, BaseType, 0U> ;
  using COV_1 = FieldValue<TIMER_A0_TAxCCTL0_COV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUT_0 = FieldValue<TIMER_A0_TAxCCTL0_OUT_Values, BaseType, 0U> ;
  using OUT_1 = FieldValue<TIMER_A0_TAxCCTL0_OUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_CCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL0_CCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL0_CCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_CCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIE_0 = FieldValue<TIMER_A0_TAxCCTL0_CCIE_Values, BaseType, 0U> ;
  using CCIE_1 = FieldValue<TIMER_A0_TAxCCTL0_CCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_OUTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUTMOD_0 = FieldValue<TIMER_A0_TAxCCTL0_OUTMOD_Values, BaseType, 0U> ;
  using OUTMOD_1 = FieldValue<TIMER_A0_TAxCCTL0_OUTMOD_Values, BaseType, 1U> ;
  using OUTMOD_2 = FieldValue<TIMER_A0_TAxCCTL0_OUTMOD_Values, BaseType, 2U> ;
  using OUTMOD_3 = FieldValue<TIMER_A0_TAxCCTL0_OUTMOD_Values, BaseType, 3U> ;
  using OUTMOD_4 = FieldValue<TIMER_A0_TAxCCTL0_OUTMOD_Values, BaseType, 4U> ;
  using OUTMOD_5 = FieldValue<TIMER_A0_TAxCCTL0_OUTMOD_Values, BaseType, 5U> ;
  using OUTMOD_6 = FieldValue<TIMER_A0_TAxCCTL0_OUTMOD_Values, BaseType, 6U> ;
  using OUTMOD_7 = FieldValue<TIMER_A0_TAxCCTL0_OUTMOD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_CAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAP_0 = FieldValue<TIMER_A0_TAxCCTL0_CAP_Values, BaseType, 0U> ;
  using CAP_1 = FieldValue<TIMER_A0_TAxCCTL0_CAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_SCCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL0_SCCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL0_SCCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_SCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SCS_0 = FieldValue<TIMER_A0_TAxCCTL0_SCS_Values, BaseType, 0U> ;
  using SCS_1 = FieldValue<TIMER_A0_TAxCCTL0_SCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_CCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIS_0 = FieldValue<TIMER_A0_TAxCCTL0_CCIS_Values, BaseType, 0U> ;
  using CCIS_1 = FieldValue<TIMER_A0_TAxCCTL0_CCIS_Values, BaseType, 1U> ;
  using CCIS_2 = FieldValue<TIMER_A0_TAxCCTL0_CCIS_Values, BaseType, 2U> ;
  using CCIS_3 = FieldValue<TIMER_A0_TAxCCTL0_CCIS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL0_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CM_0 = FieldValue<TIMER_A0_TAxCCTL0_CM_Values, BaseType, 0U> ;
  using CM_1 = FieldValue<TIMER_A0_TAxCCTL0_CM_Values, BaseType, 1U> ;
  using CM_2 = FieldValue<TIMER_A0_TAxCCTL0_CM_Values, BaseType, 2U> ;
  using CM_3 = FieldValue<TIMER_A0_TAxCCTL0_CM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_CCIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIFG_0 = FieldValue<TIMER_A0_TAxCCTL1_CCIFG_Values, BaseType, 0U> ;
  using CCIFG_1 = FieldValue<TIMER_A0_TAxCCTL1_CCIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_COV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using COV_0 = FieldValue<TIMER_A0_TAxCCTL1_COV_Values, BaseType, 0U> ;
  using COV_1 = FieldValue<TIMER_A0_TAxCCTL1_COV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUT_0 = FieldValue<TIMER_A0_TAxCCTL1_OUT_Values, BaseType, 0U> ;
  using OUT_1 = FieldValue<TIMER_A0_TAxCCTL1_OUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_CCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL1_CCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL1_CCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_CCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIE_0 = FieldValue<TIMER_A0_TAxCCTL1_CCIE_Values, BaseType, 0U> ;
  using CCIE_1 = FieldValue<TIMER_A0_TAxCCTL1_CCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_OUTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUTMOD_0 = FieldValue<TIMER_A0_TAxCCTL1_OUTMOD_Values, BaseType, 0U> ;
  using OUTMOD_1 = FieldValue<TIMER_A0_TAxCCTL1_OUTMOD_Values, BaseType, 1U> ;
  using OUTMOD_2 = FieldValue<TIMER_A0_TAxCCTL1_OUTMOD_Values, BaseType, 2U> ;
  using OUTMOD_3 = FieldValue<TIMER_A0_TAxCCTL1_OUTMOD_Values, BaseType, 3U> ;
  using OUTMOD_4 = FieldValue<TIMER_A0_TAxCCTL1_OUTMOD_Values, BaseType, 4U> ;
  using OUTMOD_5 = FieldValue<TIMER_A0_TAxCCTL1_OUTMOD_Values, BaseType, 5U> ;
  using OUTMOD_6 = FieldValue<TIMER_A0_TAxCCTL1_OUTMOD_Values, BaseType, 6U> ;
  using OUTMOD_7 = FieldValue<TIMER_A0_TAxCCTL1_OUTMOD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_CAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAP_0 = FieldValue<TIMER_A0_TAxCCTL1_CAP_Values, BaseType, 0U> ;
  using CAP_1 = FieldValue<TIMER_A0_TAxCCTL1_CAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_SCCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL1_SCCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL1_SCCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_SCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SCS_0 = FieldValue<TIMER_A0_TAxCCTL1_SCS_Values, BaseType, 0U> ;
  using SCS_1 = FieldValue<TIMER_A0_TAxCCTL1_SCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_CCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIS_0 = FieldValue<TIMER_A0_TAxCCTL1_CCIS_Values, BaseType, 0U> ;
  using CCIS_1 = FieldValue<TIMER_A0_TAxCCTL1_CCIS_Values, BaseType, 1U> ;
  using CCIS_2 = FieldValue<TIMER_A0_TAxCCTL1_CCIS_Values, BaseType, 2U> ;
  using CCIS_3 = FieldValue<TIMER_A0_TAxCCTL1_CCIS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL1_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CM_0 = FieldValue<TIMER_A0_TAxCCTL1_CM_Values, BaseType, 0U> ;
  using CM_1 = FieldValue<TIMER_A0_TAxCCTL1_CM_Values, BaseType, 1U> ;
  using CM_2 = FieldValue<TIMER_A0_TAxCCTL1_CM_Values, BaseType, 2U> ;
  using CM_3 = FieldValue<TIMER_A0_TAxCCTL1_CM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_CCIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIFG_0 = FieldValue<TIMER_A0_TAxCCTL2_CCIFG_Values, BaseType, 0U> ;
  using CCIFG_1 = FieldValue<TIMER_A0_TAxCCTL2_CCIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_COV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using COV_0 = FieldValue<TIMER_A0_TAxCCTL2_COV_Values, BaseType, 0U> ;
  using COV_1 = FieldValue<TIMER_A0_TAxCCTL2_COV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUT_0 = FieldValue<TIMER_A0_TAxCCTL2_OUT_Values, BaseType, 0U> ;
  using OUT_1 = FieldValue<TIMER_A0_TAxCCTL2_OUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_CCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL2_CCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL2_CCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_CCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIE_0 = FieldValue<TIMER_A0_TAxCCTL2_CCIE_Values, BaseType, 0U> ;
  using CCIE_1 = FieldValue<TIMER_A0_TAxCCTL2_CCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_OUTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUTMOD_0 = FieldValue<TIMER_A0_TAxCCTL2_OUTMOD_Values, BaseType, 0U> ;
  using OUTMOD_1 = FieldValue<TIMER_A0_TAxCCTL2_OUTMOD_Values, BaseType, 1U> ;
  using OUTMOD_2 = FieldValue<TIMER_A0_TAxCCTL2_OUTMOD_Values, BaseType, 2U> ;
  using OUTMOD_3 = FieldValue<TIMER_A0_TAxCCTL2_OUTMOD_Values, BaseType, 3U> ;
  using OUTMOD_4 = FieldValue<TIMER_A0_TAxCCTL2_OUTMOD_Values, BaseType, 4U> ;
  using OUTMOD_5 = FieldValue<TIMER_A0_TAxCCTL2_OUTMOD_Values, BaseType, 5U> ;
  using OUTMOD_6 = FieldValue<TIMER_A0_TAxCCTL2_OUTMOD_Values, BaseType, 6U> ;
  using OUTMOD_7 = FieldValue<TIMER_A0_TAxCCTL2_OUTMOD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_CAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAP_0 = FieldValue<TIMER_A0_TAxCCTL2_CAP_Values, BaseType, 0U> ;
  using CAP_1 = FieldValue<TIMER_A0_TAxCCTL2_CAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_SCCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL2_SCCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL2_SCCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_SCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SCS_0 = FieldValue<TIMER_A0_TAxCCTL2_SCS_Values, BaseType, 0U> ;
  using SCS_1 = FieldValue<TIMER_A0_TAxCCTL2_SCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_CCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIS_0 = FieldValue<TIMER_A0_TAxCCTL2_CCIS_Values, BaseType, 0U> ;
  using CCIS_1 = FieldValue<TIMER_A0_TAxCCTL2_CCIS_Values, BaseType, 1U> ;
  using CCIS_2 = FieldValue<TIMER_A0_TAxCCTL2_CCIS_Values, BaseType, 2U> ;
  using CCIS_3 = FieldValue<TIMER_A0_TAxCCTL2_CCIS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL2_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CM_0 = FieldValue<TIMER_A0_TAxCCTL2_CM_Values, BaseType, 0U> ;
  using CM_1 = FieldValue<TIMER_A0_TAxCCTL2_CM_Values, BaseType, 1U> ;
  using CM_2 = FieldValue<TIMER_A0_TAxCCTL2_CM_Values, BaseType, 2U> ;
  using CM_3 = FieldValue<TIMER_A0_TAxCCTL2_CM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_CCIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIFG_0 = FieldValue<TIMER_A0_TAxCCTL3_CCIFG_Values, BaseType, 0U> ;
  using CCIFG_1 = FieldValue<TIMER_A0_TAxCCTL3_CCIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_COV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using COV_0 = FieldValue<TIMER_A0_TAxCCTL3_COV_Values, BaseType, 0U> ;
  using COV_1 = FieldValue<TIMER_A0_TAxCCTL3_COV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUT_0 = FieldValue<TIMER_A0_TAxCCTL3_OUT_Values, BaseType, 0U> ;
  using OUT_1 = FieldValue<TIMER_A0_TAxCCTL3_OUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_CCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL3_CCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL3_CCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_CCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIE_0 = FieldValue<TIMER_A0_TAxCCTL3_CCIE_Values, BaseType, 0U> ;
  using CCIE_1 = FieldValue<TIMER_A0_TAxCCTL3_CCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_OUTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUTMOD_0 = FieldValue<TIMER_A0_TAxCCTL3_OUTMOD_Values, BaseType, 0U> ;
  using OUTMOD_1 = FieldValue<TIMER_A0_TAxCCTL3_OUTMOD_Values, BaseType, 1U> ;
  using OUTMOD_2 = FieldValue<TIMER_A0_TAxCCTL3_OUTMOD_Values, BaseType, 2U> ;
  using OUTMOD_3 = FieldValue<TIMER_A0_TAxCCTL3_OUTMOD_Values, BaseType, 3U> ;
  using OUTMOD_4 = FieldValue<TIMER_A0_TAxCCTL3_OUTMOD_Values, BaseType, 4U> ;
  using OUTMOD_5 = FieldValue<TIMER_A0_TAxCCTL3_OUTMOD_Values, BaseType, 5U> ;
  using OUTMOD_6 = FieldValue<TIMER_A0_TAxCCTL3_OUTMOD_Values, BaseType, 6U> ;
  using OUTMOD_7 = FieldValue<TIMER_A0_TAxCCTL3_OUTMOD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_CAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAP_0 = FieldValue<TIMER_A0_TAxCCTL3_CAP_Values, BaseType, 0U> ;
  using CAP_1 = FieldValue<TIMER_A0_TAxCCTL3_CAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_SCCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL3_SCCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL3_SCCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_SCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SCS_0 = FieldValue<TIMER_A0_TAxCCTL3_SCS_Values, BaseType, 0U> ;
  using SCS_1 = FieldValue<TIMER_A0_TAxCCTL3_SCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_CCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIS_0 = FieldValue<TIMER_A0_TAxCCTL3_CCIS_Values, BaseType, 0U> ;
  using CCIS_1 = FieldValue<TIMER_A0_TAxCCTL3_CCIS_Values, BaseType, 1U> ;
  using CCIS_2 = FieldValue<TIMER_A0_TAxCCTL3_CCIS_Values, BaseType, 2U> ;
  using CCIS_3 = FieldValue<TIMER_A0_TAxCCTL3_CCIS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL3_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CM_0 = FieldValue<TIMER_A0_TAxCCTL3_CM_Values, BaseType, 0U> ;
  using CM_1 = FieldValue<TIMER_A0_TAxCCTL3_CM_Values, BaseType, 1U> ;
  using CM_2 = FieldValue<TIMER_A0_TAxCCTL3_CM_Values, BaseType, 2U> ;
  using CM_3 = FieldValue<TIMER_A0_TAxCCTL3_CM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_CCIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIFG_0 = FieldValue<TIMER_A0_TAxCCTL4_CCIFG_Values, BaseType, 0U> ;
  using CCIFG_1 = FieldValue<TIMER_A0_TAxCCTL4_CCIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_COV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using COV_0 = FieldValue<TIMER_A0_TAxCCTL4_COV_Values, BaseType, 0U> ;
  using COV_1 = FieldValue<TIMER_A0_TAxCCTL4_COV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUT_0 = FieldValue<TIMER_A0_TAxCCTL4_OUT_Values, BaseType, 0U> ;
  using OUT_1 = FieldValue<TIMER_A0_TAxCCTL4_OUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_CCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL4_CCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL4_CCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_CCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIE_0 = FieldValue<TIMER_A0_TAxCCTL4_CCIE_Values, BaseType, 0U> ;
  using CCIE_1 = FieldValue<TIMER_A0_TAxCCTL4_CCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_OUTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using OUTMOD_0 = FieldValue<TIMER_A0_TAxCCTL4_OUTMOD_Values, BaseType, 0U> ;
  using OUTMOD_1 = FieldValue<TIMER_A0_TAxCCTL4_OUTMOD_Values, BaseType, 1U> ;
  using OUTMOD_2 = FieldValue<TIMER_A0_TAxCCTL4_OUTMOD_Values, BaseType, 2U> ;
  using OUTMOD_3 = FieldValue<TIMER_A0_TAxCCTL4_OUTMOD_Values, BaseType, 3U> ;
  using OUTMOD_4 = FieldValue<TIMER_A0_TAxCCTL4_OUTMOD_Values, BaseType, 4U> ;
  using OUTMOD_5 = FieldValue<TIMER_A0_TAxCCTL4_OUTMOD_Values, BaseType, 5U> ;
  using OUTMOD_6 = FieldValue<TIMER_A0_TAxCCTL4_OUTMOD_Values, BaseType, 6U> ;
  using OUTMOD_7 = FieldValue<TIMER_A0_TAxCCTL4_OUTMOD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_CAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAP_0 = FieldValue<TIMER_A0_TAxCCTL4_CAP_Values, BaseType, 0U> ;
  using CAP_1 = FieldValue<TIMER_A0_TAxCCTL4_CAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_SCCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER_A0_TAxCCTL4_SCCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER_A0_TAxCCTL4_SCCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_SCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SCS_0 = FieldValue<TIMER_A0_TAxCCTL4_SCS_Values, BaseType, 0U> ;
  using SCS_1 = FieldValue<TIMER_A0_TAxCCTL4_SCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_CCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CCIS_0 = FieldValue<TIMER_A0_TAxCCTL4_CCIS_Values, BaseType, 0U> ;
  using CCIS_1 = FieldValue<TIMER_A0_TAxCCTL4_CCIS_Values, BaseType, 1U> ;
  using CCIS_2 = FieldValue<TIMER_A0_TAxCCTL4_CCIS_Values, BaseType, 2U> ;
  using CCIS_3 = FieldValue<TIMER_A0_TAxCCTL4_CCIS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCTL4_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CM_0 = FieldValue<TIMER_A0_TAxCCTL4_CM_Values, BaseType, 0U> ;
  using CM_1 = FieldValue<TIMER_A0_TAxCCTL4_CM_Values, BaseType, 1U> ;
  using CM_2 = FieldValue<TIMER_A0_TAxCCTL4_CM_Values, BaseType, 2U> ;
  using CM_3 = FieldValue<TIMER_A0_TAxCCTL4_CM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCR0_TAxR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCR1_TAxR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCR2_TAxR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCR3_TAxR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER_A0_TAxCCR4_TAxR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIMERA0ENUMS_HPP)
