/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_NAICS_Capability_Entry_r12_H_
#define	_LTE_NAICS_Capability_Entry_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12 {
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n50	= 0,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n75	= 1,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n100	= 2,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n125	= 3,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n150	= 4,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n175	= 5,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n200	= 6,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n225	= 7,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n250	= 8,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n275	= 9,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n300	= 10,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n350	= 11,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n400	= 12,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n450	= 13,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_n500	= 14,
	LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12_spare	= 15
} e_LTE_NAICS_Capability_Entry_r12__numberOfAggregatedPRB_r12;

/* LTE_NAICS-Capability-Entry-r12 */
typedef struct LTE_NAICS_Capability_Entry_r12 {
	long	 numberOfNAICS_CapableCC_r12;
	long	 numberOfAggregatedPRB_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NAICS_Capability_Entry_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_numberOfAggregatedPRB_r12_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NAICS_Capability_Entry_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NAICS_Capability_Entry_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NAICS_Capability_Entry_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NAICS_Capability_Entry_r12_H_ */
#include <asn_internal.h>
