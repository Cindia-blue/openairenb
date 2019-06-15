/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v920_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhyLayerParameters-v920.h"
#include "LTE_IRAT-ParametersGERAN-v920.h"
#include <NativeEnumerated.h>
#include "LTE_CSG-ProximityIndicationParameters-r9.h"
#include "LTE_NeighCellSI-AcquisitionParameters-r9.h"
#include "LTE_SON-Parameters-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_EUTRA_Capability_v920_IEs__deviceType_r9 {
	LTE_UE_EUTRA_Capability_v920_IEs__deviceType_r9_noBenFromBatConsumpOpt	= 0
} e_LTE_UE_EUTRA_Capability_v920_IEs__deviceType_r9;

/* Forward declarations */
struct LTE_IRAT_ParametersUTRA_v920;
struct LTE_IRAT_ParametersCDMA2000_1XRTT_v920;
struct LTE_UE_EUTRA_Capability_v940_IEs;

/* LTE_UE-EUTRA-Capability-v920-IEs */
typedef struct LTE_UE_EUTRA_Capability_v920_IEs {
	LTE_PhyLayerParameters_v920_t	 phyLayerParameters_v920;
	LTE_IRAT_ParametersGERAN_v920_t	 interRAT_ParametersGERAN_v920;
	struct LTE_IRAT_ParametersUTRA_v920	*interRAT_ParametersUTRA_v920;	/* OPTIONAL */
	struct LTE_IRAT_ParametersCDMA2000_1XRTT_v920	*interRAT_ParametersCDMA2000_v920;	/* OPTIONAL */
	long	*deviceType_r9;	/* OPTIONAL */
	LTE_CSG_ProximityIndicationParameters_r9_t	 csg_ProximityIndicationParameters_r9;
	LTE_NeighCellSI_AcquisitionParameters_r9_t	 neighCellSI_AcquisitionParameters_r9;
	LTE_SON_Parameters_r9_t	 son_Parameters_r9;
	struct LTE_UE_EUTRA_Capability_v940_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deviceType_r9_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v920_IEs_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_IRAT-ParametersUTRA-v920.h"
#include "LTE_IRAT-ParametersCDMA2000-1XRTT-v920.h"
#include "LTE_UE-EUTRA-Capability-v940-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v920_IEs_H_ */
#include <asn_internal.h>
