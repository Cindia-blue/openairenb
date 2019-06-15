/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PhyLayerParameters_v1320_H_
#define	_LTE_PhyLayerParameters_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MIMO_UE_Parameters_r13;

/* LTE_PhyLayerParameters-v1320 */
typedef struct LTE_PhyLayerParameters_v1320 {
	struct LTE_MIMO_UE_Parameters_r13	*mimo_UE_Parameters_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PhyLayerParameters_v1320_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PhyLayerParameters_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PhyLayerParameters_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PhyLayerParameters_v1320_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MIMO-UE-Parameters-r13.h"

#endif	/* _LTE_PhyLayerParameters_v1320_H_ */
#include <asn_internal.h>