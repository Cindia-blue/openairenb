/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SCGFailureInformation_v12d0_IEs_H_
#define	_LTE_SCGFailureInformation_v12d0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_FailureReportSCG_v12d0;

/* LTE_SCGFailureInformation-v12d0-IEs */
typedef struct LTE_SCGFailureInformation_v12d0_IEs {
	struct LTE_FailureReportSCG_v12d0	*failureReportSCG_v12d0;	/* OPTIONAL */
	struct LTE_SCGFailureInformation_v12d0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCGFailureInformation_v12d0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCGFailureInformation_v12d0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_FailureReportSCG-v12d0.h"

#endif	/* _LTE_SCGFailureInformation_v12d0_IEs_H_ */
#include <asn_internal.h>