/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CSI_RS_Config_r10_H_
#define	_LTE_CSI_RS_Config_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CSI_RS_Config_r10__csi_RS_r10_PR {
	LTE_CSI_RS_Config_r10__csi_RS_r10_PR_NOTHING,	/* No components present */
	LTE_CSI_RS_Config_r10__csi_RS_r10_PR_release,
	LTE_CSI_RS_Config_r10__csi_RS_r10_PR_setup
} LTE_CSI_RS_Config_r10__csi_RS_r10_PR;
typedef enum LTE_CSI_RS_Config_r10__csi_RS_r10__setup__antennaPortsCount_r10 {
	LTE_CSI_RS_Config_r10__csi_RS_r10__setup__antennaPortsCount_r10_an1	= 0,
	LTE_CSI_RS_Config_r10__csi_RS_r10__setup__antennaPortsCount_r10_an2	= 1,
	LTE_CSI_RS_Config_r10__csi_RS_r10__setup__antennaPortsCount_r10_an4	= 2,
	LTE_CSI_RS_Config_r10__csi_RS_r10__setup__antennaPortsCount_r10_an8	= 3
} e_LTE_CSI_RS_Config_r10__csi_RS_r10__setup__antennaPortsCount_r10;

/* Forward declarations */
struct LTE_ZeroTxPowerCSI_RS_Conf_r12;

/* LTE_CSI-RS-Config-r10 */
typedef struct LTE_CSI_RS_Config_r10 {
	struct LTE_CSI_RS_Config_r10__csi_RS_r10 {
		LTE_CSI_RS_Config_r10__csi_RS_r10_PR present;
		union LTE_CSI_RS_Config_r10__LTE_csi_RS_r10_u {
			NULL_t	 release;
			struct LTE_CSI_RS_Config_r10__csi_RS_r10__setup {
				long	 antennaPortsCount_r10;
				long	 resourceConfig_r10;
				long	 subframeConfig_r10;
				long	 p_C_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_RS_r10;
	struct LTE_ZeroTxPowerCSI_RS_Conf_r12	*zeroTxPowerCSI_RS_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_Config_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_antennaPortsCount_r10_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_Config_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_Config_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_Config_r10_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_ZeroTxPowerCSI-RS-Conf-r12.h"

#endif	/* _LTE_CSI_RS_Config_r10_H_ */
#include <asn_internal.h>
