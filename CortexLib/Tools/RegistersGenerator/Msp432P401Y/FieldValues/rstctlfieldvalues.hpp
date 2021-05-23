/*******************************************************************************
* Filename      : rstctlfieldvalues.hpp
*
* Details       : Enumerations related with RSTCTL peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(RSTCTLENUMS_HPP)
#define RSTCTLENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_RESET_REQ_SOFT_REQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_RESET_REQ_SOFT_REQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_RESET_REQ_SOFT_REQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_RESET_REQ_HARD_REQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_RESET_REQ_HARD_REQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_RESET_REQ_HARD_REQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_RESET_REQ_RSTKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_STAT_SRC15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_STAT_SRC15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_CLR_SRC15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_CLR_SRC15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_HARDRESET_SET_SRC15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_HARDRESET_SET_SRC15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_STAT_SRC15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_STAT_SRC15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_CLR_SRC15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_CLR_SRC15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_SOFTRESET_SET_SRC15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_SOFTRESET_SET_SRC15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PSSRESET_STAT_SVSMH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PSSRESET_STAT_SVSMH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PSSRESET_STAT_SVSMH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PSSRESET_STAT_BGREF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PSSRESET_STAT_BGREF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PSSRESET_STAT_BGREF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PSSRESET_STAT_VCCDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PSSRESET_STAT_VCCDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PSSRESET_STAT_VCCDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PSSRESET_STAT_SVSL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PSSRESET_STAT_SVSL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PSSRESET_STAT_SVSL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PSSRESET_CLR_CLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PSSRESET_CLR_CLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PSSRESET_CLR_CLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PCMRESET_STAT_LPM35_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PCMRESET_STAT_LPM35_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PCMRESET_STAT_LPM35_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PCMRESET_STAT_LPM45_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PCMRESET_STAT_LPM45_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PCMRESET_STAT_LPM45_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PCMRESET_CLR_CLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PCMRESET_CLR_CLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PCMRESET_CLR_CLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PINRESET_STAT_RSTNMI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PINRESET_STAT_RSTNMI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PINRESET_STAT_RSTNMI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_PINRESET_CLR_CLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_PINRESET_CLR_CLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_PINRESET_CLR_CLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_REBOOTRESET_STAT_REBOOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_REBOOTRESET_STAT_REBOOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_REBOOTRESET_STAT_REBOOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_REBOOTRESET_CLR_CLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_REBOOTRESET_CLR_CLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_REBOOTRESET_CLR_CLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_CSRESET_STAT_DCOR_SHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_CSRESET_STAT_DCOR_SHT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_CSRESET_STAT_DCOR_SHT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RSTCTL_RSTCTL_CSRESET_CLR_CLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RSTCTL_RSTCTL_CSRESET_CLR_CLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RSTCTL_RSTCTL_CSRESET_CLR_CLR_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(RSTCTLENUMS_HPP)
