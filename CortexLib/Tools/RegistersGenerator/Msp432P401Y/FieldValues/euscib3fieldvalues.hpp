/*******************************************************************************
* Filename      : euscib3fieldvalues.hpp
*
* Details       : Enumerations related with EUSCI_B3 peripheral. This header
*                 file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(EUSCIB3ENUMS_HPP)
#define EUSCIB3ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCSWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSWRST_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSWRST_Values, BaseType, 0U> ;
  using UCSWRST_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSWRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCTXSTT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXSTT_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTXSTT_Values, BaseType, 0U> ;
  using UCTXSTT_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTXSTT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCTXSTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXSTP_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTXSTP_Values, BaseType, 0U> ;
  using UCTXSTP_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTXSTP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCTXNACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXNACK_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTXNACK_Values, BaseType, 0U> ;
  using UCTXNACK_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTXNACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTR_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTR_Values, BaseType, 0U> ;
  using UCTR_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCTXACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXACK_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTXACK_Values, BaseType, 0U> ;
  using UCTXACK_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCTXACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSSEL_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSSEL_Values, BaseType, 0U> ;
  using UCSSEL_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSSEL_Values, BaseType, 1U> ;
  using UCSSEL_2 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSSEL_Values, BaseType, 2U> ;
  using UCSSEL_3 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSYNC_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSYNC_Values, BaseType, 0U> ;
  using UCSYNC_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMODE_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCMODE_Values, BaseType, 0U> ;
  using UCMODE_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCMODE_Values, BaseType, 1U> ;
  using UCMODE_2 = FieldValue<EUSCI_B3_UCBxCTLW0_UCMODE_Values, BaseType, 2U> ;
  using UCMODE_3 = FieldValue<EUSCI_B3_UCBxCTLW0_UCMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCMST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMST_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCMST_Values, BaseType, 0U> ;
  using UCMST_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCMST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCMM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMM_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCMM_Values, BaseType, 0U> ;
  using UCMM_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCMM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCSLA10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSLA10_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSLA10_Values, BaseType, 0U> ;
  using UCSLA10_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCSLA10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW0_UCA10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCA10_0 = FieldValue<EUSCI_B3_UCBxCTLW0_UCA10_Values, BaseType, 0U> ;
  using UCA10_1 = FieldValue<EUSCI_B3_UCBxCTLW0_UCA10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW1_UCGLIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCGLIT_0 = FieldValue<EUSCI_B3_UCBxCTLW1_UCGLIT_Values, BaseType, 0U> ;
  using UCGLIT_1 = FieldValue<EUSCI_B3_UCBxCTLW1_UCGLIT_Values, BaseType, 1U> ;
  using UCGLIT_2 = FieldValue<EUSCI_B3_UCBxCTLW1_UCGLIT_Values, BaseType, 2U> ;
  using UCGLIT_3 = FieldValue<EUSCI_B3_UCBxCTLW1_UCGLIT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW1_UCASTP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCASTP_0 = FieldValue<EUSCI_B3_UCBxCTLW1_UCASTP_Values, BaseType, 0U> ;
  using UCASTP_1 = FieldValue<EUSCI_B3_UCBxCTLW1_UCASTP_Values, BaseType, 1U> ;
  using UCASTP_2 = FieldValue<EUSCI_B3_UCBxCTLW1_UCASTP_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW1_UCSWACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSWACK_0 = FieldValue<EUSCI_B3_UCBxCTLW1_UCSWACK_Values, BaseType, 0U> ;
  using UCSWACK_1 = FieldValue<EUSCI_B3_UCBxCTLW1_UCSWACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW1_UCSTPNACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTPNACK_0 = FieldValue<EUSCI_B3_UCBxCTLW1_UCSTPNACK_Values, BaseType, 0U> ;
  using UCSTPNACK_1 = FieldValue<EUSCI_B3_UCBxCTLW1_UCSTPNACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW1_UCCLTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCCLTO_0 = FieldValue<EUSCI_B3_UCBxCTLW1_UCCLTO_Values, BaseType, 0U> ;
  using UCCLTO_1 = FieldValue<EUSCI_B3_UCBxCTLW1_UCCLTO_Values, BaseType, 1U> ;
  using UCCLTO_2 = FieldValue<EUSCI_B3_UCBxCTLW1_UCCLTO_Values, BaseType, 2U> ;
  using UCCLTO_3 = FieldValue<EUSCI_B3_UCBxCTLW1_UCCLTO_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxCTLW1_UCETXINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCETXINT_0 = FieldValue<EUSCI_B3_UCBxCTLW1_UCETXINT_Values, BaseType, 0U> ;
  using UCETXINT_1 = FieldValue<EUSCI_B3_UCBxCTLW1_UCETXINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxBRW_UCBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxSTATW_UCBBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBBUSY_0 = FieldValue<EUSCI_B3_UCBxSTATW_UCBBUSY_Values, BaseType, 0U> ;
  using UCBBUSY_1 = FieldValue<EUSCI_B3_UCBxSTATW_UCBBUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxSTATW_UCGC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCGC_0 = FieldValue<EUSCI_B3_UCBxSTATW_UCGC_Values, BaseType, 0U> ;
  using UCGC_1 = FieldValue<EUSCI_B3_UCBxSTATW_UCGC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxSTATW_UCSCLLOW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSCLLOW_0 = FieldValue<EUSCI_B3_UCBxSTATW_UCSCLLOW_Values, BaseType, 0U> ;
  using UCSCLLOW_1 = FieldValue<EUSCI_B3_UCBxSTATW_UCSCLLOW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxSTATW_UCBCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxTBCNT_UCTBCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxRXBUF_UCRXBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxTXBUF_UCTXBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA0_I2COA0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA0_UCOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOAEN_0 = FieldValue<EUSCI_B3_UCBxI2COA0_UCOAEN_Values, BaseType, 0U> ;
  using UCOAEN_1 = FieldValue<EUSCI_B3_UCBxI2COA0_UCOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA0_UCGCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCGCEN_0 = FieldValue<EUSCI_B3_UCBxI2COA0_UCGCEN_Values, BaseType, 0U> ;
  using UCGCEN_1 = FieldValue<EUSCI_B3_UCBxI2COA0_UCGCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA1_I2COA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA1_UCOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOAEN_0 = FieldValue<EUSCI_B3_UCBxI2COA1_UCOAEN_Values, BaseType, 0U> ;
  using UCOAEN_1 = FieldValue<EUSCI_B3_UCBxI2COA1_UCOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA2_I2COA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA2_UCOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOAEN_0 = FieldValue<EUSCI_B3_UCBxI2COA2_UCOAEN_Values, BaseType, 0U> ;
  using UCOAEN_1 = FieldValue<EUSCI_B3_UCBxI2COA2_UCOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA3_I2COA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2COA3_UCOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOAEN_0 = FieldValue<EUSCI_B3_UCBxI2COA3_UCOAEN_Values, BaseType, 0U> ;
  using UCOAEN_1 = FieldValue<EUSCI_B3_UCBxI2COA3_UCOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxADDRX_ADDRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxADDMASK_ADDMASK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxI2CSA_I2CSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCRXIE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIE0_0 = FieldValue<EUSCI_B3_UCBxIE_UCRXIE0_Values, BaseType, 0U> ;
  using UCRXIE0_1 = FieldValue<EUSCI_B3_UCBxIE_UCRXIE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCTXIE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIE0_0 = FieldValue<EUSCI_B3_UCBxIE_UCTXIE0_Values, BaseType, 0U> ;
  using UCTXIE0_1 = FieldValue<EUSCI_B3_UCBxIE_UCTXIE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCSTTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTTIE_0 = FieldValue<EUSCI_B3_UCBxIE_UCSTTIE_Values, BaseType, 0U> ;
  using UCSTTIE_1 = FieldValue<EUSCI_B3_UCBxIE_UCSTTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCSTPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTPIE_0 = FieldValue<EUSCI_B3_UCBxIE_UCSTPIE_Values, BaseType, 0U> ;
  using UCSTPIE_1 = FieldValue<EUSCI_B3_UCBxIE_UCSTPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCALIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCALIE_0 = FieldValue<EUSCI_B3_UCBxIE_UCALIE_Values, BaseType, 0U> ;
  using UCALIE_1 = FieldValue<EUSCI_B3_UCBxIE_UCALIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCNACKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCNACKIE_0 = FieldValue<EUSCI_B3_UCBxIE_UCNACKIE_Values, BaseType, 0U> ;
  using UCNACKIE_1 = FieldValue<EUSCI_B3_UCBxIE_UCNACKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCBCNTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBCNTIE_0 = FieldValue<EUSCI_B3_UCBxIE_UCBCNTIE_Values, BaseType, 0U> ;
  using UCBCNTIE_1 = FieldValue<EUSCI_B3_UCBxIE_UCBCNTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCCLTOIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCCLTOIE_0 = FieldValue<EUSCI_B3_UCBxIE_UCCLTOIE_Values, BaseType, 0U> ;
  using UCCLTOIE_1 = FieldValue<EUSCI_B3_UCBxIE_UCCLTOIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCRXIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIE1_0 = FieldValue<EUSCI_B3_UCBxIE_UCRXIE1_Values, BaseType, 0U> ;
  using UCRXIE1_1 = FieldValue<EUSCI_B3_UCBxIE_UCRXIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCTXIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIE1_0 = FieldValue<EUSCI_B3_UCBxIE_UCTXIE1_Values, BaseType, 0U> ;
  using UCTXIE1_1 = FieldValue<EUSCI_B3_UCBxIE_UCTXIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCRXIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIE2_0 = FieldValue<EUSCI_B3_UCBxIE_UCRXIE2_Values, BaseType, 0U> ;
  using UCRXIE2_1 = FieldValue<EUSCI_B3_UCBxIE_UCRXIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCTXIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIE2_0 = FieldValue<EUSCI_B3_UCBxIE_UCTXIE2_Values, BaseType, 0U> ;
  using UCTXIE2_1 = FieldValue<EUSCI_B3_UCBxIE_UCTXIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCRXIE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIE3_0 = FieldValue<EUSCI_B3_UCBxIE_UCRXIE3_Values, BaseType, 0U> ;
  using UCRXIE3_1 = FieldValue<EUSCI_B3_UCBxIE_UCRXIE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCTXIE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIE3_0 = FieldValue<EUSCI_B3_UCBxIE_UCTXIE3_Values, BaseType, 0U> ;
  using UCTXIE3_1 = FieldValue<EUSCI_B3_UCBxIE_UCTXIE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIE_UCBIT9IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBIT9IE_0 = FieldValue<EUSCI_B3_UCBxIE_UCBIT9IE_Values, BaseType, 0U> ;
  using UCBIT9IE_1 = FieldValue<EUSCI_B3_UCBxIE_UCBIT9IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCRXIFG0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIFG0_0 = FieldValue<EUSCI_B3_UCBxIFG_UCRXIFG0_Values, BaseType, 0U> ;
  using UCRXIFG0_1 = FieldValue<EUSCI_B3_UCBxIFG_UCRXIFG0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCTXIFG0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIFG0_0 = FieldValue<EUSCI_B3_UCBxIFG_UCTXIFG0_Values, BaseType, 0U> ;
  using UCTXIFG0_1 = FieldValue<EUSCI_B3_UCBxIFG_UCTXIFG0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCSTTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTTIFG_0 = FieldValue<EUSCI_B3_UCBxIFG_UCSTTIFG_Values, BaseType, 0U> ;
  using UCSTTIFG_1 = FieldValue<EUSCI_B3_UCBxIFG_UCSTTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCSTPIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTPIFG_0 = FieldValue<EUSCI_B3_UCBxIFG_UCSTPIFG_Values, BaseType, 0U> ;
  using UCSTPIFG_1 = FieldValue<EUSCI_B3_UCBxIFG_UCSTPIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCALIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCALIFG_0 = FieldValue<EUSCI_B3_UCBxIFG_UCALIFG_Values, BaseType, 0U> ;
  using UCALIFG_1 = FieldValue<EUSCI_B3_UCBxIFG_UCALIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCNACKIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCNACKIFG_0 = FieldValue<EUSCI_B3_UCBxIFG_UCNACKIFG_Values, BaseType, 0U> ;
  using UCNACKIFG_1 = FieldValue<EUSCI_B3_UCBxIFG_UCNACKIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCBCNTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBCNTIFG_0 = FieldValue<EUSCI_B3_UCBxIFG_UCBCNTIFG_Values, BaseType, 0U> ;
  using UCBCNTIFG_1 = FieldValue<EUSCI_B3_UCBxIFG_UCBCNTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCCLTOIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCCLTOIFG_0 = FieldValue<EUSCI_B3_UCBxIFG_UCCLTOIFG_Values, BaseType, 0U> ;
  using UCCLTOIFG_1 = FieldValue<EUSCI_B3_UCBxIFG_UCCLTOIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCRXIFG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIFG1_0 = FieldValue<EUSCI_B3_UCBxIFG_UCRXIFG1_Values, BaseType, 0U> ;
  using UCRXIFG1_1 = FieldValue<EUSCI_B3_UCBxIFG_UCRXIFG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCTXIFG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIFG1_0 = FieldValue<EUSCI_B3_UCBxIFG_UCTXIFG1_Values, BaseType, 0U> ;
  using UCTXIFG1_1 = FieldValue<EUSCI_B3_UCBxIFG_UCTXIFG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCRXIFG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIFG2_0 = FieldValue<EUSCI_B3_UCBxIFG_UCRXIFG2_Values, BaseType, 0U> ;
  using UCRXIFG2_1 = FieldValue<EUSCI_B3_UCBxIFG_UCRXIFG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCTXIFG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIFG2_0 = FieldValue<EUSCI_B3_UCBxIFG_UCTXIFG2_Values, BaseType, 0U> ;
  using UCTXIFG2_1 = FieldValue<EUSCI_B3_UCBxIFG_UCTXIFG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCRXIFG3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIFG3_0 = FieldValue<EUSCI_B3_UCBxIFG_UCRXIFG3_Values, BaseType, 0U> ;
  using UCRXIFG3_1 = FieldValue<EUSCI_B3_UCBxIFG_UCRXIFG3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCTXIFG3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIFG3_0 = FieldValue<EUSCI_B3_UCBxIFG_UCTXIFG3_Values, BaseType, 0U> ;
  using UCTXIFG3_1 = FieldValue<EUSCI_B3_UCBxIFG_UCTXIFG3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIFG_UCBIT9IFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBIT9IFG_0 = FieldValue<EUSCI_B3_UCBxIFG_UCBIT9IFG_Values, BaseType, 0U> ;
  using UCBIT9IFG_1 = FieldValue<EUSCI_B3_UCBxIFG_UCBIT9IFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_B3_UCBxIV_UCIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(EUSCIB3ENUMS_HPP)
