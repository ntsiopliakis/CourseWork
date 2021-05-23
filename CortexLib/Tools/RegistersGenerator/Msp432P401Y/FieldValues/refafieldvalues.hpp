/*******************************************************************************
* Filename      : refafieldvalues.hpp
*
* Details       : Enumerations related with REF_A peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(REFAENUMS_HPP)
#define REFAENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFON_0 = FieldValue<REF_A_REFCTL0_REFON_Values, BaseType, 0U> ;
  using REFON_1 = FieldValue<REF_A_REFCTL0_REFON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFOUT_0 = FieldValue<REF_A_REFCTL0_REFOUT_Values, BaseType, 0U> ;
  using REFOUT_1 = FieldValue<REF_A_REFCTL0_REFOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFTCOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFTCOFF_0 = FieldValue<REF_A_REFCTL0_REFTCOFF_Values, BaseType, 0U> ;
  using REFTCOFF_1 = FieldValue<REF_A_REFCTL0_REFTCOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFVSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFVSEL_0 = FieldValue<REF_A_REFCTL0_REFVSEL_Values, BaseType, 0U> ;
  using REFVSEL_1 = FieldValue<REF_A_REFCTL0_REFVSEL_Values, BaseType, 1U> ;
  using REFVSEL_3 = FieldValue<REF_A_REFCTL0_REFVSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFGENOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFGENOT_0 = FieldValue<REF_A_REFCTL0_REFGENOT_Values, BaseType, 0U> ;
  using REFGENOT_1 = FieldValue<REF_A_REFCTL0_REFGENOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFBGOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFBGOT_0 = FieldValue<REF_A_REFCTL0_REFBGOT_Values, BaseType, 0U> ;
  using REFBGOT_1 = FieldValue<REF_A_REFCTL0_REFBGOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFGENACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFGENACT_0 = FieldValue<REF_A_REFCTL0_REFGENACT_Values, BaseType, 0U> ;
  using REFGENACT_1 = FieldValue<REF_A_REFCTL0_REFGENACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFBGACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFBGACT_0 = FieldValue<REF_A_REFCTL0_REFBGACT_Values, BaseType, 0U> ;
  using REFBGACT_1 = FieldValue<REF_A_REFCTL0_REFBGACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFGENBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFGENBUSY_0 = FieldValue<REF_A_REFCTL0_REFGENBUSY_Values, BaseType, 0U> ;
  using REFGENBUSY_1 = FieldValue<REF_A_REFCTL0_REFGENBUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_BGMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BGMODE_0 = FieldValue<REF_A_REFCTL0_BGMODE_Values, BaseType, 0U> ;
  using BGMODE_1 = FieldValue<REF_A_REFCTL0_BGMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFGENRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFGENRDY_0 = FieldValue<REF_A_REFCTL0_REFGENRDY_Values, BaseType, 0U> ;
  using REFGENRDY_1 = FieldValue<REF_A_REFCTL0_REFGENRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct REF_A_REFCTL0_REFBGRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFBGRDY_0 = FieldValue<REF_A_REFCTL0_REFBGRDY_Values, BaseType, 0U> ;
  using REFBGRDY_1 = FieldValue<REF_A_REFCTL0_REFBGRDY_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(REFAENUMS_HPP)
