/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CSI_RS_ConfigBeamformed_r13_H_
#define	_LTE_CSI_RS_ConfigBeamformed_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_CSI-RS-ConfigNZPId-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "LTE_CSI-IM-ConfigId-r13.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CSI_RS_ConfigBeamformed_r13__alternativeCodebookEnabledBeamformed_r13 {
	LTE_CSI_RS_ConfigBeamformed_r13__alternativeCodebookEnabledBeamformed_r13_true	= 0
} e_LTE_CSI_RS_ConfigBeamformed_r13__alternativeCodebookEnabledBeamformed_r13;
typedef enum LTE_CSI_RS_ConfigBeamformed_r13__channelMeasRestriction_r13 {
	LTE_CSI_RS_ConfigBeamformed_r13__channelMeasRestriction_r13_on	= 0
} e_LTE_CSI_RS_ConfigBeamformed_r13__channelMeasRestriction_r13;

/* Forward declarations */
struct LTE_P_C_AndCBSR_Pair_r13;

/* LTE_CSI-RS-ConfigBeamformed-r13 */
typedef struct LTE_CSI_RS_ConfigBeamformed_r13 {
	struct LTE_CSI_RS_ConfigBeamformed_r13__csi_RS_ConfigNZPIdListExt_r13 {
		A_SEQUENCE_OF(LTE_CSI_RS_ConfigNZPId_r13_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_RS_ConfigNZPIdListExt_r13;
	struct LTE_CSI_RS_ConfigBeamformed_r13__csi_IM_ConfigIdList_r13 {
		A_SEQUENCE_OF(LTE_CSI_IM_ConfigId_r13_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ConfigIdList_r13;
	struct LTE_CSI_RS_ConfigBeamformed_r13__p_C_AndCBSR_PerResourceConfigList_r13 {
		A_SEQUENCE_OF(struct LTE_P_C_AndCBSR_Pair_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *p_C_AndCBSR_PerResourceConfigList_r13;
	struct LTE_CSI_RS_ConfigBeamformed_r13__ace_For4Tx_PerResourceConfigList_r13 {
		A_SEQUENCE_OF(BOOLEAN_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ace_For4Tx_PerResourceConfigList_r13;
	long	*alternativeCodebookEnabledBeamformed_r13;	/* OPTIONAL */
	long	*channelMeasRestriction_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_ConfigBeamformed_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_alternativeCodebookEnabledBeamformed_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_channelMeasRestriction_r13_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigBeamformed_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_ConfigBeamformed_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigBeamformed_r13_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_P-C-AndCBSR-Pair-r13.h"

#endif	/* _LTE_CSI_RS_ConfigBeamformed_r13_H_ */
#include <asn_internal.h>
