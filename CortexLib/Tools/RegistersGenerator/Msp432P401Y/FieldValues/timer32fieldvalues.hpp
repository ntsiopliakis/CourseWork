/*******************************************************************************
* Filename      : timer32fieldvalues.hpp
*
* Details       : Enumerations related with TIMER32 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(TIMER32ENUMS_HPP)
#define TIMER32ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32LOAD1_LOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32VALUE1_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL1_ONESHOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ONESHOT_0 = FieldValue<TIMER32_T32CONTROL1_ONESHOT_Values, BaseType, 0U> ;
  using ONESHOT_1 = FieldValue<TIMER32_T32CONTROL1_ONESHOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL1_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SIZE_0 = FieldValue<TIMER32_T32CONTROL1_SIZE_Values, BaseType, 0U> ;
  using SIZE_1 = FieldValue<TIMER32_T32CONTROL1_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL1_PRESCALE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PRESCALE_0 = FieldValue<TIMER32_T32CONTROL1_PRESCALE_Values, BaseType, 0U> ;
  using PRESCALE_1 = FieldValue<TIMER32_T32CONTROL1_PRESCALE_Values, BaseType, 1U> ;
  using PRESCALE_2 = FieldValue<TIMER32_T32CONTROL1_PRESCALE_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL1_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using IE_0 = FieldValue<TIMER32_T32CONTROL1_IE_Values, BaseType, 0U> ;
  using IE_1 = FieldValue<TIMER32_T32CONTROL1_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL1_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODE_0 = FieldValue<TIMER32_T32CONTROL1_MODE_Values, BaseType, 0U> ;
  using MODE_1 = FieldValue<TIMER32_T32CONTROL1_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL1_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ENABLE_0 = FieldValue<TIMER32_T32CONTROL1_ENABLE_Values, BaseType, 0U> ;
  using ENABLE_1 = FieldValue<TIMER32_T32CONTROL1_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32INTCLR1_INTCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32RIS1_RAW_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER32_T32RIS1_RAW_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER32_T32RIS1_RAW_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32MIS1_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER32_T32MIS1_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER32_T32MIS1_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32BGLOAD1_BGLOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32LOAD2_LOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32VALUE2_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL2_ONESHOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ONESHOT_0 = FieldValue<TIMER32_T32CONTROL2_ONESHOT_Values, BaseType, 0U> ;
  using ONESHOT_1 = FieldValue<TIMER32_T32CONTROL2_ONESHOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL2_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SIZE_0 = FieldValue<TIMER32_T32CONTROL2_SIZE_Values, BaseType, 0U> ;
  using SIZE_1 = FieldValue<TIMER32_T32CONTROL2_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL2_PRESCALE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PRESCALE_0 = FieldValue<TIMER32_T32CONTROL2_PRESCALE_Values, BaseType, 0U> ;
  using PRESCALE_1 = FieldValue<TIMER32_T32CONTROL2_PRESCALE_Values, BaseType, 1U> ;
  using PRESCALE_2 = FieldValue<TIMER32_T32CONTROL2_PRESCALE_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL2_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using IE_0 = FieldValue<TIMER32_T32CONTROL2_IE_Values, BaseType, 0U> ;
  using IE_1 = FieldValue<TIMER32_T32CONTROL2_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL2_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODE_0 = FieldValue<TIMER32_T32CONTROL2_MODE_Values, BaseType, 0U> ;
  using MODE_1 = FieldValue<TIMER32_T32CONTROL2_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32CONTROL2_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ENABLE_0 = FieldValue<TIMER32_T32CONTROL2_ENABLE_Values, BaseType, 0U> ;
  using ENABLE_1 = FieldValue<TIMER32_T32CONTROL2_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32INTCLR2_INTCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32RIS2_RAW_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER32_T32RIS2_RAW_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER32_T32RIS2_RAW_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32MIS2_IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIMER32_T32MIS2_IFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIMER32_T32MIS2_IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIMER32_T32BGLOAD2_BGLOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIMER32ENUMS_HPP)
