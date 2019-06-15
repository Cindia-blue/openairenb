/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PowerRampingParameters_NB_v1450_H_
#define	_LTE_PowerRampingParameters_NB_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450 {
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_130	= 0,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_128	= 1,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_126	= 2,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_124	= 3,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_122	= 4,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_88	= 5,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_86	= 6,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_84	= 7,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_82	= 8,
	LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450_dBm_80	= 9
} e_LTE_PowerRampingParameters_NB_v1450__preambleInitialReceivedTargetPower_v1450;
typedef enum LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14 {
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14_dB0	= 0,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14_dB2	= 1,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14_dB4	= 2,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14_dB6	= 3
} e_LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__powerRampingStepCE1_r14;
typedef enum LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14 {
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_130	= 0,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_128	= 1,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_126	= 2,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_124	= 3,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_122	= 4,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_120	= 5,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_118	= 6,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_116	= 7,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_114	= 8,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_112	= 9,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_110	= 10,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_108	= 11,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_106	= 12,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_104	= 13,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_102	= 14,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_100	= 15,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_98	= 16,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_96	= 17,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_94	= 18,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_92	= 19,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_90	= 20,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_88	= 21,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_86	= 22,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_84	= 23,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_82	= 24,
	LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14_dBm_80	= 25
} e_LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14__preambleInitialReceivedTargetPowerCE1_r14;

/* LTE_PowerRampingParameters-NB-v1450 */
typedef struct LTE_PowerRampingParameters_NB_v1450 {
	long	*preambleInitialReceivedTargetPower_v1450;	/* OPTIONAL */
	struct LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14 {
		long	 powerRampingStepCE1_r14;
		long	 preambleInitialReceivedTargetPowerCE1_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *powerRampingParametersCE1_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PowerRampingParameters_NB_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_powerRampingStepCE1_r14_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PowerRampingParameters_NB_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PowerRampingParameters_NB_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PowerRampingParameters_NB_v1450_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PowerRampingParameters_NB_v1450_H_ */
#include <asn_internal.h>