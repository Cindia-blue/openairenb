/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MobilityControlInfoSCG_r12_H_
#define	_LTE_MobilityControlInfoSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_C-RNTI.h"
#include "LTE_CipheringAlgorithm-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MobilityControlInfoSCG_r12__t307_r12 {
	LTE_MobilityControlInfoSCG_r12__t307_r12_ms50	= 0,
	LTE_MobilityControlInfoSCG_r12__t307_r12_ms100	= 1,
	LTE_MobilityControlInfoSCG_r12__t307_r12_ms150	= 2,
	LTE_MobilityControlInfoSCG_r12__t307_r12_ms200	= 3,
	LTE_MobilityControlInfoSCG_r12__t307_r12_ms500	= 4,
	LTE_MobilityControlInfoSCG_r12__t307_r12_ms1000	= 5,
	LTE_MobilityControlInfoSCG_r12__t307_r12_ms2000	= 6,
	LTE_MobilityControlInfoSCG_r12__t307_r12_spare1	= 7
} e_LTE_MobilityControlInfoSCG_r12__t307_r12;
typedef enum LTE_MobilityControlInfoSCG_r12__ext1__makeBeforeBreakSCG_r14 {
	LTE_MobilityControlInfoSCG_r12__ext1__makeBeforeBreakSCG_r14_true	= 0
} e_LTE_MobilityControlInfoSCG_r12__ext1__makeBeforeBreakSCG_r14;

/* Forward declarations */
struct LTE_RACH_ConfigDedicated;
struct LTE_RACH_Skip_r14;

/* LTE_MobilityControlInfoSCG-r12 */
typedef struct LTE_MobilityControlInfoSCG_r12 {
	long	 t307_r12;
	LTE_C_RNTI_t	*ue_IdentitySCG_r12;	/* OPTIONAL */
	struct LTE_RACH_ConfigDedicated	*rach_ConfigDedicated_r12;	/* OPTIONAL */
	LTE_CipheringAlgorithm_r12_t	*cipheringAlgorithmSCG_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_MobilityControlInfoSCG_r12__ext1 {
		long	*makeBeforeBreakSCG_r14;	/* OPTIONAL */
		struct LTE_RACH_Skip_r14	*rach_SkipSCG_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MobilityControlInfoSCG_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t307_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_makeBeforeBreakSCG_r14_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MobilityControlInfoSCG_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MobilityControlInfoSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MobilityControlInfoSCG_r12_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RACH-ConfigDedicated.h"
#include "LTE_RACH-Skip-r14.h"

#endif	/* _LTE_MobilityControlInfoSCG_r12_H_ */
#include <asn_internal.h>
