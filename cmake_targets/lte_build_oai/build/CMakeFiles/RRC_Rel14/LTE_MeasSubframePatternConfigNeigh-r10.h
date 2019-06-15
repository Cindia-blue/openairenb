/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasSubframePatternConfigNeigh_r10_H_
#define	_LTE_MeasSubframePatternConfigNeigh_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_MeasSubframePattern-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasSubframePatternConfigNeigh_r10_PR {
	LTE_MeasSubframePatternConfigNeigh_r10_PR_NOTHING,	/* No components present */
	LTE_MeasSubframePatternConfigNeigh_r10_PR_release,
	LTE_MeasSubframePatternConfigNeigh_r10_PR_setup
} LTE_MeasSubframePatternConfigNeigh_r10_PR;

/* Forward declarations */
struct LTE_MeasSubframeCellList_r10;

/* LTE_MeasSubframePatternConfigNeigh-r10 */
typedef struct LTE_MeasSubframePatternConfigNeigh_r10 {
	LTE_MeasSubframePatternConfigNeigh_r10_PR present;
	union LTE_MeasSubframePatternConfigNeigh_r10_u {
		NULL_t	 release;
		struct LTE_MeasSubframePatternConfigNeigh_r10__setup {
			LTE_MeasSubframePattern_r10_t	 measSubframePatternNeigh_r10;
			struct LTE_MeasSubframeCellList_r10	*measSubframeCellList_r10;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasSubframePatternConfigNeigh_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasSubframePatternConfigNeigh_r10;
extern asn_CHOICE_specifics_t asn_SPC_LTE_MeasSubframePatternConfigNeigh_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasSubframePatternConfigNeigh_r10_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_MeasSubframePatternConfigNeigh_r10_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasSubframeCellList-r10.h"

#endif	/* _LTE_MeasSubframePatternConfigNeigh_r10_H_ */
#include <asn_internal.h>
