/*******************************************************************************
* Filename      : systemcontrolspacefieldvalues.hpp
*
* Details       : Enumerations related with SystemControlSpace peripheral. This
*                 header file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(SYSTEMCONTROLSPACEENUMS_HPP)
#define SYSTEMCONTROLSPACEENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_ASPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_ASPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_ASPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_LSPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_LSPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_LSPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_MONRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_MONRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_MONRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_BFRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_BFRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_BFRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_MMRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_MMRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_MMRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_HFRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_HFRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_HFRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_THREAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_THREAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_THREAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_USER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_USER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_USER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCCR_LSPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPCCR_LSPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPCCR_LSPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPCAR_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPDSCR_AHP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPDSCR_AHP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPDSCR_AHP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPDSCR_DN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPDSCR_DN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPDSCR_DN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPDSCR_FZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPDSCR_FZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPDSCR_FZ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_FPDSCR_RMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_FPDSCR_RMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_FPDSCR_RMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_FPDSCR_RMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_FPDSCR_RMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR0_FP_ROUNDING_MODES_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR0_SHORT_VECTORS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR0_SHORT_VECTORS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR0_SQUARE_ROOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR0_SQUARE_ROOT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR0_DIVIDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR0_DIVIDE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR0_FP_EXCEPTION_TRAPPING_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR0_DOUBLE_PRECISION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR0_SINGLE_PRECISION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR0_SINGLE_PRECISION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR0_A_SIMD_REGISTERS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR1_FP_FUSED_MAC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR1_FP_FUSED_MAC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR1_FP_HPFP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR1_FP_HPFP_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR1_D_NAN_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR1_D_NAN_MODE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MVFR1_FTZ_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MVFR1_FTZ_MODE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_TYPE_SEPARATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MPU_TYPE_SEPARATE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MPU_TYPE_SEPARATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_TYPE_DREGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_TYPE_IREGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_CTRL_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_MPU_CTRL_ENABLE_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_MPU_CTRL_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_CTRL_HFNMIENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MPU_CTRL_HFNMIENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MPU_CTRL_HFNMIENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_CTRL_PRIVDEFENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MPU_CTRL_PRIVDEFENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MPU_CTRL_PRIVDEFENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RNR_REGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RBAR_REGION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_MPU_RBAR_REGION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RBAR_VALID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_MPU_RBAR_VALID_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_MPU_RBAR_VALID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RBAR_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MPU_RASR_ENABLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MPU_RASR_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00100 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 4U> ;
  using en_0b00101 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 5U> ;
  using en_0b00110 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 6U> ;
  using en_0b00111 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 7U> ;
  using en_0b01000 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 8U> ;
  using en_0b01001 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 9U> ;
  using en_0b01010 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 10U> ;
  using en_0b01011 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 11U> ;
  using en_0b01100 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 12U> ;
  using en_0b01101 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 13U> ;
  using en_0b01110 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 14U> ;
  using en_0b01111 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 15U> ;
  using en_0b10000 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 16U> ;
  using en_0b10001 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 17U> ;
  using en_0b10010 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 18U> ;
  using en_0b10011 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 19U> ;
  using en_0b10100 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 20U> ;
  using en_0b10101 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 21U> ;
  using en_0b10110 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 22U> ;
  using en_0b10111 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 23U> ;
  using en_0b11000 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 24U> ;
  using en_0b11001 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 25U> ;
  using en_0b11010 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 26U> ;
  using en_0b11011 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 27U> ;
  using en_0b11100 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 28U> ;
  using en_0b11101 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 29U> ;
  using en_0b11110 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 30U> ;
  using en_0b11111 = FieldValue<SystemControlSpace_MPU_RASR_SIZE_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_SRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_B_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_MPU_RASR_B_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_MPU_RASR_B_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_MPU_RASR_C_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_MPU_RASR_C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_MPU_RASR_S_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_MPU_RASR_S_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_TEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_MPU_RASR_TEX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_MPU_RASR_TEX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_MPU_RASR_TEX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_MPU_RASR_TEX_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_MPU_RASR_TEX_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_MPU_RASR_TEX_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_MPU_RASR_TEX_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_MPU_RASR_TEX_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_AP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b000 = FieldValue<SystemControlSpace_MPU_RASR_AP_Values, BaseType, 0U> ;
  using en_0b001 = FieldValue<SystemControlSpace_MPU_RASR_AP_Values, BaseType, 1U> ;
  using en_0b010 = FieldValue<SystemControlSpace_MPU_RASR_AP_Values, BaseType, 2U> ;
  using en_0b011 = FieldValue<SystemControlSpace_MPU_RASR_AP_Values, BaseType, 3U> ;
  using en_0b101 = FieldValue<SystemControlSpace_MPU_RASR_AP_Values, BaseType, 5U> ;
  using en_0b110 = FieldValue<SystemControlSpace_MPU_RASR_AP_Values, BaseType, 6U> ;
  using en_0b111 = FieldValue<SystemControlSpace_MPU_RASR_AP_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MPU_RASR_XN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_MPU_RASR_XN_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_MPU_RASR_XN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_C_DEBUGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_C_DEBUGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_C_DEBUGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_C_HALT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_C_HALT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_C_HALT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_C_STEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_C_STEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_C_STEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_C_MASKINTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_C_MASKINTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_C_MASKINTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_C_SNAPSTALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_C_SNAPSTALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_C_SNAPSTALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_S_REGRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_S_REGRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_S_REGRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_S_HALT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_S_HALT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_S_HALT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_S_SLEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_S_SLEEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_S_SLEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_S_LOCKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_S_LOCKUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_S_LOCKUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_S_RETIRE_ST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_S_RETIRE_ST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_S_RETIRE_ST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DHCSR_S_RESET_ST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DHCSR_S_RESET_ST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DHCSR_S_RESET_ST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DCRSR_REGSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00000 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 0U> ;
  using en_0b00001 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 1U> ;
  using en_0b00010 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 2U> ;
  using en_0b00011 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 3U> ;
  using en_0b00100 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 4U> ;
  using en_0b00101 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 5U> ;
  using en_0b00110 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 6U> ;
  using en_0b00111 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 7U> ;
  using en_0b01000 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 8U> ;
  using en_0b01001 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 9U> ;
  using en_0b01010 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 10U> ;
  using en_0b01011 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 11U> ;
  using en_0b01100 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 12U> ;
  using en_0b01101 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 13U> ;
  using en_0b01110 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 14U> ;
  using en_0b01111 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 15U> ;
  using en_0b10000 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 16U> ;
  using en_0b10001 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 17U> ;
  using en_0b10010 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 18U> ;
  using en_0b10100 = FieldValue<SystemControlSpace_DCRSR_REGSEL_Values, BaseType, 20U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DCRSR_REGWNR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DCRSR_REGWNR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DCRSR_REGWNR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_VC_CORERESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_VC_CORERESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_VC_CORERESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_VC_MMERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_VC_MMERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_VC_MMERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_VC_NOCPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_VC_NOCPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_VC_NOCPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_VC_CHKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_VC_CHKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_VC_CHKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_VC_STATERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_VC_STATERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_VC_STATERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_VC_BUSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_VC_BUSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_VC_BUSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_VC_INTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_VC_INTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_VC_INTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_VC_HARDERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_VC_HARDERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_VC_HARDERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_MON_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_MON_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_MON_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_MON_PEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_MON_PEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_MON_PEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_MON_STEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_MON_STEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_MON_STEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_MON_REQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_DEMCR_MON_REQ_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_DEMCR_MON_REQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DEMCR_TRCENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_DEMCR_TRCENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_DEMCR_TRCENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICTR_INTLINESNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 15U> ;
  using Value16 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 16U> ;
  using Value17 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 17U> ;
  using Value18 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 18U> ;
  using Value19 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 19U> ;
  using Value20 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 20U> ;
  using Value21 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 21U> ;
  using Value22 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 22U> ;
  using Value23 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 23U> ;
  using Value24 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 24U> ;
  using Value25 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 25U> ;
  using Value26 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 26U> ;
  using Value27 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 27U> ;
  using Value28 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 28U> ;
  using Value29 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 29U> ;
  using Value30 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 30U> ;
  using Value31 = FieldValue<SystemControlSpace_ICTR_INTLINESNUM_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ACTLR_DISMCYCINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_ACTLR_DISMCYCINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_ACTLR_DISMCYCINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ACTLR_DISDEFWBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_ACTLR_DISDEFWBUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_ACTLR_DISDEFWBUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ACTLR_DISFOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_ACTLR_DISFOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_ACTLR_DISFOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ACTLR_DISFPCA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_ACTLR_DISFPCA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_ACTLR_DISFPCA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ACTLR_DISOOFP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_ACTLR_DISOOFP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_ACTLR_DISOOFP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISER0_SETENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISER1_SETENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICER0_CLRENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICER1_CLRENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISPR0_SETPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISPR1_SETPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICPR0_CLRPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICPR1_CLRPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IABR0_ACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IABR1_ACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR0_PRI_0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR0_PRI_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR0_PRI_2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR0_PRI_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR1_PRI_4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR1_PRI_5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR1_PRI_6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR1_PRI_7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR2_PRI_8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR2_PRI_9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR2_PRI_10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR2_PRI_11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR3_PRI_12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR3_PRI_13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR3_PRI_14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR3_PRI_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR4_PRI_16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR4_PRI_17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR4_PRI_18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR4_PRI_19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR5_PRI_20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR5_PRI_21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR5_PRI_22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR5_PRI_23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR6_PRI_24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR6_PRI_25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR6_PRI_26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR6_PRI_27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR7_PRI_28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR7_PRI_29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR7_PRI_30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR7_PRI_31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR8_PRI_32_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR8_PRI_33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR8_PRI_34_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR8_PRI_35_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR9_PRI_36_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR9_PRI_37_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR9_PRI_38_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR9_PRI_39_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR10_PRI_40_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR10_PRI_41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR10_PRI_42_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR10_PRI_43_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR11_PRI_44_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR11_PRI_45_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR11_PRI_46_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR11_PRI_47_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR12_PRI_48_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR12_PRI_49_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR12_PRI_50_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR12_PRI_51_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR13_PRI_52_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR13_PRI_53_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR13_PRI_54_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR13_PRI_55_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR14_PRI_56_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR14_PRI_57_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR14_PRI_58_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR14_PRI_59_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR15_PRI_60_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR15_PRI_61_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR15_PRI_62_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_IPR15_PRI_63_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STIR_INTID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STCSR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using First = FieldValue<SystemControlSpace_STCSR_ENABLE_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STCSR_TICKINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VAL_0 = FieldValue<SystemControlSpace_STCSR_TICKINT_Values, BaseType, 0U> ;
  using VAL_1 = FieldValue<SystemControlSpace_STCSR_TICKINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STCSR_CLKSOURCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VAL_0 = FieldValue<SystemControlSpace_STCSR_CLKSOURCE_Values, BaseType, 0U> ;
  using VAL_1 = FieldValue<SystemControlSpace_STCSR_CLKSOURCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STCSR_COUNTFLAG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_STCSR_COUNTFLAG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_STCSR_COUNTFLAG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STRVR_RELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STCVR_CURRENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STCR_TENMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STCR_SKEW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_STCR_SKEW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_STCR_SKEW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_STCR_NOREF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_STCR_NOREF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_STCR_NOREF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CPUID_REVISION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_CPUID_REVISION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CPUID_PARTNO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CPUID_CONSTANT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_CPUID_CONSTANT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CPUID_VARIANT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SystemControlSpace_CPUID_VARIANT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CPUID_IMPLEMENTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_VECTACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_RETTOBASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_ICSR_RETTOBASE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_ICSR_RETTOBASE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_VECTPENDING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_ISRPENDING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_ICSR_ISRPENDING_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_ICSR_ISRPENDING_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_ISRPREEMPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_ICSR_ISRPREEMPT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_ICSR_ISRPREEMPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_PENDSTCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_ICSR_PENDSTCLR_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_ICSR_PENDSTCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_PENDSTSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_ICSR_PENDSTSET_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_ICSR_PENDSTSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_PENDSVCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_ICSR_PENDSVCLR_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_ICSR_PENDSVCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_PENDSVSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_ICSR_PENDSVSET_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_ICSR_PENDSVSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ICSR_NMIPENDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_ICSR_NMIPENDSET_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_ICSR_NMIPENDSET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_VTOR_TBLOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_VTOR_TBLBASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_VTOR_TBLBASE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_VTOR_TBLBASE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_AIRCR_VECTRESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_AIRCR_VECTRESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_AIRCR_VECTRESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_AIRCR_VECTCLRACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_AIRCR_VECTCLRACTIVE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_AIRCR_VECTCLRACTIVE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_AIRCR_SYSRESETREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_AIRCR_SYSRESETREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_AIRCR_SYSRESETREQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_AIRCR_PRIGROUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_AIRCR_PRIGROUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_AIRCR_PRIGROUP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_AIRCR_PRIGROUP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_AIRCR_PRIGROUP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SystemControlSpace_AIRCR_PRIGROUP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SystemControlSpace_AIRCR_PRIGROUP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SystemControlSpace_AIRCR_PRIGROUP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SystemControlSpace_AIRCR_PRIGROUP_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_AIRCR_ENDIANESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_AIRCR_ENDIANESS_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_AIRCR_ENDIANESS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_AIRCR_VECTKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SCR_SLEEPONEXIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SCR_SLEEPONEXIT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SCR_SLEEPONEXIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SCR_SLEEPDEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SCR_SLEEPDEEP_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SCR_SLEEPDEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SCR_SEVONPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_SCR_SEVONPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_SCR_SEVONPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CCR_NONBASETHREDENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CCR_NONBASETHREDENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CCR_NONBASETHREDENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CCR_USERSETMPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CCR_USERSETMPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CCR_USERSETMPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CCR_UNALIGN_TRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CCR_UNALIGN_TRP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CCR_UNALIGN_TRP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CCR_DIV_0_TRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CCR_DIV_0_TRP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CCR_DIV_0_TRP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CCR_BFHFNMIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CCR_BFHFNMIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CCR_BFHFNMIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CCR_STKALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_CCR_STKALIGN_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_CCR_STKALIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR1_PRI_4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR1_PRI_5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR1_PRI_6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR1_PRI_7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR2_PRI_8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR2_PRI_9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR2_PRI_10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR2_PRI_11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR3_PRI_12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR3_PRI_13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR3_PRI_14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHPR3_PRI_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_MEMFAULTACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_MEMFAULTACT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_MEMFAULTACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_BUSFAULTACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_BUSFAULTACT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_BUSFAULTACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_USGFAULTACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_USGFAULTACT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_USGFAULTACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_SVCALLACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_SVCALLACT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_SVCALLACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_MONITORACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_MONITORACT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_MONITORACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_PENDSVACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_PENDSVACT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_PENDSVACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_SYSTICKACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_SYSTICKACT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_SYSTICKACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_USGFAULTPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_USGFAULTPENDED_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_USGFAULTPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_MEMFAULTPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_MEMFAULTPENDED_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_MEMFAULTPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_BUSFAULTPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_BUSFAULTPENDED_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_BUSFAULTPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_SVCALLPENDED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_SVCALLPENDED_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_SVCALLPENDED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_MEMFAULTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_MEMFAULTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_MEMFAULTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_BUSFAULTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_BUSFAULTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_BUSFAULTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_SHCSR_USGFAULTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_SHCSR_USGFAULTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_SHCSR_USGFAULTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_IACCVIOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_IACCVIOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_IACCVIOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_DACCVIOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_DACCVIOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_DACCVIOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_MUNSTKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_MUNSTKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_MUNSTKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_MSTKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_MSTKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_MSTKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_MMARVALID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_MMARVALID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_MMARVALID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_IBUSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_IBUSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_IBUSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_PRECISERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_PRECISERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_PRECISERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_IMPRECISERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_IMPRECISERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_IMPRECISERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_UNSTKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_UNSTKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_UNSTKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_STKERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_STKERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_STKERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_BFARVALID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_BFARVALID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_BFARVALID_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_UNDEFINSTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_UNDEFINSTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_UNDEFINSTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_INVSTATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_INVSTATE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_INVSTATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_INVPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_INVPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_INVPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_NOCP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_NOCP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_NOCP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_UNALIGNED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_UNALIGNED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_UNALIGNED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_DIVBYZERO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_DIVBYZERO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_DIVBYZERO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_MLSPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_MLSPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_MLSPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CFSR_LSPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CFSR_LSPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CFSR_LSPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_HFSR_VECTTBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_HFSR_VECTTBL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_HFSR_VECTTBL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_HFSR_FORCED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_HFSR_FORCED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_HFSR_FORCED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_HFSR_DEBUGEVT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_HFSR_DEBUGEVT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_HFSR_DEBUGEVT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DFSR_HALTED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_DFSR_HALTED_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_DFSR_HALTED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DFSR_BKPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_DFSR_BKPT_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_DFSR_BKPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DFSR_DWTTRAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_DFSR_DWTTRAP_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_DFSR_DWTTRAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DFSR_VCATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_DFSR_VCATCH_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_DFSR_VCATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DFSR_EXTERNAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<SystemControlSpace_DFSR_EXTERNAL_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<SystemControlSpace_DFSR_EXTERNAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MMFAR_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_BFAR_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_AFSR_IMPDEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_PFR0_STATE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_PFR0_STATE0_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_PFR0_STATE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_PFR0_STATE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_PFR0_STATE1_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_PFR0_STATE1_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_PFR0_STATE1_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_PFR0_STATE1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_PFR1_MICROCONTROLLER_PROGRAMMERS_MODEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_PFR1_MICROCONTROLLER_PROGRAMMERS_MODEL_Values, BaseType, 0U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_PFR1_MICROCONTROLLER_PROGRAMMERS_MODEL_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_DFR0_MICROCONTROLLER_DEBUG_MODEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_DFR0_MICROCONTROLLER_DEBUG_MODEL_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_DFR0_MICROCONTROLLER_DEBUG_MODEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MMFR0_PMSA_SUPPORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_MMFR0_PMSA_SUPPORT_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_MMFR0_PMSA_SUPPORT_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_MMFR0_PMSA_SUPPORT_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_MMFR0_PMSA_SUPPORT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MMFR0_CACHE_COHERENCE_SUPPORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_MMFR0_CACHE_COHERENCE_SUPPORT_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_MMFR0_CACHE_COHERENCE_SUPPORT_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_MMFR0_CACHE_COHERENCE_SUPPORT_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_MMFR0_CACHE_COHERENCE_SUPPORT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MMFR0_OUTER_NON_SHARABLE_SUPPORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_MMFR0_OUTER_NON_SHARABLE_SUPPORT_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_MMFR0_OUTER_NON_SHARABLE_SUPPORT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MMFR0_AUXILIARY_REGISTER_SUPPORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_MMFR0_AUXILIARY_REGISTER_SUPPORT_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_MMFR0_AUXILIARY_REGISTER_SUPPORT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_MMFR2_WAIT_FOR_INTERRUPT_STALLING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_MMFR2_WAIT_FOR_INTERRUPT_STALLING_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_MMFR2_WAIT_FOR_INTERRUPT_STALLING_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR0_BITCOUNT_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR0_BITCOUNT_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR0_BITCOUNT_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR0_BITFIELD_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR0_BITFIELD_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR0_BITFIELD_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR0_CMPBRANCH_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR0_CMPBRANCH_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR0_CMPBRANCH_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR0_COPROC_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR0_COPROC_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR0_COPROC_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR0_COPROC_INSTRS_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_ISAR0_COPROC_INSTRS_Values, BaseType, 3U> ;
  using en_0b0100 = FieldValue<SystemControlSpace_ISAR0_COPROC_INSTRS_Values, BaseType, 4U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR0_DEBUG_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR0_DEBUG_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR0_DEBUG_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR0_DIVIDE_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR0_DIVIDE_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR0_DIVIDE_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR1_EXTEND_INSRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR1_EXTEND_INSRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR1_EXTEND_INSRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR1_EXTEND_INSRS_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR1_IFTHEN_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR1_IFTHEN_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR1_IFTHEN_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR1_IMMEDIATE_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR1_IMMEDIATE_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR1_IMMEDIATE_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR1_INTERWORK_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR1_INTERWORK_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR1_INTERWORK_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR1_INTERWORK_INSTRS_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_ISAR1_INTERWORK_INSTRS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR2_LOADSTORE_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR2_LOADSTORE_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR2_LOADSTORE_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR2_MEMHINT_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR2_MEMHINT_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR2_MEMHINT_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR2_MEMHINT_INSTRS_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_ISAR2_MEMHINT_INSTRS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR2_MULTIACCESSINT_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR2_MULTIACCESSINT_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR2_MULTIACCESSINT_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR2_MULTIACCESSINT_INSTRS_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR2_MULT_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR2_MULT_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR2_MULT_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR2_MULT_INSTRS_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR2_MULTS_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR2_MULTS_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR2_MULTS_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR2_MULTS_INSTRS_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_ISAR2_MULTS_INSTRS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR2_MULTU_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR2_MULTU_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR2_MULTU_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR2_MULTU_INSTRS_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR2_REVERSAL_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR2_REVERSAL_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR2_REVERSAL_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR2_REVERSAL_INSTRS_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR3_SATRUATE_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR3_SATRUATE_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR3_SATRUATE_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR3_SIMD_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR3_SIMD_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR3_SIMD_INSTRS_Values, BaseType, 1U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_ISAR3_SIMD_INSTRS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR3_SVC_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR3_SVC_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR3_SVC_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR3_SYNCPRIM_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR3_SYNCPRIM_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR3_SYNCPRIM_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR3_SYNCPRIM_INSTRS_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR3_TABBRANCH_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR3_TABBRANCH_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR3_TABBRANCH_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR3_THUMBCOPY_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR3_THUMBCOPY_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR3_THUMBCOPY_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR3_TRUENOP_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR3_TRUENOP_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR3_TRUENOP_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR4_UNPRIV_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR4_UNPRIV_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR4_UNPRIV_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR4_UNPRIV_INSTRS_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR4_WITHSHIFTS_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR4_WITHSHIFTS_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR4_WITHSHIFTS_INSTRS_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<SystemControlSpace_ISAR4_WITHSHIFTS_INSTRS_Values, BaseType, 3U> ;
  using en_0b0100 = FieldValue<SystemControlSpace_ISAR4_WITHSHIFTS_INSTRS_Values, BaseType, 4U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR4_WRITEBACK_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR4_WRITEBACK_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR4_WRITEBACK_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR4_BARRIER_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR4_BARRIER_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR4_BARRIER_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR4_SYNCPRIM_INSTRS_FRAC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR4_SYNCPRIM_INSTRS_FRAC_Values, BaseType, 0U> ;
  using en_0b0011 = FieldValue<SystemControlSpace_ISAR4_SYNCPRIM_INSTRS_FRAC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_ISAR4_PSR_M_INSTRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<SystemControlSpace_ISAR4_PSR_M_INSTRS_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<SystemControlSpace_ISAR4_PSR_M_INSTRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CPACR_CP11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CPACR_CP11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CPACR_CP11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_CPACR_CP11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_CPACR_CP11_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SystemControlSpace_CPACR_CP10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SystemControlSpace_CPACR_CP10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SystemControlSpace_CPACR_CP10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SystemControlSpace_CPACR_CP10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SystemControlSpace_CPACR_CP10_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(SYSTEMCONTROLSPACEENUMS_HPP)
