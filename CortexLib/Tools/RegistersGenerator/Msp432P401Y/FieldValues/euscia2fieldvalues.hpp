/*******************************************************************************
* Filename      : euscia2fieldvalues.hpp
*
* Details       : Enumerations related with EUSCI_A2 peripheral. This header
*                 file is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(EUSCIA2ENUMS_HPP)
#define EUSCIA2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCSWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSWRST_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSWRST_Values, BaseType, 0U> ;
  using UCSWRST_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSWRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCTXBRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXBRK_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCTXBRK_Values, BaseType, 0U> ;
  using UCTXBRK_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCTXBRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCTXADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXADDR_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCTXADDR_Values, BaseType, 0U> ;
  using UCTXADDR_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCTXADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCDORM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCDORM_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCDORM_Values, BaseType, 0U> ;
  using UCDORM_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCDORM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCBRKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBRKIE_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCBRKIE_Values, BaseType, 0U> ;
  using UCBRKIE_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCBRKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCRXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXEIE_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCRXEIE_Values, BaseType, 0U> ;
  using UCRXEIE_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCRXEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCSSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSSEL_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSSEL_Values, BaseType, 0U> ;
  using UCSSEL_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSSEL_Values, BaseType, 1U> ;
  using UCSSEL_2 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSSEL_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSYNC_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSYNC_Values, BaseType, 0U> ;
  using UCSYNC_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMODE_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCMODE_Values, BaseType, 0U> ;
  using UCMODE_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCMODE_Values, BaseType, 1U> ;
  using UCMODE_2 = FieldValue<EUSCI_A2_UCAxCTLW0_UCMODE_Values, BaseType, 2U> ;
  using UCMODE_3 = FieldValue<EUSCI_A2_UCAxCTLW0_UCMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCSPB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSPB_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSPB_Values, BaseType, 0U> ;
  using UCSPB_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCSPB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UC7BIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UC7BIT_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UC7BIT_Values, BaseType, 0U> ;
  using UC7BIT_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UC7BIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCMSB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCMSB_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCMSB_Values, BaseType, 0U> ;
  using UCMSB_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCMSB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCPAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCPAR_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCPAR_Values, BaseType, 0U> ;
  using UCPAR_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCPAR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW0_UCPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCPEN_0 = FieldValue<EUSCI_A2_UCAxCTLW0_UCPEN_Values, BaseType, 0U> ;
  using UCPEN_1 = FieldValue<EUSCI_A2_UCAxCTLW0_UCPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxCTLW1_UCGLIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCGLIT_0 = FieldValue<EUSCI_A2_UCAxCTLW1_UCGLIT_Values, BaseType, 0U> ;
  using UCGLIT_1 = FieldValue<EUSCI_A2_UCAxCTLW1_UCGLIT_Values, BaseType, 1U> ;
  using UCGLIT_2 = FieldValue<EUSCI_A2_UCAxCTLW1_UCGLIT_Values, BaseType, 2U> ;
  using UCGLIT_3 = FieldValue<EUSCI_A2_UCAxCTLW1_UCGLIT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxBRW_UCBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxMCTLW_UCOS16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOS16_0 = FieldValue<EUSCI_A2_UCAxMCTLW_UCOS16_Values, BaseType, 0U> ;
  using UCOS16_1 = FieldValue<EUSCI_A2_UCAxMCTLW_UCOS16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxMCTLW_UCBRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EUSCI_A2_UCAxMCTLW_UCBRF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxMCTLW_UCBRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxSTATW_UCBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBUSY_0 = FieldValue<EUSCI_A2_UCAxSTATW_UCBUSY_Values, BaseType, 0U> ;
  using UCBUSY_1 = FieldValue<EUSCI_A2_UCAxSTATW_UCBUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxSTATW_UCADDR_UCIDLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EUSCI_A2_UCAxSTATW_UCADDR_UCIDLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EUSCI_A2_UCAxSTATW_UCADDR_UCIDLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxSTATW_UCRXERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXERR_0 = FieldValue<EUSCI_A2_UCAxSTATW_UCRXERR_Values, BaseType, 0U> ;
  using UCRXERR_1 = FieldValue<EUSCI_A2_UCAxSTATW_UCRXERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxSTATW_UCBRK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBRK_0 = FieldValue<EUSCI_A2_UCAxSTATW_UCBRK_Values, BaseType, 0U> ;
  using UCBRK_1 = FieldValue<EUSCI_A2_UCAxSTATW_UCBRK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxSTATW_UCPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCPE_0 = FieldValue<EUSCI_A2_UCAxSTATW_UCPE_Values, BaseType, 0U> ;
  using UCPE_1 = FieldValue<EUSCI_A2_UCAxSTATW_UCPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxSTATW_UCOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCOE_0 = FieldValue<EUSCI_A2_UCAxSTATW_UCOE_Values, BaseType, 0U> ;
  using UCOE_1 = FieldValue<EUSCI_A2_UCAxSTATW_UCOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxSTATW_UCFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCFE_0 = FieldValue<EUSCI_A2_UCAxSTATW_UCFE_Values, BaseType, 0U> ;
  using UCFE_1 = FieldValue<EUSCI_A2_UCAxSTATW_UCFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxSTATW_UCLISTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCLISTEN_0 = FieldValue<EUSCI_A2_UCAxSTATW_UCLISTEN_Values, BaseType, 0U> ;
  using UCLISTEN_1 = FieldValue<EUSCI_A2_UCAxSTATW_UCLISTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxRXBUF_UCRXBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxTXBUF_UCTXBUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxABCTL_UCABDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCABDEN_0 = FieldValue<EUSCI_A2_UCAxABCTL_UCABDEN_Values, BaseType, 0U> ;
  using UCABDEN_1 = FieldValue<EUSCI_A2_UCAxABCTL_UCABDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxABCTL_UCBTOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCBTOE_0 = FieldValue<EUSCI_A2_UCAxABCTL_UCBTOE_Values, BaseType, 0U> ;
  using UCBTOE_1 = FieldValue<EUSCI_A2_UCAxABCTL_UCBTOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxABCTL_UCSTOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTOE_0 = FieldValue<EUSCI_A2_UCAxABCTL_UCSTOE_Values, BaseType, 0U> ;
  using UCSTOE_1 = FieldValue<EUSCI_A2_UCAxABCTL_UCSTOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxABCTL_UCDELIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCDELIM_0 = FieldValue<EUSCI_A2_UCAxABCTL_UCDELIM_Values, BaseType, 0U> ;
  using UCDELIM_1 = FieldValue<EUSCI_A2_UCAxABCTL_UCDELIM_Values, BaseType, 1U> ;
  using UCDELIM_2 = FieldValue<EUSCI_A2_UCAxABCTL_UCDELIM_Values, BaseType, 2U> ;
  using UCDELIM_3 = FieldValue<EUSCI_A2_UCAxABCTL_UCDELIM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIRCTL_UCIREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCIREN_0 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIREN_Values, BaseType, 0U> ;
  using UCIREN_1 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIRCTL_UCIRTXCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCIRTXCLK_0 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRTXCLK_Values, BaseType, 0U> ;
  using UCIRTXCLK_1 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRTXCLK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIRCTL_UCIRTXPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIRCTL_UCIRRXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCIRRXFE_0 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFE_Values, BaseType, 0U> ;
  using UCIRRXFE_1 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIRCTL_UCIRRXPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCIRRXPL_0 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXPL_Values, BaseType, 0U> ;
  using UCIRRXPL_1 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIE_UCRXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIE_0 = FieldValue<EUSCI_A2_UCAxIE_UCRXIE_Values, BaseType, 0U> ;
  using UCRXIE_1 = FieldValue<EUSCI_A2_UCAxIE_UCRXIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIE_UCTXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIE_0 = FieldValue<EUSCI_A2_UCAxIE_UCTXIE_Values, BaseType, 0U> ;
  using UCTXIE_1 = FieldValue<EUSCI_A2_UCAxIE_UCTXIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIE_UCSTTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTTIE_0 = FieldValue<EUSCI_A2_UCAxIE_UCSTTIE_Values, BaseType, 0U> ;
  using UCSTTIE_1 = FieldValue<EUSCI_A2_UCAxIE_UCSTTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIE_UCTXCPTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXCPTIE_0 = FieldValue<EUSCI_A2_UCAxIE_UCTXCPTIE_Values, BaseType, 0U> ;
  using UCTXCPTIE_1 = FieldValue<EUSCI_A2_UCAxIE_UCTXCPTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIFG_UCRXIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCRXIFG_0 = FieldValue<EUSCI_A2_UCAxIFG_UCRXIFG_Values, BaseType, 0U> ;
  using UCRXIFG_1 = FieldValue<EUSCI_A2_UCAxIFG_UCRXIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIFG_UCTXIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXIFG_0 = FieldValue<EUSCI_A2_UCAxIFG_UCTXIFG_Values, BaseType, 0U> ;
  using UCTXIFG_1 = FieldValue<EUSCI_A2_UCAxIFG_UCTXIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIFG_UCSTTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCSTTIFG_0 = FieldValue<EUSCI_A2_UCAxIFG_UCSTTIFG_Values, BaseType, 0U> ;
  using UCSTTIFG_1 = FieldValue<EUSCI_A2_UCAxIFG_UCSTTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIFG_UCTXCPTIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UCTXCPTIFG_0 = FieldValue<EUSCI_A2_UCAxIFG_UCTXCPTIFG_Values, BaseType, 0U> ;
  using UCTXCPTIFG_1 = FieldValue<EUSCI_A2_UCAxIFG_UCTXCPTIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EUSCI_A2_UCAxIV_UCIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(EUSCIA2ENUMS_HPP)
