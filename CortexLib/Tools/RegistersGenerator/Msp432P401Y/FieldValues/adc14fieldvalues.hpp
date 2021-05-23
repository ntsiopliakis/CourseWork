/*******************************************************************************
* Filename      : adc14fieldvalues.hpp
*
* Details       : Enumerations related with ADC14 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(ADC14ENUMS_HPP)
#define ADC14ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14SC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14SC_0 = FieldValue<ADC14_ADC14CTL0_ADC14SC_Values, BaseType, 0U> ;
  using ADC14SC_1 = FieldValue<ADC14_ADC14CTL0_ADC14SC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14ENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14ENC_0 = FieldValue<ADC14_ADC14CTL0_ADC14ENC_Values, BaseType, 0U> ;
  using ADC14ENC_1 = FieldValue<ADC14_ADC14CTL0_ADC14ENC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14ON_0 = FieldValue<ADC14_ADC14CTL0_ADC14ON_Values, BaseType, 0U> ;
  using ADC14ON_1 = FieldValue<ADC14_ADC14CTL0_ADC14ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14MSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14MSC_0 = FieldValue<ADC14_ADC14CTL0_ADC14MSC_Values, BaseType, 0U> ;
  using ADC14MSC_1 = FieldValue<ADC14_ADC14CTL0_ADC14MSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14SHT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14SHT0_0 = FieldValue<ADC14_ADC14CTL0_ADC14SHT0_Values, BaseType, 0U> ;
  using ADC14SHT0_1 = FieldValue<ADC14_ADC14CTL0_ADC14SHT0_Values, BaseType, 1U> ;
  using ADC14SHT0_2 = FieldValue<ADC14_ADC14CTL0_ADC14SHT0_Values, BaseType, 2U> ;
  using ADC14SHT0_3 = FieldValue<ADC14_ADC14CTL0_ADC14SHT0_Values, BaseType, 3U> ;
  using ADC14SHT0_4 = FieldValue<ADC14_ADC14CTL0_ADC14SHT0_Values, BaseType, 4U> ;
  using ADC14SHT0_5 = FieldValue<ADC14_ADC14CTL0_ADC14SHT0_Values, BaseType, 5U> ;
  using ADC14SHT0_6 = FieldValue<ADC14_ADC14CTL0_ADC14SHT0_Values, BaseType, 6U> ;
  using ADC14SHT0_7 = FieldValue<ADC14_ADC14CTL0_ADC14SHT0_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14SHT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14SHT1_0 = FieldValue<ADC14_ADC14CTL0_ADC14SHT1_Values, BaseType, 0U> ;
  using ADC14SHT1_1 = FieldValue<ADC14_ADC14CTL0_ADC14SHT1_Values, BaseType, 1U> ;
  using ADC14SHT1_2 = FieldValue<ADC14_ADC14CTL0_ADC14SHT1_Values, BaseType, 2U> ;
  using ADC14SHT1_3 = FieldValue<ADC14_ADC14CTL0_ADC14SHT1_Values, BaseType, 3U> ;
  using ADC14SHT1_4 = FieldValue<ADC14_ADC14CTL0_ADC14SHT1_Values, BaseType, 4U> ;
  using ADC14SHT1_5 = FieldValue<ADC14_ADC14CTL0_ADC14SHT1_Values, BaseType, 5U> ;
  using ADC14SHT1_6 = FieldValue<ADC14_ADC14CTL0_ADC14SHT1_Values, BaseType, 6U> ;
  using ADC14SHT1_7 = FieldValue<ADC14_ADC14CTL0_ADC14SHT1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14BUSY_0 = FieldValue<ADC14_ADC14CTL0_ADC14BUSY_Values, BaseType, 0U> ;
  using ADC14BUSY_1 = FieldValue<ADC14_ADC14CTL0_ADC14BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14CONSEQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14CONSEQ_0 = FieldValue<ADC14_ADC14CTL0_ADC14CONSEQ_Values, BaseType, 0U> ;
  using ADC14CONSEQ_1 = FieldValue<ADC14_ADC14CTL0_ADC14CONSEQ_Values, BaseType, 1U> ;
  using ADC14CONSEQ_2 = FieldValue<ADC14_ADC14CTL0_ADC14CONSEQ_Values, BaseType, 2U> ;
  using ADC14CONSEQ_3 = FieldValue<ADC14_ADC14CTL0_ADC14CONSEQ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14SSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14SSEL_0 = FieldValue<ADC14_ADC14CTL0_ADC14SSEL_Values, BaseType, 0U> ;
  using ADC14SSEL_1 = FieldValue<ADC14_ADC14CTL0_ADC14SSEL_Values, BaseType, 1U> ;
  using ADC14SSEL_2 = FieldValue<ADC14_ADC14CTL0_ADC14SSEL_Values, BaseType, 2U> ;
  using ADC14SSEL_3 = FieldValue<ADC14_ADC14CTL0_ADC14SSEL_Values, BaseType, 3U> ;
  using ADC14SSEL_4 = FieldValue<ADC14_ADC14CTL0_ADC14SSEL_Values, BaseType, 4U> ;
  using ADC14SSEL_5 = FieldValue<ADC14_ADC14CTL0_ADC14SSEL_Values, BaseType, 5U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14DIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIV_0 = FieldValue<ADC14_ADC14CTL0_ADC14DIV_Values, BaseType, 0U> ;
  using ADC14DIV_1 = FieldValue<ADC14_ADC14CTL0_ADC14DIV_Values, BaseType, 1U> ;
  using ADC14DIV_2 = FieldValue<ADC14_ADC14CTL0_ADC14DIV_Values, BaseType, 2U> ;
  using ADC14DIV_3 = FieldValue<ADC14_ADC14CTL0_ADC14DIV_Values, BaseType, 3U> ;
  using ADC14DIV_4 = FieldValue<ADC14_ADC14CTL0_ADC14DIV_Values, BaseType, 4U> ;
  using ADC14DIV_5 = FieldValue<ADC14_ADC14CTL0_ADC14DIV_Values, BaseType, 5U> ;
  using ADC14DIV_6 = FieldValue<ADC14_ADC14CTL0_ADC14DIV_Values, BaseType, 6U> ;
  using ADC14DIV_7 = FieldValue<ADC14_ADC14CTL0_ADC14DIV_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14ISSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14ISSH_0 = FieldValue<ADC14_ADC14CTL0_ADC14ISSH_Values, BaseType, 0U> ;
  using ADC14ISSH_1 = FieldValue<ADC14_ADC14CTL0_ADC14ISSH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14SHP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14SHP_0 = FieldValue<ADC14_ADC14CTL0_ADC14SHP_Values, BaseType, 0U> ;
  using ADC14SHP_1 = FieldValue<ADC14_ADC14CTL0_ADC14SHP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14SHS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14SHS_0 = FieldValue<ADC14_ADC14CTL0_ADC14SHS_Values, BaseType, 0U> ;
  using ADC14SHS_1 = FieldValue<ADC14_ADC14CTL0_ADC14SHS_Values, BaseType, 1U> ;
  using ADC14SHS_2 = FieldValue<ADC14_ADC14CTL0_ADC14SHS_Values, BaseType, 2U> ;
  using ADC14SHS_3 = FieldValue<ADC14_ADC14CTL0_ADC14SHS_Values, BaseType, 3U> ;
  using ADC14SHS_4 = FieldValue<ADC14_ADC14CTL0_ADC14SHS_Values, BaseType, 4U> ;
  using ADC14SHS_5 = FieldValue<ADC14_ADC14CTL0_ADC14SHS_Values, BaseType, 5U> ;
  using ADC14SHS_6 = FieldValue<ADC14_ADC14CTL0_ADC14SHS_Values, BaseType, 6U> ;
  using ADC14SHS_7 = FieldValue<ADC14_ADC14CTL0_ADC14SHS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL0_ADC14PDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14PDIV_0 = FieldValue<ADC14_ADC14CTL0_ADC14PDIV_Values, BaseType, 0U> ;
  using ADC14PDIV_1 = FieldValue<ADC14_ADC14CTL0_ADC14PDIV_Values, BaseType, 1U> ;
  using ADC14PDIV_2 = FieldValue<ADC14_ADC14CTL0_ADC14PDIV_Values, BaseType, 2U> ;
  using ADC14PDIV_3 = FieldValue<ADC14_ADC14CTL0_ADC14PDIV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14PWRMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14PWRMD_0 = FieldValue<ADC14_ADC14CTL1_ADC14PWRMD_Values, BaseType, 0U> ;
  using ADC14PWRMD_2 = FieldValue<ADC14_ADC14CTL1_ADC14PWRMD_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14REFBURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14REFBURST_0 = FieldValue<ADC14_ADC14CTL1_ADC14REFBURST_Values, BaseType, 0U> ;
  using ADC14REFBURST_1 = FieldValue<ADC14_ADC14CTL1_ADC14REFBURST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14DF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DF_0 = FieldValue<ADC14_ADC14CTL1_ADC14DF_Values, BaseType, 0U> ;
  using ADC14DF_1 = FieldValue<ADC14_ADC14CTL1_ADC14DF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14RES_0 = FieldValue<ADC14_ADC14CTL1_ADC14RES_Values, BaseType, 0U> ;
  using ADC14RES_1 = FieldValue<ADC14_ADC14CTL1_ADC14RES_Values, BaseType, 1U> ;
  using ADC14RES_2 = FieldValue<ADC14_ADC14CTL1_ADC14RES_Values, BaseType, 2U> ;
  using ADC14RES_3 = FieldValue<ADC14_ADC14CTL1_ADC14RES_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14CSTARTADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC14_ADC14CTL1_ADC14CSTARTADD_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14BATMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14BATMAP_0 = FieldValue<ADC14_ADC14CTL1_ADC14BATMAP_Values, BaseType, 0U> ;
  using ADC14BATMAP_1 = FieldValue<ADC14_ADC14CTL1_ADC14BATMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14TCMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14TCMAP_0 = FieldValue<ADC14_ADC14CTL1_ADC14TCMAP_Values, BaseType, 0U> ;
  using ADC14TCMAP_1 = FieldValue<ADC14_ADC14CTL1_ADC14TCMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14CH0MAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14CH0MAP_0 = FieldValue<ADC14_ADC14CTL1_ADC14CH0MAP_Values, BaseType, 0U> ;
  using ADC14CH0MAP_1 = FieldValue<ADC14_ADC14CTL1_ADC14CH0MAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14CH1MAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14CH1MAP_0 = FieldValue<ADC14_ADC14CTL1_ADC14CH1MAP_Values, BaseType, 0U> ;
  using ADC14CH1MAP_1 = FieldValue<ADC14_ADC14CTL1_ADC14CH1MAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14CH2MAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14CH2MAP_0 = FieldValue<ADC14_ADC14CTL1_ADC14CH2MAP_Values, BaseType, 0U> ;
  using ADC14CH2MAP_1 = FieldValue<ADC14_ADC14CTL1_ADC14CH2MAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CTL1_ADC14CH3MAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14CH3MAP_0 = FieldValue<ADC14_ADC14CTL1_ADC14CH3MAP_Values, BaseType, 0U> ;
  using ADC14CH3MAP_1 = FieldValue<ADC14_ADC14CTL1_ADC14CH3MAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14LO0_ADC14LO0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14HI0_ADC14HI0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14LO1_ADC14LO1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14HI1_ADC14HI1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE0_0 = FieldValue<ADC14_ADC14IER0_ADC14IE0_Values, BaseType, 0U> ;
  using ADC14IE0_1 = FieldValue<ADC14_ADC14IER0_ADC14IE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE1_0 = FieldValue<ADC14_ADC14IER0_ADC14IE1_Values, BaseType, 0U> ;
  using ADC14IE1_1 = FieldValue<ADC14_ADC14IER0_ADC14IE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE2_0 = FieldValue<ADC14_ADC14IER0_ADC14IE2_Values, BaseType, 0U> ;
  using ADC14IE2_1 = FieldValue<ADC14_ADC14IER0_ADC14IE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE3_0 = FieldValue<ADC14_ADC14IER0_ADC14IE3_Values, BaseType, 0U> ;
  using ADC14IE3_1 = FieldValue<ADC14_ADC14IER0_ADC14IE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE4_0 = FieldValue<ADC14_ADC14IER0_ADC14IE4_Values, BaseType, 0U> ;
  using ADC14IE4_1 = FieldValue<ADC14_ADC14IER0_ADC14IE4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE5_0 = FieldValue<ADC14_ADC14IER0_ADC14IE5_Values, BaseType, 0U> ;
  using ADC14IE5_1 = FieldValue<ADC14_ADC14IER0_ADC14IE5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE6_0 = FieldValue<ADC14_ADC14IER0_ADC14IE6_Values, BaseType, 0U> ;
  using ADC14IE6_1 = FieldValue<ADC14_ADC14IER0_ADC14IE6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE7_0 = FieldValue<ADC14_ADC14IER0_ADC14IE7_Values, BaseType, 0U> ;
  using ADC14IE7_1 = FieldValue<ADC14_ADC14IER0_ADC14IE7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE8_0 = FieldValue<ADC14_ADC14IER0_ADC14IE8_Values, BaseType, 0U> ;
  using ADC14IE8_1 = FieldValue<ADC14_ADC14IER0_ADC14IE8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE9_0 = FieldValue<ADC14_ADC14IER0_ADC14IE9_Values, BaseType, 0U> ;
  using ADC14IE9_1 = FieldValue<ADC14_ADC14IER0_ADC14IE9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE10_0 = FieldValue<ADC14_ADC14IER0_ADC14IE10_Values, BaseType, 0U> ;
  using ADC14IE10_1 = FieldValue<ADC14_ADC14IER0_ADC14IE10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE11_0 = FieldValue<ADC14_ADC14IER0_ADC14IE11_Values, BaseType, 0U> ;
  using ADC14IE11_1 = FieldValue<ADC14_ADC14IER0_ADC14IE11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE12_0 = FieldValue<ADC14_ADC14IER0_ADC14IE12_Values, BaseType, 0U> ;
  using ADC14IE12_1 = FieldValue<ADC14_ADC14IER0_ADC14IE12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE13_0 = FieldValue<ADC14_ADC14IER0_ADC14IE13_Values, BaseType, 0U> ;
  using ADC14IE13_1 = FieldValue<ADC14_ADC14IER0_ADC14IE13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE14_0 = FieldValue<ADC14_ADC14IER0_ADC14IE14_Values, BaseType, 0U> ;
  using ADC14IE14_1 = FieldValue<ADC14_ADC14IER0_ADC14IE14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE15_0 = FieldValue<ADC14_ADC14IER0_ADC14IE15_Values, BaseType, 0U> ;
  using ADC14IE15_1 = FieldValue<ADC14_ADC14IER0_ADC14IE15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE16_0 = FieldValue<ADC14_ADC14IER0_ADC14IE16_Values, BaseType, 0U> ;
  using ADC14IE16_1 = FieldValue<ADC14_ADC14IER0_ADC14IE16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE17_0 = FieldValue<ADC14_ADC14IER0_ADC14IE17_Values, BaseType, 0U> ;
  using ADC14IE17_1 = FieldValue<ADC14_ADC14IER0_ADC14IE17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE19_0 = FieldValue<ADC14_ADC14IER0_ADC14IE19_Values, BaseType, 0U> ;
  using ADC14IE19_1 = FieldValue<ADC14_ADC14IER0_ADC14IE19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE18_0 = FieldValue<ADC14_ADC14IER0_ADC14IE18_Values, BaseType, 0U> ;
  using ADC14IE18_1 = FieldValue<ADC14_ADC14IER0_ADC14IE18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE20_0 = FieldValue<ADC14_ADC14IER0_ADC14IE20_Values, BaseType, 0U> ;
  using ADC14IE20_1 = FieldValue<ADC14_ADC14IER0_ADC14IE20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE21_0 = FieldValue<ADC14_ADC14IER0_ADC14IE21_Values, BaseType, 0U> ;
  using ADC14IE21_1 = FieldValue<ADC14_ADC14IER0_ADC14IE21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE22_0 = FieldValue<ADC14_ADC14IER0_ADC14IE22_Values, BaseType, 0U> ;
  using ADC14IE22_1 = FieldValue<ADC14_ADC14IER0_ADC14IE22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE23_0 = FieldValue<ADC14_ADC14IER0_ADC14IE23_Values, BaseType, 0U> ;
  using ADC14IE23_1 = FieldValue<ADC14_ADC14IER0_ADC14IE23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE24_0 = FieldValue<ADC14_ADC14IER0_ADC14IE24_Values, BaseType, 0U> ;
  using ADC14IE24_1 = FieldValue<ADC14_ADC14IER0_ADC14IE24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE25_0 = FieldValue<ADC14_ADC14IER0_ADC14IE25_Values, BaseType, 0U> ;
  using ADC14IE25_1 = FieldValue<ADC14_ADC14IER0_ADC14IE25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE26_0 = FieldValue<ADC14_ADC14IER0_ADC14IE26_Values, BaseType, 0U> ;
  using ADC14IE26_1 = FieldValue<ADC14_ADC14IER0_ADC14IE26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE27_0 = FieldValue<ADC14_ADC14IER0_ADC14IE27_Values, BaseType, 0U> ;
  using ADC14IE27_1 = FieldValue<ADC14_ADC14IER0_ADC14IE27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE28_0 = FieldValue<ADC14_ADC14IER0_ADC14IE28_Values, BaseType, 0U> ;
  using ADC14IE28_1 = FieldValue<ADC14_ADC14IER0_ADC14IE28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE29_0 = FieldValue<ADC14_ADC14IER0_ADC14IE29_Values, BaseType, 0U> ;
  using ADC14IE29_1 = FieldValue<ADC14_ADC14IER0_ADC14IE29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE30_0 = FieldValue<ADC14_ADC14IER0_ADC14IE30_Values, BaseType, 0U> ;
  using ADC14IE30_1 = FieldValue<ADC14_ADC14IER0_ADC14IE30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER0_ADC14IE31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IE31_0 = FieldValue<ADC14_ADC14IER0_ADC14IE31_Values, BaseType, 0U> ;
  using ADC14IE31_1 = FieldValue<ADC14_ADC14IER0_ADC14IE31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER1_ADC14INIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INIE_0 = FieldValue<ADC14_ADC14IER1_ADC14INIE_Values, BaseType, 0U> ;
  using ADC14INIE_1 = FieldValue<ADC14_ADC14IER1_ADC14INIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER1_ADC14LOIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14LOIE_0 = FieldValue<ADC14_ADC14IER1_ADC14LOIE_Values, BaseType, 0U> ;
  using ADC14LOIE_1 = FieldValue<ADC14_ADC14IER1_ADC14LOIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER1_ADC14HIIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14HIIE_0 = FieldValue<ADC14_ADC14IER1_ADC14HIIE_Values, BaseType, 0U> ;
  using ADC14HIIE_1 = FieldValue<ADC14_ADC14IER1_ADC14HIIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER1_ADC14OVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14OVIE_0 = FieldValue<ADC14_ADC14IER1_ADC14OVIE_Values, BaseType, 0U> ;
  using ADC14OVIE_1 = FieldValue<ADC14_ADC14IER1_ADC14OVIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER1_ADC14TOVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14TOVIE_0 = FieldValue<ADC14_ADC14IER1_ADC14TOVIE_Values, BaseType, 0U> ;
  using ADC14TOVIE_1 = FieldValue<ADC14_ADC14IER1_ADC14TOVIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IER1_ADC14RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14RDYIE_0 = FieldValue<ADC14_ADC14IER1_ADC14RDYIE_Values, BaseType, 0U> ;
  using ADC14RDYIE_1 = FieldValue<ADC14_ADC14IER1_ADC14RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG0_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG0_Values, BaseType, 0U> ;
  using ADC14IFG0_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG1_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG1_Values, BaseType, 0U> ;
  using ADC14IFG1_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG2_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG2_Values, BaseType, 0U> ;
  using ADC14IFG2_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG3_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG3_Values, BaseType, 0U> ;
  using ADC14IFG3_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG4_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG4_Values, BaseType, 0U> ;
  using ADC14IFG4_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG5_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG5_Values, BaseType, 0U> ;
  using ADC14IFG5_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG6_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG6_Values, BaseType, 0U> ;
  using ADC14IFG6_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG7_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG7_Values, BaseType, 0U> ;
  using ADC14IFG7_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG8_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG8_Values, BaseType, 0U> ;
  using ADC14IFG8_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG9_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG9_Values, BaseType, 0U> ;
  using ADC14IFG9_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG10_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG10_Values, BaseType, 0U> ;
  using ADC14IFG10_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG11_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG11_Values, BaseType, 0U> ;
  using ADC14IFG11_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG12_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG12_Values, BaseType, 0U> ;
  using ADC14IFG12_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG13_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG13_Values, BaseType, 0U> ;
  using ADC14IFG13_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG14_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG14_Values, BaseType, 0U> ;
  using ADC14IFG14_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG15_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG15_Values, BaseType, 0U> ;
  using ADC14IFG15_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG16_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG16_Values, BaseType, 0U> ;
  using ADC14IFG16_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG17_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG17_Values, BaseType, 0U> ;
  using ADC14IFG17_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG18_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG18_Values, BaseType, 0U> ;
  using ADC14IFG18_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG19_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG19_Values, BaseType, 0U> ;
  using ADC14IFG19_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG20_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG20_Values, BaseType, 0U> ;
  using ADC14IFG20_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG21_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG21_Values, BaseType, 0U> ;
  using ADC14IFG21_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG22_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG22_Values, BaseType, 0U> ;
  using ADC14IFG22_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG23_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG23_Values, BaseType, 0U> ;
  using ADC14IFG23_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG24_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG24_Values, BaseType, 0U> ;
  using ADC14IFG24_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG25_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG25_Values, BaseType, 0U> ;
  using ADC14IFG25_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG26_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG26_Values, BaseType, 0U> ;
  using ADC14IFG26_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG27_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG27_Values, BaseType, 0U> ;
  using ADC14IFG27_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG28_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG28_Values, BaseType, 0U> ;
  using ADC14IFG28_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG29_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG29_Values, BaseType, 0U> ;
  using ADC14IFG29_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG30_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG30_Values, BaseType, 0U> ;
  using ADC14IFG30_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR0_ADC14IFG31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14IFG31_0 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG31_Values, BaseType, 0U> ;
  using ADC14IFG31_1 = FieldValue<ADC14_ADC14IFGR0_ADC14IFG31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR1_ADC14INIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INIFG_0 = FieldValue<ADC14_ADC14IFGR1_ADC14INIFG_Values, BaseType, 0U> ;
  using ADC14INIFG_1 = FieldValue<ADC14_ADC14IFGR1_ADC14INIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR1_ADC14LOIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14LOIFG_0 = FieldValue<ADC14_ADC14IFGR1_ADC14LOIFG_Values, BaseType, 0U> ;
  using ADC14LOIFG_1 = FieldValue<ADC14_ADC14IFGR1_ADC14LOIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR1_ADC14HIIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14HIIFG_0 = FieldValue<ADC14_ADC14IFGR1_ADC14HIIFG_Values, BaseType, 0U> ;
  using ADC14HIIFG_1 = FieldValue<ADC14_ADC14IFGR1_ADC14HIIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR1_ADC14OVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14OVIFG_0 = FieldValue<ADC14_ADC14IFGR1_ADC14OVIFG_Values, BaseType, 0U> ;
  using ADC14OVIFG_1 = FieldValue<ADC14_ADC14IFGR1_ADC14OVIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR1_ADC14TOVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14TOVIFG_0 = FieldValue<ADC14_ADC14IFGR1_ADC14TOVIFG_Values, BaseType, 0U> ;
  using ADC14TOVIFG_1 = FieldValue<ADC14_ADC14IFGR1_ADC14TOVIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IFGR1_ADC14RDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14RDYIFG_0 = FieldValue<ADC14_ADC14IFGR1_ADC14RDYIFG_Values, BaseType, 0U> ;
  using ADC14RDYIFG_1 = FieldValue<ADC14_ADC14IFGR1_ADC14RDYIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG0_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG0_Values, BaseType, 0U> ;
  using CLRADC14IFG0_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG1_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG1_Values, BaseType, 0U> ;
  using CLRADC14IFG1_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG2_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG2_Values, BaseType, 0U> ;
  using CLRADC14IFG2_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG3_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG3_Values, BaseType, 0U> ;
  using CLRADC14IFG3_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG4_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG4_Values, BaseType, 0U> ;
  using CLRADC14IFG4_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG5_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG5_Values, BaseType, 0U> ;
  using CLRADC14IFG5_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG6_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG6_Values, BaseType, 0U> ;
  using CLRADC14IFG6_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG7_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG7_Values, BaseType, 0U> ;
  using CLRADC14IFG7_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG8_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG8_Values, BaseType, 0U> ;
  using CLRADC14IFG8_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG9_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG9_Values, BaseType, 0U> ;
  using CLRADC14IFG9_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG10_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG10_Values, BaseType, 0U> ;
  using CLRADC14IFG10_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG11_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG11_Values, BaseType, 0U> ;
  using CLRADC14IFG11_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG12_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG12_Values, BaseType, 0U> ;
  using CLRADC14IFG12_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG13_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG13_Values, BaseType, 0U> ;
  using CLRADC14IFG13_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG14_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG14_Values, BaseType, 0U> ;
  using CLRADC14IFG14_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG15_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG15_Values, BaseType, 0U> ;
  using CLRADC14IFG15_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG16_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG16_Values, BaseType, 0U> ;
  using CLRADC14IFG16_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG17_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG17_Values, BaseType, 0U> ;
  using CLRADC14IFG17_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG18_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG18_Values, BaseType, 0U> ;
  using CLRADC14IFG18_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG19_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG19_Values, BaseType, 0U> ;
  using CLRADC14IFG19_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG20_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG20_Values, BaseType, 0U> ;
  using CLRADC14IFG20_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG21_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG21_Values, BaseType, 0U> ;
  using CLRADC14IFG21_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG22_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG22_Values, BaseType, 0U> ;
  using CLRADC14IFG22_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG23_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG23_Values, BaseType, 0U> ;
  using CLRADC14IFG23_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG24_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG24_Values, BaseType, 0U> ;
  using CLRADC14IFG24_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG25_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG25_Values, BaseType, 0U> ;
  using CLRADC14IFG25_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG26_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG26_Values, BaseType, 0U> ;
  using CLRADC14IFG26_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG27_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG27_Values, BaseType, 0U> ;
  using CLRADC14IFG27_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG28_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG28_Values, BaseType, 0U> ;
  using CLRADC14IFG28_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG29_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG29_Values, BaseType, 0U> ;
  using CLRADC14IFG29_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG30_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG30_Values, BaseType, 0U> ;
  using CLRADC14IFG30_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR0_CLRADC14IFG31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14IFG31_0 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG31_Values, BaseType, 0U> ;
  using CLRADC14IFG31_1 = FieldValue<ADC14_ADC14CLRIFGR0_CLRADC14IFG31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR1_CLRADC14INIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14INIFG_0 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14INIFG_Values, BaseType, 0U> ;
  using CLRADC14INIFG_1 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14INIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR1_CLRADC14LOIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14LOIFG_0 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14LOIFG_Values, BaseType, 0U> ;
  using CLRADC14LOIFG_1 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14LOIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR1_CLRADC14HIIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14HIIFG_0 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14HIIFG_Values, BaseType, 0U> ;
  using CLRADC14HIIFG_1 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14HIIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR1_CLRADC14OVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14OVIFG_0 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14OVIFG_Values, BaseType, 0U> ;
  using CLRADC14OVIFG_1 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14OVIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR1_CLRADC14TOVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14TOVIFG_0 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14TOVIFG_Values, BaseType, 0U> ;
  using CLRADC14TOVIFG_1 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14TOVIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14CLRIFGR1_CLRADC14RDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLRADC14RDYIFG_0 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14RDYIFG_Values, BaseType, 0U> ;
  using CLRADC14RDYIFG_1 = FieldValue<ADC14_ADC14CLRIFGR1_CLRADC14RDYIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14IV_ADC14IV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL0_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL0_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL0_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL0_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL0_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL0_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL0_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL0_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL0_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL0_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL0_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL0_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL0_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL0_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL0_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL0_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL0_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL0_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL0_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL1_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL1_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL1_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL1_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL1_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL1_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL1_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL1_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL1_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL1_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL1_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL1_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL1_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL1_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL1_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL1_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL1_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL1_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL1_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL2_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL2_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL2_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL2_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL2_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL2_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL2_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL2_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL2_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL2_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL2_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL2_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL2_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL2_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL2_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL2_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL2_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL2_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL2_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL3_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL3_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL3_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL3_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL3_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL3_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL3_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL3_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL3_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL3_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL3_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL3_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL3_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL3_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL3_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL3_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL3_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL3_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL3_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL4_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL4_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL4_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL4_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL4_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL4_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL4_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL4_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL4_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL4_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL4_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL4_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL4_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL4_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL4_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL4_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL4_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL4_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL4_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL5_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL5_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL5_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL5_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL5_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL5_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL5_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL5_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL5_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL5_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL5_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL5_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL5_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL5_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL5_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL5_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL5_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL5_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL5_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL6_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL6_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL6_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL6_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL6_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL6_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL6_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL6_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL6_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL6_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL6_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL6_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL6_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL6_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL6_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL6_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL6_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL6_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL6_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL7_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL7_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL7_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL7_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL7_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL7_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL7_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL7_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL7_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL7_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL7_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL7_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL7_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL7_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL7_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL7_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL7_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL7_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL7_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL8_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL8_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL8_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL8_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL8_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL8_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL8_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL8_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL8_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL8_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL8_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL8_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL8_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL8_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL8_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL8_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL8_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL8_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL8_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL9_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL9_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL9_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL9_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL9_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL9_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL9_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL9_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL9_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL9_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL9_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL9_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL9_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL9_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL9_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL9_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL9_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL9_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL9_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL10_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL10_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL10_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL10_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL10_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL10_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL10_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL10_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL10_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL10_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL10_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL10_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL10_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL10_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL10_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL10_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL10_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL10_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL10_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL11_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL11_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL11_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL11_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL11_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL11_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL11_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL11_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL11_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL11_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL11_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL11_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL11_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL11_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL11_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL11_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL11_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL11_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL11_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL12_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL12_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL12_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL12_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL12_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL12_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL12_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL12_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL12_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL12_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL12_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL12_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL12_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL12_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL12_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL12_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL12_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL12_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL12_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL13_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL13_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL13_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL13_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL13_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL13_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL13_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL13_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL13_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL13_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL13_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL13_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL13_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL13_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL13_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL13_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL13_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL13_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL13_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL14_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL14_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL14_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL14_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL14_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL14_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL14_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL14_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL14_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL14_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL14_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL14_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL14_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL14_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL14_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL14_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL14_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL14_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL14_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL15_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL15_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL15_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL15_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL15_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL15_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL15_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL15_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL15_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL15_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL15_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL15_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL15_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL15_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL15_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL15_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL15_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL15_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL15_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL16_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL16_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL16_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL16_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL16_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL16_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL16_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL16_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL16_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL16_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL16_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL16_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL16_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL16_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL16_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL16_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL16_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL16_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL16_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL17_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL17_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL17_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL17_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL17_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL17_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL17_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL17_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL17_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL17_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL17_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL17_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL17_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL17_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL17_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL17_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL17_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL17_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL17_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL18_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL18_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL18_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL18_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL18_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL18_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL18_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL18_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL18_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL18_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL18_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL18_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL18_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL18_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL18_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL18_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL18_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL18_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL18_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL19_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL19_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL19_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL19_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL19_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL19_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL19_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL19_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL19_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL19_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL19_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL19_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL19_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL19_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL19_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL19_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL19_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL19_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL19_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL20_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL20_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL20_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL20_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL20_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL20_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL20_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL20_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL20_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL20_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL20_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL20_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL20_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL20_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL20_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL20_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL20_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL20_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL20_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL21_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL21_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL21_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL21_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL21_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL21_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL21_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL21_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL21_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL21_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL21_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL21_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL21_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL21_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL21_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL21_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL21_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL21_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL21_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL22_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL22_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL22_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL22_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL22_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL22_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL22_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL22_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL22_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL22_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL22_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL22_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL22_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL22_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL22_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL22_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL22_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL22_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL22_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL23_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL23_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL23_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL23_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL23_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL23_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL23_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL23_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL23_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL23_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL23_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL23_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL23_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL23_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL23_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL23_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL23_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL23_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL23_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL24_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL24_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL24_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL24_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL24_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL24_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL24_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL24_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL24_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL24_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL24_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL24_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL24_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL24_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL24_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL24_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL24_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL24_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL24_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL25_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL25_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL25_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL25_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL25_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL25_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL25_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL25_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL25_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL25_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL25_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL25_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL25_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL25_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL25_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL25_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL25_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL25_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL25_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL26_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL26_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL26_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL26_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL26_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL26_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL26_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL26_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL26_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL26_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL26_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL26_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL26_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL26_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL26_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL26_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL26_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL26_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL26_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL27_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL27_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL27_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL27_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL27_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL27_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL27_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL27_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL27_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL27_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL27_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL27_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL27_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL27_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL27_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL27_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL27_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL27_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL27_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL28_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL28_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL28_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL28_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL28_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL28_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL28_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL28_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL28_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL28_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL28_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL28_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL28_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL28_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL28_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL28_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL28_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL28_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL28_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL29_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL29_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL29_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL29_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL29_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL29_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL29_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL29_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL29_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL29_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL29_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL29_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL29_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL29_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL29_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL29_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL29_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL29_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL29_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL30_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL30_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL30_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL30_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL30_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL30_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL30_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL30_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL30_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL30_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL30_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL30_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL30_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL30_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL30_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL30_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL30_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL30_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL30_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL31_ADC14INCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14INCH_0 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 0U> ;
  using ADC14INCH_1 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 1U> ;
  using ADC14INCH_2 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 2U> ;
  using ADC14INCH_3 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 3U> ;
  using ADC14INCH_4 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 4U> ;
  using ADC14INCH_5 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 5U> ;
  using ADC14INCH_6 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 6U> ;
  using ADC14INCH_7 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 7U> ;
  using ADC14INCH_8 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 8U> ;
  using ADC14INCH_9 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 9U> ;
  using ADC14INCH_10 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 10U> ;
  using ADC14INCH_11 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 11U> ;
  using ADC14INCH_12 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 12U> ;
  using ADC14INCH_13 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 13U> ;
  using ADC14INCH_14 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 14U> ;
  using ADC14INCH_15 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 15U> ;
  using ADC14INCH_16 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 16U> ;
  using ADC14INCH_17 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 17U> ;
  using ADC14INCH_18 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 18U> ;
  using ADC14INCH_19 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 19U> ;
  using ADC14INCH_20 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 20U> ;
  using ADC14INCH_21 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 21U> ;
  using ADC14INCH_22 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 22U> ;
  using ADC14INCH_23 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 23U> ;
  using ADC14INCH_24 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 24U> ;
  using ADC14INCH_25 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 25U> ;
  using ADC14INCH_26 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 26U> ;
  using ADC14INCH_27 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 27U> ;
  using ADC14INCH_28 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 28U> ;
  using ADC14INCH_29 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 29U> ;
  using ADC14INCH_30 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 30U> ;
  using ADC14INCH_31 = FieldValue<ADC14_ADC14MCTL31_ADC14INCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL31_ADC14EOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14EOS_0 = FieldValue<ADC14_ADC14MCTL31_ADC14EOS_Values, BaseType, 0U> ;
  using ADC14EOS_1 = FieldValue<ADC14_ADC14MCTL31_ADC14EOS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL31_ADC14VRSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14VRSEL_0 = FieldValue<ADC14_ADC14MCTL31_ADC14VRSEL_Values, BaseType, 0U> ;
  using ADC14VRSEL_1 = FieldValue<ADC14_ADC14MCTL31_ADC14VRSEL_Values, BaseType, 1U> ;
  using ADC14VRSEL_14 = FieldValue<ADC14_ADC14MCTL31_ADC14VRSEL_Values, BaseType, 14U> ;
  using ADC14VRSEL_15 = FieldValue<ADC14_ADC14MCTL31_ADC14VRSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL31_ADC14DIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14DIF_0 = FieldValue<ADC14_ADC14MCTL31_ADC14DIF_Values, BaseType, 0U> ;
  using ADC14DIF_1 = FieldValue<ADC14_ADC14MCTL31_ADC14DIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL31_ADC14WINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINC_0 = FieldValue<ADC14_ADC14MCTL31_ADC14WINC_Values, BaseType, 0U> ;
  using ADC14WINC_1 = FieldValue<ADC14_ADC14MCTL31_ADC14WINC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MCTL31_ADC14WINCTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ADC14WINCTH_0 = FieldValue<ADC14_ADC14MCTL31_ADC14WINCTH_Values, BaseType, 0U> ;
  using ADC14WINCTH_1 = FieldValue<ADC14_ADC14MCTL31_ADC14WINCTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM0_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM1_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM2_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM3_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM4_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM5_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM6_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM7_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM8_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM9_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM10_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM11_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM12_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM13_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM14_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM15_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM16_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM17_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM18_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM19_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM20_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM21_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM22_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM23_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM24_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM25_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM26_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM27_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM28_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM29_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM30_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC14_ADC14MEM31_Conversion_Results_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ADC14ENUMS_HPP)
