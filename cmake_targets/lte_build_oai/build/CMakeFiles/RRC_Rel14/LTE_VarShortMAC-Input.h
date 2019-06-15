/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_VarShortMAC_Input_H_
#define	_LTE_VarShortMAC_Input_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CellIdentity.h"
#include "LTE_PhysCellId.h"
#include "LTE_C-RNTI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_VarShortMAC-Input */
typedef struct LTE_VarShortMAC_Input {
	LTE_CellIdentity_t	 cellIdentity;
	LTE_PhysCellId_t	 physCellId;
	LTE_C_RNTI_t	 c_RNTI;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarShortMAC_Input_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarShortMAC_Input;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_VarShortMAC_Input_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_VarShortMAC_Input_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_VarShortMAC_Input_H_ */
#include <asn_internal.h>
