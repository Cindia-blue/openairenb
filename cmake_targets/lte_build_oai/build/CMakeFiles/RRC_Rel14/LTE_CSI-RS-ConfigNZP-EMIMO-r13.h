/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CSI_RS_ConfigNZP_EMIMO_r13_H_
#define	_LTE_CSI_RS_ConfigNZP_EMIMO_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CSI_RS_ConfigNZP_EMIMO_r13_PR {
	LTE_CSI_RS_ConfigNZP_EMIMO_r13_PR_NOTHING,	/* No components present */
	LTE_CSI_RS_ConfigNZP_EMIMO_r13_PR_release,
	LTE_CSI_RS_ConfigNZP_EMIMO_r13_PR_setup
} LTE_CSI_RS_ConfigNZP_EMIMO_r13_PR;
typedef enum LTE_CSI_RS_ConfigNZP_EMIMO_r13__setup__cdmType_r13 {
	LTE_CSI_RS_ConfigNZP_EMIMO_r13__setup__cdmType_r13_cdm2	= 0,
	LTE_CSI_RS_ConfigNZP_EMIMO_r13__setup__cdmType_r13_cdm4	= 1
} e_LTE_CSI_RS_ConfigNZP_EMIMO_r13__setup__cdmType_r13;

/* Forward declarations */
struct LTE_NZP_ResourceConfig_r13;

/* LTE_CSI-RS-ConfigNZP-EMIMO-r13 */
typedef struct LTE_CSI_RS_ConfigNZP_EMIMO_r13 {
	LTE_CSI_RS_ConfigNZP_EMIMO_r13_PR present;
	union LTE_CSI_RS_ConfigNZP_EMIMO_r13_u {
		NULL_t	 release;
		struct LTE_CSI_RS_ConfigNZP_EMIMO_r13__setup {
			struct LTE_CSI_RS_ConfigNZP_EMIMO_r13__setup__nzp_resourceConfigList_r13 {
				A_SEQUENCE_OF(struct LTE_NZP_ResourceConfig_r13) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} nzp_resourceConfigList_r13;
			long	*cdmType_r13;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_ConfigNZP_EMIMO_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cdmType_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigNZP_EMIMO_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_CSI_RS_ConfigNZP_EMIMO_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigNZP_EMIMO_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_CSI_RS_ConfigNZP_EMIMO_r13_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NZP-ResourceConfig-r13.h"

#endif	/* _LTE_CSI_RS_ConfigNZP_EMIMO_r13_H_ */
#include <asn_internal.h>
