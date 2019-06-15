/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SoundingRS_UL_ConfigDedicated_v1020_H_
#define	_LTE_SoundingRS_UL_ConfigDedicated_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SRS-AntennaPort.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_SoundingRS-UL-ConfigDedicated-v1020 */
typedef struct LTE_SoundingRS_UL_ConfigDedicated_v1020 {
	LTE_SRS_AntennaPort_t	 srs_AntennaPort_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SoundingRS_UL_ConfigDedicated_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SoundingRS_UL_ConfigDedicated_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SoundingRS_UL_ConfigDedicated_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SoundingRS_UL_ConfigDedicated_v1020_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SoundingRS_UL_ConfigDedicated_v1020_H_ */
#include <asn_internal.h>
