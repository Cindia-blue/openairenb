/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MobilityFromEUTRACommand_r9_IEs_H_
#define	_LTE_MobilityFromEUTRACommand_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "LTE_Handover.h"
#include "LTE_CellChangeOrder.h"
#include "LTE_E-CSFB-r9.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MobilityFromEUTRACommand_r9_IEs__purpose_PR {
	LTE_MobilityFromEUTRACommand_r9_IEs__purpose_PR_NOTHING,	/* No components present */
	LTE_MobilityFromEUTRACommand_r9_IEs__purpose_PR_handover,
	LTE_MobilityFromEUTRACommand_r9_IEs__purpose_PR_cellChangeOrder,
	LTE_MobilityFromEUTRACommand_r9_IEs__purpose_PR_e_CSFB_r9
	/* Extensions may appear below */
	
} LTE_MobilityFromEUTRACommand_r9_IEs__purpose_PR;

/* Forward declarations */
struct LTE_MobilityFromEUTRACommand_v930_IEs;

/* LTE_MobilityFromEUTRACommand-r9-IEs */
typedef struct LTE_MobilityFromEUTRACommand_r9_IEs {
	BOOLEAN_t	 cs_FallbackIndicator;
	struct LTE_MobilityFromEUTRACommand_r9_IEs__purpose {
		LTE_MobilityFromEUTRACommand_r9_IEs__purpose_PR present;
		union LTE_MobilityFromEUTRACommand_r9_IEs__LTE_purpose_u {
			LTE_Handover_t	 handover;
			LTE_CellChangeOrder_t	 cellChangeOrder;
			LTE_E_CSFB_r9_t	 e_CSFB_r9;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} purpose;
	struct LTE_MobilityFromEUTRACommand_v930_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MobilityFromEUTRACommand_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MobilityFromEUTRACommand_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MobilityFromEUTRACommand_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MobilityFromEUTRACommand_r9_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MobilityFromEUTRACommand-v930-IEs.h"

#endif	/* _LTE_MobilityFromEUTRACommand_r9_IEs_H_ */
#include <asn_internal.h>
