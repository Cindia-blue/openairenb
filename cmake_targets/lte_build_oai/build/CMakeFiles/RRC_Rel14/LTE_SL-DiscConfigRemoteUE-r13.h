/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_DiscConfigRemoteUE_r13_H_
#define	_LTE_SL_DiscConfigRemoteUE_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RSRP-RangeSL4-r13.h"
#include <NativeEnumerated.h>
#include "LTE_ReselectionInfoRelay-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_DiscConfigRemoteUE_r13__hystMax_r13 {
	LTE_SL_DiscConfigRemoteUE_r13__hystMax_r13_dB0	= 0,
	LTE_SL_DiscConfigRemoteUE_r13__hystMax_r13_dB3	= 1,
	LTE_SL_DiscConfigRemoteUE_r13__hystMax_r13_dB6	= 2,
	LTE_SL_DiscConfigRemoteUE_r13__hystMax_r13_dB9	= 3,
	LTE_SL_DiscConfigRemoteUE_r13__hystMax_r13_dB12	= 4
} e_LTE_SL_DiscConfigRemoteUE_r13__hystMax_r13;

/* LTE_SL-DiscConfigRemoteUE-r13 */
typedef struct LTE_SL_DiscConfigRemoteUE_r13 {
	LTE_RSRP_RangeSL4_r13_t	*threshHigh_r13;	/* OPTIONAL */
	long	*hystMax_r13;	/* OPTIONAL */
	LTE_ReselectionInfoRelay_r13_t	 reselectionInfoIC_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_DiscConfigRemoteUE_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_hystMax_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_DiscConfigRemoteUE_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_DiscConfigRemoteUE_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_DiscConfigRemoteUE_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_DiscConfigRemoteUE_r13_H_ */
#include <asn_internal.h>
