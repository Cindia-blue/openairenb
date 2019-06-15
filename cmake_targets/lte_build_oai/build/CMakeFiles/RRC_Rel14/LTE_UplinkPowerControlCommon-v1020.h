/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UplinkPowerControlCommon_v1020_H_
#define	_LTE_UplinkPowerControlCommon_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10 {
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10_deltaF_1	= 0,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10_deltaF0	= 1,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10_deltaF1	= 2,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10_deltaF2	= 3,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10_deltaF3	= 4,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10_deltaF4	= 5,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10_deltaF5	= 6,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10_deltaF6	= 7
} e_LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format3_r10;
typedef enum LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format1bCS_r10 {
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format1bCS_r10_deltaF1	= 0,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format1bCS_r10_deltaF2	= 1,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format1bCS_r10_spare2	= 2,
	LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format1bCS_r10_spare1	= 3
} e_LTE_UplinkPowerControlCommon_v1020__deltaF_PUCCH_Format1bCS_r10;

/* LTE_UplinkPowerControlCommon-v1020 */
typedef struct LTE_UplinkPowerControlCommon_v1020 {
	long	 deltaF_PUCCH_Format3_r10;
	long	 deltaF_PUCCH_Format1bCS_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UplinkPowerControlCommon_v1020_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaF_PUCCH_Format3_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaF_PUCCH_Format1bCS_r10_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlCommon_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlCommon_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlCommon_v1020_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UplinkPowerControlCommon_v1020_H_ */
#include <asn_internal.h>
