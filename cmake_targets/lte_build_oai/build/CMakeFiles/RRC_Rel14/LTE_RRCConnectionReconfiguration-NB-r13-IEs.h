/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionReconfiguration_NB_r13_IEs_H_
#define	_LTE_RRCConnectionReconfiguration_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include "LTE_DedicatedInfoNAS.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionReconfiguration_NB_r13_IEs__fullConfig_r13 {
	LTE_RRCConnectionReconfiguration_NB_r13_IEs__fullConfig_r13_true	= 0
} e_LTE_RRCConnectionReconfiguration_NB_r13_IEs__fullConfig_r13;

/* Forward declarations */
struct LTE_RadioResourceConfigDedicated_NB_r13;

/* LTE_RRCConnectionReconfiguration-NB-r13-IEs */
typedef struct LTE_RRCConnectionReconfiguration_NB_r13_IEs {
	struct LTE_RRCConnectionReconfiguration_NB_r13_IEs__dedicatedInfoNASList_r13 {
		A_SEQUENCE_OF(LTE_DedicatedInfoNAS_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dedicatedInfoNASList_r13;
	struct LTE_RadioResourceConfigDedicated_NB_r13	*radioResourceConfigDedicated_r13;	/* OPTIONAL */
	long	*fullConfig_r13;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_RRCConnectionReconfiguration_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReconfiguration_NB_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_fullConfig_r13_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReconfiguration_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReconfiguration_NB_r13_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RadioResourceConfigDedicated-NB-r13.h"

#endif	/* _LTE_RRCConnectionReconfiguration_NB_r13_IEs_H_ */
#include <asn_internal.h>
