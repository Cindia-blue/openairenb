/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_OverloadAction_H_
#define	_S1AP_OverloadAction_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_OverloadAction {
	S1AP_OverloadAction_reject_non_emergency_mo_dt	= 0,
	S1AP_OverloadAction_reject_rrc_cr_signalling	= 1,
	S1AP_OverloadAction_permit_emergency_sessions_and_mobile_terminated_services_only	= 2,
	/*
	 * Enumeration is extensible
	 */
	S1AP_OverloadAction_permit_high_priority_sessions_and_mobile_terminated_services_only	= 3,
	S1AP_OverloadAction_reject_delay_tolerant_access	= 4,
	S1AP_OverloadAction_permit_high_priority_sessions_and_exception_reporting_and_mobile_terminated_services_only	= 5,
	S1AP_OverloadAction_not_accept_mo_data_or_delay_tolerant_access_from_CP_CIoT	= 6
} e_S1AP_OverloadAction;

/* S1AP_OverloadAction */
typedef long	 S1AP_OverloadAction_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_OverloadAction_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_OverloadAction;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_OverloadAction_specs_1;
asn_struct_free_f S1AP_OverloadAction_free;
asn_struct_print_f S1AP_OverloadAction_print;
asn_constr_check_f S1AP_OverloadAction_constraint;
ber_type_decoder_f S1AP_OverloadAction_decode_ber;
der_type_encoder_f S1AP_OverloadAction_encode_der;
xer_type_decoder_f S1AP_OverloadAction_decode_xer;
xer_type_encoder_f S1AP_OverloadAction_encode_xer;
per_type_decoder_f S1AP_OverloadAction_decode_uper;
per_type_encoder_f S1AP_OverloadAction_encode_uper;
per_type_decoder_f S1AP_OverloadAction_decode_aper;
per_type_encoder_f S1AP_OverloadAction_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_OverloadAction_H_ */
#include <asn_internal.h>
