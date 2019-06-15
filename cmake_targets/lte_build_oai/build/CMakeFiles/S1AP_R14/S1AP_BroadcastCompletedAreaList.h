/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_BroadcastCompletedAreaList_H_
#define	_S1AP_BroadcastCompletedAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_CellID-Broadcast.h"
#include "S1AP_TAI-Broadcast.h"
#include "S1AP_EmergencyAreaID-Broadcast.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_BroadcastCompletedAreaList_PR {
	S1AP_BroadcastCompletedAreaList_PR_NOTHING,	/* No components present */
	S1AP_BroadcastCompletedAreaList_PR_cellID_Broadcast,
	S1AP_BroadcastCompletedAreaList_PR_tAI_Broadcast,
	S1AP_BroadcastCompletedAreaList_PR_emergencyAreaID_Broadcast
	/* Extensions may appear below */
	
} S1AP_BroadcastCompletedAreaList_PR;

/* S1AP_BroadcastCompletedAreaList */
typedef struct S1AP_BroadcastCompletedAreaList {
	S1AP_BroadcastCompletedAreaList_PR present;
	union S1AP_BroadcastCompletedAreaList_u {
		S1AP_CellID_Broadcast_t	 cellID_Broadcast;
		S1AP_TAI_Broadcast_t	 tAI_Broadcast;
		S1AP_EmergencyAreaID_Broadcast_t	 emergencyAreaID_Broadcast;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_BroadcastCompletedAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_BroadcastCompletedAreaList;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_BroadcastCompletedAreaList_H_ */
#include <asn_internal.h>
