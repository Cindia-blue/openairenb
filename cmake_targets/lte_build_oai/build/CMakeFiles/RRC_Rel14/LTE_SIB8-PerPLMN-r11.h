/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SIB8_PerPLMN_r11_H_
#define	_LTE_SIB8_PerPLMN_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_ParametersCDMA2000-r11.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR {
	LTE_SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR_NOTHING,	/* No components present */
	LTE_SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR_explicitValue,
	LTE_SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR_defaultValue
} LTE_SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR;

/* LTE_SIB8-PerPLMN-r11 */
typedef struct LTE_SIB8_PerPLMN_r11 {
	long	 plmn_Identity_r11;
	struct LTE_SIB8_PerPLMN_r11__parametersCDMA2000_r11 {
		LTE_SIB8_PerPLMN_r11__parametersCDMA2000_r11_PR present;
		union LTE_SIB8_PerPLMN_r11__LTE_parametersCDMA2000_r11_u {
			LTE_ParametersCDMA2000_r11_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} parametersCDMA2000_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SIB8_PerPLMN_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SIB8_PerPLMN_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SIB8_PerPLMN_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SIB8_PerPLMN_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SIB8_PerPLMN_r11_H_ */
#include <asn_internal.h>
