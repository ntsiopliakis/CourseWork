/*******************************************************************************
* Filename      : sysctlafieldvalues.hpp
*
* Details       : Enumerations related with SYSCTL_A peripheral. This header
*                 file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(SYSCTLAENUMS_HPP)
#define SYSCTLAENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_REBOOT_CTL_REBOOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_REBOOT_CTL_REBOOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_REBOOT_CTL_REBOOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_REBOOT_CTL_WKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_CS_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CS_SRC_0 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_CS_SRC_Values, BaseType, 0U> ;
  using CS_SRC_1 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_CS_SRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PSS_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PSS_SRC_0 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PSS_SRC_Values, BaseType, 0U> ;
  using PSS_SRC_1 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PSS_SRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PCM_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PCM_SRC_0 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PCM_SRC_Values, BaseType, 0U> ;
  using PCM_SRC_1 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PCM_SRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PIN_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PIN_SRC_0 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PIN_SRC_Values, BaseType, 0U> ;
  using PIN_SRC_1 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PIN_SRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_CS_FLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CS_FLG_0 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_CS_FLG_Values, BaseType, 0U> ;
  using CS_FLG_1 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_CS_FLG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PSS_FLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PSS_FLG_0 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PSS_FLG_Values, BaseType, 0U> ;
  using PSS_FLG_1 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PSS_FLG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PCM_FLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PCM_FLG_0 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PCM_FLG_Values, BaseType, 0U> ;
  using PCM_FLG_1 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PCM_FLG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_NMI_CTLSTAT_PIN_FLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PIN_FLG_0 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PIN_FLG_Values, BaseType, 0U> ;
  using PIN_FLG_1 = FieldValue<SYSCTL_A_SYS_NMI_CTLSTAT_PIN_FLG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_WDTRESET_CTL_TIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using TIMEOUT_0 = FieldValue<SYSCTL_A_SYS_WDTRESET_CTL_TIMEOUT_Values, BaseType, 0U> ;
  using TIMEOUT_1 = FieldValue<SYSCTL_A_SYS_WDTRESET_CTL_TIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_WDTRESET_CTL_VIOLATION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VIOLATION_0 = FieldValue<SYSCTL_A_SYS_WDTRESET_CTL_VIOLATION_Values, BaseType, 0U> ;
  using VIOLATION_1 = FieldValue<SYSCTL_A_SYS_WDTRESET_CTL_VIOLATION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_T16_0_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_0_Values, BaseType, 0U> ;
  using HALT_T16_0_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_T16_1_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_1_Values, BaseType, 0U> ;
  using HALT_T16_1_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_T16_2_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_2_Values, BaseType, 0U> ;
  using HALT_T16_2_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_T16_3_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_3_Values, BaseType, 0U> ;
  using HALT_T16_3_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T16_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_T32_0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_T32_0_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T32_0_Values, BaseType, 0U> ;
  using HALT_T32_0_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_T32_0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUA0_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA0_Values, BaseType, 0U> ;
  using HALT_eUA0_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUA1_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA1_Values, BaseType, 0U> ;
  using HALT_eUA1_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUA2_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA2_Values, BaseType, 0U> ;
  using HALT_eUA2_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUA3_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA3_Values, BaseType, 0U> ;
  using HALT_eUA3_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUA3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUB0_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB0_Values, BaseType, 0U> ;
  using HALT_eUB0_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUB1_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB1_Values, BaseType, 0U> ;
  using HALT_eUB1_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUB2_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB2_Values, BaseType, 0U> ;
  using HALT_eUB2_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_eUB3_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB3_Values, BaseType, 0U> ;
  using HALT_eUB3_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_eUB3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_ADC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_ADC_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_ADC_Values, BaseType, 0U> ;
  using HALT_ADC_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_ADC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_WDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_WDT_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_WDT_Values, BaseType, 0U> ;
  using HALT_WDT_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_WDT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_DMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_DMA_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_DMA_Values, BaseType, 0U> ;
  using HALT_DMA_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_DMA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_PERIHALT_CTL_HALT_LCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HALT_LCD_0 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_LCD_Values, BaseType, 0U> ;
  using HALT_LCD_1 = FieldValue<SYSCTL_A_SYS_PERIHALT_CTL_HALT_LCD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_SIZE_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_NUMBANKS_NUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_NUMBLOCKS_NUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_MAINFLASH_SIZE_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_INFOFLASH_SIZE_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_DIO_GLTFLT_CTL_GLTCH_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using GLTCH_EN_0 = FieldValue<SYSCTL_A_SYS_DIO_GLTFLT_CTL_GLTCH_EN_Values, BaseType, 0U> ;
  using GLTCH_EN_1 = FieldValue<SYSCTL_A_SYS_DIO_GLTFLT_CTL_GLTCH_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SECDATA_UNLOCK_UNLKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK0_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK0_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK0_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK1_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK1_EN_Values, BaseType, 0U> ;
  using BNK1_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK2_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK2_EN_Values, BaseType, 0U> ;
  using BNK2_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK3_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK3_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK3_EN_Values, BaseType, 0U> ;
  using BNK3_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK3_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK4_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK4_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK4_EN_Values, BaseType, 0U> ;
  using BNK4_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK4_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK5_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK5_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK5_EN_Values, BaseType, 0U> ;
  using BNK5_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK5_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK6_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK6_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK6_EN_Values, BaseType, 0U> ;
  using BNK6_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK6_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK7_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK7_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK7_EN_Values, BaseType, 0U> ;
  using BNK7_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK7_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK8_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK8_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK8_EN_Values, BaseType, 0U> ;
  using BNK8_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK8_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK9_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK9_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK9_EN_Values, BaseType, 0U> ;
  using BNK9_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK9_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK10_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK10_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK10_EN_Values, BaseType, 0U> ;
  using BNK10_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK10_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK11_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK11_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK11_EN_Values, BaseType, 0U> ;
  using BNK11_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK11_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK12_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK12_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK12_EN_Values, BaseType, 0U> ;
  using BNK12_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK12_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK13_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK13_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK13_EN_Values, BaseType, 0U> ;
  using BNK13_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK13_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK14_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK14_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK14_EN_Values, BaseType, 0U> ;
  using BNK14_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK14_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK15_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK15_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK15_EN_Values, BaseType, 0U> ;
  using BNK15_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK15_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK16_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK16_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK16_EN_Values, BaseType, 0U> ;
  using BNK16_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK16_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK17_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK17_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK17_EN_Values, BaseType, 0U> ;
  using BNK17_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK17_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK18_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK18_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK18_EN_Values, BaseType, 0U> ;
  using BNK18_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK18_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK19_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK19_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK19_EN_Values, BaseType, 0U> ;
  using BNK19_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK19_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK20_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK20_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK20_EN_Values, BaseType, 0U> ;
  using BNK20_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK20_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK21_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK21_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK21_EN_Values, BaseType, 0U> ;
  using BNK21_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK21_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK22_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK22_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK22_EN_Values, BaseType, 0U> ;
  using BNK22_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK22_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK23_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK23_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK23_EN_Values, BaseType, 0U> ;
  using BNK23_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK23_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK24_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK24_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK24_EN_Values, BaseType, 0U> ;
  using BNK24_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK24_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK25_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK25_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK25_EN_Values, BaseType, 0U> ;
  using BNK25_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK25_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK26_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK26_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK26_EN_Values, BaseType, 0U> ;
  using BNK26_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK26_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK27_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK27_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK27_EN_Values, BaseType, 0U> ;
  using BNK27_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK27_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK28_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK28_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK28_EN_Values, BaseType, 0U> ;
  using BNK28_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK28_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK29_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK29_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK29_EN_Values, BaseType, 0U> ;
  using BNK29_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK29_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK30_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK30_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK30_EN_Values, BaseType, 0U> ;
  using BNK30_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK30_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK31_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK31_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK31_EN_Values, BaseType, 0U> ;
  using BNK31_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL0_BNK31_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK32_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK32_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK32_EN_Values, BaseType, 0U> ;
  using BNK32_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK32_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK33_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK33_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK33_EN_Values, BaseType, 0U> ;
  using BNK33_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK33_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK34_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK34_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK34_EN_Values, BaseType, 0U> ;
  using BNK34_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK34_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK35_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK35_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK35_EN_Values, BaseType, 0U> ;
  using BNK35_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK35_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK36_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK36_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK36_EN_Values, BaseType, 0U> ;
  using BNK36_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK36_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK37_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK37_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK37_EN_Values, BaseType, 0U> ;
  using BNK37_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK37_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK38_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK38_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK38_EN_Values, BaseType, 0U> ;
  using BNK38_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK38_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK39_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK39_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK39_EN_Values, BaseType, 0U> ;
  using BNK39_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK39_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK40_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK40_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK40_EN_Values, BaseType, 0U> ;
  using BNK40_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK40_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK41_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK41_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK41_EN_Values, BaseType, 0U> ;
  using BNK41_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK41_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK42_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK42_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK42_EN_Values, BaseType, 0U> ;
  using BNK42_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK42_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK43_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK43_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK43_EN_Values, BaseType, 0U> ;
  using BNK43_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK43_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK44_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK44_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK44_EN_Values, BaseType, 0U> ;
  using BNK44_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK44_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK45_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK45_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK45_EN_Values, BaseType, 0U> ;
  using BNK45_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK45_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK46_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK46_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK46_EN_Values, BaseType, 0U> ;
  using BNK46_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK46_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK47_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK47_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK47_EN_Values, BaseType, 0U> ;
  using BNK47_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK47_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK48_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK48_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK48_EN_Values, BaseType, 0U> ;
  using BNK48_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK48_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK49_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK49_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK49_EN_Values, BaseType, 0U> ;
  using BNK49_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK49_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK50_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK50_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK50_EN_Values, BaseType, 0U> ;
  using BNK50_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK50_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK51_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK51_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK51_EN_Values, BaseType, 0U> ;
  using BNK51_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK51_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK52_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK52_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK52_EN_Values, BaseType, 0U> ;
  using BNK52_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK52_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK53_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK53_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK53_EN_Values, BaseType, 0U> ;
  using BNK53_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK53_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK54_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK54_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK54_EN_Values, BaseType, 0U> ;
  using BNK54_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK54_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK55_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK55_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK55_EN_Values, BaseType, 0U> ;
  using BNK55_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK55_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK56_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK56_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK56_EN_Values, BaseType, 0U> ;
  using BNK56_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK56_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK57_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK57_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK57_EN_Values, BaseType, 0U> ;
  using BNK57_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK57_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK58_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK58_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK58_EN_Values, BaseType, 0U> ;
  using BNK58_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK58_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK59_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK59_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK59_EN_Values, BaseType, 0U> ;
  using BNK59_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK59_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK60_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK60_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK60_EN_Values, BaseType, 0U> ;
  using BNK60_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK60_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK61_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK61_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK61_EN_Values, BaseType, 0U> ;
  using BNK61_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK61_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK62_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK62_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK62_EN_Values, BaseType, 0U> ;
  using BNK62_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK62_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK63_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK63_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK63_EN_Values, BaseType, 0U> ;
  using BNK63_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL1_BNK63_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK64_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK64_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK64_EN_Values, BaseType, 0U> ;
  using BNK64_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK64_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK65_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK65_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK65_EN_Values, BaseType, 0U> ;
  using BNK65_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK65_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK66_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK66_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK66_EN_Values, BaseType, 0U> ;
  using BNK66_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK66_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK67_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK67_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK67_EN_Values, BaseType, 0U> ;
  using BNK67_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK67_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK68_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK68_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK68_EN_Values, BaseType, 0U> ;
  using BNK68_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK68_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK69_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK69_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK69_EN_Values, BaseType, 0U> ;
  using BNK69_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK69_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK70_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK70_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK70_EN_Values, BaseType, 0U> ;
  using BNK70_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK70_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK71_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK71_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK71_EN_Values, BaseType, 0U> ;
  using BNK71_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK71_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK72_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK72_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK72_EN_Values, BaseType, 0U> ;
  using BNK72_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK72_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK73_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK73_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK73_EN_Values, BaseType, 0U> ;
  using BNK73_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK73_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK74_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK74_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK74_EN_Values, BaseType, 0U> ;
  using BNK74_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK74_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK75_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK75_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK75_EN_Values, BaseType, 0U> ;
  using BNK75_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK75_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK76_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK76_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK76_EN_Values, BaseType, 0U> ;
  using BNK76_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK76_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK77_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK77_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK77_EN_Values, BaseType, 0U> ;
  using BNK77_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK77_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK78_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK78_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK78_EN_Values, BaseType, 0U> ;
  using BNK78_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK78_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK79_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK79_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK79_EN_Values, BaseType, 0U> ;
  using BNK79_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK79_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK80_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK80_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK80_EN_Values, BaseType, 0U> ;
  using BNK80_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK80_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK81_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK81_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK81_EN_Values, BaseType, 0U> ;
  using BNK81_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK81_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK82_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK82_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK82_EN_Values, BaseType, 0U> ;
  using BNK82_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK82_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK83_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK83_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK83_EN_Values, BaseType, 0U> ;
  using BNK83_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK83_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK84_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK84_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK84_EN_Values, BaseType, 0U> ;
  using BNK84_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK84_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK85_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK85_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK85_EN_Values, BaseType, 0U> ;
  using BNK85_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK85_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK86_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK86_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK86_EN_Values, BaseType, 0U> ;
  using BNK86_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK86_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK87_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK87_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK87_EN_Values, BaseType, 0U> ;
  using BNK87_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK87_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK88_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK88_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK88_EN_Values, BaseType, 0U> ;
  using BNK88_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK88_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK89_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK89_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK89_EN_Values, BaseType, 0U> ;
  using BNK89_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK89_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK90_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK90_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK90_EN_Values, BaseType, 0U> ;
  using BNK90_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK90_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK91_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK91_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK91_EN_Values, BaseType, 0U> ;
  using BNK91_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK91_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK92_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK92_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK92_EN_Values, BaseType, 0U> ;
  using BNK92_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK92_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK93_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK93_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK93_EN_Values, BaseType, 0U> ;
  using BNK93_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK93_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK94_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK94_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK94_EN_Values, BaseType, 0U> ;
  using BNK94_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK94_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK95_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK95_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK95_EN_Values, BaseType, 0U> ;
  using BNK95_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL2_BNK95_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK96_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK96_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK96_EN_Values, BaseType, 0U> ;
  using BNK96_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK96_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK97_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK97_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK97_EN_Values, BaseType, 0U> ;
  using BNK97_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK97_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK98_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK98_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK98_EN_Values, BaseType, 0U> ;
  using BNK98_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK98_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK99_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK99_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK99_EN_Values, BaseType, 0U> ;
  using BNK99_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK99_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK100_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK100_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK100_EN_Values, BaseType, 0U> ;
  using BNK100_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK100_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK101_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK101_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK101_EN_Values, BaseType, 0U> ;
  using BNK101_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK101_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK102_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK102_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK102_EN_Values, BaseType, 0U> ;
  using BNK102_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK102_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK103_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK103_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK103_EN_Values, BaseType, 0U> ;
  using BNK103_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK103_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK104_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK104_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK104_EN_Values, BaseType, 0U> ;
  using BNK104_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK104_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK105_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK105_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK105_EN_Values, BaseType, 0U> ;
  using BNK105_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK105_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK106_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK106_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK106_EN_Values, BaseType, 0U> ;
  using BNK106_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK106_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK107_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK107_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK107_EN_Values, BaseType, 0U> ;
  using BNK107_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK107_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK108_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK108_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK108_EN_Values, BaseType, 0U> ;
  using BNK108_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK108_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK109_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK109_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK109_EN_Values, BaseType, 0U> ;
  using BNK109_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK109_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK110_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK110_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK110_EN_Values, BaseType, 0U> ;
  using BNK110_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK110_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK111_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK111_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK111_EN_Values, BaseType, 0U> ;
  using BNK111_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK111_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK112_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK112_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK112_EN_Values, BaseType, 0U> ;
  using BNK112_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK112_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK113_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK113_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK113_EN_Values, BaseType, 0U> ;
  using BNK113_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK113_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK114_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK114_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK114_EN_Values, BaseType, 0U> ;
  using BNK114_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK114_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK115_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK115_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK115_EN_Values, BaseType, 0U> ;
  using BNK115_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK115_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK116_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK116_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK116_EN_Values, BaseType, 0U> ;
  using BNK116_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK116_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK117_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK117_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK117_EN_Values, BaseType, 0U> ;
  using BNK117_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK117_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK118_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK118_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK118_EN_Values, BaseType, 0U> ;
  using BNK118_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK118_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK119_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK119_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK119_EN_Values, BaseType, 0U> ;
  using BNK119_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK119_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK120_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK120_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK120_EN_Values, BaseType, 0U> ;
  using BNK120_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK120_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK121_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK121_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK121_EN_Values, BaseType, 0U> ;
  using BNK121_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK121_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK122_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK122_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK122_EN_Values, BaseType, 0U> ;
  using BNK122_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK122_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK123_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK123_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK123_EN_Values, BaseType, 0U> ;
  using BNK123_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK123_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK124_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK124_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK124_EN_Values, BaseType, 0U> ;
  using BNK124_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK124_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK125_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK125_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK125_EN_Values, BaseType, 0U> ;
  using BNK125_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK125_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK126_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK126_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK126_EN_Values, BaseType, 0U> ;
  using BNK126_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK126_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK127_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNK127_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK127_EN_Values, BaseType, 0U> ;
  using BNK127_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BANKEN_CTL3_BNK127_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK0_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK0_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK0_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK1_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK1_EN_Values, BaseType, 0U> ;
  using BLK1_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK2_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK2_EN_Values, BaseType, 0U> ;
  using BLK2_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK3_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK3_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK3_EN_Values, BaseType, 0U> ;
  using BLK3_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK3_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK4_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK4_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK4_EN_Values, BaseType, 0U> ;
  using BLK4_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK4_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK5_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK5_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK5_EN_Values, BaseType, 0U> ;
  using BLK5_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK5_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK6_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK6_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK6_EN_Values, BaseType, 0U> ;
  using BLK6_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK6_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK7_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK7_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK7_EN_Values, BaseType, 0U> ;
  using BLK7_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK7_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK8_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK8_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK8_EN_Values, BaseType, 0U> ;
  using BLK8_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK8_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK9_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK9_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK9_EN_Values, BaseType, 0U> ;
  using BLK9_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK9_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK10_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK10_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK10_EN_Values, BaseType, 0U> ;
  using BLK10_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK10_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK11_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK11_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK11_EN_Values, BaseType, 0U> ;
  using BLK11_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK11_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK12_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK12_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK12_EN_Values, BaseType, 0U> ;
  using BLK12_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK12_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK13_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK13_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK13_EN_Values, BaseType, 0U> ;
  using BLK13_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK13_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK14_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK14_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK14_EN_Values, BaseType, 0U> ;
  using BLK14_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK14_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK15_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK15_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK15_EN_Values, BaseType, 0U> ;
  using BLK15_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK15_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK16_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK16_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK16_EN_Values, BaseType, 0U> ;
  using BLK16_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK16_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK17_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK17_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK17_EN_Values, BaseType, 0U> ;
  using BLK17_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK17_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK18_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK18_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK18_EN_Values, BaseType, 0U> ;
  using BLK18_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK18_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK19_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK19_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK19_EN_Values, BaseType, 0U> ;
  using BLK19_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK19_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK20_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK20_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK20_EN_Values, BaseType, 0U> ;
  using BLK20_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK20_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK21_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK21_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK21_EN_Values, BaseType, 0U> ;
  using BLK21_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK21_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK22_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK22_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK22_EN_Values, BaseType, 0U> ;
  using BLK22_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK22_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK23_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK23_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK23_EN_Values, BaseType, 0U> ;
  using BLK23_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK23_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK24_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK24_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK24_EN_Values, BaseType, 0U> ;
  using BLK24_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK24_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK25_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK25_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK25_EN_Values, BaseType, 0U> ;
  using BLK25_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK25_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK26_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK26_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK26_EN_Values, BaseType, 0U> ;
  using BLK26_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK26_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK27_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK27_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK27_EN_Values, BaseType, 0U> ;
  using BLK27_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK27_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK28_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK28_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK28_EN_Values, BaseType, 0U> ;
  using BLK28_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK28_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK29_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK29_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK29_EN_Values, BaseType, 0U> ;
  using BLK29_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK29_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK30_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK30_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK30_EN_Values, BaseType, 0U> ;
  using BLK30_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK30_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK31_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK31_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK31_EN_Values, BaseType, 0U> ;
  using BLK31_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL0_BLK31_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK32_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK32_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK32_EN_Values, BaseType, 0U> ;
  using BLK32_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK32_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK33_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK33_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK33_EN_Values, BaseType, 0U> ;
  using BLK33_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK33_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK34_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK34_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK34_EN_Values, BaseType, 0U> ;
  using BLK34_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK34_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK35_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK35_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK35_EN_Values, BaseType, 0U> ;
  using BLK35_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK35_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK36_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK36_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK36_EN_Values, BaseType, 0U> ;
  using BLK36_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK36_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK37_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK37_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK37_EN_Values, BaseType, 0U> ;
  using BLK37_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK37_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK38_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK38_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK38_EN_Values, BaseType, 0U> ;
  using BLK38_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK38_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK39_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK39_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK39_EN_Values, BaseType, 0U> ;
  using BLK39_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK39_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK40_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK40_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK40_EN_Values, BaseType, 0U> ;
  using BLK40_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK40_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK41_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK41_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK41_EN_Values, BaseType, 0U> ;
  using BLK41_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK41_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK42_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK42_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK42_EN_Values, BaseType, 0U> ;
  using BLK42_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK42_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK43_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK43_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK43_EN_Values, BaseType, 0U> ;
  using BLK43_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK43_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK44_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK44_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK44_EN_Values, BaseType, 0U> ;
  using BLK44_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK44_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK45_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK45_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK45_EN_Values, BaseType, 0U> ;
  using BLK45_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK45_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK46_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK46_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK46_EN_Values, BaseType, 0U> ;
  using BLK46_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK46_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK47_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK47_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK47_EN_Values, BaseType, 0U> ;
  using BLK47_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK47_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK48_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK48_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK48_EN_Values, BaseType, 0U> ;
  using BLK48_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK48_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK49_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK49_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK49_EN_Values, BaseType, 0U> ;
  using BLK49_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK49_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK50_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK50_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK50_EN_Values, BaseType, 0U> ;
  using BLK50_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK50_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK51_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK51_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK51_EN_Values, BaseType, 0U> ;
  using BLK51_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK51_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK52_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK52_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK52_EN_Values, BaseType, 0U> ;
  using BLK52_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK52_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK53_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK53_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK53_EN_Values, BaseType, 0U> ;
  using BLK53_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK53_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK54_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK54_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK54_EN_Values, BaseType, 0U> ;
  using BLK54_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK54_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK55_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK55_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK55_EN_Values, BaseType, 0U> ;
  using BLK55_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK55_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK56_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK56_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK56_EN_Values, BaseType, 0U> ;
  using BLK56_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK56_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK57_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK57_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK57_EN_Values, BaseType, 0U> ;
  using BLK57_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK57_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK58_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK58_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK58_EN_Values, BaseType, 0U> ;
  using BLK58_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK58_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK59_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK59_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK59_EN_Values, BaseType, 0U> ;
  using BLK59_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK59_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK60_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK60_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK60_EN_Values, BaseType, 0U> ;
  using BLK60_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK60_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK61_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK61_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK61_EN_Values, BaseType, 0U> ;
  using BLK61_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK61_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK62_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK62_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK62_EN_Values, BaseType, 0U> ;
  using BLK62_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK62_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK63_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK63_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK63_EN_Values, BaseType, 0U> ;
  using BLK63_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL1_BLK63_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK64_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK64_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK64_EN_Values, BaseType, 0U> ;
  using BLK64_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK64_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK65_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK65_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK65_EN_Values, BaseType, 0U> ;
  using BLK65_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK65_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK66_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK66_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK66_EN_Values, BaseType, 0U> ;
  using BLK66_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK66_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK67_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK67_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK67_EN_Values, BaseType, 0U> ;
  using BLK67_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK67_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK68_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK68_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK68_EN_Values, BaseType, 0U> ;
  using BLK68_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK68_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK69_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK69_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK69_EN_Values, BaseType, 0U> ;
  using BLK69_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK69_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK70_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK70_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK70_EN_Values, BaseType, 0U> ;
  using BLK70_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK70_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK71_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK71_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK71_EN_Values, BaseType, 0U> ;
  using BLK71_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK71_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK72_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK72_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK72_EN_Values, BaseType, 0U> ;
  using BLK72_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK72_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK73_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK73_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK73_EN_Values, BaseType, 0U> ;
  using BLK73_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK73_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK74_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK74_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK74_EN_Values, BaseType, 0U> ;
  using BLK74_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK74_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK75_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK75_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK75_EN_Values, BaseType, 0U> ;
  using BLK75_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK75_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK76_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK76_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK76_EN_Values, BaseType, 0U> ;
  using BLK76_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK76_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK77_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK77_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK77_EN_Values, BaseType, 0U> ;
  using BLK77_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK77_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK78_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK78_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK78_EN_Values, BaseType, 0U> ;
  using BLK78_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK78_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK79_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK79_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK79_EN_Values, BaseType, 0U> ;
  using BLK79_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK79_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK80_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK80_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK80_EN_Values, BaseType, 0U> ;
  using BLK80_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK80_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK81_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK81_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK81_EN_Values, BaseType, 0U> ;
  using BLK81_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK81_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK82_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK82_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK82_EN_Values, BaseType, 0U> ;
  using BLK82_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK82_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK83_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK83_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK83_EN_Values, BaseType, 0U> ;
  using BLK83_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK83_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK84_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK84_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK84_EN_Values, BaseType, 0U> ;
  using BLK84_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK84_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK85_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK85_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK85_EN_Values, BaseType, 0U> ;
  using BLK85_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK85_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK86_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK86_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK86_EN_Values, BaseType, 0U> ;
  using BLK86_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK86_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK87_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK87_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK87_EN_Values, BaseType, 0U> ;
  using BLK87_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK87_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK88_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK88_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK88_EN_Values, BaseType, 0U> ;
  using BLK88_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK88_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK89_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK89_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK89_EN_Values, BaseType, 0U> ;
  using BLK89_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK89_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK90_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK90_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK90_EN_Values, BaseType, 0U> ;
  using BLK90_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK90_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK91_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK91_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK91_EN_Values, BaseType, 0U> ;
  using BLK91_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK91_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK92_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK92_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK92_EN_Values, BaseType, 0U> ;
  using BLK92_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK92_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK93_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK93_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK93_EN_Values, BaseType, 0U> ;
  using BLK93_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK93_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK94_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK94_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK94_EN_Values, BaseType, 0U> ;
  using BLK94_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK94_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK95_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK95_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK95_EN_Values, BaseType, 0U> ;
  using BLK95_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL2_BLK95_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK96_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK96_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK96_EN_Values, BaseType, 0U> ;
  using BLK96_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK96_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK97_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK97_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK97_EN_Values, BaseType, 0U> ;
  using BLK97_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK97_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK98_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK98_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK98_EN_Values, BaseType, 0U> ;
  using BLK98_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK98_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK99_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK99_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK99_EN_Values, BaseType, 0U> ;
  using BLK99_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK99_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK100_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK100_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK100_EN_Values, BaseType, 0U> ;
  using BLK100_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK100_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK101_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK101_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK101_EN_Values, BaseType, 0U> ;
  using BLK101_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK101_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK102_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK102_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK102_EN_Values, BaseType, 0U> ;
  using BLK102_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK102_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK103_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK103_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK103_EN_Values, BaseType, 0U> ;
  using BLK103_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK103_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK104_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK104_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK104_EN_Values, BaseType, 0U> ;
  using BLK104_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK104_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK105_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK105_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK105_EN_Values, BaseType, 0U> ;
  using BLK105_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK105_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK106_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK106_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK106_EN_Values, BaseType, 0U> ;
  using BLK106_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK106_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK107_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK107_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK107_EN_Values, BaseType, 0U> ;
  using BLK107_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK107_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK108_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK108_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK108_EN_Values, BaseType, 0U> ;
  using BLK108_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK108_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK109_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK109_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK109_EN_Values, BaseType, 0U> ;
  using BLK109_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK109_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK110_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK110_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK110_EN_Values, BaseType, 0U> ;
  using BLK110_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK110_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK111_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK111_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK111_EN_Values, BaseType, 0U> ;
  using BLK111_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK111_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK112_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK112_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK112_EN_Values, BaseType, 0U> ;
  using BLK112_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK112_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK113_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK113_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK113_EN_Values, BaseType, 0U> ;
  using BLK113_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK113_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK114_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK114_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK114_EN_Values, BaseType, 0U> ;
  using BLK114_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK114_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK115_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK115_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK115_EN_Values, BaseType, 0U> ;
  using BLK115_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK115_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK116_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK116_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK116_EN_Values, BaseType, 0U> ;
  using BLK116_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK116_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK117_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK117_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK117_EN_Values, BaseType, 0U> ;
  using BLK117_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK117_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK118_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK118_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK118_EN_Values, BaseType, 0U> ;
  using BLK118_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK118_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK119_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK119_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK119_EN_Values, BaseType, 0U> ;
  using BLK119_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK119_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK120_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK120_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK120_EN_Values, BaseType, 0U> ;
  using BLK120_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK120_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK121_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK121_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK121_EN_Values, BaseType, 0U> ;
  using BLK121_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK121_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK122_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK122_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK122_EN_Values, BaseType, 0U> ;
  using BLK122_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK122_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK123_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK123_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK123_EN_Values, BaseType, 0U> ;
  using BLK123_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK123_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK124_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK124_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK124_EN_Values, BaseType, 0U> ;
  using BLK124_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK124_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK125_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK125_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK125_EN_Values, BaseType, 0U> ;
  using BLK125_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK125_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK126_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK126_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK126_EN_Values, BaseType, 0U> ;
  using BLK126_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK126_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK127_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLK127_EN_0 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK127_EN_Values, BaseType, 0U> ;
  using BLK127_EN_1 = FieldValue<SYSCTL_A_SYS_SRAM_BLKRET_CTL3_BLK127_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_STAT_BNKEN_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BNKEN_RDY_0 = FieldValue<SYSCTL_A_SYS_SRAM_STAT_BNKEN_RDY_Values, BaseType, 0U> ;
  using BNKEN_RDY_1 = FieldValue<SYSCTL_A_SYS_SRAM_STAT_BNKEN_RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SRAM_STAT_BLKRET_RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BLKRET_RDY_0 = FieldValue<SYSCTL_A_SYS_SRAM_STAT_BLKRET_RDY_Values, BaseType, 0U> ;
  using BLKRET_RDY_1 = FieldValue<SYSCTL_A_SYS_SRAM_STAT_BLKRET_RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_MASTER_UNLOCK_UNLKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_BOOTOVER_ACK_REGVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_REQ_POR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_RESET_REQ_POR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_RESET_REQ_POR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_REQ_REBOOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_RESET_REQ_REBOOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_RESET_REQ_REBOOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_REQ_WKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_SOFT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_SOFT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_SOFT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_HARD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_HARD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_HARD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_REBOOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_REBOOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_REBOOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_SOFT_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_SOFT_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_SOFT_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_HARD_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_HARD_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_HARD_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_RESET_STATOVER_RBT_OVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_RBT_OVER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_RESET_STATOVER_RBT_OVER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SYSTEM_STAT_DBG_SEC_ACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_SYSTEM_STAT_DBG_SEC_ACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_SYSTEM_STAT_DBG_SEC_ACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SYSTEM_STAT_JTAG_SWD_LOCK_ACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_SYSTEM_STAT_JTAG_SWD_LOCK_ACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_SYSTEM_STAT_JTAG_SWD_LOCK_ACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_SYSTEM_STAT_IP_PROT_ACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCTL_A_SYS_SYSTEM_STAT_IP_PROT_ACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCTL_A_SYS_SYSTEM_STAT_IP_PROT_ACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_BOOTOVER_REQ0_REGVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCTL_A_SYS_BOOTOVER_REQ1_REGVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SYSCTLAENUMS_HPP)
