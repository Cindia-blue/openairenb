/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasGapConfig_H_
#define	_LTE_MeasGapConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasGapConfig_PR {
	LTE_MeasGapConfig_PR_NOTHING,	/* No components present */
	LTE_MeasGapConfig_PR_release,
	LTE_MeasGapConfig_PR_setup
} LTE_MeasGapConfig_PR;
typedef enum LTE_MeasGapConfig__setup__gapOffset_PR {
	LTE_MeasGapConfig__setup__gapOffset_PR_NOTHING,	/* No components present */
	LTE_MeasGapConfig__setup__gapOffset_PR_gp0,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp1,
	/* Extensions may appear below */
	LTE_MeasGapConfig__setup__gapOffset_PR_gp2_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp3_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp_ncsg0_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp_ncsg1_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp_ncsg2_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp_ncsg3_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp_nonUniform1_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp_nonUniform2_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp_nonUniform3_r14,
	LTE_MeasGapConfig__setup__gapOffset_PR_gp_nonUniform4_r14
} LTE_MeasGapConfig__setup__gapOffset_PR;

/* LTE_MeasGapConfig */
typedef struct LTE_MeasGapConfig {
	LTE_MeasGapConfig_PR present;
	union LTE_MeasGapConfig_u {
		NULL_t	 release;
		struct LTE_MeasGapConfig__setup {
			struct LTE_MeasGapConfig__setup__gapOffset {
				LTE_MeasGapConfig__setup__gapOffset_PR present;
				union LTE_MeasGapConfig__LTE_setup__LTE_gapOffset_u {
					long	 gp0;
					long	 gp1;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
					long	 gp2_r14;
					long	 gp3_r14;
					long	 gp_ncsg0_r14;
					long	 gp_ncsg1_r14;
					long	 gp_ncsg2_r14;
					long	 gp_ncsg3_r14;
					long	 gp_nonUniform1_r14;
					long	 gp_nonUniform2_r14;
					long	 gp_nonUniform3_r14;
					long	 gp_nonUniform4_r14;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gapOffset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasGapConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasGapConfig;
extern asn_CHOICE_specifics_t asn_SPC_LTE_MeasGapConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasGapConfig_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_MeasGapConfig_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasGapConfig_H_ */
#include <asn_internal.h>
