/*******************************************************************************
* Filename      : sai2registers.hpp
*
* Details       : Serial audio interface. This header file is auto-generated for
*                 STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(SAI2REGISTERS_HPP)
#define SAI2REGISTERS_HPP

#include "sai2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SAI2
{
  struct SAI2BCR1Base {} ;

  struct BCR1 : public RegisterBase<0x40015824, 32, ReadWriteMode>
  {
    using MCJDIV = SAI2_BCR1_MCJDIV_Values<SAI2::BCR1, 20, 4, ReadWriteMode, SAI2BCR1Base> ;
    using NODIV = SAI2_BCR1_NODIV_Values<SAI2::BCR1, 19, 1, ReadWriteMode, SAI2BCR1Base> ;
    using DMAEN = SAI2_BCR1_DMAEN_Values<SAI2::BCR1, 17, 1, ReadWriteMode, SAI2BCR1Base> ;
    using SAIBEN = SAI2_BCR1_SAIBEN_Values<SAI2::BCR1, 16, 1, ReadWriteMode, SAI2BCR1Base> ;
    using OutDri = SAI2_BCR1_OutDri_Values<SAI2::BCR1, 13, 1, ReadWriteMode, SAI2BCR1Base> ;
    using MONO = SAI2_BCR1_MONO_Values<SAI2::BCR1, 12, 1, ReadWriteMode, SAI2BCR1Base> ;
    using SYNCEN = SAI2_BCR1_SYNCEN_Values<SAI2::BCR1, 10, 2, ReadWriteMode, SAI2BCR1Base> ;
    using CKSTR = SAI2_BCR1_CKSTR_Values<SAI2::BCR1, 9, 1, ReadWriteMode, SAI2BCR1Base> ;
    using LSBFIRST = SAI2_BCR1_LSBFIRST_Values<SAI2::BCR1, 8, 1, ReadWriteMode, SAI2BCR1Base> ;
    using DS = SAI2_BCR1_DS_Values<SAI2::BCR1, 5, 3, ReadWriteMode, SAI2BCR1Base> ;
    using PRTCFG = SAI2_BCR1_PRTCFG_Values<SAI2::BCR1, 2, 2, ReadWriteMode, SAI2BCR1Base> ;
    using MODE = SAI2_BCR1_MODE_Values<SAI2::BCR1, 0, 2, ReadWriteMode, SAI2BCR1Base> ;
    using FieldValues = SAI2_BCR1_MODE_Values<SAI2::BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR1Pack  = Register<0x40015824, 32, ReadWriteMode, SAI2BCR1Base, T...> ;

  struct SAI2BCR2Base {} ;

  struct BCR2 : public RegisterBase<0x40015828, 32, ReadWriteMode>
  {
    using COMP = SAI2_BCR2_COMP_Values<SAI2::BCR2, 14, 2, ReadWriteMode, SAI2BCR2Base> ;
    using CPL = SAI2_BCR2_CPL_Values<SAI2::BCR2, 13, 1, ReadWriteMode, SAI2BCR2Base> ;
    using MUTECN = SAI2_BCR2_MUTECN_Values<SAI2::BCR2, 7, 6, ReadWriteMode, SAI2BCR2Base> ;
    using MUTEVAL = SAI2_BCR2_MUTEVAL_Values<SAI2::BCR2, 6, 1, ReadWriteMode, SAI2BCR2Base> ;
    using MUTE = SAI2_BCR2_MUTE_Values<SAI2::BCR2, 5, 1, ReadWriteMode, SAI2BCR2Base> ;
    using TRIS = SAI2_BCR2_TRIS_Values<SAI2::BCR2, 4, 1, ReadWriteMode, SAI2BCR2Base> ;
    using FFLUS = SAI2_BCR2_FFLUS_Values<SAI2::BCR2, 3, 1, ReadWriteMode, SAI2BCR2Base> ;
    using FTH = SAI2_BCR2_FTH_Values<SAI2::BCR2, 0, 3, ReadWriteMode, SAI2BCR2Base> ;
    using FieldValues = SAI2_BCR2_FTH_Values<SAI2::BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR2Pack  = Register<0x40015828, 32, ReadWriteMode, SAI2BCR2Base, T...> ;

  struct SAI2BFRCRBase {} ;

  struct BFRCR : public RegisterBase<0x4001582C, 32, ReadWriteMode>
  {
    using FSOFF = SAI2_BFRCR_FSOFF_Values<SAI2::BFRCR, 18, 1, ReadWriteMode, SAI2BFRCRBase> ;
    using FSPOL = SAI2_BFRCR_FSPOL_Values<SAI2::BFRCR, 17, 1, ReadWriteMode, SAI2BFRCRBase> ;
    using FSDEF = SAI2_BFRCR_FSDEF_Values<SAI2::BFRCR, 16, 1, ReadWriteMode, SAI2BFRCRBase> ;
    using FSALL = SAI2_BFRCR_FSALL_Values<SAI2::BFRCR, 8, 7, ReadWriteMode, SAI2BFRCRBase> ;
    using FRL = SAI2_BFRCR_FRL_Values<SAI2::BFRCR, 0, 8, ReadWriteMode, SAI2BFRCRBase> ;
    using FieldValues = SAI2_BFRCR_FRL_Values<SAI2::BFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BFRCRPack  = Register<0x4001582C, 32, ReadWriteMode, SAI2BFRCRBase, T...> ;

  struct SAI2BSLOTRBase {} ;

  struct BSLOTR : public RegisterBase<0x40015830, 32, ReadWriteMode>
  {
    using SLOTEN = SAI2_BSLOTR_SLOTEN_Values<SAI2::BSLOTR, 16, 16, ReadWriteMode, SAI2BSLOTRBase> ;
    using NBSLOT = SAI2_BSLOTR_NBSLOT_Values<SAI2::BSLOTR, 8, 4, ReadWriteMode, SAI2BSLOTRBase> ;
    using SLOTSZ = SAI2_BSLOTR_SLOTSZ_Values<SAI2::BSLOTR, 6, 2, ReadWriteMode, SAI2BSLOTRBase> ;
    using FBOFF = SAI2_BSLOTR_FBOFF_Values<SAI2::BSLOTR, 0, 5, ReadWriteMode, SAI2BSLOTRBase> ;
    using FieldValues = SAI2_BSLOTR_FBOFF_Values<SAI2::BSLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSLOTRPack  = Register<0x40015830, 32, ReadWriteMode, SAI2BSLOTRBase, T...> ;

  struct SAI2BIMBase {} ;

  struct BIM : public RegisterBase<0x40015834, 32, ReadWriteMode>
  {
    using LFSDETIE = SAI2_BIM_LFSDETIE_Values<SAI2::BIM, 6, 1, ReadWriteMode, SAI2BIMBase> ;
    using AFSDETIE = SAI2_BIM_AFSDETIE_Values<SAI2::BIM, 5, 1, ReadWriteMode, SAI2BIMBase> ;
    using CNRDYIE = SAI2_BIM_CNRDYIE_Values<SAI2::BIM, 4, 1, ReadWriteMode, SAI2BIMBase> ;
    using FREQIE = SAI2_BIM_FREQIE_Values<SAI2::BIM, 3, 1, ReadWriteMode, SAI2BIMBase> ;
    using WCKCFG = SAI2_BIM_WCKCFG_Values<SAI2::BIM, 2, 1, ReadWriteMode, SAI2BIMBase> ;
    using MUTEDET = SAI2_BIM_MUTEDET_Values<SAI2::BIM, 1, 1, ReadWriteMode, SAI2BIMBase> ;
    using OVRUDRIE = SAI2_BIM_OVRUDRIE_Values<SAI2::BIM, 0, 1, ReadWriteMode, SAI2BIMBase> ;
    using FieldValues = SAI2_BIM_OVRUDRIE_Values<SAI2::BIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BIMPack  = Register<0x40015834, 32, ReadWriteMode, SAI2BIMBase, T...> ;

  struct SAI2BSRBase {} ;

  struct BSR : public RegisterBase<0x40015838, 32, ReadMode>
  {
    using FLVL = SAI2_BSR_FLVL_Values<SAI2::BSR, 16, 3, ReadMode, SAI2BSRBase> ;
    using LFSDET = SAI2_BSR_LFSDET_Values<SAI2::BSR, 6, 1, ReadMode, SAI2BSRBase> ;
    using AFSDET = SAI2_BSR_AFSDET_Values<SAI2::BSR, 5, 1, ReadMode, SAI2BSRBase> ;
    using CNRDY = SAI2_BSR_CNRDY_Values<SAI2::BSR, 4, 1, ReadMode, SAI2BSRBase> ;
    using FREQ = SAI2_BSR_FREQ_Values<SAI2::BSR, 3, 1, ReadMode, SAI2BSRBase> ;
    using WCKCFG = SAI2_BSR_WCKCFG_Values<SAI2::BSR, 2, 1, ReadMode, SAI2BSRBase> ;
    using MUTEDET = SAI2_BSR_MUTEDET_Values<SAI2::BSR, 1, 1, ReadMode, SAI2BSRBase> ;
    using OVRUDR = SAI2_BSR_OVRUDR_Values<SAI2::BSR, 0, 1, ReadMode, SAI2BSRBase> ;
    using FieldValues = SAI2_BSR_OVRUDR_Values<SAI2::BSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRPack  = Register<0x40015838, 32, ReadMode, SAI2BSRBase, T...> ;

  struct SAI2BCLRFRBase {} ;

  struct BCLRFR : public RegisterBase<0x4001583C, 32, WriteMode>
  {
    using LFSDET = SAI2_BCLRFR_LFSDET_Values<SAI2::BCLRFR, 6, 1, WriteMode, SAI2BCLRFRBase> ;
    using CAFSDET = SAI2_BCLRFR_CAFSDET_Values<SAI2::BCLRFR, 5, 1, WriteMode, SAI2BCLRFRBase> ;
    using CNRDY = SAI2_BCLRFR_CNRDY_Values<SAI2::BCLRFR, 4, 1, WriteMode, SAI2BCLRFRBase> ;
    using WCKCFG = SAI2_BCLRFR_WCKCFG_Values<SAI2::BCLRFR, 2, 1, WriteMode, SAI2BCLRFRBase> ;
    using MUTEDET = SAI2_BCLRFR_MUTEDET_Values<SAI2::BCLRFR, 1, 1, WriteMode, SAI2BCLRFRBase> ;
    using OVRUDR = SAI2_BCLRFR_OVRUDR_Values<SAI2::BCLRFR, 0, 1, WriteMode, SAI2BCLRFRBase> ;
    using FieldValues = SAI2_BCLRFR_OVRUDR_Values<SAI2::BCLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCLRFRPack  = Register<0x4001583C, 32, WriteMode, SAI2BCLRFRBase, T...> ;

  struct SAI2BDRBase {} ;

  struct BDR : public RegisterBase<0x40015840, 32, ReadWriteMode>
  {
    using DATA = SAI2_BDR_DATA_Values<SAI2::BDR, 0, 32, ReadWriteMode, SAI2BDRBase> ;
    using FieldValues = SAI2_BDR_DATA_Values<SAI2::BDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDRPack  = Register<0x40015840, 32, ReadWriteMode, SAI2BDRBase, T...> ;

  struct SAI2ACR1Base {} ;

  struct ACR1 : public RegisterBase<0x40015804, 32, ReadWriteMode>
  {
    using MCJDIV = SAI2_ACR1_MCJDIV_Values<SAI2::ACR1, 20, 4, ReadWriteMode, SAI2ACR1Base> ;
    using NODIV = SAI2_ACR1_NODIV_Values<SAI2::ACR1, 19, 1, ReadWriteMode, SAI2ACR1Base> ;
    using DMAEN = SAI2_ACR1_DMAEN_Values<SAI2::ACR1, 17, 1, ReadWriteMode, SAI2ACR1Base> ;
    using SAIAEN = SAI2_ACR1_SAIAEN_Values<SAI2::ACR1, 16, 1, ReadWriteMode, SAI2ACR1Base> ;
    using OutDri = SAI2_ACR1_OutDri_Values<SAI2::ACR1, 13, 1, ReadWriteMode, SAI2ACR1Base> ;
    using MONO = SAI2_ACR1_MONO_Values<SAI2::ACR1, 12, 1, ReadWriteMode, SAI2ACR1Base> ;
    using SYNCEN = SAI2_ACR1_SYNCEN_Values<SAI2::ACR1, 10, 2, ReadWriteMode, SAI2ACR1Base> ;
    using CKSTR = SAI2_ACR1_CKSTR_Values<SAI2::ACR1, 9, 1, ReadWriteMode, SAI2ACR1Base> ;
    using LSBFIRST = SAI2_ACR1_LSBFIRST_Values<SAI2::ACR1, 8, 1, ReadWriteMode, SAI2ACR1Base> ;
    using DS = SAI2_ACR1_DS_Values<SAI2::ACR1, 5, 3, ReadWriteMode, SAI2ACR1Base> ;
    using PRTCFG = SAI2_ACR1_PRTCFG_Values<SAI2::ACR1, 2, 2, ReadWriteMode, SAI2ACR1Base> ;
    using MODE = SAI2_ACR1_MODE_Values<SAI2::ACR1, 0, 2, ReadWriteMode, SAI2ACR1Base> ;
    using FieldValues = SAI2_ACR1_MODE_Values<SAI2::ACR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACR1Pack  = Register<0x40015804, 32, ReadWriteMode, SAI2ACR1Base, T...> ;

  struct SAI2ACR2Base {} ;

  struct ACR2 : public RegisterBase<0x40015808, 32, ReadWriteMode>
  {
    using COMP = SAI2_ACR2_COMP_Values<SAI2::ACR2, 14, 2, ReadWriteMode, SAI2ACR2Base> ;
    using CPL = SAI2_ACR2_CPL_Values<SAI2::ACR2, 13, 1, ReadWriteMode, SAI2ACR2Base> ;
    using MUTECN = SAI2_ACR2_MUTECN_Values<SAI2::ACR2, 7, 6, ReadWriteMode, SAI2ACR2Base> ;
    using MUTEVAL = SAI2_ACR2_MUTEVAL_Values<SAI2::ACR2, 6, 1, ReadWriteMode, SAI2ACR2Base> ;
    using MUTE = SAI2_ACR2_MUTE_Values<SAI2::ACR2, 5, 1, ReadWriteMode, SAI2ACR2Base> ;
    using TRIS = SAI2_ACR2_TRIS_Values<SAI2::ACR2, 4, 1, ReadWriteMode, SAI2ACR2Base> ;
    using FFLUS = SAI2_ACR2_FFLUS_Values<SAI2::ACR2, 3, 1, ReadWriteMode, SAI2ACR2Base> ;
    using FTH = SAI2_ACR2_FTH_Values<SAI2::ACR2, 0, 3, ReadWriteMode, SAI2ACR2Base> ;
    using FieldValues = SAI2_ACR2_FTH_Values<SAI2::ACR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACR2Pack  = Register<0x40015808, 32, ReadWriteMode, SAI2ACR2Base, T...> ;

  struct SAI2AFRCRBase {} ;

  struct AFRCR : public RegisterBase<0x4001580C, 32, ReadWriteMode>
  {
    using FSOFF = SAI2_AFRCR_FSOFF_Values<SAI2::AFRCR, 18, 1, ReadWriteMode, SAI2AFRCRBase> ;
    using FSPOL = SAI2_AFRCR_FSPOL_Values<SAI2::AFRCR, 17, 1, ReadWriteMode, SAI2AFRCRBase> ;
    using FSDEF = SAI2_AFRCR_FSDEF_Values<SAI2::AFRCR, 16, 1, ReadWriteMode, SAI2AFRCRBase> ;
    using FSALL = SAI2_AFRCR_FSALL_Values<SAI2::AFRCR, 8, 7, ReadWriteMode, SAI2AFRCRBase> ;
    using FRL = SAI2_AFRCR_FRL_Values<SAI2::AFRCR, 0, 8, ReadWriteMode, SAI2AFRCRBase> ;
    using FieldValues = SAI2_AFRCR_FRL_Values<SAI2::AFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRCRPack  = Register<0x4001580C, 32, ReadWriteMode, SAI2AFRCRBase, T...> ;

  struct SAI2ASLOTRBase {} ;

  struct ASLOTR : public RegisterBase<0x40015810, 32, ReadWriteMode>
  {
    using SLOTEN = SAI2_ASLOTR_SLOTEN_Values<SAI2::ASLOTR, 16, 16, ReadWriteMode, SAI2ASLOTRBase> ;
    using NBSLOT = SAI2_ASLOTR_NBSLOT_Values<SAI2::ASLOTR, 8, 4, ReadWriteMode, SAI2ASLOTRBase> ;
    using SLOTSZ = SAI2_ASLOTR_SLOTSZ_Values<SAI2::ASLOTR, 6, 2, ReadWriteMode, SAI2ASLOTRBase> ;
    using FBOFF = SAI2_ASLOTR_FBOFF_Values<SAI2::ASLOTR, 0, 5, ReadWriteMode, SAI2ASLOTRBase> ;
    using FieldValues = SAI2_ASLOTR_FBOFF_Values<SAI2::ASLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ASLOTRPack  = Register<0x40015810, 32, ReadWriteMode, SAI2ASLOTRBase, T...> ;

  struct SAI2AIMBase {} ;

  struct AIM : public RegisterBase<0x40015814, 32, ReadWriteMode>
  {
    using LFSDET = SAI2_AIM_LFSDET_Values<SAI2::AIM, 6, 1, ReadWriteMode, SAI2AIMBase> ;
    using AFSDETIE = SAI2_AIM_AFSDETIE_Values<SAI2::AIM, 5, 1, ReadWriteMode, SAI2AIMBase> ;
    using CNRDYIE = SAI2_AIM_CNRDYIE_Values<SAI2::AIM, 4, 1, ReadWriteMode, SAI2AIMBase> ;
    using FREQIE = SAI2_AIM_FREQIE_Values<SAI2::AIM, 3, 1, ReadWriteMode, SAI2AIMBase> ;
    using WCKCFG = SAI2_AIM_WCKCFG_Values<SAI2::AIM, 2, 1, ReadWriteMode, SAI2AIMBase> ;
    using MUTEDET = SAI2_AIM_MUTEDET_Values<SAI2::AIM, 1, 1, ReadWriteMode, SAI2AIMBase> ;
    using OVRUDRIE = SAI2_AIM_OVRUDRIE_Values<SAI2::AIM, 0, 1, ReadWriteMode, SAI2AIMBase> ;
    using FieldValues = SAI2_AIM_OVRUDRIE_Values<SAI2::AIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AIMPack  = Register<0x40015814, 32, ReadWriteMode, SAI2AIMBase, T...> ;

  struct SAI2ASRBase {} ;

  struct ASR : public RegisterBase<0x40015818, 32, ReadWriteMode>
  {
    using FLVL = SAI2_ASR_FLVL_Values<SAI2::ASR, 16, 3, ReadWriteMode, SAI2ASRBase> ;
    using LFSDET = SAI2_ASR_LFSDET_Values<SAI2::ASR, 6, 1, ReadWriteMode, SAI2ASRBase> ;
    using AFSDET = SAI2_ASR_AFSDET_Values<SAI2::ASR, 5, 1, ReadWriteMode, SAI2ASRBase> ;
    using CNRDY = SAI2_ASR_CNRDY_Values<SAI2::ASR, 4, 1, ReadWriteMode, SAI2ASRBase> ;
    using FREQ = SAI2_ASR_FREQ_Values<SAI2::ASR, 3, 1, ReadWriteMode, SAI2ASRBase> ;
    using WCKCFG = SAI2_ASR_WCKCFG_Values<SAI2::ASR, 2, 1, ReadWriteMode, SAI2ASRBase> ;
    using MUTEDET = SAI2_ASR_MUTEDET_Values<SAI2::ASR, 1, 1, ReadWriteMode, SAI2ASRBase> ;
    using OVRUDR = SAI2_ASR_OVRUDR_Values<SAI2::ASR, 0, 1, ReadWriteMode, SAI2ASRBase> ;
    using FieldValues = SAI2_ASR_OVRUDR_Values<SAI2::ASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ASRPack  = Register<0x40015818, 32, ReadWriteMode, SAI2ASRBase, T...> ;

  struct SAI2ACLRFRBase {} ;

  struct ACLRFR : public RegisterBase<0x4001581C, 32, ReadWriteMode>
  {
    using LFSDET = SAI2_ACLRFR_LFSDET_Values<SAI2::ACLRFR, 6, 1, ReadWriteMode, SAI2ACLRFRBase> ;
    using CAFSDET = SAI2_ACLRFR_CAFSDET_Values<SAI2::ACLRFR, 5, 1, ReadWriteMode, SAI2ACLRFRBase> ;
    using CNRDY = SAI2_ACLRFR_CNRDY_Values<SAI2::ACLRFR, 4, 1, ReadWriteMode, SAI2ACLRFRBase> ;
    using WCKCFG = SAI2_ACLRFR_WCKCFG_Values<SAI2::ACLRFR, 2, 1, ReadWriteMode, SAI2ACLRFRBase> ;
    using MUTEDET = SAI2_ACLRFR_MUTEDET_Values<SAI2::ACLRFR, 1, 1, ReadWriteMode, SAI2ACLRFRBase> ;
    using OVRUDR = SAI2_ACLRFR_OVRUDR_Values<SAI2::ACLRFR, 0, 1, ReadWriteMode, SAI2ACLRFRBase> ;
    using FieldValues = SAI2_ACLRFR_OVRUDR_Values<SAI2::ACLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACLRFRPack  = Register<0x4001581C, 32, ReadWriteMode, SAI2ACLRFRBase, T...> ;

  struct SAI2ADRBase {} ;

  struct ADR : public RegisterBase<0x40015820, 32, ReadWriteMode>
  {
    using DATA = SAI2_ADR_DATA_Values<SAI2::ADR, 0, 32, ReadWriteMode, SAI2ADRBase> ;
    using FieldValues = SAI2_ADR_DATA_Values<SAI2::ADR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADRPack  = Register<0x40015820, 32, ReadWriteMode, SAI2ADRBase, T...> ;

} ;

#endif //#if !defined(SAI2REGISTERS_HPP)
