/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_InDeviceCoexIndication_r11_IEs_H_
#define	_LTE_InDeviceCoexIndication_r11_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_AffectedCarrierFreqList_r11;
struct LTE_TDM_AssistanceInfo_r11;
struct LTE_InDeviceCoexIndication_v11d0_IEs;

/* LTE_InDeviceCoexIndication-r11-IEs */
typedef struct LTE_InDeviceCoexIndication_r11_IEs {
	struct LTE_AffectedCarrierFreqList_r11	*affectedCarrierFreqList_r11;	/* OPTIONAL */
	struct LTE_TDM_AssistanceInfo_r11	*tdm_AssistanceInfo_r11;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_InDeviceCoexIndication_v11d0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InDeviceCoexIndication_r11_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InDeviceCoexIndication_r11_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_InDeviceCoexIndication_r11_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InDeviceCoexIndication_r11_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AffectedCarrierFreqList-r11.h"
#include "LTE_TDM-AssistanceInfo-r11.h"
#include "LTE_InDeviceCoexIndication-v11d0-IEs.h"

#endif	/* _LTE_InDeviceCoexIndication_r11_IEs_H_ */
#include <asn_internal.h>
