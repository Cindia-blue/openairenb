/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType14_r11_H_
#define	_LTE_SystemInformationBlockType14_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "LTE_EAB-Config-r11.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType14_r11__eab_Param_r11_PR {
	LTE_SystemInformationBlockType14_r11__eab_Param_r11_PR_NOTHING,	/* No components present */
	LTE_SystemInformationBlockType14_r11__eab_Param_r11_PR_eab_Common_r11,
	LTE_SystemInformationBlockType14_r11__eab_Param_r11_PR_eab_PerPLMN_List_r11
} LTE_SystemInformationBlockType14_r11__eab_Param_r11_PR;

/* Forward declarations */
struct LTE_EAB_ConfigPLMN_r11;

/* LTE_SystemInformationBlockType14-r11 */
typedef struct LTE_SystemInformationBlockType14_r11 {
	struct LTE_SystemInformationBlockType14_r11__eab_Param_r11 {
		LTE_SystemInformationBlockType14_r11__eab_Param_r11_PR present;
		union LTE_SystemInformationBlockType14_r11__LTE_eab_Param_r11_u {
			LTE_EAB_Config_r11_t	 eab_Common_r11;
			struct LTE_SystemInformationBlockType14_r11__eab_Param_r11__eab_PerPLMN_List_r11 {
				A_SEQUENCE_OF(struct LTE_EAB_ConfigPLMN_r11) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} eab_PerPLMN_List_r11;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *eab_Param_r11;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType14_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType14_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType14_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType14_r11_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_EAB-ConfigPLMN-r11.h"

#endif	/* _LTE_SystemInformationBlockType14_r11_H_ */
#include <asn_internal.h>
