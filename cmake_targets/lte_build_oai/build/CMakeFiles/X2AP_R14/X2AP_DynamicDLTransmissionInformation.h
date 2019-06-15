/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_DynamicDLTransmissionInformation_H_
#define	_X2AP_DynamicDLTransmissionInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_DynamicNAICSInformation.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_DynamicDLTransmissionInformation_PR {
	X2AP_DynamicDLTransmissionInformation_PR_NOTHING,	/* No components present */
	X2AP_DynamicDLTransmissionInformation_PR_naics_active,
	X2AP_DynamicDLTransmissionInformation_PR_naics_inactive
	/* Extensions may appear below */
	
} X2AP_DynamicDLTransmissionInformation_PR;

/* X2AP_DynamicDLTransmissionInformation */
typedef struct X2AP_DynamicDLTransmissionInformation {
	X2AP_DynamicDLTransmissionInformation_PR present;
	union X2AP_DynamicDLTransmissionInformation_u {
		X2AP_DynamicNAICSInformation_t	 naics_active;
		NULL_t	 naics_inactive;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_DynamicDLTransmissionInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_DynamicDLTransmissionInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_DynamicDLTransmissionInformation_H_ */
#include <asn_internal.h>