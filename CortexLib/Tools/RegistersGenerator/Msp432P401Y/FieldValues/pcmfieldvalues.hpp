/*******************************************************************************
* Filename      : pcmfieldvalues.hpp
*
* Details       : Enumerations related with PCM peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(PCMENUMS_HPP)
#define PCMENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL0_AMR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AMR_0 = FieldValue<PCM_PCMCTL0_AMR_Values, BaseType, 0U> ;
  using AMR_1 = FieldValue<PCM_PCMCTL0_AMR_Values, BaseType, 1U> ;
  using AMR_4 = FieldValue<PCM_PCMCTL0_AMR_Values, BaseType, 4U> ;
  using AMR_5 = FieldValue<PCM_PCMCTL0_AMR_Values, BaseType, 5U> ;
  using AMR_8 = FieldValue<PCM_PCMCTL0_AMR_Values, BaseType, 8U> ;
  using AMR_9 = FieldValue<PCM_PCMCTL0_AMR_Values, BaseType, 9U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL0_LPMR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LPMR_0 = FieldValue<PCM_PCMCTL0_LPMR_Values, BaseType, 0U> ;
  using LPMR_10 = FieldValue<PCM_PCMCTL0_LPMR_Values, BaseType, 10U> ;
  using LPMR_12 = FieldValue<PCM_PCMCTL0_LPMR_Values, BaseType, 12U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL0_CPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL0_PCMKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL1_LOCKLPM5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LOCKLPM5_0 = FieldValue<PCM_PCMCTL1_LOCKLPM5_Values, BaseType, 0U> ;
  using LOCKLPM5_1 = FieldValue<PCM_PCMCTL1_LOCKLPM5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL1_LOCKBKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LOCKBKUP_0 = FieldValue<PCM_PCMCTL1_LOCKBKUP_Values, BaseType, 0U> ;
  using LOCKBKUP_1 = FieldValue<PCM_PCMCTL1_LOCKBKUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL1_FORCE_LPM_ENTRY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FORCE_LPM_ENTRY_0 = FieldValue<PCM_PCMCTL1_FORCE_LPM_ENTRY_Values, BaseType, 0U> ;
  using FORCE_LPM_ENTRY_1 = FieldValue<PCM_PCMCTL1_FORCE_LPM_ENTRY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL1_PMR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMCTL1_PMR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMCTL1_PMR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCTL1_PCMKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIE_LPM_INVALID_TR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LPM_INVALID_TR_IE_0 = FieldValue<PCM_PCMIE_LPM_INVALID_TR_IE_Values, BaseType, 0U> ;
  using LPM_INVALID_TR_IE_1 = FieldValue<PCM_PCMIE_LPM_INVALID_TR_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIE_LPM_INVALID_CLK_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LPM_INVALID_CLK_IE_0 = FieldValue<PCM_PCMIE_LPM_INVALID_CLK_IE_Values, BaseType, 0U> ;
  using LPM_INVALID_CLK_IE_1 = FieldValue<PCM_PCMIE_LPM_INVALID_CLK_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIE_AM_INVALID_TR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AM_INVALID_TR_IE_0 = FieldValue<PCM_PCMIE_AM_INVALID_TR_IE_Values, BaseType, 0U> ;
  using AM_INVALID_TR_IE_1 = FieldValue<PCM_PCMIE_AM_INVALID_TR_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIE_DCDC_ERROR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCDC_ERROR_IE_0 = FieldValue<PCM_PCMIE_DCDC_ERROR_IE_Values, BaseType, 0U> ;
  using DCDC_ERROR_IE_1 = FieldValue<PCM_PCMIE_DCDC_ERROR_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIFG_LPM_INVALID_TR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMIFG_LPM_INVALID_TR_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMIFG_LPM_INVALID_TR_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIFG_LPM_INVALID_CLK_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMIFG_LPM_INVALID_CLK_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMIFG_LPM_INVALID_CLK_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIFG_AM_INVALID_TR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMIFG_AM_INVALID_TR_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMIFG_AM_INVALID_TR_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMIFG_DCDC_ERROR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMIFG_DCDC_ERROR_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMIFG_DCDC_ERROR_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCLRIFG_CLR_LPM_INVALID_TR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMCLRIFG_CLR_LPM_INVALID_TR_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMCLRIFG_CLR_LPM_INVALID_TR_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCLRIFG_CLR_LPM_INVALID_CLK_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMCLRIFG_CLR_LPM_INVALID_CLK_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMCLRIFG_CLR_LPM_INVALID_CLK_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCLRIFG_CLR_AM_INVALID_TR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMCLRIFG_CLR_AM_INVALID_TR_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMCLRIFG_CLR_AM_INVALID_TR_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PCM_PCMCLRIFG_CLR_DCDC_ERROR_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PCM_PCMCLRIFG_CLR_DCDC_ERROR_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PCM_PCMCLRIFG_CLR_DCDC_ERROR_IFG_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(PCMENUMS_HPP)
