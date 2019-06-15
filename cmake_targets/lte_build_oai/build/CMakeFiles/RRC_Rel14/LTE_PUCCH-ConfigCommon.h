/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PUCCH_ConfigCommon_H_
#define	_LTE_PUCCH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUCCH_ConfigCommon__deltaPUCCH_Shift {
	LTE_PUCCH_ConfigCommon__deltaPUCCH_Shift_ds1	= 0,
	LTE_PUCCH_ConfigCommon__deltaPUCCH_Shift_ds2	= 1,
	LTE_PUCCH_ConfigCommon__deltaPUCCH_Shift_ds3	= 2
} e_LTE_PUCCH_ConfigCommon__deltaPUCCH_Shift;

/* LTE_PUCCH-ConfigCommon */
typedef struct LTE_PUCCH_ConfigCommon {
	long	 deltaPUCCH_Shift;
	long	 nRB_CQI;
	long	 nCS_AN;
	long	 n1PUCCH_AN;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUCCH_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaPUCCH_Shift_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigCommon_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUCCH_ConfigCommon_H_ */
#include <asn_internal.h>
