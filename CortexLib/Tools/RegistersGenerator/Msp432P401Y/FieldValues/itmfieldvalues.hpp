/*******************************************************************************
* Filename      : itmfieldvalues.hpp
*
* Details       : Enumerations related with ITM peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(ITMENUMS_HPP)
#define ITMENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TER_STIMENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TPR_PRIVMASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ITM_ITM_TPR_PRIVMASK_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TCR_ITMENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_TCR_ITMENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_TCR_ITMENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TCR_TSENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_TCR_TSENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_TCR_TSENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TCR_SYNCENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_TCR_SYNCENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_TCR_SYNCENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TCR_DWTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_TCR_DWTENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_TCR_DWTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TCR_SWOENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_TCR_SWOENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_TCR_SWOENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TCR_TSPRESCALE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b00 = FieldValue<ITM_ITM_TCR_TSPRESCALE_Values, BaseType, 0U> ;
  using en_0b01 = FieldValue<ITM_ITM_TCR_TSPRESCALE_Values, BaseType, 1U> ;
  using en_0b10 = FieldValue<ITM_ITM_TCR_TSPRESCALE_Values, BaseType, 2U> ;
  using en_0b11 = FieldValue<ITM_ITM_TCR_TSPRESCALE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TCR_ATBID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_TCR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_TCR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_TCR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_IWR_ATVALIDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<ITM_ITM_IWR_ATVALIDM_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<ITM_ITM_IWR_ATVALIDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_IMCR_INTEGRATION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_0b0 = FieldValue<ITM_ITM_IMCR_INTEGRATION_Values, BaseType, 0U> ;
  using en_0b1 = FieldValue<ITM_ITM_IMCR_INTEGRATION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_LAR_LOCK_ACCESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_LSR_PRESENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_LSR_PRESENT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_LSR_PRESENT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_LSR_ACCESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_LSR_ACCESS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_LSR_ACCESS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ITM_ITM_LSR_BYTEACC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ITM_ITM_LSR_BYTEACC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ITM_ITM_LSR_BYTEACC_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(ITMENUMS_HPP)
