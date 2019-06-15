/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_UEPagingID_H_
#define	_S1AP_UEPagingID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_S-TMSI.h"
#include "S1AP_IMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_UEPagingID_PR {
	S1AP_UEPagingID_PR_NOTHING,	/* No components present */
	S1AP_UEPagingID_PR_s_TMSI,
	S1AP_UEPagingID_PR_iMSI
	/* Extensions may appear below */
	
} S1AP_UEPagingID_PR;

/* S1AP_UEPagingID */
typedef struct S1AP_UEPagingID {
	S1AP_UEPagingID_PR present;
	union S1AP_UEPagingID_u {
		S1AP_S_TMSI_t	 s_TMSI;
		S1AP_IMSI_t	 iMSI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_UEPagingID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_UEPagingID;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_UEPagingID_H_ */
#include <asn_internal.h>
