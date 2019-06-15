/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_EIMTA_MainConfigServCell_r12_H_
#define	_LTE_EIMTA_MainConfigServCell_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "LTE_MBSFN-SubframeConfigList.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_EIMTA_MainConfigServCell_r12_PR {
	LTE_EIMTA_MainConfigServCell_r12_PR_NOTHING,	/* No components present */
	LTE_EIMTA_MainConfigServCell_r12_PR_release,
	LTE_EIMTA_MainConfigServCell_r12_PR_setup
} LTE_EIMTA_MainConfigServCell_r12_PR;
typedef enum LTE_EIMTA_MainConfigServCell_r12__setup__eimta_HARQ_ReferenceConfig_r12 {
	LTE_EIMTA_MainConfigServCell_r12__setup__eimta_HARQ_ReferenceConfig_r12_sa2	= 0,
	LTE_EIMTA_MainConfigServCell_r12__setup__eimta_HARQ_ReferenceConfig_r12_sa4	= 1,
	LTE_EIMTA_MainConfigServCell_r12__setup__eimta_HARQ_ReferenceConfig_r12_sa5	= 2
} e_LTE_EIMTA_MainConfigServCell_r12__setup__eimta_HARQ_ReferenceConfig_r12;
typedef enum LTE_EIMTA_MainConfigServCell_r12__setup__mbsfn_SubframeConfigList_v1250_PR {
	LTE_EIMTA_MainConfigServCell_r12__setup__mbsfn_SubframeConfigList_v1250_PR_NOTHING,	/* No components present */
	LTE_EIMTA_MainConfigServCell_r12__setup__mbsfn_SubframeConfigList_v1250_PR_release,
	LTE_EIMTA_MainConfigServCell_r12__setup__mbsfn_SubframeConfigList_v1250_PR_setup
} LTE_EIMTA_MainConfigServCell_r12__setup__mbsfn_SubframeConfigList_v1250_PR;

/* LTE_EIMTA-MainConfigServCell-r12 */
typedef struct LTE_EIMTA_MainConfigServCell_r12 {
	LTE_EIMTA_MainConfigServCell_r12_PR present;
	union LTE_EIMTA_MainConfigServCell_r12_u {
		NULL_t	 release;
		struct LTE_EIMTA_MainConfigServCell_r12__setup {
			long	 eimta_UL_DL_ConfigIndex_r12;
			long	 eimta_HARQ_ReferenceConfig_r12;
			struct LTE_EIMTA_MainConfigServCell_r12__setup__mbsfn_SubframeConfigList_v1250 {
				LTE_EIMTA_MainConfigServCell_r12__setup__mbsfn_SubframeConfigList_v1250_PR present;
				union LTE_EIMTA_MainConfigServCell_r12__LTE_setup__LTE_mbsfn_SubframeConfigList_v1250_u {
					NULL_t	 release;
					struct LTE_EIMTA_MainConfigServCell_r12__setup__mbsfn_SubframeConfigList_v1250__setup {
						LTE_MBSFN_SubframeConfigList_t	 subframeConfigList_r12;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} mbsfn_SubframeConfigList_v1250;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_EIMTA_MainConfigServCell_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_eimta_HARQ_ReferenceConfig_r12_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_EIMTA_MainConfigServCell_r12;
extern asn_CHOICE_specifics_t asn_SPC_LTE_EIMTA_MainConfigServCell_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_EIMTA_MainConfigServCell_r12_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_EIMTA_MainConfigServCell_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_EIMTA_MainConfigServCell_r12_H_ */
#include <asn_internal.h>
