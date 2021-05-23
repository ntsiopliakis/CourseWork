/*******************************************************************************
* Filename      : dwtfieldvalues.hpp
*
* Details       : Enumerations related with DWT peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(DWTENUMS_HPP)
#define DWTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_CYCCNTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_CTRL_CYCCNTENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_CTRL_CYCCNTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_POSTPRESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_CTRL_POSTPRESET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_POSTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_CTRL_POSTCNT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_CYCTAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_CYCTAP_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_CYCTAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_SYNCTAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<DWT_DWT_CTRL_SYNCTAP_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<DWT_DWT_CTRL_SYNCTAP_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<DWT_DWT_CTRL_SYNCTAP_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<DWT_DWT_CTRL_SYNCTAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_PCSAMPLEENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_PCSAMPLEENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_PCSAMPLEENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_EXCTRCENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_EXCTRCENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_EXCTRCENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_CPIEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_CPIEVTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_CPIEVTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_EXCEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_EXCEVTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_EXCEVTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_SLEEPEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_SLEEPEVTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_SLEEPEVTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_LSUEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_LSUEVTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_LSUEVTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_FOLDEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_FOLDEVTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_FOLDEVTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_CYCEVTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_CTRL_CYCEVTENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_CTRL_CYCEVTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_NOPRFCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_CTRL_NOPRFCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_CTRL_NOPRFCNT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CTRL_NOCYCCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_CTRL_NOCYCCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_CTRL_NOCYCCNT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CYCCNT_CYCCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_CPICNT_CPICNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_EXCCNT_EXCCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_SLEEPCNT_SLEEPCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_LSUCNT_LSUCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FOLDCNT_FOLDCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_PCSR_EIASAMPLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_COMP0_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_MASK0_MASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_MASK0_MASK_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION0_FUNCTION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 3U> ;
  using en_0b0100 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 4U> ;
  using en_0b0101 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 5U> ;
  using en_0b0110 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 6U> ;
  using en_0b0111 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 7U> ;
  using en_0b1000 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 8U> ;
  using en_0b1001 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 9U> ;
  using en_0b1010 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 10U> ;
  using en_0b1011 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 11U> ;
  using en_0b1100 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 12U> ;
  using en_0b1101 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 13U> ;
  using en_0b1110 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 14U> ;
  using en_0b1111 = FieldValue<DWT_DWT_FUNCTION0_FUNCTION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION0_EMITRANGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION0_EMITRANGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION0_EMITRANGE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION0_DATAVMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION0_DATAVMATCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION0_DATAVMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION0_LNK1ENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_FUNCTION0_LNK1ENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_FUNCTION0_LNK1ENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION0_DATAVSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<DWT_DWT_FUNCTION0_DATAVSIZE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<DWT_DWT_FUNCTION0_DATAVSIZE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<DWT_DWT_FUNCTION0_DATAVSIZE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<DWT_DWT_FUNCTION0_DATAVSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION0_DATAVADDR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR0_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION0_DATAVADDR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_FUNCTION0_DATAVADDR1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION0_MATCHED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION0_MATCHED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION0_MATCHED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_COMP1_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_MASK1_MASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_MASK1_MASK_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_FUNCTION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 3U> ;
  using en_0b0100 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 4U> ;
  using en_0b0101 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 5U> ;
  using en_0b0110 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 6U> ;
  using en_0b0111 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 7U> ;
  using en_0b1000 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 8U> ;
  using en_0b1001 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 9U> ;
  using en_0b1010 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 10U> ;
  using en_0b1011 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 11U> ;
  using en_0b1100 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 12U> ;
  using en_0b1101 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 13U> ;
  using en_0b1110 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 14U> ;
  using en_0b1111 = FieldValue<DWT_DWT_FUNCTION1_FUNCTION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_EMITRANGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION1_EMITRANGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION1_EMITRANGE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_CYCMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION1_CYCMATCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION1_CYCMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_DATAVMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION1_DATAVMATCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION1_DATAVMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_LNK1ENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_FUNCTION1_LNK1ENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_FUNCTION1_LNK1ENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_DATAVSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<DWT_DWT_FUNCTION1_DATAVSIZE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<DWT_DWT_FUNCTION1_DATAVSIZE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<DWT_DWT_FUNCTION1_DATAVSIZE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<DWT_DWT_FUNCTION1_DATAVSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_DATAVADDR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR0_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_DATAVADDR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_FUNCTION1_DATAVADDR1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION1_MATCHED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION1_MATCHED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION1_MATCHED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_COMP2_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_MASK2_MASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_MASK2_MASK_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION2_FUNCTION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 3U> ;
  using en_0b0100 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 4U> ;
  using en_0b0101 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 5U> ;
  using en_0b0110 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 6U> ;
  using en_0b0111 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 7U> ;
  using en_0b1000 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 8U> ;
  using en_0b1001 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 9U> ;
  using en_0b1010 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 10U> ;
  using en_0b1011 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 11U> ;
  using en_0b1100 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 12U> ;
  using en_0b1101 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 13U> ;
  using en_0b1110 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 14U> ;
  using en_0b1111 = FieldValue<DWT_DWT_FUNCTION2_FUNCTION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION2_EMITRANGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION2_EMITRANGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION2_EMITRANGE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION2_DATAVMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION2_DATAVMATCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION2_DATAVMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION2_LNK1ENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_FUNCTION2_LNK1ENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_FUNCTION2_LNK1ENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION2_DATAVSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<DWT_DWT_FUNCTION2_DATAVSIZE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<DWT_DWT_FUNCTION2_DATAVSIZE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<DWT_DWT_FUNCTION2_DATAVSIZE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<DWT_DWT_FUNCTION2_DATAVSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION2_DATAVADDR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR0_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION2_DATAVADDR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_FUNCTION2_DATAVADDR1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION2_MATCHED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION2_MATCHED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION2_MATCHED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_COMP3_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_MASK3_MASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_MASK3_MASK_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION3_FUNCTION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0000 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 0U> ;
  using en_0b0001 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 1U> ;
  using en_0b0010 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 2U> ;
  using en_0b0011 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 3U> ;
  using en_0b0100 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 4U> ;
  using en_0b0101 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 5U> ;
  using en_0b0110 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 6U> ;
  using en_0b0111 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 7U> ;
  using en_0b1000 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 8U> ;
  using en_0b1001 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 9U> ;
  using en_0b1010 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 10U> ;
  using en_0b1011 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 11U> ;
  using en_0b1100 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 12U> ;
  using en_0b1101 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 13U> ;
  using en_0b1110 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 14U> ;
  using en_0b1111 = FieldValue<DWT_DWT_FUNCTION3_FUNCTION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION3_EMITRANGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION3_EMITRANGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION3_EMITRANGE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION3_DATAVMATCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION3_DATAVMATCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION3_DATAVMATCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION3_LNK1ENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<DWT_DWT_FUNCTION3_LNK1ENA_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<DWT_DWT_FUNCTION3_LNK1ENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION3_DATAVSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<DWT_DWT_FUNCTION3_DATAVSIZE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<DWT_DWT_FUNCTION3_DATAVSIZE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<DWT_DWT_FUNCTION3_DATAVSIZE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<DWT_DWT_FUNCTION3_DATAVSIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION3_DATAVADDR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR0_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION3_DATAVADDR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DWT_DWT_FUNCTION3_DATAVADDR1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DWT_DWT_FUNCTION3_MATCHED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DWT_DWT_FUNCTION3_MATCHED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DWT_DWT_FUNCTION3_MATCHED_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DWTENUMS_HPP)
