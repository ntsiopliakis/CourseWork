/*******************************************************************************
* Filename      : flctlafieldvalues.hpp
*
* Details       : Enumerations related with FLCTL_A peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(FLCTLAENUMS_HPP)
#define FLCTLAENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PSTAT_0 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values, BaseType, 0U> ;
  using PSTAT_1 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values, BaseType, 1U> ;
  using PSTAT_2 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values, BaseType, 2U> ;
  using PSTAT_3 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values, BaseType, 3U> ;
  using PSTAT_4 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values, BaseType, 4U> ;
  using PSTAT_5 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values, BaseType, 5U> ;
  using PSTAT_6 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values, BaseType, 6U> ;
  using PSTAT_7 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_PSTAT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_POWER_STAT_LDOSTAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LDOSTAT_0 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_LDOSTAT_Values, BaseType, 0U> ;
  using LDOSTAT_1 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_LDOSTAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_POWER_STAT_VREFSTAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VREFSTAT_0 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_VREFSTAT_Values, BaseType, 0U> ;
  using VREFSTAT_1 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_VREFSTAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_POWER_STAT_IREFSTAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using IREFSTAT_0 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_IREFSTAT_Values, BaseType, 0U> ;
  using IREFSTAT_1 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_IREFSTAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_POWER_STAT_TRIMSTAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TRIMSTAT_0 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_TRIMSTAT_Values, BaseType, 0U> ;
  using TRIMSTAT_1 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_TRIMSTAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_POWER_STAT_RD_2T_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RD_2T_0 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_RD_2T_Values, BaseType, 0U> ;
  using RD_2T_1 = FieldValue<FLCTL_A_FLCTL_POWER_STAT_RD_2T_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RD_MODE_0 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values, BaseType, 0U> ;
  using RD_MODE_1 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values, BaseType, 1U> ;
  using RD_MODE_2 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values, BaseType, 2U> ;
  using RD_MODE_3 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values, BaseType, 3U> ;
  using RD_MODE_4 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values, BaseType, 4U> ;
  using RD_MODE_5 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values, BaseType, 5U> ;
  using RD_MODE_9 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values, BaseType, 9U> ;
  using RD_MODE_10 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_Values, BaseType, 10U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_RDCTL_BUFI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_BUFI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_BUFI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_RDCTL_BUFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_BUFD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_BUFD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WAIT_0 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 0U> ;
  using WAIT_1 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 1U> ;
  using WAIT_2 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 2U> ;
  using WAIT_3 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 3U> ;
  using WAIT_4 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 4U> ;
  using WAIT_5 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 5U> ;
  using WAIT_6 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 6U> ;
  using WAIT_7 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 7U> ;
  using WAIT_8 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 8U> ;
  using WAIT_9 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 9U> ;
  using WAIT_10 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 10U> ;
  using WAIT_11 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 11U> ;
  using WAIT_12 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 12U> ;
  using WAIT_13 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 13U> ;
  using WAIT_14 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 14U> ;
  using WAIT_15 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_WAIT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RD_MODE_STATUS_0 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values, BaseType, 0U> ;
  using RD_MODE_STATUS_1 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values, BaseType, 1U> ;
  using RD_MODE_STATUS_2 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values, BaseType, 2U> ;
  using RD_MODE_STATUS_3 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values, BaseType, 3U> ;
  using RD_MODE_STATUS_4 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values, BaseType, 4U> ;
  using RD_MODE_STATUS_5 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values, BaseType, 5U> ;
  using RD_MODE_STATUS_9 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values, BaseType, 9U> ;
  using RD_MODE_STATUS_10 = FieldValue<FLCTL_A_FLCTL_BANK0_RDCTL_RD_MODE_STATUS_Values, BaseType, 10U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RD_MODE_0 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values, BaseType, 0U> ;
  using RD_MODE_1 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values, BaseType, 1U> ;
  using RD_MODE_2 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values, BaseType, 2U> ;
  using RD_MODE_3 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values, BaseType, 3U> ;
  using RD_MODE_4 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values, BaseType, 4U> ;
  using RD_MODE_5 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values, BaseType, 5U> ;
  using RD_MODE_9 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values, BaseType, 9U> ;
  using RD_MODE_10 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_Values, BaseType, 10U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_RDCTL_BUFI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_BUFI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_BUFI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_RDCTL_BUFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_BUFD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_BUFD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RD_MODE_STATUS_0 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values, BaseType, 0U> ;
  using RD_MODE_STATUS_1 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values, BaseType, 1U> ;
  using RD_MODE_STATUS_2 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values, BaseType, 2U> ;
  using RD_MODE_STATUS_3 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values, BaseType, 3U> ;
  using RD_MODE_STATUS_4 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values, BaseType, 4U> ;
  using RD_MODE_STATUS_5 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values, BaseType, 5U> ;
  using RD_MODE_STATUS_9 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values, BaseType, 9U> ;
  using RD_MODE_STATUS_10 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_RD_MODE_STATUS_Values, BaseType, 10U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using WAIT_0 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 0U> ;
  using WAIT_1 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 1U> ;
  using WAIT_2 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 2U> ;
  using WAIT_3 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 3U> ;
  using WAIT_4 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 4U> ;
  using WAIT_5 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 5U> ;
  using WAIT_6 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 6U> ;
  using WAIT_7 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 7U> ;
  using WAIT_8 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 8U> ;
  using WAIT_9 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 9U> ;
  using WAIT_10 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 10U> ;
  using WAIT_11 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 11U> ;
  using WAIT_12 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 12U> ;
  using WAIT_13 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 13U> ;
  using WAIT_14 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 14U> ;
  using WAIT_15 = FieldValue<FLCTL_A_FLCTL_BANK1_RDCTL_WAIT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_MEM_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MEM_TYPE_0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_MEM_TYPE_Values, BaseType, 0U> ;
  using MEM_TYPE_1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_MEM_TYPE_Values, BaseType, 1U> ;
  using MEM_TYPE_3 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_MEM_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_STOP_FAIL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_STOP_FAIL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_STOP_FAIL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_DATA_CMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DATA_CMP_0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_DATA_CMP_Values, BaseType, 0U> ;
  using DATA_CMP_1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_DATA_CMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_TEST_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_TEST_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_TEST_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_BRST_STAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BRST_STAT_0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_BRST_STAT_Values, BaseType, 0U> ;
  using BRST_STAT_1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_BRST_STAT_Values, BaseType, 1U> ;
  using BRST_STAT_2 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_BRST_STAT_Values, BaseType, 2U> ;
  using BRST_STAT_3 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_BRST_STAT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_CMP_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_CMP_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_CMP_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_ADDR_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_ADDR_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_ADDR_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_CTLSTAT_CLR_STAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_CLR_STAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_RDBRST_CTLSTAT_CLR_STAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_STARTADDR_START_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_LEN_BURST_LENGTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_FAILADDR_FAIL_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_RDBRST_FAILCNT_FAIL_COUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRG_CTLSTAT_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ENABLE_0 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_ENABLE_Values, BaseType, 0U> ;
  using ENABLE_1 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRG_CTLSTAT_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODE_0 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_MODE_Values, BaseType, 0U> ;
  using MODE_1 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRG_CTLSTAT_VER_PRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VER_PRE_0 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_VER_PRE_Values, BaseType, 0U> ;
  using VER_PRE_1 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_VER_PRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRG_CTLSTAT_VER_PST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VER_PST_0 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_VER_PST_Values, BaseType, 0U> ;
  using VER_PST_1 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_VER_PST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRG_CTLSTAT_STATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using STATUS_0 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_STATUS_Values, BaseType, 0U> ;
  using STATUS_1 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_STATUS_Values, BaseType, 1U> ;
  using STATUS_2 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_STATUS_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRG_CTLSTAT_BNK_ACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK_ACT_0 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_BNK_ACT_Values, BaseType, 0U> ;
  using BNK_ACT_1 = FieldValue<FLCTL_A_FLCTL_PRG_CTLSTAT_BNK_ACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TYPE_0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_TYPE_Values, BaseType, 0U> ;
  using TYPE_1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_TYPE_Values, BaseType, 1U> ;
  using TYPE_3 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_LEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LEN_0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_LEN_Values, BaseType, 0U> ;
  using LEN_1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_LEN_Values, BaseType, 1U> ;
  using LEN_2 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_LEN_Values, BaseType, 2U> ;
  using LEN_3 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_LEN_Values, BaseType, 3U> ;
  using LEN_4 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_LEN_Values, BaseType, 4U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_AUTO_PRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AUTO_PRE_0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_AUTO_PRE_Values, BaseType, 0U> ;
  using AUTO_PRE_1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_AUTO_PRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_AUTO_PST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AUTO_PST_0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_AUTO_PST_Values, BaseType, 0U> ;
  using AUTO_PST_1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_AUTO_PST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_BURST_STATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BURST_STATUS_0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_BURST_STATUS_Values, BaseType, 0U> ;
  using BURST_STATUS_1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_BURST_STATUS_Values, BaseType, 1U> ;
  using BURST_STATUS_2 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_BURST_STATUS_Values, BaseType, 2U> ;
  using BURST_STATUS_3 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_BURST_STATUS_Values, BaseType, 3U> ;
  using BURST_STATUS_4 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_BURST_STATUS_Values, BaseType, 4U> ;
  using BURST_STATUS_5 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_BURST_STATUS_Values, BaseType, 5U> ;
  using BURST_STATUS_7 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_BURST_STATUS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_PRE_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_PRE_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_PRE_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_PST_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_PST_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_PST_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_ADDR_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_ADDR_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_ADDR_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_CTLSTAT_CLR_STAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_CLR_STAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_PRGBRST_CTLSTAT_CLR_STAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_STARTADDR_START_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA0_0_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA0_1_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA0_2_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA0_3_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA1_0_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA1_1_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA1_2_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA1_3_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA2_0_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA2_1_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA2_2_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA2_3_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA3_0_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA3_1_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA3_2_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGBRST_DATA3_3_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_CTLSTAT_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_CTLSTAT_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODE_0 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_MODE_Values, BaseType, 0U> ;
  using MODE_1 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_MODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_CTLSTAT_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TYPE_0 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_TYPE_Values, BaseType, 0U> ;
  using TYPE_1 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_TYPE_Values, BaseType, 1U> ;
  using TYPE_3 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_CTLSTAT_STATUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using STATUS_0 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_STATUS_Values, BaseType, 0U> ;
  using STATUS_1 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_STATUS_Values, BaseType, 1U> ;
  using STATUS_2 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_STATUS_Values, BaseType, 2U> ;
  using STATUS_3 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_STATUS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_CTLSTAT_ADDR_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_ADDR_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_ADDR_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_CTLSTAT_CLR_STAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_CLR_STAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_ERASE_CTLSTAT_CLR_STAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_SECTADDR_SECT_ADDRESS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_INFO_WEPROT_PROT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT_PROT31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_INFO_WEPROT_PROT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT_PROT31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BMRK_CTLSTAT_I_BMRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BMRK_CTLSTAT_I_BMRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BMRK_CTLSTAT_I_BMRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BMRK_CTLSTAT_D_BMRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BMRK_CTLSTAT_D_BMRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BMRK_CTLSTAT_D_BMRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BMRK_CTLSTAT_CMP_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BMRK_CTLSTAT_CMP_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BMRK_CTLSTAT_CMP_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BMRK_CTLSTAT_CMP_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using en_1_0x0 = FieldValue<FLCTL_A_FLCTL_BMRK_CTLSTAT_CMP_SEL_Values, BaseType, 0U> ;
  using en_2_0x1 = FieldValue<FLCTL_A_FLCTL_BMRK_CTLSTAT_CMP_SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BMRK_IFETCH_COUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BMRK_DREAD_COUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BMRK_CMP_COUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IFG_RDBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IFG_RDBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IFG_RDBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IFG_AVPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IFG_AVPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IFG_AVPRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IFG_AVPST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IFG_AVPST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IFG_AVPST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IFG_PRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IFG_PRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IFG_PRG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IFG_PRGB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IFG_PRGB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IFG_PRGB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IFG_ERASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IFG_ERASE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IFG_ERASE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IFG_BMRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IFG_BMRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IFG_BMRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IFG_PRG_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IFG_PRG_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IFG_PRG_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IE_RDBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IE_RDBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IE_RDBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IE_AVPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IE_AVPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IE_AVPRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IE_AVPST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IE_AVPST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IE_AVPST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IE_PRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IE_PRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IE_PRG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IE_PRGB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IE_PRGB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IE_PRGB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IE_ERASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IE_ERASE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IE_ERASE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IE_BMRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IE_BMRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IE_BMRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_IE_PRG_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_IE_PRG_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_IE_PRG_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_CLRIFG_RDBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_CLRIFG_RDBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_CLRIFG_RDBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_CLRIFG_AVPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_CLRIFG_AVPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_CLRIFG_AVPRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_CLRIFG_AVPST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_CLRIFG_AVPST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_CLRIFG_AVPST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_CLRIFG_PRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_CLRIFG_PRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_CLRIFG_PRG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_CLRIFG_PRGB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_CLRIFG_PRGB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_CLRIFG_PRGB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_CLRIFG_ERASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_CLRIFG_ERASE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_CLRIFG_ERASE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_CLRIFG_BMRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_CLRIFG_BMRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_CLRIFG_BMRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_CLRIFG_PRG_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_CLRIFG_PRG_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_CLRIFG_PRG_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_SETIFG_RDBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_SETIFG_RDBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_SETIFG_RDBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_SETIFG_AVPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_SETIFG_AVPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_SETIFG_AVPRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_SETIFG_AVPST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_SETIFG_AVPST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_SETIFG_AVPST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_SETIFG_PRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_SETIFG_PRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_SETIFG_PRG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_SETIFG_PRGB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_SETIFG_PRGB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_SETIFG_PRGB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_SETIFG_ERASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_SETIFG_ERASE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_SETIFG_ERASE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_SETIFG_BMRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_SETIFG_BMRK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_SETIFG_BMRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_SETIFG_PRG_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_SETIFG_PRG_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_SETIFG_PRG_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_READ_TIMCTL_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLCTL_A_FLCTL_READ_TIMCTL_IREF_BOOST1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_READ_TIMCTL_SETUP_LONG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_READMARGIN_TIMCTL_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGVER_TIMCTL_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_ACTIVE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLCTL_A_FLCTL_PRGVER_TIMCTL_HOLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERSVER_TIMCTL_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_LKGVER_TIMCTL_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PROGRAM_TIMCTL_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PROGRAM_TIMCTL_ACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLCTL_A_FLCTL_PROGRAM_TIMCTL_HOLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_TIMCTL_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_TIMCTL_ACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FLCTL_A_FLCTL_ERASE_TIMCTL_HOLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_MASSERASE_TIMCTL_BOOST_ACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_MASSERASE_TIMCTL_BOOST_HOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BURSTPRG_TIMCTL_ACTIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT0_PROT31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT32_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT32_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT32_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT33_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT34_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT34_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT34_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT35_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT35_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT35_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT36_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT36_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT36_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT37_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT37_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT37_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT38_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT38_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT38_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT39_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT39_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT39_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT40_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT40_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT40_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT41_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT41_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT42_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT42_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT42_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT43_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT43_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT43_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT44_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT44_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT44_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT45_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT45_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT45_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT46_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT46_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT46_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT47_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT47_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT47_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT48_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT48_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT48_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT49_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT49_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT49_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT50_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT50_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT50_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT51_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT51_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT51_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT52_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT52_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT52_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT53_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT53_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT53_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT54_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT54_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT54_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT55_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT55_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT55_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT56_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT56_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT56_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT57_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT57_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT57_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT58_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT58_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT58_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT59_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT59_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT59_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT60_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT60_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT60_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT61_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT61_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT61_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT62_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT62_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT62_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT63_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT63_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT1_PROT63_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT64_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT64_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT64_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT65_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT65_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT65_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT66_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT66_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT66_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT67_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT67_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT67_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT68_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT68_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT68_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT69_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT69_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT69_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT70_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT70_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT70_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT71_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT71_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT71_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT72_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT72_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT72_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT73_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT73_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT73_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT74_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT74_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT74_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT75_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT75_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT75_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT76_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT76_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT76_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT77_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT77_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT77_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT78_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT78_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT78_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT79_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT79_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT79_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT80_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT80_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT80_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT81_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT81_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT81_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT82_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT82_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT82_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT83_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT83_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT83_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT84_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT84_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT84_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT85_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT85_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT85_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT86_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT86_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT86_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT87_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT87_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT87_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT88_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT88_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT88_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT89_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT89_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT89_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT90_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT90_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT90_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT91_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT91_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT91_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT92_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT92_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT92_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT93_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT93_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT93_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT94_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT94_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT94_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT95_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT95_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT2_PROT95_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT96_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT96_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT96_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT97_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT97_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT97_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT98_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT98_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT98_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT99_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT99_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT99_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT100_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT100_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT100_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT101_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT101_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT101_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT102_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT102_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT102_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT103_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT103_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT103_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT104_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT104_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT104_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT105_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT105_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT105_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT106_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT106_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT106_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT107_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT107_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT107_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT108_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT108_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT108_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT109_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT109_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT109_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT110_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT110_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT110_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT111_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT111_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT111_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT112_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT112_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT112_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT113_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT113_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT113_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT114_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT114_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT114_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT115_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT115_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT115_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT116_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT116_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT116_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT117_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT117_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT117_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT118_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT118_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT118_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT119_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT119_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT119_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT120_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT120_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT120_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT121_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT121_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT121_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT122_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT122_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT122_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT123_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT123_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT123_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT124_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT124_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT124_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT125_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT125_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT125_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT126_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT126_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT126_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT127_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT127_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT3_PROT127_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT128_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT128_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT128_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT129_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT129_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT129_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT130_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT130_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT130_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT131_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT131_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT131_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT132_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT132_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT132_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT133_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT133_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT133_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT134_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT134_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT134_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT135_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT135_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT135_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT136_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT136_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT136_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT137_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT137_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT137_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT138_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT138_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT138_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT139_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT139_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT139_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT140_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT140_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT140_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT141_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT141_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT141_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT142_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT142_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT142_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT143_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT143_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT143_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT144_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT144_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT144_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT145_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT145_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT145_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT146_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT146_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT146_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT147_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT147_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT147_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT148_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT148_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT148_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT149_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT149_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT149_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT150_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT150_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT150_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT151_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT151_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT151_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT152_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT152_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT152_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT153_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT153_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT153_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT154_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT154_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT154_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT155_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT155_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT155_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT156_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT156_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT156_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT157_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT157_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT157_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT158_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT158_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT158_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT159_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT159_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT4_PROT159_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT160_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT160_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT160_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT161_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT161_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT161_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT162_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT162_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT162_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT163_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT163_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT163_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT164_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT164_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT164_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT165_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT165_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT165_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT166_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT166_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT166_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT167_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT167_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT167_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT168_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT168_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT168_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT169_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT169_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT169_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT170_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT170_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT170_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT171_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT171_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT171_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT172_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT172_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT172_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT173_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT173_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT173_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT174_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT174_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT174_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT175_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT175_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT175_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT176_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT176_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT176_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT177_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT177_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT177_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT178_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT178_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT178_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT179_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT179_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT179_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT180_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT180_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT180_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT181_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT181_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT181_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT182_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT182_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT182_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT183_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT183_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT183_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT184_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT184_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT184_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT185_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT185_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT185_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT186_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT186_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT186_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT187_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT187_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT187_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT188_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT188_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT188_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT189_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT189_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT189_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT190_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT190_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT190_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT191_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT191_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT5_PROT191_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT192_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT192_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT192_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT193_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT193_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT193_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT194_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT194_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT194_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT195_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT195_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT195_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT196_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT196_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT196_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT197_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT197_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT197_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT198_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT198_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT198_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT199_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT199_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT199_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT200_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT200_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT200_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT201_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT201_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT201_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT202_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT202_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT202_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT203_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT203_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT203_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT204_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT204_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT204_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT205_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT205_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT205_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT206_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT206_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT206_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT207_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT207_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT207_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT208_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT208_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT208_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT209_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT209_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT209_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT210_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT210_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT210_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT211_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT211_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT211_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT212_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT212_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT212_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT213_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT213_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT213_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT214_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT214_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT214_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT215_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT215_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT215_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT216_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT216_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT216_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT217_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT217_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT217_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT218_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT218_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT218_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT219_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT219_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT219_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT220_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT220_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT220_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT221_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT221_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT221_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT222_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT222_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT222_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT223_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT223_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT6_PROT223_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT224_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT224_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT224_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT225_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT225_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT225_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT226_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT226_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT226_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT227_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT227_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT227_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT228_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT228_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT228_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT229_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT229_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT229_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT230_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT230_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT230_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT231_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT231_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT231_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT232_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT232_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT232_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT233_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT233_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT233_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT234_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT234_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT234_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT235_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT235_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT235_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT236_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT236_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT236_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT237_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT237_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT237_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT238_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT238_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT238_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT239_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT239_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT239_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT240_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT240_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT240_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT241_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT241_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT241_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT242_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT242_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT242_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT243_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT243_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT243_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT244_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT244_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT244_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT245_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT245_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT245_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT246_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT246_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT246_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT247_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT247_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT247_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT248_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT248_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT248_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT249_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT249_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT249_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT250_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT250_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT250_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT251_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT251_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT251_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT252_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT252_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT252_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT253_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT253_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT253_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT254_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT254_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT254_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT255_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT255_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK0_MAIN_WEPROT7_PROT255_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT18_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT18_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT18_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT19_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT19_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT19_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT20_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT20_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT21_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT22_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT22_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT22_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT23_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT23_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT23_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT24_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT24_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT24_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT25_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT25_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT25_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT26_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT26_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT26_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT27_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT27_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT27_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT28_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT28_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT28_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT29_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT29_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT29_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT30_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT30_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT0_PROT31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT32_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT32_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT32_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT33_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT34_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT34_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT34_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT35_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT35_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT35_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT36_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT36_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT36_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT37_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT37_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT37_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT38_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT38_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT38_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT39_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT39_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT39_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT40_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT40_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT40_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT41_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT41_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT42_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT42_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT42_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT43_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT43_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT43_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT44_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT44_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT44_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT45_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT45_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT45_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT46_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT46_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT46_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT47_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT47_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT47_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT48_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT48_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT48_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT49_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT49_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT49_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT50_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT50_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT50_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT51_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT51_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT51_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT52_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT52_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT52_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT53_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT53_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT53_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT54_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT54_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT54_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT55_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT55_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT55_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT56_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT56_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT56_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT57_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT57_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT57_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT58_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT58_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT58_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT59_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT59_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT59_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT60_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT60_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT60_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT61_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT61_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT61_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT62_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT62_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT62_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT63_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT63_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT1_PROT63_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT64_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT64_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT64_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT65_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT65_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT65_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT66_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT66_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT66_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT67_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT67_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT67_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT68_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT68_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT68_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT69_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT69_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT69_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT70_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT70_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT70_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT71_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT71_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT71_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT72_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT72_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT72_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT73_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT73_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT73_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT74_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT74_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT74_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT75_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT75_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT75_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT76_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT76_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT76_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT77_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT77_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT77_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT78_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT78_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT78_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT79_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT79_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT79_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT80_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT80_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT80_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT81_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT81_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT81_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT82_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT82_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT82_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT83_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT83_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT83_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT84_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT84_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT84_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT85_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT85_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT85_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT86_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT86_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT86_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT87_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT87_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT87_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT88_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT88_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT88_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT89_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT89_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT89_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT90_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT90_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT90_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT91_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT91_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT91_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT92_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT92_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT92_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT93_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT93_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT93_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT94_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT94_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT94_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT95_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT95_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT2_PROT95_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT96_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT96_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT96_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT97_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT97_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT97_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT98_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT98_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT98_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT99_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT99_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT99_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT100_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT100_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT100_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT101_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT101_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT101_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT102_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT102_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT102_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT103_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT103_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT103_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT104_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT104_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT104_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT105_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT105_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT105_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT106_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT106_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT106_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT107_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT107_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT107_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT108_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT108_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT108_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT109_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT109_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT109_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT110_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT110_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT110_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT111_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT111_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT111_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT112_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT112_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT112_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT113_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT113_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT113_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT114_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT114_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT114_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT115_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT115_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT115_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT116_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT116_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT116_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT117_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT117_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT117_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT118_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT118_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT118_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT119_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT119_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT119_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT120_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT120_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT120_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT121_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT121_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT121_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT122_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT122_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT122_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT123_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT123_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT123_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT124_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT124_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT124_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT125_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT125_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT125_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT126_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT126_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT126_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT127_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT127_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT3_PROT127_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT128_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT128_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT128_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT129_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT129_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT129_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT130_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT130_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT130_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT131_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT131_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT131_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT132_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT132_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT132_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT133_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT133_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT133_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT134_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT134_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT134_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT135_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT135_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT135_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT136_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT136_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT136_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT137_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT137_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT137_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT138_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT138_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT138_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT139_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT139_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT139_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT140_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT140_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT140_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT141_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT141_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT141_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT142_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT142_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT142_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT143_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT143_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT143_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT144_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT144_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT144_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT145_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT145_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT145_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT146_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT146_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT146_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT147_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT147_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT147_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT148_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT148_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT148_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT149_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT149_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT149_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT150_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT150_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT150_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT151_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT151_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT151_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT152_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT152_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT152_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT153_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT153_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT153_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT154_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT154_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT154_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT155_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT155_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT155_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT156_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT156_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT156_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT157_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT157_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT157_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT158_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT158_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT158_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT159_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT159_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT4_PROT159_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT160_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT160_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT160_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT161_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT161_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT161_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT162_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT162_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT162_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT163_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT163_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT163_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT164_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT164_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT164_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT165_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT165_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT165_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT166_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT166_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT166_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT167_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT167_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT167_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT168_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT168_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT168_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT169_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT169_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT169_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT170_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT170_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT170_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT171_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT171_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT171_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT172_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT172_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT172_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT173_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT173_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT173_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT174_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT174_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT174_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT175_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT175_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT175_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT176_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT176_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT176_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT177_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT177_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT177_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT178_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT178_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT178_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT179_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT179_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT179_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT180_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT180_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT180_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT181_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT181_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT181_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT182_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT182_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT182_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT183_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT183_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT183_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT184_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT184_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT184_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT185_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT185_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT185_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT186_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT186_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT186_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT187_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT187_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT187_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT188_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT188_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT188_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT189_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT189_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT189_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT190_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT190_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT190_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT191_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT191_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT5_PROT191_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT192_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT192_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT192_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT193_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT193_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT193_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT194_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT194_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT194_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT195_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT195_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT195_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT196_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT196_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT196_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT197_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT197_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT197_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT198_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT198_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT198_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT199_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT199_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT199_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT200_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT200_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT200_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT201_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT201_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT201_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT202_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT202_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT202_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT203_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT203_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT203_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT204_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT204_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT204_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT205_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT205_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT205_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT206_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT206_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT206_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT207_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT207_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT207_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT208_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT208_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT208_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT209_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT209_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT209_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT210_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT210_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT210_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT211_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT211_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT211_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT212_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT212_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT212_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT213_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT213_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT213_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT214_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT214_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT214_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT215_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT215_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT215_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT216_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT216_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT216_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT217_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT217_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT217_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT218_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT218_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT218_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT219_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT219_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT219_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT220_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT220_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT220_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT221_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT221_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT221_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT222_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT222_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT222_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT223_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT223_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT6_PROT223_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT224_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT224_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT224_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT225_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT225_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT225_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT226_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT226_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT226_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT227_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT227_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT227_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT228_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT228_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT228_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT229_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT229_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT229_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT230_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT230_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT230_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT231_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT231_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT231_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT232_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT232_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT232_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT233_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT233_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT233_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT234_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT234_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT234_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT235_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT235_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT235_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT236_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT236_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT236_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT237_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT237_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT237_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT238_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT238_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT238_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT239_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT239_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT239_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT240_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT240_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT240_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT241_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT241_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT241_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT242_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT242_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT242_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT243_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT243_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT243_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT244_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT244_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT244_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT245_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT245_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT245_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT246_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT246_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT246_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT247_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT247_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT247_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT248_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT248_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT248_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT249_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT249_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT249_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT250_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT250_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT250_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT251_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT251_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT251_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT252_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT252_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT252_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT253_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT253_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT253_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT254_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT254_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT254_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT255_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT255_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FLCTL_A_FLCTL_BANK1_MAIN_WEPROT7_PROT255_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(FLCTLAENUMS_HPP)
