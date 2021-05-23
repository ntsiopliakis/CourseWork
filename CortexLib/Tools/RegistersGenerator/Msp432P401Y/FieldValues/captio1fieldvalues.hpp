/*******************************************************************************
* Filename      : captio1fieldvalues.hpp
*
* Details       : Enumerations related with CAPTIO1 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(CAPTIO1ENUMS_HPP)
#define CAPTIO1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAPTIOPISELx_0 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values, BaseType, 0U> ;
  using CAPTIOPISELx_1 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values, BaseType, 1U> ;
  using CAPTIOPISELx_2 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values, BaseType, 2U> ;
  using CAPTIOPISELx_3 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values, BaseType, 3U> ;
  using CAPTIOPISELx_4 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values, BaseType, 4U> ;
  using CAPTIOPISELx_5 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values, BaseType, 5U> ;
  using CAPTIOPISELx_6 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values, BaseType, 6U> ;
  using CAPTIOPISELx_7 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAPTIOPOSELx_0 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 0U> ;
  using CAPTIOPOSELx_1 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 1U> ;
  using CAPTIOPOSELx_2 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 2U> ;
  using CAPTIOPOSELx_3 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 3U> ;
  using CAPTIOPOSELx_4 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 4U> ;
  using CAPTIOPOSELx_5 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 5U> ;
  using CAPTIOPOSELx_6 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 6U> ;
  using CAPTIOPOSELx_7 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 7U> ;
  using CAPTIOPOSELx_8 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 8U> ;
  using CAPTIOPOSELx_9 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 9U> ;
  using CAPTIOPOSELx_10 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 10U> ;
  using CAPTIOPOSELx_11 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 11U> ;
  using CAPTIOPOSELx_12 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 12U> ;
  using CAPTIOPOSELx_13 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 13U> ;
  using CAPTIOPOSELx_14 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 14U> ;
  using CAPTIOPOSELx_15 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAPTIO1_CAPTIOxCTL_CAPTIOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAPTIOEN_0 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOEN_Values, BaseType, 0U> ;
  using CAPTIOEN_1 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CAPTIO1_CAPTIOxCTL_CAPTIOSTATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CAPTIOSTATE_0 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOSTATE_Values, BaseType, 0U> ;
  using CAPTIOSTATE_1 = FieldValue<CAPTIO1_CAPTIOxCTL_CAPTIOSTATE_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(CAPTIO1ENUMS_HPP)
