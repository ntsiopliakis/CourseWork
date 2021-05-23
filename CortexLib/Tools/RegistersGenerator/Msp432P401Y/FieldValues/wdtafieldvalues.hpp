/*******************************************************************************
* Filename      : wdtafieldvalues.hpp
*
* Details       : Enumerations related with WDT_A peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(WDTAENUMS_HPP)
#define WDTAENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTIS_0 = FieldValue<WDT_A_WDTCTL_WDTIS_Values, BaseType, 0U> ;
  using WDTIS_1 = FieldValue<WDT_A_WDTCTL_WDTIS_Values, BaseType, 1U> ;
  using WDTIS_2 = FieldValue<WDT_A_WDTCTL_WDTIS_Values, BaseType, 2U> ;
  using WDTIS_3 = FieldValue<WDT_A_WDTCTL_WDTIS_Values, BaseType, 3U> ;
  using WDTIS_4 = FieldValue<WDT_A_WDTCTL_WDTIS_Values, BaseType, 4U> ;
  using WDTIS_5 = FieldValue<WDT_A_WDTCTL_WDTIS_Values, BaseType, 5U> ;
  using WDTIS_6 = FieldValue<WDT_A_WDTCTL_WDTIS_Values, BaseType, 6U> ;
  using WDTIS_7 = FieldValue<WDT_A_WDTCTL_WDTIS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTCNTCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTCNTCL_0 = FieldValue<WDT_A_WDTCTL_WDTCNTCL_Values, BaseType, 0U> ;
  using WDTCNTCL_1 = FieldValue<WDT_A_WDTCTL_WDTCNTCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTTMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTTMSEL_0 = FieldValue<WDT_A_WDTCTL_WDTTMSEL_Values, BaseType, 0U> ;
  using WDTTMSEL_1 = FieldValue<WDT_A_WDTCTL_WDTTMSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTSSEL_0 = FieldValue<WDT_A_WDTCTL_WDTSSEL_Values, BaseType, 0U> ;
  using WDTSSEL_1 = FieldValue<WDT_A_WDTCTL_WDTSSEL_Values, BaseType, 1U> ;
  using WDTSSEL_2 = FieldValue<WDT_A_WDTCTL_WDTSSEL_Values, BaseType, 2U> ;
  using WDTSSEL_3 = FieldValue<WDT_A_WDTCTL_WDTSSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WDTHOLD_0 = FieldValue<WDT_A_WDTCTL_WDTHOLD_Values, BaseType, 0U> ;
  using WDTHOLD_1 = FieldValue<WDT_A_WDTCTL_WDTHOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WDT_A_WDTCTL_WDTPW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(WDTAENUMS_HPP)
