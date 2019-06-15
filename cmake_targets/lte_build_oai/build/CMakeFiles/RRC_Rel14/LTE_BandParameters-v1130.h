/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_BandParameters_v1130_H_
#define	_LTE_BandParameters_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandParameters_v1130__supportedCSI_Proc_r11 {
	LTE_BandParameters_v1130__supportedCSI_Proc_r11_n1	= 0,
	LTE_BandParameters_v1130__supportedCSI_Proc_r11_n3	= 1,
	LTE_BandParameters_v1130__supportedCSI_Proc_r11_n4	= 2
} e_LTE_BandParameters_v1130__supportedCSI_Proc_r11;

/* LTE_BandParameters-v1130 */
typedef struct LTE_BandParameters_v1130 {
	long	 supportedCSI_Proc_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandParameters_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_supportedCSI_Proc_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandParameters_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParameters_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandParameters_v1130_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BandParameters_v1130_H_ */
#include <asn_internal.h>
