/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SecurityConfigHO_H_
#define	_LTE_SecurityConfigHO_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "LTE_NextHopChainingCount.h"
#include <constr_SEQUENCE.h>
#include "LTE_SecurityAlgorithmConfig.h"
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SecurityConfigHO__handoverType_PR {
	LTE_SecurityConfigHO__handoverType_PR_NOTHING,	/* No components present */
	LTE_SecurityConfigHO__handoverType_PR_intraLTE,
	LTE_SecurityConfigHO__handoverType_PR_interRAT
} LTE_SecurityConfigHO__handoverType_PR;

/* Forward declarations */
struct LTE_SecurityAlgorithmConfig;

/* LTE_SecurityConfigHO */
typedef struct LTE_SecurityConfigHO {
	struct LTE_SecurityConfigHO__handoverType {
		LTE_SecurityConfigHO__handoverType_PR present;
		union LTE_SecurityConfigHO__LTE_handoverType_u {
			struct LTE_SecurityConfigHO__handoverType__intraLTE {
				struct LTE_SecurityAlgorithmConfig	*securityAlgorithmConfig;	/* OPTIONAL */
				BOOLEAN_t	 keyChangeIndicator;
				LTE_NextHopChainingCount_t	 nextHopChainingCount;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} intraLTE;
			struct LTE_SecurityConfigHO__handoverType__interRAT {
				LTE_SecurityAlgorithmConfig_t	 securityAlgorithmConfig;
				OCTET_STRING_t	 nas_SecurityParamToEUTRA;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} interRAT;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} handoverType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SecurityConfigHO_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SecurityConfigHO;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SecurityConfigHO_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SecurityConfigHO_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SecurityAlgorithmConfig.h"

#endif	/* _LTE_SecurityConfigHO_H_ */
#include <asn_internal.h>
