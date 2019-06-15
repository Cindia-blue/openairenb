/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType5_v10l0_IEs_H_
#define	_LTE_SystemInformationBlockType5_v10l0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SystemInformationBlockType5_v13a0_IEs;
struct LTE_InterFreqCarrierFreqInfo_v10l0;

/* LTE_SystemInformationBlockType5-v10l0-IEs */
typedef struct LTE_SystemInformationBlockType5_v10l0_IEs {
	struct LTE_SystemInformationBlockType5_v10l0_IEs__interFreqCarrierFreqList_v10l0 {
		A_SEQUENCE_OF(struct LTE_InterFreqCarrierFreqInfo_v10l0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interFreqCarrierFreqList_v10l0;
	struct LTE_SystemInformationBlockType5_v13a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType5_v10l0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType5_v10l0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType5_v10l0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType5_v10l0_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SystemInformationBlockType5-v13a0-IEs.h"
#include "LTE_InterFreqCarrierFreqInfo-v10l0.h"

#endif	/* _LTE_SystemInformationBlockType5_v10l0_IEs_H_ */
#include <asn_internal.h>
