/*******************************************************************************
* Filename      : dioregisters.hpp
*
* Details       : DIO. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(DIOREGISTERS_HPP)
#define DIOREGISTERS_HPP

#include "diofieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DIO
{
  struct DIOPAINBase {} ;

  struct PAIN : public RegisterBase<0x40004C00, 16, ReadMode>
  {
    using P1IN = DIO_PAIN_P1IN_Values<DIO::PAIN, 0, 8, ReadMode, DIOPAINBase> ;
    using P2IN = DIO_PAIN_P2IN_Values<DIO::PAIN, 8, 8, ReadMode, DIOPAINBase> ;
    using FieldValues = DIO_PAIN_P2IN_Values<DIO::PAIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PAINPack  = Register<0x40004C00, 16, ReadMode, DIOPAINBase, T...> ;

  struct DIOPAOUTBase {} ;

  struct PAOUT : public RegisterBase<0x40004C02, 16, ReadWriteMode>
  {
    using P2OUT = DIO_PAOUT_P2OUT_Values<DIO::PAOUT, 8, 8, ReadWriteMode, DIOPAOUTBase> ;
    using P1OUT = DIO_PAOUT_P1OUT_Values<DIO::PAOUT, 0, 8, ReadWriteMode, DIOPAOUTBase> ;
    using FieldValues = DIO_PAOUT_P1OUT_Values<DIO::PAOUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PAOUTPack  = Register<0x40004C02, 16, ReadWriteMode, DIOPAOUTBase, T...> ;

  struct DIOPADIRBase {} ;

  struct PADIR : public RegisterBase<0x40004C04, 16, ReadWriteMode>
  {
    using P1DIR = DIO_PADIR_P1DIR_Values<DIO::PADIR, 0, 8, ReadWriteMode, DIOPADIRBase> ;
    using P2DIR = DIO_PADIR_P2DIR_Values<DIO::PADIR, 8, 8, ReadWriteMode, DIOPADIRBase> ;
    using FieldValues = DIO_PADIR_P2DIR_Values<DIO::PADIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PADIRPack  = Register<0x40004C04, 16, ReadWriteMode, DIOPADIRBase, T...> ;

  struct DIOPARENBase {} ;

  struct PAREN : public RegisterBase<0x40004C06, 16, ReadWriteMode>
  {
    using P1REN = DIO_PAREN_P1REN_Values<DIO::PAREN, 0, 8, ReadWriteMode, DIOPARENBase> ;
    using P2REN = DIO_PAREN_P2REN_Values<DIO::PAREN, 8, 8, ReadWriteMode, DIOPARENBase> ;
    using FieldValues = DIO_PAREN_P2REN_Values<DIO::PAREN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PARENPack  = Register<0x40004C06, 16, ReadWriteMode, DIOPARENBase, T...> ;

  struct DIOPADSBase {} ;

  struct PADS : public RegisterBase<0x40004C08, 16, ReadWriteMode>
  {
    using P1DS = DIO_PADS_P1DS_Values<DIO::PADS, 0, 8, ReadWriteMode, DIOPADSBase> ;
    using P2DS = DIO_PADS_P2DS_Values<DIO::PADS, 8, 8, ReadWriteMode, DIOPADSBase> ;
    using FieldValues = DIO_PADS_P2DS_Values<DIO::PADS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PADSPack  = Register<0x40004C08, 16, ReadWriteMode, DIOPADSBase, T...> ;

  struct DIOPASEL0Base {} ;

  struct PASEL0 : public RegisterBase<0x40004C0A, 16, ReadWriteMode>
  {
    using P1SEL0 = DIO_PASEL0_P1SEL0_Values<DIO::PASEL0, 0, 8, ReadWriteMode, DIOPASEL0Base> ;
    using P2SEL0 = DIO_PASEL0_P2SEL0_Values<DIO::PASEL0, 8, 8, ReadWriteMode, DIOPASEL0Base> ;
    using FieldValues = DIO_PASEL0_P2SEL0_Values<DIO::PASEL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PASEL0Pack  = Register<0x40004C0A, 16, ReadWriteMode, DIOPASEL0Base, T...> ;

  struct DIOPASEL1Base {} ;

  struct PASEL1 : public RegisterBase<0x40004C0C, 16, ReadWriteMode>
  {
    using P1SEL1 = DIO_PASEL1_P1SEL1_Values<DIO::PASEL1, 0, 8, ReadWriteMode, DIOPASEL1Base> ;
    using P2SEL1 = DIO_PASEL1_P2SEL1_Values<DIO::PASEL1, 8, 8, ReadWriteMode, DIOPASEL1Base> ;
    using FieldValues = DIO_PASEL1_P2SEL1_Values<DIO::PASEL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PASEL1Pack  = Register<0x40004C0C, 16, ReadWriteMode, DIOPASEL1Base, T...> ;

  struct DIOP1IVBase {} ;

  struct P1IV : public RegisterBase<0x40004C0E, 16, ReadMode>
  {
    using P1IVField = DIO_P1IV_P1IV_Values<DIO::P1IV, 0, 5, ReadMode, DIOP1IVBase> ;
    using FieldValues = DIO_P1IV_P1IV_Values<DIO::P1IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P1IVPack  = Register<0x40004C0E, 16, ReadMode, DIOP1IVBase, T...> ;

  struct DIOPASELCBase {} ;

  struct PASELC : public RegisterBase<0x40004C16, 16, ReadWriteMode>
  {
    using P1SELC = DIO_PASELC_P1SELC_Values<DIO::PASELC, 0, 8, ReadWriteMode, DIOPASELCBase> ;
    using P2SELC = DIO_PASELC_P2SELC_Values<DIO::PASELC, 8, 8, ReadWriteMode, DIOPASELCBase> ;
    using FieldValues = DIO_PASELC_P2SELC_Values<DIO::PASELC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PASELCPack  = Register<0x40004C16, 16, ReadWriteMode, DIOPASELCBase, T...> ;

  struct DIOPAIESBase {} ;

  struct PAIES : public RegisterBase<0x40004C18, 16, ReadWriteMode>
  {
    using P1IES = DIO_PAIES_P1IES_Values<DIO::PAIES, 0, 8, ReadWriteMode, DIOPAIESBase> ;
    using P2IES = DIO_PAIES_P2IES_Values<DIO::PAIES, 8, 8, ReadWriteMode, DIOPAIESBase> ;
    using FieldValues = DIO_PAIES_P2IES_Values<DIO::PAIES, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PAIESPack  = Register<0x40004C18, 16, ReadWriteMode, DIOPAIESBase, T...> ;

  struct DIOPAIEBase {} ;

  struct PAIE : public RegisterBase<0x40004C1A, 16, ReadWriteMode>
  {
    using P1IE = DIO_PAIE_P1IE_Values<DIO::PAIE, 0, 8, ReadWriteMode, DIOPAIEBase> ;
    using P2IE = DIO_PAIE_P2IE_Values<DIO::PAIE, 8, 8, ReadWriteMode, DIOPAIEBase> ;
    using FieldValues = DIO_PAIE_P2IE_Values<DIO::PAIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PAIEPack  = Register<0x40004C1A, 16, ReadWriteMode, DIOPAIEBase, T...> ;

  struct DIOPAIFGBase {} ;

  struct PAIFG : public RegisterBase<0x40004C1C, 16, ReadWriteMode>
  {
    using P1IFG = DIO_PAIFG_P1IFG_Values<DIO::PAIFG, 0, 8, ReadWriteMode, DIOPAIFGBase> ;
    using P2IFG = DIO_PAIFG_P2IFG_Values<DIO::PAIFG, 8, 8, ReadWriteMode, DIOPAIFGBase> ;
    using FieldValues = DIO_PAIFG_P2IFG_Values<DIO::PAIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PAIFGPack  = Register<0x40004C1C, 16, ReadWriteMode, DIOPAIFGBase, T...> ;

  struct DIOP2IVBase {} ;

  struct P2IV : public RegisterBase<0x40004C1E, 16, ReadMode>
  {
    using P2IVField = DIO_P2IV_P2IV_Values<DIO::P2IV, 0, 5, ReadMode, DIOP2IVBase> ;
    using FieldValues = DIO_P2IV_P2IV_Values<DIO::P2IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P2IVPack  = Register<0x40004C1E, 16, ReadMode, DIOP2IVBase, T...> ;

  struct DIOPBINBase {} ;

  struct PBIN : public RegisterBase<0x40004C20, 16, ReadMode>
  {
    using P3IN = DIO_PBIN_P3IN_Values<DIO::PBIN, 0, 8, ReadMode, DIOPBINBase> ;
    using P4IN = DIO_PBIN_P4IN_Values<DIO::PBIN, 8, 8, ReadMode, DIOPBINBase> ;
    using FieldValues = DIO_PBIN_P4IN_Values<DIO::PBIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBINPack  = Register<0x40004C20, 16, ReadMode, DIOPBINBase, T...> ;

  struct DIOPBOUTBase {} ;

  struct PBOUT : public RegisterBase<0x40004C22, 16, ReadWriteMode>
  {
    using P3OUT = DIO_PBOUT_P3OUT_Values<DIO::PBOUT, 0, 8, ReadWriteMode, DIOPBOUTBase> ;
    using P4OUT = DIO_PBOUT_P4OUT_Values<DIO::PBOUT, 8, 8, ReadWriteMode, DIOPBOUTBase> ;
    using FieldValues = DIO_PBOUT_P4OUT_Values<DIO::PBOUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBOUTPack  = Register<0x40004C22, 16, ReadWriteMode, DIOPBOUTBase, T...> ;

  struct DIOPBDIRBase {} ;

  struct PBDIR : public RegisterBase<0x40004C24, 16, ReadWriteMode>
  {
    using P3DIR = DIO_PBDIR_P3DIR_Values<DIO::PBDIR, 0, 8, ReadWriteMode, DIOPBDIRBase> ;
    using P4DIR = DIO_PBDIR_P4DIR_Values<DIO::PBDIR, 8, 8, ReadWriteMode, DIOPBDIRBase> ;
    using FieldValues = DIO_PBDIR_P4DIR_Values<DIO::PBDIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBDIRPack  = Register<0x40004C24, 16, ReadWriteMode, DIOPBDIRBase, T...> ;

  struct DIOPBRENBase {} ;

  struct PBREN : public RegisterBase<0x40004C26, 16, ReadWriteMode>
  {
    using P3REN = DIO_PBREN_P3REN_Values<DIO::PBREN, 0, 8, ReadWriteMode, DIOPBRENBase> ;
    using P4REN = DIO_PBREN_P4REN_Values<DIO::PBREN, 8, 8, ReadWriteMode, DIOPBRENBase> ;
    using FieldValues = DIO_PBREN_P4REN_Values<DIO::PBREN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBRENPack  = Register<0x40004C26, 16, ReadWriteMode, DIOPBRENBase, T...> ;

  struct DIOPBDSBase {} ;

  struct PBDS : public RegisterBase<0x40004C28, 16, ReadWriteMode>
  {
    using P3DS = DIO_PBDS_P3DS_Values<DIO::PBDS, 0, 8, ReadWriteMode, DIOPBDSBase> ;
    using P4DS = DIO_PBDS_P4DS_Values<DIO::PBDS, 8, 8, ReadWriteMode, DIOPBDSBase> ;
    using FieldValues = DIO_PBDS_P4DS_Values<DIO::PBDS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBDSPack  = Register<0x40004C28, 16, ReadWriteMode, DIOPBDSBase, T...> ;

  struct DIOPBSEL0Base {} ;

  struct PBSEL0 : public RegisterBase<0x40004C2A, 16, ReadWriteMode>
  {
    using P4SEL0 = DIO_PBSEL0_P4SEL0_Values<DIO::PBSEL0, 8, 8, ReadWriteMode, DIOPBSEL0Base> ;
    using P3SEL0 = DIO_PBSEL0_P3SEL0_Values<DIO::PBSEL0, 0, 8, ReadWriteMode, DIOPBSEL0Base> ;
    using FieldValues = DIO_PBSEL0_P3SEL0_Values<DIO::PBSEL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBSEL0Pack  = Register<0x40004C2A, 16, ReadWriteMode, DIOPBSEL0Base, T...> ;

  struct DIOPBSEL1Base {} ;

  struct PBSEL1 : public RegisterBase<0x40004C2C, 16, ReadWriteMode>
  {
    using P3SEL1 = DIO_PBSEL1_P3SEL1_Values<DIO::PBSEL1, 0, 8, ReadWriteMode, DIOPBSEL1Base> ;
    using P4SEL1 = DIO_PBSEL1_P4SEL1_Values<DIO::PBSEL1, 8, 8, ReadWriteMode, DIOPBSEL1Base> ;
    using FieldValues = DIO_PBSEL1_P4SEL1_Values<DIO::PBSEL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBSEL1Pack  = Register<0x40004C2C, 16, ReadWriteMode, DIOPBSEL1Base, T...> ;

  struct DIOP3IVBase {} ;

  struct P3IV : public RegisterBase<0x40004C2E, 16, ReadMode>
  {
    using P3IVField = DIO_P3IV_P3IV_Values<DIO::P3IV, 0, 5, ReadMode, DIOP3IVBase> ;
    using FieldValues = DIO_P3IV_P3IV_Values<DIO::P3IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P3IVPack  = Register<0x40004C2E, 16, ReadMode, DIOP3IVBase, T...> ;

  struct DIOPBSELCBase {} ;

  struct PBSELC : public RegisterBase<0x40004C36, 16, ReadWriteMode>
  {
    using P3SELC = DIO_PBSELC_P3SELC_Values<DIO::PBSELC, 0, 8, ReadWriteMode, DIOPBSELCBase> ;
    using P4SELC = DIO_PBSELC_P4SELC_Values<DIO::PBSELC, 8, 8, ReadWriteMode, DIOPBSELCBase> ;
    using FieldValues = DIO_PBSELC_P4SELC_Values<DIO::PBSELC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBSELCPack  = Register<0x40004C36, 16, ReadWriteMode, DIOPBSELCBase, T...> ;

  struct DIOPBIESBase {} ;

  struct PBIES : public RegisterBase<0x40004C38, 16, ReadWriteMode>
  {
    using P3IES = DIO_PBIES_P3IES_Values<DIO::PBIES, 0, 8, ReadWriteMode, DIOPBIESBase> ;
    using P4IES = DIO_PBIES_P4IES_Values<DIO::PBIES, 8, 8, ReadWriteMode, DIOPBIESBase> ;
    using FieldValues = DIO_PBIES_P4IES_Values<DIO::PBIES, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBIESPack  = Register<0x40004C38, 16, ReadWriteMode, DIOPBIESBase, T...> ;

  struct DIOPBIEBase {} ;

  struct PBIE : public RegisterBase<0x40004C3A, 16, ReadWriteMode>
  {
    using P3IE = DIO_PBIE_P3IE_Values<DIO::PBIE, 0, 8, ReadWriteMode, DIOPBIEBase> ;
    using P4IE = DIO_PBIE_P4IE_Values<DIO::PBIE, 8, 8, ReadWriteMode, DIOPBIEBase> ;
    using FieldValues = DIO_PBIE_P4IE_Values<DIO::PBIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBIEPack  = Register<0x40004C3A, 16, ReadWriteMode, DIOPBIEBase, T...> ;

  struct DIOPBIFGBase {} ;

  struct PBIFG : public RegisterBase<0x40004C3C, 16, ReadWriteMode>
  {
    using P3IFG = DIO_PBIFG_P3IFG_Values<DIO::PBIFG, 0, 8, ReadWriteMode, DIOPBIFGBase> ;
    using P4IFG = DIO_PBIFG_P4IFG_Values<DIO::PBIFG, 8, 8, ReadWriteMode, DIOPBIFGBase> ;
    using FieldValues = DIO_PBIFG_P4IFG_Values<DIO::PBIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PBIFGPack  = Register<0x40004C3C, 16, ReadWriteMode, DIOPBIFGBase, T...> ;

  struct DIOP4IVBase {} ;

  struct P4IV : public RegisterBase<0x40004C3E, 16, ReadMode>
  {
    using P4IVField = DIO_P4IV_P4IV_Values<DIO::P4IV, 0, 5, ReadMode, DIOP4IVBase> ;
    using FieldValues = DIO_P4IV_P4IV_Values<DIO::P4IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P4IVPack  = Register<0x40004C3E, 16, ReadMode, DIOP4IVBase, T...> ;

  struct DIOPCINBase {} ;

  struct PCIN : public RegisterBase<0x40004C40, 16, ReadMode>
  {
    using P5IN = DIO_PCIN_P5IN_Values<DIO::PCIN, 0, 8, ReadMode, DIOPCINBase> ;
    using P6IN = DIO_PCIN_P6IN_Values<DIO::PCIN, 8, 8, ReadMode, DIOPCINBase> ;
    using FieldValues = DIO_PCIN_P6IN_Values<DIO::PCIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCINPack  = Register<0x40004C40, 16, ReadMode, DIOPCINBase, T...> ;

  struct DIOPCOUTBase {} ;

  struct PCOUT : public RegisterBase<0x40004C42, 16, ReadWriteMode>
  {
    using P5OUT = DIO_PCOUT_P5OUT_Values<DIO::PCOUT, 0, 8, ReadWriteMode, DIOPCOUTBase> ;
    using P6OUT = DIO_PCOUT_P6OUT_Values<DIO::PCOUT, 8, 8, ReadWriteMode, DIOPCOUTBase> ;
    using FieldValues = DIO_PCOUT_P6OUT_Values<DIO::PCOUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCOUTPack  = Register<0x40004C42, 16, ReadWriteMode, DIOPCOUTBase, T...> ;

  struct DIOPCDIRBase {} ;

  struct PCDIR : public RegisterBase<0x40004C44, 16, ReadWriteMode>
  {
    using P5DIR = DIO_PCDIR_P5DIR_Values<DIO::PCDIR, 0, 8, ReadWriteMode, DIOPCDIRBase> ;
    using P6DIR = DIO_PCDIR_P6DIR_Values<DIO::PCDIR, 8, 8, ReadWriteMode, DIOPCDIRBase> ;
    using FieldValues = DIO_PCDIR_P6DIR_Values<DIO::PCDIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCDIRPack  = Register<0x40004C44, 16, ReadWriteMode, DIOPCDIRBase, T...> ;

  struct DIOPCRENBase {} ;

  struct PCREN : public RegisterBase<0x40004C46, 16, ReadWriteMode>
  {
    using P5REN = DIO_PCREN_P5REN_Values<DIO::PCREN, 0, 8, ReadWriteMode, DIOPCRENBase> ;
    using P6REN = DIO_PCREN_P6REN_Values<DIO::PCREN, 8, 8, ReadWriteMode, DIOPCRENBase> ;
    using FieldValues = DIO_PCREN_P6REN_Values<DIO::PCREN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCRENPack  = Register<0x40004C46, 16, ReadWriteMode, DIOPCRENBase, T...> ;

  struct DIOPCDSBase {} ;

  struct PCDS : public RegisterBase<0x40004C48, 16, ReadWriteMode>
  {
    using P5DS = DIO_PCDS_P5DS_Values<DIO::PCDS, 0, 8, ReadWriteMode, DIOPCDSBase> ;
    using P6DS = DIO_PCDS_P6DS_Values<DIO::PCDS, 8, 8, ReadWriteMode, DIOPCDSBase> ;
    using FieldValues = DIO_PCDS_P6DS_Values<DIO::PCDS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCDSPack  = Register<0x40004C48, 16, ReadWriteMode, DIOPCDSBase, T...> ;

  struct DIOPCSEL0Base {} ;

  struct PCSEL0 : public RegisterBase<0x40004C4A, 16, ReadWriteMode>
  {
    using P5SEL0 = DIO_PCSEL0_P5SEL0_Values<DIO::PCSEL0, 0, 8, ReadWriteMode, DIOPCSEL0Base> ;
    using P6SEL0 = DIO_PCSEL0_P6SEL0_Values<DIO::PCSEL0, 8, 8, ReadWriteMode, DIOPCSEL0Base> ;
    using FieldValues = DIO_PCSEL0_P6SEL0_Values<DIO::PCSEL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCSEL0Pack  = Register<0x40004C4A, 16, ReadWriteMode, DIOPCSEL0Base, T...> ;

  struct DIOPCSEL1Base {} ;

  struct PCSEL1 : public RegisterBase<0x40004C4C, 16, ReadWriteMode>
  {
    using P5SEL1 = DIO_PCSEL1_P5SEL1_Values<DIO::PCSEL1, 0, 8, ReadWriteMode, DIOPCSEL1Base> ;
    using P6SEL1 = DIO_PCSEL1_P6SEL1_Values<DIO::PCSEL1, 8, 8, ReadWriteMode, DIOPCSEL1Base> ;
    using FieldValues = DIO_PCSEL1_P6SEL1_Values<DIO::PCSEL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCSEL1Pack  = Register<0x40004C4C, 16, ReadWriteMode, DIOPCSEL1Base, T...> ;

  struct DIOP5IVBase {} ;

  struct P5IV : public RegisterBase<0x40004C4E, 16, ReadMode>
  {
    using P5IVField = DIO_P5IV_P5IV_Values<DIO::P5IV, 0, 5, ReadMode, DIOP5IVBase> ;
    using FieldValues = DIO_P5IV_P5IV_Values<DIO::P5IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P5IVPack  = Register<0x40004C4E, 16, ReadMode, DIOP5IVBase, T...> ;

  struct DIOPCSELCBase {} ;

  struct PCSELC : public RegisterBase<0x40004C56, 16, ReadWriteMode>
  {
    using P5SELC = DIO_PCSELC_P5SELC_Values<DIO::PCSELC, 0, 8, ReadWriteMode, DIOPCSELCBase> ;
    using P6SELC = DIO_PCSELC_P6SELC_Values<DIO::PCSELC, 8, 8, ReadWriteMode, DIOPCSELCBase> ;
    using FieldValues = DIO_PCSELC_P6SELC_Values<DIO::PCSELC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCSELCPack  = Register<0x40004C56, 16, ReadWriteMode, DIOPCSELCBase, T...> ;

  struct DIOPCIESBase {} ;

  struct PCIES : public RegisterBase<0x40004C58, 16, ReadWriteMode>
  {
    using P5IES = DIO_PCIES_P5IES_Values<DIO::PCIES, 0, 8, ReadWriteMode, DIOPCIESBase> ;
    using P6IES = DIO_PCIES_P6IES_Values<DIO::PCIES, 8, 8, ReadWriteMode, DIOPCIESBase> ;
    using FieldValues = DIO_PCIES_P6IES_Values<DIO::PCIES, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCIESPack  = Register<0x40004C58, 16, ReadWriteMode, DIOPCIESBase, T...> ;

  struct DIOPCIEBase {} ;

  struct PCIE : public RegisterBase<0x40004C5A, 16, ReadWriteMode>
  {
    using P5IE = DIO_PCIE_P5IE_Values<DIO::PCIE, 0, 8, ReadWriteMode, DIOPCIEBase> ;
    using P6IE = DIO_PCIE_P6IE_Values<DIO::PCIE, 8, 8, ReadWriteMode, DIOPCIEBase> ;
    using FieldValues = DIO_PCIE_P6IE_Values<DIO::PCIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCIEPack  = Register<0x40004C5A, 16, ReadWriteMode, DIOPCIEBase, T...> ;

  struct DIOPCIFGBase {} ;

  struct PCIFG : public RegisterBase<0x40004C5C, 16, ReadWriteMode>
  {
    using P5IFG = DIO_PCIFG_P5IFG_Values<DIO::PCIFG, 0, 8, ReadWriteMode, DIOPCIFGBase> ;
    using P6IFG = DIO_PCIFG_P6IFG_Values<DIO::PCIFG, 8, 8, ReadWriteMode, DIOPCIFGBase> ;
    using FieldValues = DIO_PCIFG_P6IFG_Values<DIO::PCIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCIFGPack  = Register<0x40004C5C, 16, ReadWriteMode, DIOPCIFGBase, T...> ;

  struct DIOP6IVBase {} ;

  struct P6IV : public RegisterBase<0x40004C5E, 16, ReadMode>
  {
    using P6IVField = DIO_P6IV_P6IV_Values<DIO::P6IV, 0, 5, ReadMode, DIOP6IVBase> ;
    using FieldValues = DIO_P6IV_P6IV_Values<DIO::P6IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P6IVPack  = Register<0x40004C5E, 16, ReadMode, DIOP6IVBase, T...> ;

  struct DIOPDINBase {} ;

  struct PDIN : public RegisterBase<0x40004C60, 16, ReadMode>
  {
    using P7IN = DIO_PDIN_P7IN_Values<DIO::PDIN, 0, 8, ReadMode, DIOPDINBase> ;
    using P8IN = DIO_PDIN_P8IN_Values<DIO::PDIN, 8, 8, ReadMode, DIOPDINBase> ;
    using FieldValues = DIO_PDIN_P8IN_Values<DIO::PDIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDINPack  = Register<0x40004C60, 16, ReadMode, DIOPDINBase, T...> ;

  struct DIOPDOUTBase {} ;

  struct PDOUT : public RegisterBase<0x40004C62, 16, ReadWriteMode>
  {
    using P7OUT = DIO_PDOUT_P7OUT_Values<DIO::PDOUT, 0, 8, ReadWriteMode, DIOPDOUTBase> ;
    using P8OUT = DIO_PDOUT_P8OUT_Values<DIO::PDOUT, 8, 8, ReadWriteMode, DIOPDOUTBase> ;
    using FieldValues = DIO_PDOUT_P8OUT_Values<DIO::PDOUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDOUTPack  = Register<0x40004C62, 16, ReadWriteMode, DIOPDOUTBase, T...> ;

  struct DIOPDDIRBase {} ;

  struct PDDIR : public RegisterBase<0x40004C64, 16, ReadWriteMode>
  {
    using P7DIR = DIO_PDDIR_P7DIR_Values<DIO::PDDIR, 0, 8, ReadWriteMode, DIOPDDIRBase> ;
    using P8DIR = DIO_PDDIR_P8DIR_Values<DIO::PDDIR, 8, 8, ReadWriteMode, DIOPDDIRBase> ;
    using FieldValues = DIO_PDDIR_P8DIR_Values<DIO::PDDIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDDIRPack  = Register<0x40004C64, 16, ReadWriteMode, DIOPDDIRBase, T...> ;

  struct DIOPDRENBase {} ;

  struct PDREN : public RegisterBase<0x40004C66, 16, ReadWriteMode>
  {
    using P7REN = DIO_PDREN_P7REN_Values<DIO::PDREN, 0, 8, ReadWriteMode, DIOPDRENBase> ;
    using P8REN = DIO_PDREN_P8REN_Values<DIO::PDREN, 8, 8, ReadWriteMode, DIOPDRENBase> ;
    using FieldValues = DIO_PDREN_P8REN_Values<DIO::PDREN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDRENPack  = Register<0x40004C66, 16, ReadWriteMode, DIOPDRENBase, T...> ;

  struct DIOPDDSBase {} ;

  struct PDDS : public RegisterBase<0x40004C68, 16, ReadWriteMode>
  {
    using P7DS = DIO_PDDS_P7DS_Values<DIO::PDDS, 0, 8, ReadWriteMode, DIOPDDSBase> ;
    using P8DS = DIO_PDDS_P8DS_Values<DIO::PDDS, 8, 8, ReadWriteMode, DIOPDDSBase> ;
    using FieldValues = DIO_PDDS_P8DS_Values<DIO::PDDS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDDSPack  = Register<0x40004C68, 16, ReadWriteMode, DIOPDDSBase, T...> ;

  struct DIOPDSEL0Base {} ;

  struct PDSEL0 : public RegisterBase<0x40004C6A, 16, ReadWriteMode>
  {
    using P7SEL0 = DIO_PDSEL0_P7SEL0_Values<DIO::PDSEL0, 0, 8, ReadWriteMode, DIOPDSEL0Base> ;
    using P8SEL0 = DIO_PDSEL0_P8SEL0_Values<DIO::PDSEL0, 8, 8, ReadWriteMode, DIOPDSEL0Base> ;
    using FieldValues = DIO_PDSEL0_P8SEL0_Values<DIO::PDSEL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDSEL0Pack  = Register<0x40004C6A, 16, ReadWriteMode, DIOPDSEL0Base, T...> ;

  struct DIOPDSEL1Base {} ;

  struct PDSEL1 : public RegisterBase<0x40004C6C, 16, ReadWriteMode>
  {
    using P7SEL1 = DIO_PDSEL1_P7SEL1_Values<DIO::PDSEL1, 0, 8, ReadWriteMode, DIOPDSEL1Base> ;
    using P8SEL1 = DIO_PDSEL1_P8SEL1_Values<DIO::PDSEL1, 8, 8, ReadWriteMode, DIOPDSEL1Base> ;
    using FieldValues = DIO_PDSEL1_P8SEL1_Values<DIO::PDSEL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDSEL1Pack  = Register<0x40004C6C, 16, ReadWriteMode, DIOPDSEL1Base, T...> ;

  struct DIOP7IVBase {} ;

  struct P7IV : public RegisterBase<0x40004C6E, 16, ReadMode>
  {
    using P7IVField = DIO_P7IV_P7IV_Values<DIO::P7IV, 0, 5, ReadMode, DIOP7IVBase> ;
    using FieldValues = DIO_P7IV_P7IV_Values<DIO::P7IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P7IVPack  = Register<0x40004C6E, 16, ReadMode, DIOP7IVBase, T...> ;

  struct DIOPDSELCBase {} ;

  struct PDSELC : public RegisterBase<0x40004C76, 16, ReadWriteMode>
  {
    using P7SELC = DIO_PDSELC_P7SELC_Values<DIO::PDSELC, 0, 8, ReadWriteMode, DIOPDSELCBase> ;
    using P8SELC = DIO_PDSELC_P8SELC_Values<DIO::PDSELC, 8, 8, ReadWriteMode, DIOPDSELCBase> ;
    using FieldValues = DIO_PDSELC_P8SELC_Values<DIO::PDSELC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDSELCPack  = Register<0x40004C76, 16, ReadWriteMode, DIOPDSELCBase, T...> ;

  struct DIOPDIESBase {} ;

  struct PDIES : public RegisterBase<0x40004C78, 16, ReadWriteMode>
  {
    using P7IES = DIO_PDIES_P7IES_Values<DIO::PDIES, 0, 8, ReadWriteMode, DIOPDIESBase> ;
    using P8IES = DIO_PDIES_P8IES_Values<DIO::PDIES, 8, 8, ReadWriteMode, DIOPDIESBase> ;
    using FieldValues = DIO_PDIES_P8IES_Values<DIO::PDIES, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDIESPack  = Register<0x40004C78, 16, ReadWriteMode, DIOPDIESBase, T...> ;

  struct DIOPDIEBase {} ;

  struct PDIE : public RegisterBase<0x40004C7A, 16, ReadWriteMode>
  {
    using P7IE = DIO_PDIE_P7IE_Values<DIO::PDIE, 0, 8, ReadWriteMode, DIOPDIEBase> ;
    using P8IE = DIO_PDIE_P8IE_Values<DIO::PDIE, 8, 8, ReadWriteMode, DIOPDIEBase> ;
    using FieldValues = DIO_PDIE_P8IE_Values<DIO::PDIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDIEPack  = Register<0x40004C7A, 16, ReadWriteMode, DIOPDIEBase, T...> ;

  struct DIOPDIFGBase {} ;

  struct PDIFG : public RegisterBase<0x40004C7C, 16, ReadWriteMode>
  {
    using P7IFG = DIO_PDIFG_P7IFG_Values<DIO::PDIFG, 0, 8, ReadWriteMode, DIOPDIFGBase> ;
    using P8IFG = DIO_PDIFG_P8IFG_Values<DIO::PDIFG, 8, 8, ReadWriteMode, DIOPDIFGBase> ;
    using FieldValues = DIO_PDIFG_P8IFG_Values<DIO::PDIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDIFGPack  = Register<0x40004C7C, 16, ReadWriteMode, DIOPDIFGBase, T...> ;

  struct DIOP8IVBase {} ;

  struct P8IV : public RegisterBase<0x40004C7E, 16, ReadMode>
  {
    using P8IVField = DIO_P8IV_P8IV_Values<DIO::P8IV, 0, 5, ReadMode, DIOP8IVBase> ;
    using FieldValues = DIO_P8IV_P8IV_Values<DIO::P8IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P8IVPack  = Register<0x40004C7E, 16, ReadMode, DIOP8IVBase, T...> ;

  struct DIOPEINBase {} ;

  struct PEIN : public RegisterBase<0x40004C80, 16, ReadMode>
  {
    using P9IN = DIO_PEIN_P9IN_Values<DIO::PEIN, 0, 8, ReadMode, DIOPEINBase> ;
    using P10IN = DIO_PEIN_P10IN_Values<DIO::PEIN, 8, 8, ReadMode, DIOPEINBase> ;
    using FieldValues = DIO_PEIN_P10IN_Values<DIO::PEIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PEINPack  = Register<0x40004C80, 16, ReadMode, DIOPEINBase, T...> ;

  struct DIOPEOUTBase {} ;

  struct PEOUT : public RegisterBase<0x40004C82, 16, ReadWriteMode>
  {
    using P9OUT = DIO_PEOUT_P9OUT_Values<DIO::PEOUT, 0, 8, ReadWriteMode, DIOPEOUTBase> ;
    using P10OUT = DIO_PEOUT_P10OUT_Values<DIO::PEOUT, 8, 8, ReadWriteMode, DIOPEOUTBase> ;
    using FieldValues = DIO_PEOUT_P10OUT_Values<DIO::PEOUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PEOUTPack  = Register<0x40004C82, 16, ReadWriteMode, DIOPEOUTBase, T...> ;

  struct DIOPEDIRBase {} ;

  struct PEDIR : public RegisterBase<0x40004C84, 16, ReadWriteMode>
  {
    using P9DIR = DIO_PEDIR_P9DIR_Values<DIO::PEDIR, 0, 8, ReadWriteMode, DIOPEDIRBase> ;
    using P10DIR = DIO_PEDIR_P10DIR_Values<DIO::PEDIR, 8, 8, ReadWriteMode, DIOPEDIRBase> ;
    using FieldValues = DIO_PEDIR_P10DIR_Values<DIO::PEDIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PEDIRPack  = Register<0x40004C84, 16, ReadWriteMode, DIOPEDIRBase, T...> ;

  struct DIOPERENBase {} ;

  struct PEREN : public RegisterBase<0x40004C86, 16, ReadWriteMode>
  {
    using P9REN = DIO_PEREN_P9REN_Values<DIO::PEREN, 0, 8, ReadWriteMode, DIOPERENBase> ;
    using P10REN = DIO_PEREN_P10REN_Values<DIO::PEREN, 8, 8, ReadWriteMode, DIOPERENBase> ;
    using FieldValues = DIO_PEREN_P10REN_Values<DIO::PEREN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PERENPack  = Register<0x40004C86, 16, ReadWriteMode, DIOPERENBase, T...> ;

  struct DIOPEDSBase {} ;

  struct PEDS : public RegisterBase<0x40004C88, 16, ReadWriteMode>
  {
    using P9DS = DIO_PEDS_P9DS_Values<DIO::PEDS, 0, 8, ReadWriteMode, DIOPEDSBase> ;
    using P10DS = DIO_PEDS_P10DS_Values<DIO::PEDS, 8, 8, ReadWriteMode, DIOPEDSBase> ;
    using FieldValues = DIO_PEDS_P10DS_Values<DIO::PEDS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PEDSPack  = Register<0x40004C88, 16, ReadWriteMode, DIOPEDSBase, T...> ;

  struct DIOPESEL0Base {} ;

  struct PESEL0 : public RegisterBase<0x40004C8A, 16, ReadWriteMode>
  {
    using P9SEL0 = DIO_PESEL0_P9SEL0_Values<DIO::PESEL0, 0, 8, ReadWriteMode, DIOPESEL0Base> ;
    using P10SEL0 = DIO_PESEL0_P10SEL0_Values<DIO::PESEL0, 8, 8, ReadWriteMode, DIOPESEL0Base> ;
    using FieldValues = DIO_PESEL0_P10SEL0_Values<DIO::PESEL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PESEL0Pack  = Register<0x40004C8A, 16, ReadWriteMode, DIOPESEL0Base, T...> ;

  struct DIOPESEL1Base {} ;

  struct PESEL1 : public RegisterBase<0x40004C8C, 16, ReadWriteMode>
  {
    using P9SEL1 = DIO_PESEL1_P9SEL1_Values<DIO::PESEL1, 0, 8, ReadWriteMode, DIOPESEL1Base> ;
    using P10SEL1 = DIO_PESEL1_P10SEL1_Values<DIO::PESEL1, 8, 8, ReadWriteMode, DIOPESEL1Base> ;
    using FieldValues = DIO_PESEL1_P10SEL1_Values<DIO::PESEL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PESEL1Pack  = Register<0x40004C8C, 16, ReadWriteMode, DIOPESEL1Base, T...> ;

  struct DIOP9IVBase {} ;

  struct P9IV : public RegisterBase<0x40004C8E, 16, ReadMode>
  {
    using P9IVField = DIO_P9IV_P9IV_Values<DIO::P9IV, 0, 5, ReadMode, DIOP9IVBase> ;
    using FieldValues = DIO_P9IV_P9IV_Values<DIO::P9IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P9IVPack  = Register<0x40004C8E, 16, ReadMode, DIOP9IVBase, T...> ;

  struct DIOPESELCBase {} ;

  struct PESELC : public RegisterBase<0x40004C96, 16, ReadWriteMode>
  {
    using P9SELC = DIO_PESELC_P9SELC_Values<DIO::PESELC, 0, 8, ReadWriteMode, DIOPESELCBase> ;
    using P10SELC = DIO_PESELC_P10SELC_Values<DIO::PESELC, 8, 8, ReadWriteMode, DIOPESELCBase> ;
    using FieldValues = DIO_PESELC_P10SELC_Values<DIO::PESELC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PESELCPack  = Register<0x40004C96, 16, ReadWriteMode, DIOPESELCBase, T...> ;

  struct DIOPEIESBase {} ;

  struct PEIES : public RegisterBase<0x40004C98, 16, ReadWriteMode>
  {
    using P9IES = DIO_PEIES_P9IES_Values<DIO::PEIES, 0, 8, ReadWriteMode, DIOPEIESBase> ;
    using P10IES = DIO_PEIES_P10IES_Values<DIO::PEIES, 8, 8, ReadWriteMode, DIOPEIESBase> ;
    using FieldValues = DIO_PEIES_P10IES_Values<DIO::PEIES, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PEIESPack  = Register<0x40004C98, 16, ReadWriteMode, DIOPEIESBase, T...> ;

  struct DIOPEIEBase {} ;

  struct PEIE : public RegisterBase<0x40004C9A, 16, ReadWriteMode>
  {
    using P9IE = DIO_PEIE_P9IE_Values<DIO::PEIE, 0, 8, ReadWriteMode, DIOPEIEBase> ;
    using P10IE = DIO_PEIE_P10IE_Values<DIO::PEIE, 8, 8, ReadWriteMode, DIOPEIEBase> ;
    using FieldValues = DIO_PEIE_P10IE_Values<DIO::PEIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PEIEPack  = Register<0x40004C9A, 16, ReadWriteMode, DIOPEIEBase, T...> ;

  struct DIOPEIFGBase {} ;

  struct PEIFG : public RegisterBase<0x40004C9C, 16, ReadWriteMode>
  {
    using P9IFG = DIO_PEIFG_P9IFG_Values<DIO::PEIFG, 0, 8, ReadWriteMode, DIOPEIFGBase> ;
    using P10IFG = DIO_PEIFG_P10IFG_Values<DIO::PEIFG, 8, 8, ReadWriteMode, DIOPEIFGBase> ;
    using FieldValues = DIO_PEIFG_P10IFG_Values<DIO::PEIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PEIFGPack  = Register<0x40004C9C, 16, ReadWriteMode, DIOPEIFGBase, T...> ;

  struct DIOP10IVBase {} ;

  struct P10IV : public RegisterBase<0x40004C9E, 16, ReadMode>
  {
    using P10IVField = DIO_P10IV_P10IV_Values<DIO::P10IV, 0, 5, ReadMode, DIOP10IVBase> ;
    using FieldValues = DIO_P10IV_P10IV_Values<DIO::P10IV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using P10IVPack  = Register<0x40004C9E, 16, ReadMode, DIOP10IVBase, T...> ;

  struct DIOPJINBase {} ;

  struct PJIN : public RegisterBase<0x40004D20, 16, ReadMode>
  {
    using PJINField = DIO_PJIN_PJIN_Values<DIO::PJIN, 0, 16, ReadMode, DIOPJINBase> ;
    using FieldValues = DIO_PJIN_PJIN_Values<DIO::PJIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PJINPack  = Register<0x40004D20, 16, ReadMode, DIOPJINBase, T...> ;

  struct DIOPJOUTBase {} ;

  struct PJOUT : public RegisterBase<0x40004D22, 16, ReadWriteMode>
  {
    using PJOUTField = DIO_PJOUT_PJOUT_Values<DIO::PJOUT, 0, 16, ReadWriteMode, DIOPJOUTBase> ;
    using FieldValues = DIO_PJOUT_PJOUT_Values<DIO::PJOUT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PJOUTPack  = Register<0x40004D22, 16, ReadWriteMode, DIOPJOUTBase, T...> ;

  struct DIOPJDIRBase {} ;

  struct PJDIR : public RegisterBase<0x40004D24, 16, ReadWriteMode>
  {
    using PJDIRField = DIO_PJDIR_PJDIR_Values<DIO::PJDIR, 0, 16, ReadWriteMode, DIOPJDIRBase> ;
    using FieldValues = DIO_PJDIR_PJDIR_Values<DIO::PJDIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PJDIRPack  = Register<0x40004D24, 16, ReadWriteMode, DIOPJDIRBase, T...> ;

  struct DIOPJRENBase {} ;

  struct PJREN : public RegisterBase<0x40004D26, 16, ReadWriteMode>
  {
    using PJRENField = DIO_PJREN_PJREN_Values<DIO::PJREN, 0, 16, ReadWriteMode, DIOPJRENBase> ;
    using FieldValues = DIO_PJREN_PJREN_Values<DIO::PJREN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PJRENPack  = Register<0x40004D26, 16, ReadWriteMode, DIOPJRENBase, T...> ;

  struct DIOPJDSBase {} ;

  struct PJDS : public RegisterBase<0x40004D28, 16, ReadWriteMode>
  {
    using PJDSField = DIO_PJDS_PJDS_Values<DIO::PJDS, 0, 16, ReadWriteMode, DIOPJDSBase> ;
    using FieldValues = DIO_PJDS_PJDS_Values<DIO::PJDS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PJDSPack  = Register<0x40004D28, 16, ReadWriteMode, DIOPJDSBase, T...> ;

  struct DIOPJSEL0Base {} ;

  struct PJSEL0 : public RegisterBase<0x40004D2A, 16, ReadWriteMode>
  {
    using PJSEL0Field = DIO_PJSEL0_PJSEL0_Values<DIO::PJSEL0, 0, 16, ReadWriteMode, DIOPJSEL0Base> ;
    using FieldValues = DIO_PJSEL0_PJSEL0_Values<DIO::PJSEL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PJSEL0Pack  = Register<0x40004D2A, 16, ReadWriteMode, DIOPJSEL0Base, T...> ;

  struct DIOPJSEL1Base {} ;

  struct PJSEL1 : public RegisterBase<0x40004D2C, 16, ReadWriteMode>
  {
    using PJSEL1Field = DIO_PJSEL1_PJSEL1_Values<DIO::PJSEL1, 0, 16, ReadWriteMode, DIOPJSEL1Base> ;
    using FieldValues = DIO_PJSEL1_PJSEL1_Values<DIO::PJSEL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PJSEL1Pack  = Register<0x40004D2C, 16, ReadWriteMode, DIOPJSEL1Base, T...> ;

  struct DIOPJSELCBase {} ;

  struct PJSELC : public RegisterBase<0x40004D36, 16, ReadWriteMode>
  {
    using PJSELCField = DIO_PJSELC_PJSELC_Values<DIO::PJSELC, 0, 16, ReadWriteMode, DIOPJSELCBase> ;
    using FieldValues = DIO_PJSELC_PJSELC_Values<DIO::PJSELC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PJSELCPack  = Register<0x40004D36, 16, ReadWriteMode, DIOPJSELCBase, T...> ;

} ;

#endif //#if !defined(DIOREGISTERS_HPP)
