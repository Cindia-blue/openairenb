/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ResponseInformationSeNBReconfComp_H_
#define	_X2AP_ResponseInformationSeNBReconfComp_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_ResponseInformationSeNBReconfComp-SuccessItem.h"
#include "X2AP_ResponseInformationSeNBReconfComp-RejectByMeNBItem.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_ResponseInformationSeNBReconfComp_PR {
	X2AP_ResponseInformationSeNBReconfComp_PR_NOTHING,	/* No components present */
	X2AP_ResponseInformationSeNBReconfComp_PR_success,
	X2AP_ResponseInformationSeNBReconfComp_PR_reject_by_MeNB
	/* Extensions may appear below */
	
} X2AP_ResponseInformationSeNBReconfComp_PR;

/* X2AP_ResponseInformationSeNBReconfComp */
typedef struct X2AP_ResponseInformationSeNBReconfComp {
	X2AP_ResponseInformationSeNBReconfComp_PR present;
	union X2AP_ResponseInformationSeNBReconfComp_u {
		X2AP_ResponseInformationSeNBReconfComp_SuccessItem_t	 success;
		X2AP_ResponseInformationSeNBReconfComp_RejectByMeNBItem_t	 reject_by_MeNB;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ResponseInformationSeNBReconfComp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ResponseInformationSeNBReconfComp;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ResponseInformationSeNBReconfComp_H_ */
#include <asn_internal.h>