/*******************************************************************************
* Filename      : aes256fieldvalues.hpp
*
* Details       : Enumerations related with AES256 peripheral. This header file
*                 is auto-generated for MSP432P401Y device.
*
*
*******************************************************************************/

#if !defined(AES256ENUMS_HPP)
#define AES256ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL0_AESOPx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESOPx_0 = FieldValue<AES256_AESACTL0_AESOPx_Values, BaseType, 0U> ;
  using AESOPx_1 = FieldValue<AES256_AESACTL0_AESOPx_Values, BaseType, 1U> ;
  using AESOPx_2 = FieldValue<AES256_AESACTL0_AESOPx_Values, BaseType, 2U> ;
  using AESOPx_3 = FieldValue<AES256_AESACTL0_AESOPx_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL0_AESKLx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESKLx_0 = FieldValue<AES256_AESACTL0_AESKLx_Values, BaseType, 0U> ;
  using AESKLx_1 = FieldValue<AES256_AESACTL0_AESKLx_Values, BaseType, 1U> ;
  using AESKLx_2 = FieldValue<AES256_AESACTL0_AESKLx_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL0_AESCMx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESCMx_0 = FieldValue<AES256_AESACTL0_AESCMx_Values, BaseType, 0U> ;
  using AESCMx_1 = FieldValue<AES256_AESACTL0_AESCMx_Values, BaseType, 1U> ;
  using AESCMx_2 = FieldValue<AES256_AESACTL0_AESCMx_Values, BaseType, 2U> ;
  using AESCMx_3 = FieldValue<AES256_AESACTL0_AESCMx_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL0_AESSWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESSWRST_0 = FieldValue<AES256_AESACTL0_AESSWRST_Values, BaseType, 0U> ;
  using AESSWRST_1 = FieldValue<AES256_AESACTL0_AESSWRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL0_AESRDYIFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESRDYIFG_0 = FieldValue<AES256_AESACTL0_AESRDYIFG_Values, BaseType, 0U> ;
  using AESRDYIFG_1 = FieldValue<AES256_AESACTL0_AESRDYIFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL0_AESERRFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESERRFG_0 = FieldValue<AES256_AESACTL0_AESERRFG_Values, BaseType, 0U> ;
  using AESERRFG_1 = FieldValue<AES256_AESACTL0_AESERRFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL0_AESRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESRDYIE_0 = FieldValue<AES256_AESACTL0_AESRDYIE_Values, BaseType, 0U> ;
  using AESRDYIE_1 = FieldValue<AES256_AESACTL0_AESRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL0_AESCMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESCMEN_0 = FieldValue<AES256_AESACTL0_AESCMEN_Values, BaseType, 0U> ;
  using AESCMEN_1 = FieldValue<AES256_AESACTL0_AESCMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESACTL1_AESBLKCNTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESASTAT_AESBUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESBUSY_0 = FieldValue<AES256_AESASTAT_AESBUSY_Values, BaseType, 0U> ;
  using AESBUSY_1 = FieldValue<AES256_AESASTAT_AESBUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESASTAT_AESKEYWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESKEYWR_0 = FieldValue<AES256_AESASTAT_AESKEYWR_Values, BaseType, 0U> ;
  using AESKEYWR_1 = FieldValue<AES256_AESASTAT_AESKEYWR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESASTAT_AESDINWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESDINWR_0 = FieldValue<AES256_AESASTAT_AESDINWR_Values, BaseType, 0U> ;
  using AESDINWR_1 = FieldValue<AES256_AESASTAT_AESDINWR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESASTAT_AESDOUTRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AESDOUTRD_0 = FieldValue<AES256_AESASTAT_AESDOUTRD_Values, BaseType, 0U> ;
  using AESDOUTRD_1 = FieldValue<AES256_AESASTAT_AESDOUTRD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESASTAT_AESKEYCNTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AES256_AESASTAT_AESKEYCNTx_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESASTAT_AESDINCNTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AES256_AESASTAT_AESDINCNTx_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESASTAT_AESDOUTCNTx_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AES256_AESASTAT_AESDOUTCNTx_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESAKEY_AESKEY0x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESAKEY_AESKEY1x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESADIN_AESDIN0x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESADIN_AESDIN1x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESADOUT_AESDOUT0x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESADOUT_AESDOUT1x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESAXDIN_AESXDIN0x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESAXDIN_AESXDIN1x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESAXIN_AESXIN0x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AES256_AESAXIN_AESXIN1x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(AES256ENUMS_HPP)
