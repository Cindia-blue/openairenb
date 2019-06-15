/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionRelease_v1320_IEs_H_
#define	_LTE_RRCConnectionRelease_v1320_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ResumeIdentity-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RRCConnectionRelease-v1320-IEs */
typedef struct LTE_RRCConnectionRelease_v1320_IEs {
	LTE_ResumeIdentity_r13_t	*resumeIdentity_r13;	/* OPTIONAL */
	struct LTE_RRCConnectionRelease_v1320_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionRelease_v1320_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionRelease_v1320_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionRelease_v1320_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionRelease_v1320_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionRelease_v1320_IEs_H_ */
#include <asn_internal.h>
