/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_Q_OffsetRange_H_
#define	_LTE_Q_OffsetRange_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_Q_OffsetRange {
	LTE_Q_OffsetRange_dB_24	= 0,
	LTE_Q_OffsetRange_dB_22	= 1,
	LTE_Q_OffsetRange_dB_20	= 2,
	LTE_Q_OffsetRange_dB_18	= 3,
	LTE_Q_OffsetRange_dB_16	= 4,
	LTE_Q_OffsetRange_dB_14	= 5,
	LTE_Q_OffsetRange_dB_12	= 6,
	LTE_Q_OffsetRange_dB_10	= 7,
	LTE_Q_OffsetRange_dB_8	= 8,
	LTE_Q_OffsetRange_dB_6	= 9,
	LTE_Q_OffsetRange_dB_5	= 10,
	LTE_Q_OffsetRange_dB_4	= 11,
	LTE_Q_OffsetRange_dB_3	= 12,
	LTE_Q_OffsetRange_dB_2	= 13,
	LTE_Q_OffsetRange_dB_1	= 14,
	LTE_Q_OffsetRange_dB0	= 15,
	LTE_Q_OffsetRange_dB1	= 16,
	LTE_Q_OffsetRange_dB2	= 17,
	LTE_Q_OffsetRange_dB3	= 18,
	LTE_Q_OffsetRange_dB4	= 19,
	LTE_Q_OffsetRange_dB5	= 20,
	LTE_Q_OffsetRange_dB6	= 21,
	LTE_Q_OffsetRange_dB8	= 22,
	LTE_Q_OffsetRange_dB10	= 23,
	LTE_Q_OffsetRange_dB12	= 24,
	LTE_Q_OffsetRange_dB14	= 25,
	LTE_Q_OffsetRange_dB16	= 26,
	LTE_Q_OffsetRange_dB18	= 27,
	LTE_Q_OffsetRange_dB20	= 28,
	LTE_Q_OffsetRange_dB22	= 29,
	LTE_Q_OffsetRange_dB24	= 30
} e_LTE_Q_OffsetRange;

/* LTE_Q-OffsetRange */
typedef long	 LTE_Q_OffsetRange_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_Q_OffsetRange_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_Q_OffsetRange;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_Q_OffsetRange_specs_1;
asn_struct_free_f LTE_Q_OffsetRange_free;
asn_struct_print_f LTE_Q_OffsetRange_print;
asn_constr_check_f LTE_Q_OffsetRange_constraint;
ber_type_decoder_f LTE_Q_OffsetRange_decode_ber;
der_type_encoder_f LTE_Q_OffsetRange_encode_der;
xer_type_decoder_f LTE_Q_OffsetRange_decode_xer;
xer_type_encoder_f LTE_Q_OffsetRange_encode_xer;
per_type_decoder_f LTE_Q_OffsetRange_decode_uper;
per_type_encoder_f LTE_Q_OffsetRange_encode_uper;
per_type_decoder_f LTE_Q_OffsetRange_decode_aper;
per_type_encoder_f LTE_Q_OffsetRange_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_Q_OffsetRange_H_ */
#include <asn_internal.h>
