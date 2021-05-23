/*******************************************************************************
* Filename      : rtccfieldvalues.hpp
*
* Details       : Enumerations related with RTC_C peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(RTCCENUMS_HPP)
#define RTCCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCRDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCRDYIFG_0 = FieldValue<RTC_C_RTCCTL0_RTCRDYIFG_Values, BaseType, 0U> ;
  using RTCRDYIFG_1 = FieldValue<RTC_C_RTCCTL0_RTCRDYIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCAIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCAIFG_0 = FieldValue<RTC_C_RTCCTL0_RTCAIFG_Values, BaseType, 0U> ;
  using RTCAIFG_1 = FieldValue<RTC_C_RTCCTL0_RTCAIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCTEVIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTEVIFG_0 = FieldValue<RTC_C_RTCCTL0_RTCTEVIFG_Values, BaseType, 0U> ;
  using RTCTEVIFG_1 = FieldValue<RTC_C_RTCCTL0_RTCTEVIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCOFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCOFIFG_0 = FieldValue<RTC_C_RTCCTL0_RTCOFIFG_Values, BaseType, 0U> ;
  using RTCOFIFG_1 = FieldValue<RTC_C_RTCCTL0_RTCOFIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCRDYIE_0 = FieldValue<RTC_C_RTCCTL0_RTCRDYIE_Values, BaseType, 0U> ;
  using RTCRDYIE_1 = FieldValue<RTC_C_RTCCTL0_RTCRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCAIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCAIE_0 = FieldValue<RTC_C_RTCCTL0_RTCAIE_Values, BaseType, 0U> ;
  using RTCAIE_1 = FieldValue<RTC_C_RTCCTL0_RTCAIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCTEVIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTEVIE_0 = FieldValue<RTC_C_RTCCTL0_RTCTEVIE_Values, BaseType, 0U> ;
  using RTCTEVIE_1 = FieldValue<RTC_C_RTCCTL0_RTCTEVIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCOFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCOFIE_0 = FieldValue<RTC_C_RTCCTL0_RTCOFIE_Values, BaseType, 0U> ;
  using RTCOFIE_1 = FieldValue<RTC_C_RTCCTL0_RTCOFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL0_RTCKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL13_RTCTEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTEV_0 = FieldValue<RTC_C_RTCCTL13_RTCTEV_Values, BaseType, 0U> ;
  using RTCTEV_1 = FieldValue<RTC_C_RTCCTL13_RTCTEV_Values, BaseType, 1U> ;
  using RTCTEV_2 = FieldValue<RTC_C_RTCCTL13_RTCTEV_Values, BaseType, 2U> ;
  using RTCTEV_3 = FieldValue<RTC_C_RTCCTL13_RTCTEV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL13_RTCSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCSSEL_0 = FieldValue<RTC_C_RTCCTL13_RTCSSEL_Values, BaseType, 0U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL13_RTCRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCRDY_0 = FieldValue<RTC_C_RTCCTL13_RTCRDY_Values, BaseType, 0U> ;
  using RTCRDY_1 = FieldValue<RTC_C_RTCCTL13_RTCRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL13_RTCMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCMODE_1 = FieldValue<RTC_C_RTCCTL13_RTCMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL13_RTCHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCHOLD_0 = FieldValue<RTC_C_RTCCTL13_RTCHOLD_Values, BaseType, 0U> ;
  using RTCHOLD_1 = FieldValue<RTC_C_RTCCTL13_RTCHOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL13_RTCBCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCBCD_0 = FieldValue<RTC_C_RTCCTL13_RTCBCD_Values, BaseType, 0U> ;
  using RTCBCD_1 = FieldValue<RTC_C_RTCCTL13_RTCBCD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCCTL13_RTCCALF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCCALF_0 = FieldValue<RTC_C_RTCCTL13_RTCCALF_Values, BaseType, 0U> ;
  using RTCCALF_1 = FieldValue<RTC_C_RTCCTL13_RTCCALF_Values, BaseType, 1U> ;
  using RTCCALF_2 = FieldValue<RTC_C_RTCCTL13_RTCCALF_Values, BaseType, 2U> ;
  using RTCCALF_3 = FieldValue<RTC_C_RTCCTL13_RTCCALF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCOCAL_RTCOCAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCOCAL_RTCOCALS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCOCALS_0 = FieldValue<RTC_C_RTCOCAL_RTCOCALS_Values, BaseType, 0U> ;
  using RTCOCALS_1 = FieldValue<RTC_C_RTCOCAL_RTCOCALS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTCMP_RTCTCMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTCMP_RTCTCOK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTCOK_0 = FieldValue<RTC_C_RTCTCMP_RTCTCOK_Values, BaseType, 0U> ;
  using RTCTCOK_1 = FieldValue<RTC_C_RTCTCMP_RTCTCOK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTCMP_RTCTCRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCTCMP_RTCTCRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCTCMP_RTCTCRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTCMP_RTCTCMPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RTCTCMPS_0 = FieldValue<RTC_C_RTCTCMP_RTCTCMPS_Values, BaseType, 0U> ;
  using RTCTCMPS_1 = FieldValue<RTC_C_RTCTCMP_RTCTCMPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS0CTL_RT0PSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RT0PSIFG_0 = FieldValue<RTC_C_RTCPS0CTL_RT0PSIFG_Values, BaseType, 0U> ;
  using RT0PSIFG_1 = FieldValue<RTC_C_RTCPS0CTL_RT0PSIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS0CTL_RT0PSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RT0PSIE_0 = FieldValue<RTC_C_RTCPS0CTL_RT0PSIE_Values, BaseType, 0U> ;
  using RT0PSIE_1 = FieldValue<RTC_C_RTCPS0CTL_RT0PSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS0CTL_RT0IP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RT0IP_0 = FieldValue<RTC_C_RTCPS0CTL_RT0IP_Values, BaseType, 0U> ;
  using RT0IP_1 = FieldValue<RTC_C_RTCPS0CTL_RT0IP_Values, BaseType, 1U> ;
  using RT0IP_2 = FieldValue<RTC_C_RTCPS0CTL_RT0IP_Values, BaseType, 2U> ;
  using RT0IP_3 = FieldValue<RTC_C_RTCPS0CTL_RT0IP_Values, BaseType, 3U> ;
  using RT0IP_4 = FieldValue<RTC_C_RTCPS0CTL_RT0IP_Values, BaseType, 4U> ;
  using RT0IP_5 = FieldValue<RTC_C_RTCPS0CTL_RT0IP_Values, BaseType, 5U> ;
  using RT0IP_6 = FieldValue<RTC_C_RTCPS0CTL_RT0IP_Values, BaseType, 6U> ;
  using RT0IP_7 = FieldValue<RTC_C_RTCPS0CTL_RT0IP_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS1CTL_RT1PSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RT1PSIFG_0 = FieldValue<RTC_C_RTCPS1CTL_RT1PSIFG_Values, BaseType, 0U> ;
  using RT1PSIFG_1 = FieldValue<RTC_C_RTCPS1CTL_RT1PSIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS1CTL_RT1PSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RT1PSIE_0 = FieldValue<RTC_C_RTCPS1CTL_RT1PSIE_Values, BaseType, 0U> ;
  using RT1PSIE_1 = FieldValue<RTC_C_RTCPS1CTL_RT1PSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS1CTL_RT1IP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RT1IP_0 = FieldValue<RTC_C_RTCPS1CTL_RT1IP_Values, BaseType, 0U> ;
  using RT1IP_1 = FieldValue<RTC_C_RTCPS1CTL_RT1IP_Values, BaseType, 1U> ;
  using RT1IP_2 = FieldValue<RTC_C_RTCPS1CTL_RT1IP_Values, BaseType, 2U> ;
  using RT1IP_3 = FieldValue<RTC_C_RTCPS1CTL_RT1IP_Values, BaseType, 3U> ;
  using RT1IP_4 = FieldValue<RTC_C_RTCPS1CTL_RT1IP_Values, BaseType, 4U> ;
  using RT1IP_5 = FieldValue<RTC_C_RTCPS1CTL_RT1IP_Values, BaseType, 5U> ;
  using RT1IP_6 = FieldValue<RTC_C_RTCPS1CTL_RT1IP_Values, BaseType, 6U> ;
  using RT1IP_7 = FieldValue<RTC_C_RTCPS1CTL_RT1IP_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS_RT0PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCPS_RT1PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCIV_RTCIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTIM0_Seconds_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTIM0_Minutes_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTIM1_Hours_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RTC_C_RTCTIM1_Hours_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCTIM1_DayofWeek_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCTIM1_DayofWeek_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCTIM1_DayofWeek_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_C_RTCTIM1_DayofWeek_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_C_RTCTIM1_DayofWeek_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_C_RTCTIM1_DayofWeek_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_C_RTCTIM1_DayofWeek_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_C_RTCTIM1_DayofWeek_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_C_RTCTIM1_DayofWeek_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCDATE_Day_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RTC_C_RTCDATE_Day_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCDATE_Month_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RTC_C_RTCDATE_Month_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCYEAR_YearLowByte_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCYEAR_YearHighByte_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RTC_C_RTCYEAR_YearHighByte_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCAMINHR_Minutes_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCAMINHR_MINAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCAMINHR_MINAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCAMINHR_MINAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCAMINHR_Hours_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RTC_C_RTCAMINHR_Hours_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCAMINHR_HOURAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCAMINHR_HOURAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCAMINHR_HOURAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCADOWDAY_DayofWeek_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCADOWDAY_DayofWeek_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCADOWDAY_DayofWeek_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_C_RTCADOWDAY_DayofWeek_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_C_RTCADOWDAY_DayofWeek_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_C_RTCADOWDAY_DayofWeek_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_C_RTCADOWDAY_DayofWeek_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_C_RTCADOWDAY_DayofWeek_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_C_RTCADOWDAY_DayofWeek_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCADOWDAY_DOWAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCADOWDAY_DOWAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCADOWDAY_DOWAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCADOWDAY_DayofMonth_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RTC_C_RTCADOWDAY_DayofMonth_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCADOWDAY_DAYAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RTC_C_RTCADOWDAY_DAYAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RTC_C_RTCADOWDAY_DAYAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCBIN2BCD_BIN2BCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RTC_C_RTCBCD2BIN_BCD2BIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RTCCENUMS_HPP)
