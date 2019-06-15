/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_MDTPLMNList_H_
#define	_X2AP_MDTPLMNList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_PLMN-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_MDTPLMNList */
typedef struct X2AP_MDTPLMNList {
	A_SEQUENCE_OF(X2AP_PLMN_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_MDTPLMNList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_MDTPLMNList;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_MDTPLMNList_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_MDTPLMNList_1[1];
extern asn_per_constraints_t asn_PER_type_X2AP_MDTPLMNList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_MDTPLMNList_H_ */
#include <asn_internal.h>
