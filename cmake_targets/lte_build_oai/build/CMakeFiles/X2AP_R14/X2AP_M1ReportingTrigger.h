/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_M1ReportingTrigger_H_
#define	_X2AP_M1ReportingTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_M1ReportingTrigger {
	X2AP_M1ReportingTrigger_periodic	= 0,
	X2AP_M1ReportingTrigger_a2eventtriggered	= 1,
	/*
	 * Enumeration is extensible
	 */
	X2AP_M1ReportingTrigger_a2eventtriggered_periodic	= 2
} e_X2AP_M1ReportingTrigger;

/* X2AP_M1ReportingTrigger */
typedef long	 X2AP_M1ReportingTrigger_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_M1ReportingTrigger_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_M1ReportingTrigger;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_M1ReportingTrigger_specs_1;
asn_struct_free_f X2AP_M1ReportingTrigger_free;
asn_struct_print_f X2AP_M1ReportingTrigger_print;
asn_constr_check_f X2AP_M1ReportingTrigger_constraint;
ber_type_decoder_f X2AP_M1ReportingTrigger_decode_ber;
der_type_encoder_f X2AP_M1ReportingTrigger_encode_der;
xer_type_decoder_f X2AP_M1ReportingTrigger_decode_xer;
xer_type_encoder_f X2AP_M1ReportingTrigger_encode_xer;
per_type_decoder_f X2AP_M1ReportingTrigger_decode_uper;
per_type_encoder_f X2AP_M1ReportingTrigger_encode_uper;
per_type_decoder_f X2AP_M1ReportingTrigger_decode_aper;
per_type_encoder_f X2AP_M1ReportingTrigger_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_M1ReportingTrigger_H_ */
#include <asn_internal.h>
