/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AntennaInfoDedicated_r10_H_
#define	_LTE_AntennaInfoDedicated_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AntennaInfoDedicated_r10__transmissionMode_r10 {
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm1	= 0,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm2	= 1,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm3	= 2,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm4	= 3,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm5	= 4,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm6	= 5,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm7	= 6,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm8_v920	= 7,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm9_v1020	= 8,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_tm10_v1130	= 9,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_spare6	= 10,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_spare5	= 11,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_spare4	= 12,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_spare3	= 13,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_spare2	= 14,
	LTE_AntennaInfoDedicated_r10__transmissionMode_r10_spare1	= 15
} e_LTE_AntennaInfoDedicated_r10__transmissionMode_r10;
typedef enum LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection_PR {
	LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection_PR_NOTHING,	/* No components present */
	LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection_PR_release,
	LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection_PR_setup
} LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection_PR;
typedef enum LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection__setup {
	LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection__setup_closedLoop	= 0,
	LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection__setup_openLoop	= 1
} e_LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection__setup;

/* LTE_AntennaInfoDedicated-r10 */
typedef struct LTE_AntennaInfoDedicated_r10 {
	long	 transmissionMode_r10;
	BIT_STRING_t	*codebookSubsetRestriction_r10;	/* OPTIONAL */
	struct LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection {
		LTE_AntennaInfoDedicated_r10__ue_TransmitAntennaSelection_PR present;
		union LTE_AntennaInfoDedicated_r10__LTE_ue_TransmitAntennaSelection_u {
			NULL_t	 release;
			long	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ue_TransmitAntennaSelection;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AntennaInfoDedicated_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_transmissionMode_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_setup_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AntennaInfoDedicated_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AntennaInfoDedicated_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AntennaInfoDedicated_r10_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AntennaInfoDedicated_r10_H_ */
#include <asn_internal.h>
