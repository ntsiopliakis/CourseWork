/*******************************************************************************
* Filename      : csfieldvalues.hpp
*
* Details       : Enumerations related with CS peripheral. This header file is
*                 auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(CSENUMS_HPP)
#define CSENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSKEY_CSKEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL0_DCOTUNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL0_DCORSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCORSEL_0 = FieldValue<CS_CSCTL0_DCORSEL_Values, BaseType, 0U> ;
  using DCORSEL_1 = FieldValue<CS_CSCTL0_DCORSEL_Values, BaseType, 1U> ;
  using DCORSEL_2 = FieldValue<CS_CSCTL0_DCORSEL_Values, BaseType, 2U> ;
  using DCORSEL_3 = FieldValue<CS_CSCTL0_DCORSEL_Values, BaseType, 3U> ;
  using DCORSEL_4 = FieldValue<CS_CSCTL0_DCORSEL_Values, BaseType, 4U> ;
  using DCORSEL_5 = FieldValue<CS_CSCTL0_DCORSEL_Values, BaseType, 5U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL0_DCORES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCORES_0 = FieldValue<CS_CSCTL0_DCORES_Values, BaseType, 0U> ;
  using DCORES_1 = FieldValue<CS_CSCTL0_DCORES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL0_DCOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOEN_0 = FieldValue<CS_CSCTL0_DCOEN_Values, BaseType, 0U> ;
  using DCOEN_1 = FieldValue<CS_CSCTL0_DCOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL1_SELM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SELM_0 = FieldValue<CS_CSCTL1_SELM_Values, BaseType, 0U> ;
  using SELM_1 = FieldValue<CS_CSCTL1_SELM_Values, BaseType, 1U> ;
  using SELM_2 = FieldValue<CS_CSCTL1_SELM_Values, BaseType, 2U> ;
  using SELM_3 = FieldValue<CS_CSCTL1_SELM_Values, BaseType, 3U> ;
  using SELM_4 = FieldValue<CS_CSCTL1_SELM_Values, BaseType, 4U> ;
  using SELM_5 = FieldValue<CS_CSCTL1_SELM_Values, BaseType, 5U> ;
  using SELM_6 = FieldValue<CS_CSCTL1_SELM_Values, BaseType, 6U> ;
  using SELM_7 = FieldValue<CS_CSCTL1_SELM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL1_SELS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SELS_0 = FieldValue<CS_CSCTL1_SELS_Values, BaseType, 0U> ;
  using SELS_1 = FieldValue<CS_CSCTL1_SELS_Values, BaseType, 1U> ;
  using SELS_2 = FieldValue<CS_CSCTL1_SELS_Values, BaseType, 2U> ;
  using SELS_3 = FieldValue<CS_CSCTL1_SELS_Values, BaseType, 3U> ;
  using SELS_4 = FieldValue<CS_CSCTL1_SELS_Values, BaseType, 4U> ;
  using SELS_5 = FieldValue<CS_CSCTL1_SELS_Values, BaseType, 5U> ;
  using SELS_6 = FieldValue<CS_CSCTL1_SELS_Values, BaseType, 6U> ;
  using SELS_7 = FieldValue<CS_CSCTL1_SELS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL1_SELA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SELA_0 = FieldValue<CS_CSCTL1_SELA_Values, BaseType, 0U> ;
  using SELA_1 = FieldValue<CS_CSCTL1_SELA_Values, BaseType, 1U> ;
  using SELA_2 = FieldValue<CS_CSCTL1_SELA_Values, BaseType, 2U> ;
  using SELA_3 = FieldValue<CS_CSCTL1_SELA_Values, BaseType, 3U> ;
  using SELA_4 = FieldValue<CS_CSCTL1_SELA_Values, BaseType, 4U> ;
  using SELA_5 = FieldValue<CS_CSCTL1_SELA_Values, BaseType, 5U> ;
  using SELA_6 = FieldValue<CS_CSCTL1_SELA_Values, BaseType, 6U> ;
  using SELA_7 = FieldValue<CS_CSCTL1_SELA_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL1_SELB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SELB_0 = FieldValue<CS_CSCTL1_SELB_Values, BaseType, 0U> ;
  using SELB_1 = FieldValue<CS_CSCTL1_SELB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL1_DIVM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DIVM_0 = FieldValue<CS_CSCTL1_DIVM_Values, BaseType, 0U> ;
  using DIVM_1 = FieldValue<CS_CSCTL1_DIVM_Values, BaseType, 1U> ;
  using DIVM_2 = FieldValue<CS_CSCTL1_DIVM_Values, BaseType, 2U> ;
  using DIVM_3 = FieldValue<CS_CSCTL1_DIVM_Values, BaseType, 3U> ;
  using DIVM_4 = FieldValue<CS_CSCTL1_DIVM_Values, BaseType, 4U> ;
  using DIVM_5 = FieldValue<CS_CSCTL1_DIVM_Values, BaseType, 5U> ;
  using DIVM_6 = FieldValue<CS_CSCTL1_DIVM_Values, BaseType, 6U> ;
  using DIVM_7 = FieldValue<CS_CSCTL1_DIVM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL1_DIVHS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DIVHS_0 = FieldValue<CS_CSCTL1_DIVHS_Values, BaseType, 0U> ;
  using DIVHS_1 = FieldValue<CS_CSCTL1_DIVHS_Values, BaseType, 1U> ;
  using DIVHS_2 = FieldValue<CS_CSCTL1_DIVHS_Values, BaseType, 2U> ;
  using DIVHS_3 = FieldValue<CS_CSCTL1_DIVHS_Values, BaseType, 3U> ;
  using DIVHS_4 = FieldValue<CS_CSCTL1_DIVHS_Values, BaseType, 4U> ;
  using DIVHS_5 = FieldValue<CS_CSCTL1_DIVHS_Values, BaseType, 5U> ;
  using DIVHS_6 = FieldValue<CS_CSCTL1_DIVHS_Values, BaseType, 6U> ;
  using DIVHS_7 = FieldValue<CS_CSCTL1_DIVHS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL1_DIVA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DIVA_0 = FieldValue<CS_CSCTL1_DIVA_Values, BaseType, 0U> ;
  using DIVA_1 = FieldValue<CS_CSCTL1_DIVA_Values, BaseType, 1U> ;
  using DIVA_2 = FieldValue<CS_CSCTL1_DIVA_Values, BaseType, 2U> ;
  using DIVA_3 = FieldValue<CS_CSCTL1_DIVA_Values, BaseType, 3U> ;
  using DIVA_4 = FieldValue<CS_CSCTL1_DIVA_Values, BaseType, 4U> ;
  using DIVA_5 = FieldValue<CS_CSCTL1_DIVA_Values, BaseType, 5U> ;
  using DIVA_6 = FieldValue<CS_CSCTL1_DIVA_Values, BaseType, 6U> ;
  using DIVA_7 = FieldValue<CS_CSCTL1_DIVA_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL1_DIVS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DIVS_0 = FieldValue<CS_CSCTL1_DIVS_Values, BaseType, 0U> ;
  using DIVS_1 = FieldValue<CS_CSCTL1_DIVS_Values, BaseType, 1U> ;
  using DIVS_2 = FieldValue<CS_CSCTL1_DIVS_Values, BaseType, 2U> ;
  using DIVS_3 = FieldValue<CS_CSCTL1_DIVS_Values, BaseType, 3U> ;
  using DIVS_4 = FieldValue<CS_CSCTL1_DIVS_Values, BaseType, 4U> ;
  using DIVS_5 = FieldValue<CS_CSCTL1_DIVS_Values, BaseType, 5U> ;
  using DIVS_6 = FieldValue<CS_CSCTL1_DIVS_Values, BaseType, 6U> ;
  using DIVS_7 = FieldValue<CS_CSCTL1_DIVS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL2_LFXTDRIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTDRIVE_0 = FieldValue<CS_CSCTL2_LFXTDRIVE_Values, BaseType, 0U> ;
  using LFXTDRIVE_1 = FieldValue<CS_CSCTL2_LFXTDRIVE_Values, BaseType, 1U> ;
  using LFXTDRIVE_2 = FieldValue<CS_CSCTL2_LFXTDRIVE_Values, BaseType, 2U> ;
  using LFXTDRIVE_3 = FieldValue<CS_CSCTL2_LFXTDRIVE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL2_LFXTAGCOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTAGCOFF_0 = FieldValue<CS_CSCTL2_LFXTAGCOFF_Values, BaseType, 0U> ;
  using LFXTAGCOFF_1 = FieldValue<CS_CSCTL2_LFXTAGCOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL2_LFXT_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXT_EN_0 = FieldValue<CS_CSCTL2_LFXT_EN_Values, BaseType, 0U> ;
  using LFXT_EN_1 = FieldValue<CS_CSCTL2_LFXT_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL2_LFXTBYPASS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTBYPASS_0 = FieldValue<CS_CSCTL2_LFXTBYPASS_Values, BaseType, 0U> ;
  using LFXTBYPASS_1 = FieldValue<CS_CSCTL2_LFXTBYPASS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL2_HFXTDRIVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTDRIVE_0 = FieldValue<CS_CSCTL2_HFXTDRIVE_Values, BaseType, 0U> ;
  using HFXTDRIVE_1 = FieldValue<CS_CSCTL2_HFXTDRIVE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL2_HFXTFREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTFREQ_0 = FieldValue<CS_CSCTL2_HFXTFREQ_Values, BaseType, 0U> ;
  using HFXTFREQ_1 = FieldValue<CS_CSCTL2_HFXTFREQ_Values, BaseType, 1U> ;
  using HFXTFREQ_2 = FieldValue<CS_CSCTL2_HFXTFREQ_Values, BaseType, 2U> ;
  using HFXTFREQ_3 = FieldValue<CS_CSCTL2_HFXTFREQ_Values, BaseType, 3U> ;
  using HFXTFREQ_4 = FieldValue<CS_CSCTL2_HFXTFREQ_Values, BaseType, 4U> ;
  using HFXTFREQ_5 = FieldValue<CS_CSCTL2_HFXTFREQ_Values, BaseType, 5U> ;
  using HFXTFREQ_6 = FieldValue<CS_CSCTL2_HFXTFREQ_Values, BaseType, 6U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL2_HFXT_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXT_EN_0 = FieldValue<CS_CSCTL2_HFXT_EN_Values, BaseType, 0U> ;
  using HFXT_EN_1 = FieldValue<CS_CSCTL2_HFXT_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL2_HFXTBYPASS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTBYPASS_0 = FieldValue<CS_CSCTL2_HFXTBYPASS_Values, BaseType, 0U> ;
  using HFXTBYPASS_1 = FieldValue<CS_CSCTL2_HFXTBYPASS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_FCNTLF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTLF_0 = FieldValue<CS_CSCTL3_FCNTLF_Values, BaseType, 0U> ;
  using FCNTLF_1 = FieldValue<CS_CSCTL3_FCNTLF_Values, BaseType, 1U> ;
  using FCNTLF_2 = FieldValue<CS_CSCTL3_FCNTLF_Values, BaseType, 2U> ;
  using FCNTLF_3 = FieldValue<CS_CSCTL3_FCNTLF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_RFCNTLF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RFCNTLF_0 = FieldValue<CS_CSCTL3_RFCNTLF_Values, BaseType, 0U> ;
  using RFCNTLF_1 = FieldValue<CS_CSCTL3_RFCNTLF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_FCNTLF_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTLF_EN_0 = FieldValue<CS_CSCTL3_FCNTLF_EN_Values, BaseType, 0U> ;
  using FCNTLF_EN_1 = FieldValue<CS_CSCTL3_FCNTLF_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_FCNTHF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHF_0 = FieldValue<CS_CSCTL3_FCNTHF_Values, BaseType, 0U> ;
  using FCNTHF_1 = FieldValue<CS_CSCTL3_FCNTHF_Values, BaseType, 1U> ;
  using FCNTHF_2 = FieldValue<CS_CSCTL3_FCNTHF_Values, BaseType, 2U> ;
  using FCNTHF_3 = FieldValue<CS_CSCTL3_FCNTHF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_RFCNTHF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RFCNTHF_0 = FieldValue<CS_CSCTL3_RFCNTHF_Values, BaseType, 0U> ;
  using RFCNTHF_1 = FieldValue<CS_CSCTL3_RFCNTHF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_FCNTHF_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHF_EN_0 = FieldValue<CS_CSCTL3_FCNTHF_EN_Values, BaseType, 0U> ;
  using FCNTHF_EN_1 = FieldValue<CS_CSCTL3_FCNTHF_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_FCNTHF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHF2_0 = FieldValue<CS_CSCTL3_FCNTHF2_Values, BaseType, 0U> ;
  using FCNTHF2_1 = FieldValue<CS_CSCTL3_FCNTHF2_Values, BaseType, 1U> ;
  using FCNTHF2_2 = FieldValue<CS_CSCTL3_FCNTHF2_Values, BaseType, 2U> ;
  using FCNTHF2_3 = FieldValue<CS_CSCTL3_FCNTHF2_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_RFCNTHF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using RFCNTHF2_0 = FieldValue<CS_CSCTL3_RFCNTHF2_Values, BaseType, 0U> ;
  using RFCNTHF2_1 = FieldValue<CS_CSCTL3_RFCNTHF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCTL3_FCNTHF2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHF2_EN_0 = FieldValue<CS_CSCTL3_FCNTHF2_EN_Values, BaseType, 0U> ;
  using FCNTHF2_EN_1 = FieldValue<CS_CSCTL3_FCNTHF2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_ACLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ACLK_EN_0 = FieldValue<CS_CSCLKEN_ACLK_EN_Values, BaseType, 0U> ;
  using ACLK_EN_1 = FieldValue<CS_CSCLKEN_ACLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_MCLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MCLK_EN_0 = FieldValue<CS_CSCLKEN_MCLK_EN_Values, BaseType, 0U> ;
  using MCLK_EN_1 = FieldValue<CS_CSCLKEN_MCLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_HSMCLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HSMCLK_EN_0 = FieldValue<CS_CSCLKEN_HSMCLK_EN_Values, BaseType, 0U> ;
  using HSMCLK_EN_1 = FieldValue<CS_CSCLKEN_HSMCLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_SMCLK_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SMCLK_EN_0 = FieldValue<CS_CSCLKEN_SMCLK_EN_Values, BaseType, 0U> ;
  using SMCLK_EN_1 = FieldValue<CS_CSCLKEN_SMCLK_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_VLO_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VLO_EN_0 = FieldValue<CS_CSCLKEN_VLO_EN_Values, BaseType, 0U> ;
  using VLO_EN_1 = FieldValue<CS_CSCLKEN_VLO_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_REFO_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFO_EN_0 = FieldValue<CS_CSCLKEN_REFO_EN_Values, BaseType, 0U> ;
  using REFO_EN_1 = FieldValue<CS_CSCLKEN_REFO_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_MODOSC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODOSC_EN_0 = FieldValue<CS_CSCLKEN_MODOSC_EN_Values, BaseType, 0U> ;
  using MODOSC_EN_1 = FieldValue<CS_CSCLKEN_MODOSC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLKEN_REFOFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFOFSEL_0 = FieldValue<CS_CSCLKEN_REFOFSEL_Values, BaseType, 0U> ;
  using REFOFSEL_1 = FieldValue<CS_CSCLKEN_REFOFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_DCO_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCO_ON_0 = FieldValue<CS_CSSTAT_DCO_ON_Values, BaseType, 0U> ;
  using DCO_ON_1 = FieldValue<CS_CSSTAT_DCO_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_DCOBIAS_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOBIAS_ON_0 = FieldValue<CS_CSSTAT_DCOBIAS_ON_Values, BaseType, 0U> ;
  using DCOBIAS_ON_1 = FieldValue<CS_CSSTAT_DCOBIAS_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_HFXT_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXT_ON_0 = FieldValue<CS_CSSTAT_HFXT_ON_Values, BaseType, 0U> ;
  using HFXT_ON_1 = FieldValue<CS_CSSTAT_HFXT_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_HFXT2_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXT2_ON_0 = FieldValue<CS_CSSTAT_HFXT2_ON_Values, BaseType, 0U> ;
  using HFXT2_ON_1 = FieldValue<CS_CSSTAT_HFXT2_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_MODOSC_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODOSC_ON_0 = FieldValue<CS_CSSTAT_MODOSC_ON_Values, BaseType, 0U> ;
  using MODOSC_ON_1 = FieldValue<CS_CSSTAT_MODOSC_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_VLO_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VLO_ON_0 = FieldValue<CS_CSSTAT_VLO_ON_Values, BaseType, 0U> ;
  using VLO_ON_1 = FieldValue<CS_CSSTAT_VLO_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_LFXT_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXT_ON_0 = FieldValue<CS_CSSTAT_LFXT_ON_Values, BaseType, 0U> ;
  using LFXT_ON_1 = FieldValue<CS_CSSTAT_LFXT_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_REFO_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFO_ON_0 = FieldValue<CS_CSSTAT_REFO_ON_Values, BaseType, 0U> ;
  using REFO_ON_1 = FieldValue<CS_CSSTAT_REFO_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_ACLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ACLK_ON_0 = FieldValue<CS_CSSTAT_ACLK_ON_Values, BaseType, 0U> ;
  using ACLK_ON_1 = FieldValue<CS_CSSTAT_ACLK_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_MCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MCLK_ON_0 = FieldValue<CS_CSSTAT_MCLK_ON_Values, BaseType, 0U> ;
  using MCLK_ON_1 = FieldValue<CS_CSSTAT_MCLK_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_HSMCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HSMCLK_ON_0 = FieldValue<CS_CSSTAT_HSMCLK_ON_Values, BaseType, 0U> ;
  using HSMCLK_ON_1 = FieldValue<CS_CSSTAT_HSMCLK_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_SMCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SMCLK_ON_0 = FieldValue<CS_CSSTAT_SMCLK_ON_Values, BaseType, 0U> ;
  using SMCLK_ON_1 = FieldValue<CS_CSSTAT_SMCLK_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_MODCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MODCLK_ON_0 = FieldValue<CS_CSSTAT_MODCLK_ON_Values, BaseType, 0U> ;
  using MODCLK_ON_1 = FieldValue<CS_CSSTAT_MODCLK_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_VLOCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using VLOCLK_ON_0 = FieldValue<CS_CSSTAT_VLOCLK_ON_Values, BaseType, 0U> ;
  using VLOCLK_ON_1 = FieldValue<CS_CSSTAT_VLOCLK_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_LFXTCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTCLK_ON_0 = FieldValue<CS_CSSTAT_LFXTCLK_ON_Values, BaseType, 0U> ;
  using LFXTCLK_ON_1 = FieldValue<CS_CSSTAT_LFXTCLK_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_REFOCLK_ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using REFOCLK_ON_0 = FieldValue<CS_CSSTAT_REFOCLK_ON_Values, BaseType, 0U> ;
  using REFOCLK_ON_1 = FieldValue<CS_CSSTAT_REFOCLK_ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_ACLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using ACLK_READY_0 = FieldValue<CS_CSSTAT_ACLK_READY_Values, BaseType, 0U> ;
  using ACLK_READY_1 = FieldValue<CS_CSSTAT_ACLK_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_MCLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using MCLK_READY_0 = FieldValue<CS_CSSTAT_MCLK_READY_Values, BaseType, 0U> ;
  using MCLK_READY_1 = FieldValue<CS_CSSTAT_MCLK_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_HSMCLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HSMCLK_READY_0 = FieldValue<CS_CSSTAT_HSMCLK_READY_Values, BaseType, 0U> ;
  using HSMCLK_READY_1 = FieldValue<CS_CSSTAT_HSMCLK_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_SMCLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SMCLK_READY_0 = FieldValue<CS_CSSTAT_SMCLK_READY_Values, BaseType, 0U> ;
  using SMCLK_READY_1 = FieldValue<CS_CSSTAT_SMCLK_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSTAT_BCLK_READY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using BCLK_READY_0 = FieldValue<CS_CSSTAT_BCLK_READY_Values, BaseType, 0U> ;
  using BCLK_READY_1 = FieldValue<CS_CSSTAT_BCLK_READY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_LFXTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTIE_0 = FieldValue<CS_CSIE_LFXTIE_Values, BaseType, 0U> ;
  using LFXTIE_1 = FieldValue<CS_CSIE_LFXTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_HFXTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTIE_0 = FieldValue<CS_CSIE_HFXTIE_Values, BaseType, 0U> ;
  using HFXTIE_1 = FieldValue<CS_CSIE_HFXTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_HFXT2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXT2IE_0 = FieldValue<CS_CSIE_HFXT2IE_Values, BaseType, 0U> ;
  using HFXT2IE_1 = FieldValue<CS_CSIE_HFXT2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_DCOR_OPNIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOR_OPNIE_0 = FieldValue<CS_CSIE_DCOR_OPNIE_Values, BaseType, 0U> ;
  using DCOR_OPNIE_1 = FieldValue<CS_CSIE_DCOR_OPNIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_FCNTLFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTLFIE_0 = FieldValue<CS_CSIE_FCNTLFIE_Values, BaseType, 0U> ;
  using FCNTLFIE_1 = FieldValue<CS_CSIE_FCNTLFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_FCNTHFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHFIE_0 = FieldValue<CS_CSIE_FCNTHFIE_Values, BaseType, 0U> ;
  using FCNTHFIE_1 = FieldValue<CS_CSIE_FCNTHFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_FCNTHF2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHF2IE_0 = FieldValue<CS_CSIE_FCNTHF2IE_Values, BaseType, 0U> ;
  using FCNTHF2IE_1 = FieldValue<CS_CSIE_FCNTHF2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_PLLOOLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLOOLIE_0 = FieldValue<CS_CSIE_PLLOOLIE_Values, BaseType, 0U> ;
  using PLLOOLIE_1 = FieldValue<CS_CSIE_PLLOOLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_PLLLOSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLLOSIE_0 = FieldValue<CS_CSIE_PLLLOSIE_Values, BaseType, 0U> ;
  using PLLLOSIE_1 = FieldValue<CS_CSIE_PLLLOSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_PLLOORIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLOORIE_0 = FieldValue<CS_CSIE_PLLOORIE_Values, BaseType, 0U> ;
  using PLLOORIE_1 = FieldValue<CS_CSIE_PLLOORIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIE_CALIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CALIE_0 = FieldValue<CS_CSIE_CALIE_Values, BaseType, 0U> ;
  using CALIE_1 = FieldValue<CS_CSIE_CALIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_LFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using LFXTIFG_0 = FieldValue<CS_CSIFG_LFXTIFG_Values, BaseType, 0U> ;
  using LFXTIFG_1 = FieldValue<CS_CSIFG_LFXTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_HFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXTIFG_0 = FieldValue<CS_CSIFG_HFXTIFG_Values, BaseType, 0U> ;
  using HFXTIFG_1 = FieldValue<CS_CSIFG_HFXTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_HFXT2IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using HFXT2IFG_0 = FieldValue<CS_CSIFG_HFXT2IFG_Values, BaseType, 0U> ;
  using HFXT2IFG_1 = FieldValue<CS_CSIFG_HFXT2IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_DCOR_SHTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOR_SHTIFG_0 = FieldValue<CS_CSIFG_DCOR_SHTIFG_Values, BaseType, 0U> ;
  using DCOR_SHTIFG_1 = FieldValue<CS_CSIFG_DCOR_SHTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_DCOR_OPNIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using DCOR_OPNIFG_0 = FieldValue<CS_CSIFG_DCOR_OPNIFG_Values, BaseType, 0U> ;
  using DCOR_OPNIFG_1 = FieldValue<CS_CSIFG_DCOR_OPNIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_FCNTLFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTLFIFG_0 = FieldValue<CS_CSIFG_FCNTLFIFG_Values, BaseType, 0U> ;
  using FCNTLFIFG_1 = FieldValue<CS_CSIFG_FCNTLFIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_FCNTHFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHFIFG_0 = FieldValue<CS_CSIFG_FCNTHFIFG_Values, BaseType, 0U> ;
  using FCNTHFIFG_1 = FieldValue<CS_CSIFG_FCNTHFIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_FCNTHF2IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using FCNTHF2IFG_0 = FieldValue<CS_CSIFG_FCNTHF2IFG_Values, BaseType, 0U> ;
  using FCNTHF2IFG_1 = FieldValue<CS_CSIFG_FCNTHF2IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_PLLOOLIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLOOLIFG_0 = FieldValue<CS_CSIFG_PLLOOLIFG_Values, BaseType, 0U> ;
  using PLLOOLIFG_1 = FieldValue<CS_CSIFG_PLLOOLIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_PLLLOSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLLOSIFG_0 = FieldValue<CS_CSIFG_PLLLOSIFG_Values, BaseType, 0U> ;
  using PLLLOSIFG_1 = FieldValue<CS_CSIFG_PLLLOSIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_PLLOORIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using PLLOORIFG_0 = FieldValue<CS_CSIFG_PLLOORIFG_Values, BaseType, 0U> ;
  using PLLOORIFG_1 = FieldValue<CS_CSIFG_PLLOORIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSIFG_CALIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CALIFG_0 = FieldValue<CS_CSIFG_CALIFG_Values, BaseType, 0U> ;
  using CALIFG_1 = FieldValue<CS_CSIFG_CALIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_LFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_LFXTIFG_0 = FieldValue<CS_CSCLRIFG_CLR_LFXTIFG_Values, BaseType, 0U> ;
  using CLR_LFXTIFG_1 = FieldValue<CS_CSCLRIFG_CLR_LFXTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_HFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_HFXTIFG_0 = FieldValue<CS_CSCLRIFG_CLR_HFXTIFG_Values, BaseType, 0U> ;
  using CLR_HFXTIFG_1 = FieldValue<CS_CSCLRIFG_CLR_HFXTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_HFXT2IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_HFXT2IFG_0 = FieldValue<CS_CSCLRIFG_CLR_HFXT2IFG_Values, BaseType, 0U> ;
  using CLR_HFXT2IFG_1 = FieldValue<CS_CSCLRIFG_CLR_HFXT2IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_DCOR_OPNIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_DCOR_OPNIFG_0 = FieldValue<CS_CSCLRIFG_CLR_DCOR_OPNIFG_Values, BaseType, 0U> ;
  using CLR_DCOR_OPNIFG_1 = FieldValue<CS_CSCLRIFG_CLR_DCOR_OPNIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_CALIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_CALIFG_0 = FieldValue<CS_CSCLRIFG_CLR_CALIFG_Values, BaseType, 0U> ;
  using CLR_CALIFG_1 = FieldValue<CS_CSCLRIFG_CLR_CALIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_FCNTLFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_FCNTLFIFG_0 = FieldValue<CS_CSCLRIFG_CLR_FCNTLFIFG_Values, BaseType, 0U> ;
  using CLR_FCNTLFIFG_1 = FieldValue<CS_CSCLRIFG_CLR_FCNTLFIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_FCNTHFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_FCNTHFIFG_0 = FieldValue<CS_CSCLRIFG_CLR_FCNTHFIFG_Values, BaseType, 0U> ;
  using CLR_FCNTHFIFG_1 = FieldValue<CS_CSCLRIFG_CLR_FCNTHFIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_FCNTHF2IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_FCNTHF2IFG_0 = FieldValue<CS_CSCLRIFG_CLR_FCNTHF2IFG_Values, BaseType, 0U> ;
  using CLR_FCNTHF2IFG_1 = FieldValue<CS_CSCLRIFG_CLR_FCNTHF2IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_PLLOOLIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_PLLOOLIFG_0 = FieldValue<CS_CSCLRIFG_CLR_PLLOOLIFG_Values, BaseType, 0U> ;
  using CLR_PLLOOLIFG_1 = FieldValue<CS_CSCLRIFG_CLR_PLLOOLIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_PLLLOSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_PLLLOSIFG_0 = FieldValue<CS_CSCLRIFG_CLR_PLLLOSIFG_Values, BaseType, 0U> ;
  using CLR_PLLLOSIFG_1 = FieldValue<CS_CSCLRIFG_CLR_PLLLOSIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSCLRIFG_CLR_PLLOORIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using CLR_PLLOORIFG_0 = FieldValue<CS_CSCLRIFG_CLR_PLLOORIFG_Values, BaseType, 0U> ;
  using CLR_PLLOORIFG_1 = FieldValue<CS_CSCLRIFG_CLR_PLLOORIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_LFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_LFXTIFG_0 = FieldValue<CS_CSSETIFG_SET_LFXTIFG_Values, BaseType, 0U> ;
  using SET_LFXTIFG_1 = FieldValue<CS_CSSETIFG_SET_LFXTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_HFXTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_HFXTIFG_0 = FieldValue<CS_CSSETIFG_SET_HFXTIFG_Values, BaseType, 0U> ;
  using SET_HFXTIFG_1 = FieldValue<CS_CSSETIFG_SET_HFXTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_HFXT2IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_HFXT2IFG_0 = FieldValue<CS_CSSETIFG_SET_HFXT2IFG_Values, BaseType, 0U> ;
  using SET_HFXT2IFG_1 = FieldValue<CS_CSSETIFG_SET_HFXT2IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_DCOR_OPNIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_DCOR_OPNIFG_0 = FieldValue<CS_CSSETIFG_SET_DCOR_OPNIFG_Values, BaseType, 0U> ;
  using SET_DCOR_OPNIFG_1 = FieldValue<CS_CSSETIFG_SET_DCOR_OPNIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_CALIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_CALIFG_0 = FieldValue<CS_CSSETIFG_SET_CALIFG_Values, BaseType, 0U> ;
  using SET_CALIFG_1 = FieldValue<CS_CSSETIFG_SET_CALIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_FCNTHFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_FCNTHFIFG_0 = FieldValue<CS_CSSETIFG_SET_FCNTHFIFG_Values, BaseType, 0U> ;
  using SET_FCNTHFIFG_1 = FieldValue<CS_CSSETIFG_SET_FCNTHFIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_FCNTHF2IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_FCNTHF2IFG_0 = FieldValue<CS_CSSETIFG_SET_FCNTHF2IFG_Values, BaseType, 0U> ;
  using SET_FCNTHF2IFG_1 = FieldValue<CS_CSSETIFG_SET_FCNTHF2IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_FCNTLFIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_FCNTLFIFG_0 = FieldValue<CS_CSSETIFG_SET_FCNTLFIFG_Values, BaseType, 0U> ;
  using SET_FCNTLFIFG_1 = FieldValue<CS_CSSETIFG_SET_FCNTLFIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_PLLOOLIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_PLLOOLIFG_0 = FieldValue<CS_CSSETIFG_SET_PLLOOLIFG_Values, BaseType, 0U> ;
  using SET_PLLOOLIFG_1 = FieldValue<CS_CSSETIFG_SET_PLLOOLIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_PLLLOSIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_PLLLOSIFG_0 = FieldValue<CS_CSSETIFG_SET_PLLLOSIFG_Values, BaseType, 0U> ;
  using SET_PLLLOSIFG_1 = FieldValue<CS_CSSETIFG_SET_PLLLOSIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSSETIFG_SET_PLLOORIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using SET_PLLOORIFG_0 = FieldValue<CS_CSSETIFG_SET_PLLOORIFG_Values, BaseType, 0U> ;
  using SET_PLLOORIFG_1 = FieldValue<CS_CSSETIFG_SET_PLLOORIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSDCOERCAL0_DCO_TCCAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CS_CSDCOERCAL0_DCO_TCCAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CS_CSDCOERCAL0_DCO_TCCAL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CS_CSDCOERCAL0_DCO_TCCAL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CS_CSDCOERCAL0_DCO_TCCAL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSDCOERCAL0_DCO_FCAL_RSEL04_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CS_CSDCOERCAL1_DCO_FCAL_RSEL5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(CSENUMS_HPP)
