/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_Cause_H_
#define	_X2AP_Cause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_CauseRadioNetwork.h"
#include "X2AP_CauseTransport.h"
#include "X2AP_CauseProtocol.h"
#include "X2AP_CauseMisc.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_Cause_PR {
	X2AP_Cause_PR_NOTHING,	/* No components present */
	X2AP_Cause_PR_radioNetwork,
	X2AP_Cause_PR_transport,
	X2AP_Cause_PR_protocol,
	X2AP_Cause_PR_misc
	/* Extensions may appear below */
	
} X2AP_Cause_PR;

/* X2AP_Cause */
typedef struct X2AP_Cause {
	X2AP_Cause_PR present;
	union X2AP_Cause_u {
		X2AP_CauseRadioNetwork_t	 radioNetwork;
		X2AP_CauseTransport_t	 transport;
		X2AP_CauseProtocol_t	 protocol;
		X2AP_CauseMisc_t	 misc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_Cause;
extern asn_CHOICE_specifics_t asn_SPC_X2AP_Cause_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_Cause_1[4];
extern asn_per_constraints_t asn_PER_type_X2AP_Cause_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_Cause_H_ */
#include <asn_internal.h>