/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformation_NB_r13_IEs_H_
#define	_LTE_SystemInformation_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include "LTE_SystemInformationBlockType2-NB-r13.h"
#include "LTE_SystemInformationBlockType3-NB-r13.h"
#include "LTE_SystemInformationBlockType4-NB-r13.h"
#include "LTE_SystemInformationBlockType5-NB-r13.h"
#include "LTE_SystemInformationBlockType14-NB-r13.h"
#include "LTE_SystemInformationBlockType16-NB-r13.h"
#include "LTE_SystemInformationBlockType15-NB-r14.h"
#include "LTE_SystemInformationBlockType20-NB-r14.h"
#include "LTE_SystemInformationBlockType22-NB-r14.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR {
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_NOTHING,	/* No components present */
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib2_r13,
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib3_r13,
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib4_r13,
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib5_r13,
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib14_r13,
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib16_r13,
	/* Extensions may appear below */
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib15_v1430,
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib20_v1430,
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR_sib22_v1430
} LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR;

/* Forward definitions */
typedef struct LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member {
	LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member_PR present;
	union LTE_SystemInformation_NB_r13_IEs__LTE_sib_TypeAndInfo_r13__LTE_Member_u {
		LTE_SystemInformationBlockType2_NB_r13_t	 sib2_r13;
		LTE_SystemInformationBlockType3_NB_r13_t	 sib3_r13;
		LTE_SystemInformationBlockType4_NB_r13_t	 sib4_r13;
		LTE_SystemInformationBlockType5_NB_r13_t	 sib5_r13;
		LTE_SystemInformationBlockType14_NB_r13_t	 sib14_r13;
		LTE_SystemInformationBlockType16_NB_r13_t	 sib16_r13;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		LTE_SystemInformationBlockType15_NB_r14_t	 sib15_v1430;
		LTE_SystemInformationBlockType20_NB_r14_t	 sib20_v1430;
		LTE_SystemInformationBlockType22_NB_r14_t	 sib22_v1430;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member;

/* LTE_SystemInformation-NB-r13-IEs */
typedef struct LTE_SystemInformation_NB_r13_IEs {
	struct LTE_SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13 {
		A_SEQUENCE_OF(SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sib_TypeAndInfo_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_SystemInformation_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformation_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformation_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformation_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformation_NB_r13_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SystemInformation_NB_r13_IEs_H_ */
#include <asn_internal.h>
