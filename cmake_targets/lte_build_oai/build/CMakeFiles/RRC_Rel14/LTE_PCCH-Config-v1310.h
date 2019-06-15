/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PCCH_Config_v1310_H_
#define	_LTE_PCCH_Config_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13 {
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r1	= 0,
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r2	= 1,
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r4	= 2,
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r8	= 3,
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r16	= 4,
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r32	= 5,
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r64	= 6,
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r128	= 7,
	LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13_r256	= 8
} e_LTE_PCCH_Config_v1310__mpdcch_NumRepetition_Paging_r13;
typedef enum LTE_PCCH_Config_v1310__nB_v1310 {
	LTE_PCCH_Config_v1310__nB_v1310_one64thT	= 0,
	LTE_PCCH_Config_v1310__nB_v1310_one128thT	= 1,
	LTE_PCCH_Config_v1310__nB_v1310_one256thT	= 2
} e_LTE_PCCH_Config_v1310__nB_v1310;

/* LTE_PCCH-Config-v1310 */
typedef struct LTE_PCCH_Config_v1310 {
	long	 paging_narrowBands_r13;
	long	 mpdcch_NumRepetition_Paging_r13;
	long	*nB_v1310;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PCCH_Config_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_NumRepetition_Paging_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_nB_v1310_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PCCH_Config_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PCCH_Config_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PCCH_Config_v1310_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PCCH_Config_v1310_H_ */
#include <asn_internal.h>
