/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Descriptions"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_InitiatingMessage_H_
#define	_X2AP_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_ProcedureCode.h"
#include "X2AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "X2AP_HandoverRequest.h"
#include "X2AP_HandoverRequestAcknowledge.h"
#include "X2AP_HandoverPreparationFailure.h"
#include "X2AP_ResetRequest.h"
#include "X2AP_ResetResponse.h"
#include "X2AP_X2SetupRequest.h"
#include "X2AP_X2SetupResponse.h"
#include "X2AP_X2SetupFailure.h"
#include "X2AP_ResourceStatusRequest.h"
#include "X2AP_ResourceStatusResponse.h"
#include "X2AP_ResourceStatusFailure.h"
#include "X2AP_ENBConfigurationUpdate.h"
#include "X2AP_ENBConfigurationUpdateAcknowledge.h"
#include "X2AP_ENBConfigurationUpdateFailure.h"
#include "X2AP_MobilityChangeRequest.h"
#include "X2AP_MobilityChangeAcknowledge.h"
#include "X2AP_MobilityChangeFailure.h"
#include "X2AP_CellActivationRequest.h"
#include "X2AP_CellActivationResponse.h"
#include "X2AP_CellActivationFailure.h"
#include "X2AP_SeNBAdditionRequest.h"
#include "X2AP_SeNBAdditionRequestAcknowledge.h"
#include "X2AP_SeNBAdditionRequestReject.h"
#include "X2AP_SeNBModificationRequest.h"
#include "X2AP_SeNBModificationRequestAcknowledge.h"
#include "X2AP_SeNBModificationRequestReject.h"
#include "X2AP_SeNBModificationRequired.h"
#include "X2AP_SeNBModificationConfirm.h"
#include "X2AP_SeNBModificationRefuse.h"
#include "X2AP_SeNBReleaseRequired.h"
#include "X2AP_SeNBReleaseConfirm.h"
#include "X2AP_X2RemovalRequest.h"
#include "X2AP_X2RemovalResponse.h"
#include "X2AP_X2RemovalFailure.h"
#include "X2AP_RetrieveUEContextRequest.h"
#include "X2AP_RetrieveUEContextResponse.h"
#include "X2AP_RetrieveUEContextFailure.h"
#include "X2AP_SNStatusTransfer.h"
#include "X2AP_UEContextRelease.h"
#include "X2AP_HandoverCancel.h"
#include "X2AP_ErrorIndication.h"
#include "X2AP_ResourceStatusUpdate.h"
#include "X2AP_LoadInformation.h"
#include "X2AP_PrivateMessage.h"
#include "X2AP_RLFIndication.h"
#include "X2AP_HandoverReport.h"
#include "X2AP_X2Release.h"
#include "X2AP_X2APMessageTransfer.h"
#include "X2AP_SeNBReconfigurationComplete.h"
#include "X2AP_SeNBReleaseRequest.h"
#include "X2AP_SeNBCounterCheckRequest.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_InitiatingMessage__value_PR {
	X2AP_InitiatingMessage__value_PR_NOTHING,	/* No components present */
	X2AP_InitiatingMessage__value_PR_HandoverRequest,
	X2AP_InitiatingMessage__value_PR_ResetRequest,
	X2AP_InitiatingMessage__value_PR_X2SetupRequest,
	X2AP_InitiatingMessage__value_PR_ResourceStatusRequest,
	X2AP_InitiatingMessage__value_PR_ENBConfigurationUpdate,
	X2AP_InitiatingMessage__value_PR_MobilityChangeRequest,
	X2AP_InitiatingMessage__value_PR_CellActivationRequest,
	X2AP_InitiatingMessage__value_PR_SeNBAdditionRequest,
	X2AP_InitiatingMessage__value_PR_SeNBModificationRequest,
	X2AP_InitiatingMessage__value_PR_SeNBModificationRequired,
	X2AP_InitiatingMessage__value_PR_SeNBReleaseRequired,
	X2AP_InitiatingMessage__value_PR_X2RemovalRequest,
	X2AP_InitiatingMessage__value_PR_RetrieveUEContextRequest,
	X2AP_InitiatingMessage__value_PR_SNStatusTransfer,
	X2AP_InitiatingMessage__value_PR_UEContextRelease,
	X2AP_InitiatingMessage__value_PR_HandoverCancel,
	X2AP_InitiatingMessage__value_PR_ErrorIndication,
	X2AP_InitiatingMessage__value_PR_ResourceStatusUpdate,
	X2AP_InitiatingMessage__value_PR_LoadInformation,
	X2AP_InitiatingMessage__value_PR_PrivateMessage,
	X2AP_InitiatingMessage__value_PR_RLFIndication,
	X2AP_InitiatingMessage__value_PR_HandoverReport,
	X2AP_InitiatingMessage__value_PR_X2Release,
	X2AP_InitiatingMessage__value_PR_X2APMessageTransfer,
	X2AP_InitiatingMessage__value_PR_SeNBReconfigurationComplete,
	X2AP_InitiatingMessage__value_PR_SeNBReleaseRequest,
	X2AP_InitiatingMessage__value_PR_SeNBCounterCheckRequest
} X2AP_InitiatingMessage__value_PR;

/* X2AP_InitiatingMessage */
typedef struct X2AP_InitiatingMessage {
	X2AP_ProcedureCode_t	 procedureCode;
	X2AP_Criticality_t	 criticality;
	struct X2AP_InitiatingMessage__value {
		X2AP_InitiatingMessage__value_PR present;
		union X2AP_InitiatingMessage__X2AP_value_u {
			X2AP_HandoverRequest_t	 HandoverRequest;
			X2AP_ResetRequest_t	 ResetRequest;
			X2AP_X2SetupRequest_t	 X2SetupRequest;
			X2AP_ResourceStatusRequest_t	 ResourceStatusRequest;
			X2AP_ENBConfigurationUpdate_t	 ENBConfigurationUpdate;
			X2AP_MobilityChangeRequest_t	 MobilityChangeRequest;
			X2AP_CellActivationRequest_t	 CellActivationRequest;
			X2AP_SeNBAdditionRequest_t	 SeNBAdditionRequest;
			X2AP_SeNBModificationRequest_t	 SeNBModificationRequest;
			X2AP_SeNBModificationRequired_t	 SeNBModificationRequired;
			X2AP_SeNBReleaseRequired_t	 SeNBReleaseRequired;
			X2AP_X2RemovalRequest_t	 X2RemovalRequest;
			X2AP_RetrieveUEContextRequest_t	 RetrieveUEContextRequest;
			X2AP_SNStatusTransfer_t	 SNStatusTransfer;
			X2AP_UEContextRelease_t	 UEContextRelease;
			X2AP_HandoverCancel_t	 HandoverCancel;
			X2AP_ErrorIndication_t	 ErrorIndication;
			X2AP_ResourceStatusUpdate_t	 ResourceStatusUpdate;
			X2AP_LoadInformation_t	 LoadInformation;
			X2AP_PrivateMessage_t	 PrivateMessage;
			X2AP_RLFIndication_t	 RLFIndication;
			X2AP_HandoverReport_t	 HandoverReport;
			X2AP_X2Release_t	 X2Release;
			X2AP_X2APMessageTransfer_t	 X2APMessageTransfer;
			X2AP_SeNBReconfigurationComplete_t	 SeNBReconfigurationComplete;
			X2AP_SeNBReleaseRequest_t	 SeNBReleaseRequest;
			X2AP_SeNBCounterCheckRequest_t	 SeNBCounterCheckRequest;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_InitiatingMessage_H_ */
#include <asn_internal.h>
