/*******************************************************************************
* Filename      : sai2fieldvalues.hpp
*
* Details       : Enumerations related with SAI2 peripheral. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(SAI2ENUMS_HPP)
#define SAI2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_MCJDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SAI2_BCR1_MCJDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_NODIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_NODIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_NODIV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_SAIBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_SAIBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_SAIBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_OutDri_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_OutDri_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_OutDri_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_MONO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_MONO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_MONO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_SYNCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_SYNCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_SYNCEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BCR1_SYNCEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BCR1_SYNCEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_CKSTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_CKSTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_CKSTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_LSBFIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_LSBFIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_LSBFIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_DS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_DS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BCR1_DS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BCR1_DS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_BCR1_DS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_BCR1_DS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_BCR1_DS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_BCR1_DS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_PRTCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_PRTCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_PRTCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BCR1_PRTCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BCR1_PRTCFG_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR1_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR1_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR1_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BCR1_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BCR1_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR2_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR2_COMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR2_COMP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BCR2_COMP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BCR2_COMP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR2_CPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR2_CPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR2_CPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR2_MUTECN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR2_MUTEVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR2_MUTEVAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR2_MUTEVAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR2_MUTE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR2_MUTE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR2_MUTE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR2_TRIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR2_TRIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR2_TRIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR2_FFLUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR2_FFLUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR2_FFLUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCR2_FTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCR2_FTH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCR2_FTH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BCR2_FTH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BCR2_FTH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_BCR2_FTH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_BCR2_FTH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_BCR2_FTH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_BCR2_FTH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BFRCR_FSOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BFRCR_FSOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BFRCR_FSOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BFRCR_FSPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BFRCR_FSPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BFRCR_FSPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BFRCR_FSDEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BFRCR_FSDEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BFRCR_FSDEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BFRCR_FSALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BFRCR_FRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSLOTR_SLOTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSLOTR_NBSLOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SAI2_BSLOTR_NBSLOT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSLOTR_SLOTSZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSLOTR_SLOTSZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSLOTR_SLOTSZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BSLOTR_SLOTSZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BSLOTR_SLOTSZ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSLOTR_FBOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 15U> ;
  using Value16 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 16U> ;
  using Value17 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 17U> ;
  using Value18 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 18U> ;
  using Value19 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 19U> ;
  using Value20 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 20U> ;
  using Value21 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 21U> ;
  using Value22 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 22U> ;
  using Value23 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 23U> ;
  using Value24 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 24U> ;
  using Value25 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 25U> ;
  using Value26 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 26U> ;
  using Value27 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 27U> ;
  using Value28 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 28U> ;
  using Value29 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 29U> ;
  using Value30 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 30U> ;
  using Value31 = FieldValue<SAI2_BSLOTR_FBOFF_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BIM_LFSDETIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BIM_LFSDETIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BIM_LFSDETIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BIM_AFSDETIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BIM_AFSDETIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BIM_AFSDETIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BIM_CNRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BIM_CNRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BIM_CNRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BIM_FREQIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BIM_FREQIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BIM_FREQIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BIM_WCKCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BIM_WCKCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BIM_WCKCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BIM_MUTEDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BIM_MUTEDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BIM_MUTEDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BIM_OVRUDRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BIM_OVRUDRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BIM_OVRUDRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSR_FLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSR_FLVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSR_FLVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_BSR_FLVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_BSR_FLVL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_BSR_FLVL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_BSR_FLVL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_BSR_FLVL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_BSR_FLVL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSR_LFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSR_LFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSR_LFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSR_AFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSR_AFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSR_AFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSR_CNRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSR_CNRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSR_CNRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSR_FREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSR_FREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSR_FREQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSR_WCKCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSR_WCKCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSR_WCKCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSR_MUTEDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSR_MUTEDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSR_MUTEDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BSR_OVRUDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BSR_OVRUDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BSR_OVRUDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCLRFR_LFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCLRFR_LFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCLRFR_LFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCLRFR_CAFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCLRFR_CAFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCLRFR_CAFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCLRFR_CNRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCLRFR_CNRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCLRFR_CNRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCLRFR_WCKCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCLRFR_WCKCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCLRFR_WCKCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCLRFR_MUTEDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCLRFR_MUTEDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCLRFR_MUTEDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BCLRFR_OVRUDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_BCLRFR_OVRUDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_BCLRFR_OVRUDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_BDR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_MCJDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SAI2_ACR1_MCJDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_NODIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_NODIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_NODIV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_DMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_DMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_DMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_SAIAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_SAIAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_SAIAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_OutDri_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_OutDri_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_OutDri_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_MONO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_MONO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_MONO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_SYNCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_SYNCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_SYNCEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ACR1_SYNCEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ACR1_SYNCEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_CKSTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_CKSTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_CKSTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_LSBFIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_LSBFIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_LSBFIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_DS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_DS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ACR1_DS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ACR1_DS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_ACR1_DS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_ACR1_DS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_ACR1_DS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_ACR1_DS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_PRTCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_PRTCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_PRTCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ACR1_PRTCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ACR1_PRTCFG_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR1_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR1_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR1_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ACR1_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ACR1_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR2_COMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR2_COMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR2_COMP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ACR2_COMP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ACR2_COMP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR2_CPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR2_CPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR2_CPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR2_MUTECN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR2_MUTEVAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR2_MUTEVAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR2_MUTEVAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR2_MUTE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR2_MUTE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR2_MUTE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR2_TRIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR2_TRIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR2_TRIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR2_FFLUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR2_FFLUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR2_FFLUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACR2_FTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACR2_FTH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACR2_FTH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ACR2_FTH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ACR2_FTH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_ACR2_FTH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_ACR2_FTH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_ACR2_FTH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_ACR2_FTH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AFRCR_FSOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AFRCR_FSOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AFRCR_FSOFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AFRCR_FSPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AFRCR_FSPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AFRCR_FSPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AFRCR_FSDEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AFRCR_FSDEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AFRCR_FSDEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AFRCR_FSALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AFRCR_FRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASLOTR_SLOTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASLOTR_NBSLOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SAI2_ASLOTR_NBSLOT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASLOTR_SLOTSZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASLOTR_SLOTSZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASLOTR_SLOTSZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ASLOTR_SLOTSZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ASLOTR_SLOTSZ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASLOTR_FBOFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 15U> ;
  using Value16 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 16U> ;
  using Value17 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 17U> ;
  using Value18 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 18U> ;
  using Value19 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 19U> ;
  using Value20 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 20U> ;
  using Value21 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 21U> ;
  using Value22 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 22U> ;
  using Value23 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 23U> ;
  using Value24 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 24U> ;
  using Value25 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 25U> ;
  using Value26 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 26U> ;
  using Value27 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 27U> ;
  using Value28 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 28U> ;
  using Value29 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 29U> ;
  using Value30 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 30U> ;
  using Value31 = FieldValue<SAI2_ASLOTR_FBOFF_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AIM_LFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AIM_LFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AIM_LFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AIM_AFSDETIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AIM_AFSDETIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AIM_AFSDETIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AIM_CNRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AIM_CNRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AIM_CNRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AIM_FREQIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AIM_FREQIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AIM_FREQIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AIM_WCKCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AIM_WCKCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AIM_WCKCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AIM_MUTEDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AIM_MUTEDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AIM_MUTEDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_AIM_OVRUDRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_AIM_OVRUDRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_AIM_OVRUDRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASR_FLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASR_FLVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASR_FLVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SAI2_ASR_FLVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SAI2_ASR_FLVL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SAI2_ASR_FLVL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SAI2_ASR_FLVL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SAI2_ASR_FLVL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SAI2_ASR_FLVL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASR_LFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASR_LFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASR_LFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASR_AFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASR_AFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASR_AFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASR_CNRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASR_CNRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASR_CNRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASR_FREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASR_FREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASR_FREQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASR_WCKCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASR_WCKCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASR_WCKCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASR_MUTEDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASR_MUTEDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASR_MUTEDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ASR_OVRUDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ASR_OVRUDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ASR_OVRUDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACLRFR_LFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACLRFR_LFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACLRFR_LFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACLRFR_CAFSDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACLRFR_CAFSDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACLRFR_CAFSDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACLRFR_CNRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACLRFR_CNRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACLRFR_CNRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACLRFR_WCKCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACLRFR_WCKCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACLRFR_WCKCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACLRFR_MUTEDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACLRFR_MUTEDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACLRFR_MUTEDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ACLRFR_OVRUDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SAI2_ACLRFR_OVRUDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SAI2_ACLRFR_OVRUDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SAI2_ADR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SAI2ENUMS_HPP)
