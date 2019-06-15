/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasObjectToAddMod_H_
#define	_LTE_MeasObjectToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasObjectId.h"
#include "LTE_MeasObjectEUTRA.h"
#include "LTE_MeasObjectUTRA.h"
#include "LTE_MeasObjectGERAN.h"
#include "LTE_MeasObjectCDMA2000.h"
#include "LTE_MeasObjectWLAN-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasObjectToAddMod__measObject_PR {
	LTE_MeasObjectToAddMod__measObject_PR_NOTHING,	/* No components present */
	LTE_MeasObjectToAddMod__measObject_PR_measObjectEUTRA,
	LTE_MeasObjectToAddMod__measObject_PR_measObjectUTRA,
	LTE_MeasObjectToAddMod__measObject_PR_measObjectGERAN,
	LTE_MeasObjectToAddMod__measObject_PR_measObjectCDMA2000,
	/* Extensions may appear below */
	LTE_MeasObjectToAddMod__measObject_PR_measObjectWLAN_r13
} LTE_MeasObjectToAddMod__measObject_PR;

/* LTE_MeasObjectToAddMod */
typedef struct LTE_MeasObjectToAddMod {
	LTE_MeasObjectId_t	 measObjectId;
	struct LTE_MeasObjectToAddMod__measObject {
		LTE_MeasObjectToAddMod__measObject_PR present;
		union LTE_MeasObjectToAddMod__LTE_measObject_u {
			LTE_MeasObjectEUTRA_t	 measObjectEUTRA;
			LTE_MeasObjectUTRA_t	 measObjectUTRA;
			LTE_MeasObjectGERAN_t	 measObjectGERAN;
			LTE_MeasObjectCDMA2000_t	 measObjectCDMA2000;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			LTE_MeasObjectWLAN_r13_t	 measObjectWLAN_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measObject;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasObjectToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasObjectToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasObjectToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasObjectToAddMod_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasObjectToAddMod_H_ */
#include <asn_internal.h>
