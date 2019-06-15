/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SCPTMConfiguration_r13_H_
#define	_LTE_SCPTMConfiguration_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SC-MTCH-InfoList-r13.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SCPTM_NeighbourCellList_r13;
struct LTE_SCPTMConfiguration_v1340;

/* LTE_SCPTMConfiguration-r13 */
typedef struct LTE_SCPTMConfiguration_r13 {
	LTE_SC_MTCH_InfoList_r13_t	 sc_mtch_InfoList_r13;
	struct LTE_SCPTM_NeighbourCellList_r13	*scptm_NeighbourCellList_r13;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_SCPTMConfiguration_v1340	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCPTMConfiguration_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCPTMConfiguration_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SCPTMConfiguration_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SCPTMConfiguration_r13_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SCPTM-NeighbourCellList-r13.h"
#include "LTE_SCPTMConfiguration-v1340.h"

#endif	/* _LTE_SCPTMConfiguration_r13_H_ */
#include <asn_internal.h>
