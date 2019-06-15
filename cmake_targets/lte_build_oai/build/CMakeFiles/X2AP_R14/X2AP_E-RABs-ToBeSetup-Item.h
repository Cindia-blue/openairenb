/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_E_RABs_ToBeSetup_Item_H_
#define	_X2AP_E_RABs_ToBeSetup_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_E-RAB-ID.h"
#include "X2AP_E-RAB-Level-QoS-Parameters.h"
#include "X2AP_DL-Forwarding.h"
#include "X2AP_GTPtunnelEndpoint.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_E-RABs-ToBeSetup-Item */
typedef struct X2AP_E_RABs_ToBeSetup_Item {
	X2AP_E_RAB_ID_t	 e_RAB_ID;
	X2AP_E_RAB_Level_QoS_Parameters_t	 e_RAB_Level_QoS_Parameters;
	X2AP_DL_Forwarding_t	*dL_Forwarding;	/* OPTIONAL */
	X2AP_GTPtunnelEndpoint_t	 uL_GTPtunnelEndpoint;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_E_RABs_ToBeSetup_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeSetup_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_E_RABs_ToBeSetup_Item_H_ */
#include <asn_internal.h>
