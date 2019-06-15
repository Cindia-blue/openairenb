/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-Containers"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ProtocolIE_Container_H_
#define	_X2AP_ProtocolIE_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_HandoverRequest_IEs;
struct X2AP_HandoverRequestAcknowledge_IEs;
struct X2AP_HandoverPreparationFailure_IEs;
struct X2AP_HandoverReport_IEs;
struct X2AP_SNStatusTransfer_IEs;
struct X2AP_UEContextRelease_IEs;
struct X2AP_HandoverCancel_IEs;
struct X2AP_ErrorIndication_IEs;
struct X2AP_ResetRequest_IEs;
struct X2AP_ResetResponse_IEs;
struct X2AP_X2SetupRequest_IEs;
struct X2AP_X2SetupResponse_IEs;
struct X2AP_X2SetupFailure_IEs;
struct X2AP_LoadInformation_IEs;
struct X2AP_ENBConfigurationUpdate_IEs;
struct X2AP_ENBConfigurationUpdateAcknowledge_IEs;
struct X2AP_ENBConfigurationUpdateFailure_IEs;
struct X2AP_ResourceStatusRequest_IEs;
struct X2AP_ResourceStatusResponse_IEs;
struct X2AP_ResourceStatusFailure_IEs;
struct X2AP_ResourceStatusUpdate_IEs;
struct X2AP_MobilityChangeRequest_IEs;
struct X2AP_MobilityChangeAcknowledge_IEs;
struct X2AP_MobilityChangeFailure_IEs;
struct X2AP_RLFIndication_IEs;
struct X2AP_CellActivationRequest_IEs;
struct X2AP_CellActivationResponse_IEs;
struct X2AP_CellActivationFailure_IEs;
struct X2AP_X2Release_IEs;
struct X2AP_X2APMessageTransfer_IEs;
struct X2AP_SeNBAdditionRequest_IEs;
struct X2AP_SeNBAdditionRequestAcknowledge_IEs;
struct X2AP_SeNBAdditionRequestReject_IEs;
struct X2AP_SeNBReconfigurationComplete_IEs;
struct X2AP_SeNBModificationRequest_IEs;
struct X2AP_SeNBModificationRequestAcknowledge_IEs;
struct X2AP_SeNBModificationRequestReject_IEs;
struct X2AP_SeNBModificationRequired_IEs;
struct X2AP_SeNBModificationConfirm_IEs;
struct X2AP_SeNBModificationRefuse_IEs;
struct X2AP_SeNBReleaseRequest_IEs;
struct X2AP_SeNBReleaseRequired_IEs;
struct X2AP_SeNBReleaseConfirm_IEs;
struct X2AP_SeNBCounterCheckRequest_IEs;
struct X2AP_X2RemovalRequest_IEs;
struct X2AP_X2RemovalResponse_IEs;
struct X2AP_X2RemovalFailure_IEs;
struct X2AP_RetrieveUEContextRequest_IEs;
struct X2AP_RetrieveUEContextResponse_IEs;
struct X2AP_RetrieveUEContextFailure_IEs;

/* X2AP_ProtocolIE-Container */
typedef struct X2AP_ProtocolIE_Container_4989P0 {
	A_SEQUENCE_OF(struct X2AP_HandoverRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P0_t;
typedef struct X2AP_ProtocolIE_Container_4989P1 {
	A_SEQUENCE_OF(struct X2AP_HandoverRequestAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P1_t;
typedef struct X2AP_ProtocolIE_Container_4989P2 {
	A_SEQUENCE_OF(struct X2AP_HandoverPreparationFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P2_t;
typedef struct X2AP_ProtocolIE_Container_4989P3 {
	A_SEQUENCE_OF(struct X2AP_HandoverReport_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P3_t;
typedef struct X2AP_ProtocolIE_Container_4989P4 {
	A_SEQUENCE_OF(struct X2AP_SNStatusTransfer_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P4_t;
typedef struct X2AP_ProtocolIE_Container_4989P5 {
	A_SEQUENCE_OF(struct X2AP_UEContextRelease_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P5_t;
typedef struct X2AP_ProtocolIE_Container_4989P6 {
	A_SEQUENCE_OF(struct X2AP_HandoverCancel_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P6_t;
typedef struct X2AP_ProtocolIE_Container_4989P7 {
	A_SEQUENCE_OF(struct X2AP_ErrorIndication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P7_t;
typedef struct X2AP_ProtocolIE_Container_4989P8 {
	A_SEQUENCE_OF(struct X2AP_ResetRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P8_t;
typedef struct X2AP_ProtocolIE_Container_4989P9 {
	A_SEQUENCE_OF(struct X2AP_ResetResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P9_t;
typedef struct X2AP_ProtocolIE_Container_4989P10 {
	A_SEQUENCE_OF(struct X2AP_X2SetupRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P10_t;
typedef struct X2AP_ProtocolIE_Container_4989P11 {
	A_SEQUENCE_OF(struct X2AP_X2SetupResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P11_t;
typedef struct X2AP_ProtocolIE_Container_4989P12 {
	A_SEQUENCE_OF(struct X2AP_X2SetupFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P12_t;
typedef struct X2AP_ProtocolIE_Container_4989P13 {
	A_SEQUENCE_OF(struct X2AP_LoadInformation_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P13_t;
typedef struct X2AP_ProtocolIE_Container_4989P14 {
	A_SEQUENCE_OF(struct X2AP_ENBConfigurationUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P14_t;
typedef struct X2AP_ProtocolIE_Container_4989P15 {
	A_SEQUENCE_OF(struct X2AP_ENBConfigurationUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P15_t;
typedef struct X2AP_ProtocolIE_Container_4989P16 {
	A_SEQUENCE_OF(struct X2AP_ENBConfigurationUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P16_t;
typedef struct X2AP_ProtocolIE_Container_4989P17 {
	A_SEQUENCE_OF(struct X2AP_ResourceStatusRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P17_t;
typedef struct X2AP_ProtocolIE_Container_4989P18 {
	A_SEQUENCE_OF(struct X2AP_ResourceStatusResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P18_t;
typedef struct X2AP_ProtocolIE_Container_4989P19 {
	A_SEQUENCE_OF(struct X2AP_ResourceStatusFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P19_t;
typedef struct X2AP_ProtocolIE_Container_4989P20 {
	A_SEQUENCE_OF(struct X2AP_ResourceStatusUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P20_t;
typedef struct X2AP_ProtocolIE_Container_4989P21 {
	A_SEQUENCE_OF(struct X2AP_MobilityChangeRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P21_t;
typedef struct X2AP_ProtocolIE_Container_4989P22 {
	A_SEQUENCE_OF(struct X2AP_MobilityChangeAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P22_t;
typedef struct X2AP_ProtocolIE_Container_4989P23 {
	A_SEQUENCE_OF(struct X2AP_MobilityChangeFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P23_t;
typedef struct X2AP_ProtocolIE_Container_4989P24 {
	A_SEQUENCE_OF(struct X2AP_RLFIndication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P24_t;
typedef struct X2AP_ProtocolIE_Container_4989P25 {
	A_SEQUENCE_OF(struct X2AP_CellActivationRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P25_t;
typedef struct X2AP_ProtocolIE_Container_4989P26 {
	A_SEQUENCE_OF(struct X2AP_CellActivationResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P26_t;
typedef struct X2AP_ProtocolIE_Container_4989P27 {
	A_SEQUENCE_OF(struct X2AP_CellActivationFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P27_t;
typedef struct X2AP_ProtocolIE_Container_4989P28 {
	A_SEQUENCE_OF(struct X2AP_X2Release_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P28_t;
typedef struct X2AP_ProtocolIE_Container_4989P29 {
	A_SEQUENCE_OF(struct X2AP_X2APMessageTransfer_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P29_t;
typedef struct X2AP_ProtocolIE_Container_4989P30 {
	A_SEQUENCE_OF(struct X2AP_SeNBAdditionRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P30_t;
typedef struct X2AP_ProtocolIE_Container_4989P31 {
	A_SEQUENCE_OF(struct X2AP_SeNBAdditionRequestAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P31_t;
typedef struct X2AP_ProtocolIE_Container_4989P32 {
	A_SEQUENCE_OF(struct X2AP_SeNBAdditionRequestReject_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P32_t;
typedef struct X2AP_ProtocolIE_Container_4989P33 {
	A_SEQUENCE_OF(struct X2AP_SeNBReconfigurationComplete_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P33_t;
typedef struct X2AP_ProtocolIE_Container_4989P34 {
	A_SEQUENCE_OF(struct X2AP_SeNBModificationRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P34_t;
typedef struct X2AP_ProtocolIE_Container_4989P35 {
	A_SEQUENCE_OF(struct X2AP_SeNBModificationRequestAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P35_t;
typedef struct X2AP_ProtocolIE_Container_4989P36 {
	A_SEQUENCE_OF(struct X2AP_SeNBModificationRequestReject_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P36_t;
typedef struct X2AP_ProtocolIE_Container_4989P37 {
	A_SEQUENCE_OF(struct X2AP_SeNBModificationRequired_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P37_t;
typedef struct X2AP_ProtocolIE_Container_4989P38 {
	A_SEQUENCE_OF(struct X2AP_SeNBModificationConfirm_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P38_t;
typedef struct X2AP_ProtocolIE_Container_4989P39 {
	A_SEQUENCE_OF(struct X2AP_SeNBModificationRefuse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P39_t;
typedef struct X2AP_ProtocolIE_Container_4989P40 {
	A_SEQUENCE_OF(struct X2AP_SeNBReleaseRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P40_t;
typedef struct X2AP_ProtocolIE_Container_4989P41 {
	A_SEQUENCE_OF(struct X2AP_SeNBReleaseRequired_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P41_t;
typedef struct X2AP_ProtocolIE_Container_4989P42 {
	A_SEQUENCE_OF(struct X2AP_SeNBReleaseConfirm_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P42_t;
typedef struct X2AP_ProtocolIE_Container_4989P43 {
	A_SEQUENCE_OF(struct X2AP_SeNBCounterCheckRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P43_t;
typedef struct X2AP_ProtocolIE_Container_4989P44 {
	A_SEQUENCE_OF(struct X2AP_X2RemovalRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P44_t;
typedef struct X2AP_ProtocolIE_Container_4989P45 {
	A_SEQUENCE_OF(struct X2AP_X2RemovalResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P45_t;
typedef struct X2AP_ProtocolIE_Container_4989P46 {
	A_SEQUENCE_OF(struct X2AP_X2RemovalFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P46_t;
typedef struct X2AP_ProtocolIE_Container_4989P47 {
	A_SEQUENCE_OF(struct X2AP_RetrieveUEContextRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P47_t;
typedef struct X2AP_ProtocolIE_Container_4989P48 {
	A_SEQUENCE_OF(struct X2AP_RetrieveUEContextResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P48_t;
typedef struct X2AP_ProtocolIE_Container_4989P49 {
	A_SEQUENCE_OF(struct X2AP_RetrieveUEContextFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ProtocolIE_Container_4989P49_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P0;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P0_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P0_1[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P0_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P1;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P1_specs_3;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P1_3[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P1_constr_3;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P2;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P2_specs_5;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P2_5[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P2_constr_5;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P3;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P3_specs_7;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P3_7[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P3_constr_7;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P4;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P4_specs_9;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P4_9[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P4_constr_9;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P5;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P5_specs_11;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P5_11[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P5_constr_11;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P6;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P6_specs_13;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P6_13[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P6_constr_13;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P7;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P7_specs_15;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P7_15[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P7_constr_15;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P8;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P8_specs_17;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P8_17[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P8_constr_17;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P9;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P9_specs_19;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P9_19[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P9_constr_19;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P10;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P10_specs_21;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P10_21[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P10_constr_21;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P11;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P11_specs_23;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P11_23[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P11_constr_23;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P12;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P12_specs_25;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P12_25[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P12_constr_25;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P13;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P13_specs_27;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P13_27[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P13_constr_27;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P14;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P14_specs_29;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P14_29[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P14_constr_29;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P15;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P15_specs_31;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P15_31[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P15_constr_31;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P16;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P16_specs_33;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P16_33[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P16_constr_33;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P17;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P17_specs_35;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P17_35[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P17_constr_35;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P18;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P18_specs_37;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P18_37[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P18_constr_37;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P19;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P19_specs_39;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P19_39[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P19_constr_39;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P20;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P20_specs_41;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P20_41[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P20_constr_41;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P21;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P21_specs_43;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P21_43[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P21_constr_43;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P22;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P22_specs_45;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P22_45[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P22_constr_45;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P23;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P23_specs_47;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P23_47[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P23_constr_47;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P24;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P24_specs_49;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P24_49[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P24_constr_49;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P25;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P25_specs_51;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P25_51[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P25_constr_51;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P26;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P26_specs_53;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P26_53[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P26_constr_53;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P27;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P27_specs_55;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P27_55[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P27_constr_55;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P28;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P28_specs_57;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P28_57[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P28_constr_57;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P29;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P29_specs_59;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P29_59[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P29_constr_59;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P30;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P30_specs_61;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P30_61[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P30_constr_61;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P31;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P31_specs_63;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P31_63[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P31_constr_63;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P32;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P32_specs_65;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P32_65[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P32_constr_65;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P33;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P33_specs_67;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P33_67[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P33_constr_67;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P34;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P34_specs_69;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P34_69[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P34_constr_69;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P35;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P35_specs_71;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P35_71[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P35_constr_71;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P36;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P36_specs_73;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P36_73[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P36_constr_73;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P37;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P37_specs_75;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P37_75[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P37_constr_75;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P38;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P38_specs_77;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P38_77[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P38_constr_77;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P39;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P39_specs_79;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P39_79[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P39_constr_79;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P40;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P40_specs_81;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P40_81[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P40_constr_81;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P41;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P41_specs_83;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P41_83[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P41_constr_83;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P42;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P42_specs_85;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P42_85[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P42_constr_85;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P43;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P43_specs_87;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P43_87[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P43_constr_87;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P44;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P44_specs_89;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P44_89[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P44_constr_89;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P45;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P45_specs_91;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P45_91[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P45_constr_91;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P46;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P46_specs_93;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P46_93[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P46_constr_93;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P47;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P47_specs_95;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P47_95[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P47_constr_95;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P48;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P48_specs_97;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P48_97[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P48_constr_97;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProtocolIE_Container_4989P49;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ProtocolIE_Container_4989P49_specs_99;
extern asn_TYPE_member_t asn_MBR_X2AP_ProtocolIE_Container_4989P49_99[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ProtocolIE_Container_4989P49_constr_99;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ProtocolIE_Container_H_ */
#include <asn_internal.h>
