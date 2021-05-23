/*******************************************************************************
* Filename      : fpbfieldvalues.hpp
*
* Details       : Enumerations related with FPB peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(FPBENUMS_HPP)
#define FPBENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_CTRL_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_CTRL_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPB_FP_CTRL_KEY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPB_FP_CTRL_KEY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_NUM_CODE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<FPB_FP_CTRL_NUM_CODE1_Values, BaseType, 0U> ;
  using en_0b0010 = FieldValue<FPB_FP_CTRL_NUM_CODE1_Values, BaseType, 2U> ;
  using en_0b0110 = FieldValue<FPB_FP_CTRL_NUM_CODE1_Values, BaseType, 6U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_NUM_LIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<FPB_FP_CTRL_NUM_LIT_Values, BaseType, 0U> ;
  using en_0b0010 = FieldValue<FPB_FP_CTRL_NUM_LIT_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_CTRL_NUM_CODE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FPB_FP_CTRL_NUM_CODE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FPB_FP_CTRL_NUM_CODE2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FPB_FP_CTRL_NUM_CODE2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FPB_FP_CTRL_NUM_CODE2_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_REMAP_REMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP0_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_COMP0_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_COMP0_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP0_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP0_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<FPB_FP_COMP0_REPLACE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<FPB_FP_COMP0_REPLACE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<FPB_FP_COMP0_REPLACE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<FPB_FP_COMP0_REPLACE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP1_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_COMP1_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_COMP1_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP1_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP1_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<FPB_FP_COMP1_REPLACE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<FPB_FP_COMP1_REPLACE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<FPB_FP_COMP1_REPLACE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<FPB_FP_COMP1_REPLACE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP2_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_COMP2_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_COMP2_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP2_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP2_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<FPB_FP_COMP2_REPLACE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<FPB_FP_COMP2_REPLACE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<FPB_FP_COMP2_REPLACE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<FPB_FP_COMP2_REPLACE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP3_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_COMP3_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_COMP3_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP3_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP3_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<FPB_FP_COMP3_REPLACE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<FPB_FP_COMP3_REPLACE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<FPB_FP_COMP3_REPLACE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<FPB_FP_COMP3_REPLACE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP4_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_COMP4_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_COMP4_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP4_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP4_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<FPB_FP_COMP4_REPLACE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<FPB_FP_COMP4_REPLACE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<FPB_FP_COMP4_REPLACE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<FPB_FP_COMP4_REPLACE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP5_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_COMP5_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_COMP5_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP5_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP5_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<FPB_FP_COMP5_REPLACE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<FPB_FP_COMP5_REPLACE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<FPB_FP_COMP5_REPLACE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<FPB_FP_COMP5_REPLACE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP6_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_COMP6_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_COMP6_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP6_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP6_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<FPB_FP_COMP6_REPLACE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<FPB_FP_COMP6_REPLACE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<FPB_FP_COMP6_REPLACE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<FPB_FP_COMP6_REPLACE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP7_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<FPB_FP_COMP7_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<FPB_FP_COMP7_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP7_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FPB_FP_COMP7_REPLACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<FPB_FP_COMP7_REPLACE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<FPB_FP_COMP7_REPLACE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<FPB_FP_COMP7_REPLACE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<FPB_FP_COMP7_REPLACE_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(FPBENUMS_HPP)
