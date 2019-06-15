/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CA_MIMO_ParametersDL_r10_H_
#define	_LTE_CA_MIMO_ParametersDL_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CA-BandwidthClass-r10.h"
#include "LTE_MIMO-CapabilityDL-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CA-MIMO-ParametersDL-r10 */
typedef struct LTE_CA_MIMO_ParametersDL_r10 {
	LTE_CA_BandwidthClass_r10_t	 ca_BandwidthClassDL_r10;
	LTE_MIMO_CapabilityDL_r10_t	*supportedMIMO_CapabilityDL_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CA_MIMO_ParametersDL_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CA_MIMO_ParametersDL_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CA_MIMO_ParametersDL_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CA_MIMO_ParametersDL_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CA_MIMO_ParametersDL_r10_H_ */
#include <asn_internal.h>