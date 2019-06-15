/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionReconfiguration_v920_IEs_H_
#define	_LTE_RRCConnectionReconfiguration_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionReconfiguration_v920_IEs__fullConfig_r9 {
	LTE_RRCConnectionReconfiguration_v920_IEs__fullConfig_r9_true	= 0
} e_LTE_RRCConnectionReconfiguration_v920_IEs__fullConfig_r9;

/* Forward declarations */
struct LTE_OtherConfig_r9;
struct LTE_RRCConnectionReconfiguration_v1020_IEs;

/* LTE_RRCConnectionReconfiguration-v920-IEs */
typedef struct LTE_RRCConnectionReconfiguration_v920_IEs {
	struct LTE_OtherConfig_r9	*otherConfig_r9;	/* OPTIONAL */
	long	*fullConfig_r9;	/* OPTIONAL */
	struct LTE_RRCConnectionReconfiguration_v1020_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReconfiguration_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_fullConfig_r9_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReconfiguration_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReconfiguration_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReconfiguration_v920_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_OtherConfig-r9.h"
#include "LTE_RRCConnectionReconfiguration-v1020-IEs.h"

#endif	/* _LTE_RRCConnectionReconfiguration_v920_IEs_H_ */
#include <asn_internal.h>
