/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_WLANConnectionStatusReport_v1430_IEs_H_
#define	_LTE_WLANConnectionStatusReport_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_WLAN-Status-v1430.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_WLANConnectionStatusReport-v1430-IEs */
typedef struct LTE_WLANConnectionStatusReport_v1430_IEs {
	LTE_WLAN_Status_v1430_t	 wlan_Status_v1430;
	struct LTE_WLANConnectionStatusReport_v1430_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_WLANConnectionStatusReport_v1430_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_WLANConnectionStatusReport_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_WLANConnectionStatusReport_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_WLANConnectionStatusReport_v1430_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_WLANConnectionStatusReport_v1430_IEs_H_ */
#include <asn_internal.h>
