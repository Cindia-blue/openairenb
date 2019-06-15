/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_V2X_ConfigDedicated_r14_H_
#define	_LTE_SL_V2X_ConfigDedicated_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-Priority-r13.h"
#include "LTE_SL-TypeTxSync-r14.h"
#include <NULL.h>
#include "LTE_C-RNTI.h"
#include "LTE_MAC-MainConfigSL-r12.h"
#include <NativeInteger.h>
#include "LTE_LogicalChGroupInfoList-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR {
	LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR_NOTHING,	/* No components present */
	LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR_release,
	LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR_setup
} LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR;
typedef enum LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR {
	LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR_NOTHING,	/* No components present */
	LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR_scheduled_r14,
	LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR_ue_Selected_r14
} LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR;

/* Forward declarations */
struct LTE_SL_InterFreqInfoListV2X_r14;
struct LTE_SL_CBR_CommonTxConfigList_r14;
struct LTE_SL_CommResourcePoolV2X_r14;
struct LTE_SL_TxPoolToReleaseListV2X_r14;
struct LTE_SL_TxPoolToAddModListV2X_r14;
struct LTE_SL_CommTxPoolSensingConfig_r14;

/* LTE_SL-V2X-ConfigDedicated-r14 */
typedef struct LTE_SL_V2X_ConfigDedicated_r14 {
	struct LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14 {
		LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR present;
		union LTE_SL_V2X_ConfigDedicated_r14__LTE_commTxResources_r14_u {
			NULL_t	 release;
			struct LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup {
				LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR present;
				union LTE_SL_V2X_ConfigDedicated_r14__LTE_commTxResources_r14__LTE_setup_u {
					struct LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14 {
						LTE_C_RNTI_t	 sl_V_RNTI_r14;
						LTE_MAC_MainConfigSL_r12_t	 mac_MainConfig_r14;
						struct LTE_SL_CommResourcePoolV2X_r14	*v2x_SchedulingPool_r14;	/* OPTIONAL */
						long	*mcs_r14;	/* OPTIONAL */
						LTE_LogicalChGroupInfoList_r13_t	 logicalChGroupInfoList_r14;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} scheduled_r14;
					struct LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14 {
						struct LTE_SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14__v2x_CommTxPoolNormalDedicated_r14 {
							struct LTE_SL_TxPoolToReleaseListV2X_r14	*poolToReleaseList_r14;	/* OPTIONAL */
							struct LTE_SL_TxPoolToAddModListV2X_r14	*poolToAddModList_r14;	/* OPTIONAL */
							struct LTE_SL_CommTxPoolSensingConfig_r14	*v2x_CommTxPoolSensingConfig_r14;	/* OPTIONAL */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} v2x_CommTxPoolNormalDedicated_r14;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} ue_Selected_r14;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commTxResources_r14;
	struct LTE_SL_InterFreqInfoListV2X_r14	*v2x_InterFreqInfoList_r14;	/* OPTIONAL */
	LTE_SL_Priority_r13_t	*thresSL_TxPrioritization_r14;	/* OPTIONAL */
	LTE_SL_TypeTxSync_r14_t	*typeTxSync_r14;	/* OPTIONAL */
	struct LTE_SL_CBR_CommonTxConfigList_r14	*cbr_DedicatedTxConfigList_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_V2X_ConfigDedicated_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_V2X_ConfigDedicated_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_V2X_ConfigDedicated_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_V2X_ConfigDedicated_r14_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-InterFreqInfoListV2X-r14.h"
#include "LTE_SL-CBR-CommonTxConfigList-r14.h"
#include "LTE_SL-CommResourcePoolV2X-r14.h"
#include "LTE_SL-TxPoolToReleaseListV2X-r14.h"
#include "LTE_SL-TxPoolToAddModListV2X-r14.h"
#include "LTE_SL-CommTxPoolSensingConfig-r14.h"

#endif	/* _LTE_SL_V2X_ConfigDedicated_r14_H_ */
#include <asn_internal.h>
