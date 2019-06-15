/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PUCCH_ConfigDedicated_v1020_H_
#define	_LTE_PUCCH_ConfigDedicated_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "LTE_PUCCH-Format3-Conf-r13.h"
#include <NULL.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR {
	LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR_NOTHING,	/* No components present */
	LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR_format3_r10,
	LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR_channelSelection_r10
} LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR;
typedef enum LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR {
	LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR_NOTHING,	/* No components present */
	LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR_release,
	LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR_setup
} LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR;
typedef enum LTE_PUCCH_ConfigDedicated_v1020__twoAntennaPortActivatedPUCCH_Format1a1b_r10 {
	LTE_PUCCH_ConfigDedicated_v1020__twoAntennaPortActivatedPUCCH_Format1a1b_r10_true	= 0
} e_LTE_PUCCH_ConfigDedicated_v1020__twoAntennaPortActivatedPUCCH_Format1a1b_r10;
typedef enum LTE_PUCCH_ConfigDedicated_v1020__simultaneousPUCCH_PUSCH_r10 {
	LTE_PUCCH_ConfigDedicated_v1020__simultaneousPUCCH_PUSCH_r10_true	= 0
} e_LTE_PUCCH_ConfigDedicated_v1020__simultaneousPUCCH_PUSCH_r10;

/* Forward declarations */
struct LTE_N1PUCCH_AN_CS_r10;

/* LTE_PUCCH-ConfigDedicated-v1020 */
typedef struct LTE_PUCCH_ConfigDedicated_v1020 {
	struct LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10 {
		LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10_PR present;
		union LTE_PUCCH_ConfigDedicated_v1020__LTE_pucch_Format_r10_u {
			LTE_PUCCH_Format3_Conf_r13_t	 format3_r10;
			struct LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10 {
				struct LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10 {
					LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10_PR present;
					union LTE_PUCCH_ConfigDedicated_v1020__LTE_pucch_Format_r10__LTE_channelSelection_r10__LTE_n1PUCCH_AN_CS_r10_u {
						NULL_t	 release;
						struct LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup {
							struct LTE_PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup__n1PUCCH_AN_CS_List_r10 {
								A_SEQUENCE_OF(struct LTE_N1PUCCH_AN_CS_r10) list;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} n1PUCCH_AN_CS_List_r10;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} setup;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *n1PUCCH_AN_CS_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} channelSelection_r10;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pucch_Format_r10;
	long	*twoAntennaPortActivatedPUCCH_Format1a1b_r10;	/* OPTIONAL */
	long	*simultaneousPUCCH_PUSCH_r10;	/* OPTIONAL */
	long	*n1PUCCH_AN_RepP1_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUCCH_ConfigDedicated_v1020_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_twoAntennaPortActivatedPUCCH_Format1a1b_r10_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_simultaneousPUCCH_PUSCH_r10_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigDedicated_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigDedicated_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigDedicated_v1020_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_N1PUCCH-AN-CS-r10.h"

#endif	/* _LTE_PUCCH_ConfigDedicated_v1020_H_ */
#include <asn_internal.h>
