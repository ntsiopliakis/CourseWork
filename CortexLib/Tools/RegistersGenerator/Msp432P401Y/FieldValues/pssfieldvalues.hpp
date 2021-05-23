/*******************************************************************************
* Filename      : pssfieldvalues.hpp
*
* Details       : Enumerations related with PSS peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(PSSENUMS_HPP)
#define PSSENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSKEY_PSSKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL0_SVSMHOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHOFF_0 = FieldValue<PSS_PSSCTL0_SVSMHOFF_Values, BaseType, 0U> ;
  using SVSMHOFF_1 = FieldValue<PSS_PSSCTL0_SVSMHOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL0_SVSMHLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHLP_0 = FieldValue<PSS_PSSCTL0_SVSMHLP_Values, BaseType, 0U> ;
  using SVSMHLP_1 = FieldValue<PSS_PSSCTL0_SVSMHLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL0_SVSMHS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHS_0 = FieldValue<PSS_PSSCTL0_SVSMHS_Values, BaseType, 0U> ;
  using SVSMHS_1 = FieldValue<PSS_PSSCTL0_SVSMHS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL0_SVSMHTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PSS_PSSCTL0_SVSMHTH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PSS_PSSCTL0_SVSMHTH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PSS_PSSCTL0_SVSMHTH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PSS_PSSCTL0_SVSMHTH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PSS_PSSCTL0_SVSMHTH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PSS_PSSCTL0_SVSMHTH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PSS_PSSCTL0_SVSMHTH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PSS_PSSCTL0_SVSMHTH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL0_SVMHOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVMHOE_0 = FieldValue<PSS_PSSCTL0_SVMHOE_Values, BaseType, 0U> ;
  using SVMHOE_1 = FieldValue<PSS_PSSCTL0_SVMHOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL0_SVMHOUTPOLAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVMHOUTPOLAL_0 = FieldValue<PSS_PSSCTL0_SVMHOUTPOLAL_Values, BaseType, 0U> ;
  using SVMHOUTPOLAL_1 = FieldValue<PSS_PSSCTL0_SVMHOUTPOLAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL0_DCDC_FORCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCDC_FORCE_0 = FieldValue<PSS_PSSCTL0_DCDC_FORCE_Values, BaseType, 0U> ;
  using DCDC_FORCE_1 = FieldValue<PSS_PSSCTL0_DCDC_FORCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCTL0_VCORETRAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VCORETRAN_0 = FieldValue<PSS_PSSCTL0_VCORETRAN_Values, BaseType, 0U> ;
  using VCORETRAN_1 = FieldValue<PSS_PSSCTL0_VCORETRAN_Values, BaseType, 1U> ;
  using VCORETRAN_2 = FieldValue<PSS_PSSCTL0_VCORETRAN_Values, BaseType, 2U> ;
  using VCORETRAN_3 = FieldValue<PSS_PSSCTL0_VCORETRAN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSIE_SVSMHIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHIE_0 = FieldValue<PSS_PSSIE_SVSMHIE_Values, BaseType, 0U> ;
  using SVSMHIE_1 = FieldValue<PSS_PSSIE_SVSMHIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSIFG_SVSMHIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SVSMHIFG_0 = FieldValue<PSS_PSSIFG_SVSMHIFG_Values, BaseType, 0U> ;
  using SVSMHIFG_1 = FieldValue<PSS_PSSIFG_SVSMHIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PSS_PSSCLRIFG_CLRSVSMHIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRSVSMHIFG_0 = FieldValue<PSS_PSSCLRIFG_CLRSVSMHIFG_Values, BaseType, 0U> ;
  using CLRSVSMHIFG_1 = FieldValue<PSS_PSSCLRIFG_CLRSVSMHIFG_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(PSSENUMS_HPP)
