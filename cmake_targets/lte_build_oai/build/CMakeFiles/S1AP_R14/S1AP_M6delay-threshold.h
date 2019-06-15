/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_M6delay_threshold_H_
#define	_S1AP_M6delay_threshold_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_M6delay_threshold {
	S1AP_M6delay_threshold_ms30	= 0,
	S1AP_M6delay_threshold_ms40	= 1,
	S1AP_M6delay_threshold_ms50	= 2,
	S1AP_M6delay_threshold_ms60	= 3,
	S1AP_M6delay_threshold_ms70	= 4,
	S1AP_M6delay_threshold_ms80	= 5,
	S1AP_M6delay_threshold_ms90	= 6,
	S1AP_M6delay_threshold_ms100	= 7,
	S1AP_M6delay_threshold_ms150	= 8,
	S1AP_M6delay_threshold_ms300	= 9,
	S1AP_M6delay_threshold_ms500	= 10,
	S1AP_M6delay_threshold_ms750	= 11
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_M6delay_threshold;

/* S1AP_M6delay-threshold */
typedef long	 S1AP_M6delay_threshold_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_M6delay_threshold_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_M6delay_threshold;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_M6delay_threshold_specs_1;
asn_struct_free_f S1AP_M6delay_threshold_free;
asn_struct_print_f S1AP_M6delay_threshold_print;
asn_constr_check_f S1AP_M6delay_threshold_constraint;
ber_type_decoder_f S1AP_M6delay_threshold_decode_ber;
der_type_encoder_f S1AP_M6delay_threshold_encode_der;
xer_type_decoder_f S1AP_M6delay_threshold_decode_xer;
xer_type_encoder_f S1AP_M6delay_threshold_encode_xer;
per_type_decoder_f S1AP_M6delay_threshold_decode_uper;
per_type_encoder_f S1AP_M6delay_threshold_encode_uper;
per_type_decoder_f S1AP_M6delay_threshold_decode_aper;
per_type_encoder_f S1AP_M6delay_threshold_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_M6delay_threshold_H_ */
#include <asn_internal.h>
