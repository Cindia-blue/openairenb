/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_ReportConfigEUTRA_H_
#define	_LTE_ReportConfigEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "LTE_ReportInterval.h"
#include "LTE_Hysteresis.h"
#include "LTE_TimeToTrigger.h"
#include "LTE_ThresholdEUTRA.h"
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>
#include "LTE_ThresholdEUTRA-v1250.h"
#include "LTE_MeasCSI-RS-Id-r12.h"
#include "LTE_SL-CBR-r14.h"
#include <constr_CHOICE.h>
#include <NULL.h>
#include "LTE_RS-SINR-Range-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ReportConfigEUTRA__triggerType_PR {
	LTE_ReportConfigEUTRA__triggerType_PR_NOTHING,	/* No components present */
	LTE_ReportConfigEUTRA__triggerType_PR_event,
	LTE_ReportConfigEUTRA__triggerType_PR_periodical
} LTE_ReportConfigEUTRA__triggerType_PR;
typedef enum LTE_ReportConfigEUTRA__triggerType__event__eventId_PR {
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_NOTHING,	/* No components present */
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventA1,
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventA2,
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventA3,
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventA4,
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventA5,
	/* Extensions may appear below */
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventA6_r10,
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventC1_r12,
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventC2_r12,
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventV1_r14,
	LTE_ReportConfigEUTRA__triggerType__event__eventId_PR_eventV2_r14
} LTE_ReportConfigEUTRA__triggerType__event__eventId_PR;
typedef enum LTE_ReportConfigEUTRA__triggerType__periodical__purpose {
	LTE_ReportConfigEUTRA__triggerType__periodical__purpose_reportStrongestCells	= 0,
	LTE_ReportConfigEUTRA__triggerType__periodical__purpose_reportCGI	= 1
} e_LTE_ReportConfigEUTRA__triggerType__periodical__purpose;
typedef enum LTE_ReportConfigEUTRA__triggerQuantity {
	LTE_ReportConfigEUTRA__triggerQuantity_rsrp	= 0,
	LTE_ReportConfigEUTRA__triggerQuantity_rsrq	= 1
} e_LTE_ReportConfigEUTRA__triggerQuantity;
typedef enum LTE_ReportConfigEUTRA__reportQuantity {
	LTE_ReportConfigEUTRA__reportQuantity_sameAsTriggerQuantity	= 0,
	LTE_ReportConfigEUTRA__reportQuantity_both	= 1
} e_LTE_ReportConfigEUTRA__reportQuantity;
typedef enum LTE_ReportConfigEUTRA__reportAmount {
	LTE_ReportConfigEUTRA__reportAmount_r1	= 0,
	LTE_ReportConfigEUTRA__reportAmount_r2	= 1,
	LTE_ReportConfigEUTRA__reportAmount_r4	= 2,
	LTE_ReportConfigEUTRA__reportAmount_r8	= 3,
	LTE_ReportConfigEUTRA__reportAmount_r16	= 4,
	LTE_ReportConfigEUTRA__reportAmount_r32	= 5,
	LTE_ReportConfigEUTRA__reportAmount_r64	= 6,
	LTE_ReportConfigEUTRA__reportAmount_infinity	= 7
} e_LTE_ReportConfigEUTRA__reportAmount;
typedef enum LTE_ReportConfigEUTRA__ext1__si_RequestForHO_r9 {
	LTE_ReportConfigEUTRA__ext1__si_RequestForHO_r9_setup	= 0
} e_LTE_ReportConfigEUTRA__ext1__si_RequestForHO_r9;
typedef enum LTE_ReportConfigEUTRA__ext1__ue_RxTxTimeDiffPeriodical_r9 {
	LTE_ReportConfigEUTRA__ext1__ue_RxTxTimeDiffPeriodical_r9_setup	= 0
} e_LTE_ReportConfigEUTRA__ext1__ue_RxTxTimeDiffPeriodical_r9;
typedef enum LTE_ReportConfigEUTRA__ext2__includeLocationInfo_r10 {
	LTE_ReportConfigEUTRA__ext2__includeLocationInfo_r10_true	= 0
} e_LTE_ReportConfigEUTRA__ext2__includeLocationInfo_r10;
typedef enum LTE_ReportConfigEUTRA__ext2__reportAddNeighMeas_r10 {
	LTE_ReportConfigEUTRA__ext2__reportAddNeighMeas_r10_setup	= 0
} e_LTE_ReportConfigEUTRA__ext2__reportAddNeighMeas_r10;
typedef enum LTE_ReportConfigEUTRA__ext3__alternativeTimeToTrigger_r12_PR {
	LTE_ReportConfigEUTRA__ext3__alternativeTimeToTrigger_r12_PR_NOTHING,	/* No components present */
	LTE_ReportConfigEUTRA__ext3__alternativeTimeToTrigger_r12_PR_release,
	LTE_ReportConfigEUTRA__ext3__alternativeTimeToTrigger_r12_PR_setup
} LTE_ReportConfigEUTRA__ext3__alternativeTimeToTrigger_r12_PR;
typedef enum LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13_PR {
	LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13_PR_NOTHING,	/* No components present */
	LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13_PR_release,
	LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13_PR_setup
} LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13_PR;
typedef enum LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup__triggerQuantity_v1310 {
	LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup__triggerQuantity_v1310_sinr	= 0
} e_LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup__triggerQuantity_v1310;
typedef enum LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup__reportQuantity_v1310 {
	LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup__reportQuantity_v1310_rsrpANDsinr	= 0,
	LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup__reportQuantity_v1310_rsrqANDsinr	= 1,
	LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup__reportQuantity_v1310_all	= 2
} e_LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup__reportQuantity_v1310;
typedef enum LTE_ReportConfigEUTRA__ext4__includeMultiBandInfo_r13 {
	LTE_ReportConfigEUTRA__ext4__includeMultiBandInfo_r13_true	= 0
} e_LTE_ReportConfigEUTRA__ext4__includeMultiBandInfo_r13;
typedef enum LTE_ReportConfigEUTRA__ext6__purpose_v1430 {
	LTE_ReportConfigEUTRA__ext6__purpose_v1430_reportLocation	= 0,
	LTE_ReportConfigEUTRA__ext6__purpose_v1430_sidelink	= 1,
	LTE_ReportConfigEUTRA__ext6__purpose_v1430_spare2	= 2,
	LTE_ReportConfigEUTRA__ext6__purpose_v1430_spare1	= 3
} e_LTE_ReportConfigEUTRA__ext6__purpose_v1430;

/* Forward declarations */
struct LTE_RSRQ_RangeConfig_r12;
struct LTE_MeasRSSI_ReportConfig_r13;
struct LTE_UL_DelayConfig_r13;

/* LTE_ReportConfigEUTRA */
typedef struct LTE_ReportConfigEUTRA {
	struct LTE_ReportConfigEUTRA__triggerType {
		LTE_ReportConfigEUTRA__triggerType_PR present;
		union LTE_ReportConfigEUTRA__LTE_triggerType_u {
			struct LTE_ReportConfigEUTRA__triggerType__event {
				struct LTE_ReportConfigEUTRA__triggerType__event__eventId {
					LTE_ReportConfigEUTRA__triggerType__event__eventId_PR present;
					union LTE_ReportConfigEUTRA__LTE_triggerType__LTE_event__LTE_eventId_u {
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventA1 {
							LTE_ThresholdEUTRA_t	 a1_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA1;
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventA2 {
							LTE_ThresholdEUTRA_t	 a2_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA2;
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventA3 {
							long	 a3_Offset;
							BOOLEAN_t	 reportOnLeave;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA3;
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventA4 {
							LTE_ThresholdEUTRA_t	 a4_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA4;
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventA5 {
							LTE_ThresholdEUTRA_t	 a5_Threshold1;
							LTE_ThresholdEUTRA_t	 a5_Threshold2;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA5;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventA6_r10 {
							long	 a6_Offset_r10;
							BOOLEAN_t	 a6_ReportOnLeave_r10;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA6_r10;
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventC1_r12 {
							LTE_ThresholdEUTRA_v1250_t	 c1_Threshold_r12;
							BOOLEAN_t	 c1_ReportOnLeave_r12;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventC1_r12;
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventC2_r12 {
							LTE_MeasCSI_RS_Id_r12_t	 c2_RefCSI_RS_r12;
							long	 c2_Offset_r12;
							BOOLEAN_t	 c2_ReportOnLeave_r12;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventC2_r12;
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventV1_r14 {
							LTE_SL_CBR_r14_t	 v1_Threshold_r14;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventV1_r14;
						struct LTE_ReportConfigEUTRA__triggerType__event__eventId__eventV2_r14 {
							LTE_SL_CBR_r14_t	 v2_Threshold_r14;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventV2_r14;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} eventId;
				LTE_Hysteresis_t	 hysteresis;
				LTE_TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} event;
			struct LTE_ReportConfigEUTRA__triggerType__periodical {
				long	 purpose;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} periodical;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} triggerType;
	long	 triggerQuantity;
	long	 reportQuantity;
	long	 maxReportCells;
	LTE_ReportInterval_t	 reportInterval;
	long	 reportAmount;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_ReportConfigEUTRA__ext1 {
		long	*si_RequestForHO_r9;	/* OPTIONAL */
		long	*ue_RxTxTimeDiffPeriodical_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_ReportConfigEUTRA__ext2 {
		long	*includeLocationInfo_r10;	/* OPTIONAL */
		long	*reportAddNeighMeas_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_ReportConfigEUTRA__ext3 {
		struct LTE_ReportConfigEUTRA__ext3__alternativeTimeToTrigger_r12 {
			LTE_ReportConfigEUTRA__ext3__alternativeTimeToTrigger_r12_PR present;
			union LTE_ReportConfigEUTRA__LTE_ext3__LTE_alternativeTimeToTrigger_r12_u {
				NULL_t	 release;
				LTE_TimeToTrigger_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *alternativeTimeToTrigger_r12;
		BOOLEAN_t	*useT312_r12;	/* OPTIONAL */
		BOOLEAN_t	*usePSCell_r12;	/* OPTIONAL */
		struct LTE_RSRQ_RangeConfig_r12	*aN_Threshold1_v1250;	/* OPTIONAL */
		struct LTE_RSRQ_RangeConfig_r12	*a5_Threshold2_v1250;	/* OPTIONAL */
		BOOLEAN_t	*reportStrongestCSI_RSs_r12;	/* OPTIONAL */
		BOOLEAN_t	*reportCRS_Meas_r12;	/* OPTIONAL */
		BOOLEAN_t	*triggerQuantityCSI_RS_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_ReportConfigEUTRA__ext4 {
		BOOLEAN_t	*reportSSTD_Meas_r13;	/* OPTIONAL */
		struct LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13 {
			LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13_PR present;
			union LTE_ReportConfigEUTRA__LTE_ext4__LTE_rs_sinr_Config_r13_u {
				NULL_t	 release;
				struct LTE_ReportConfigEUTRA__ext4__rs_sinr_Config_r13__setup {
					long	*triggerQuantity_v1310;	/* OPTIONAL */
					LTE_RS_SINR_Range_r13_t	*aN_Threshold1_r13;	/* OPTIONAL */
					LTE_RS_SINR_Range_r13_t	*a5_Threshold2_r13;	/* OPTIONAL */
					long	 reportQuantity_v1310;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *rs_sinr_Config_r13;
		BOOLEAN_t	*useWhiteCellList_r13;	/* OPTIONAL */
		struct LTE_MeasRSSI_ReportConfig_r13	*measRSSI_ReportConfig_r13;	/* OPTIONAL */
		long	*includeMultiBandInfo_r13;	/* OPTIONAL */
		struct LTE_UL_DelayConfig_r13	*ul_DelayConfig_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_ReportConfigEUTRA__ext5 {
		BOOLEAN_t	*ue_RxTxTimeDiffPeriodicalTDD_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_ReportConfigEUTRA__ext6 {
		long	*purpose_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ReportConfigEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_purpose_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_triggerQuantity_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reportQuantity_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reportAmount_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_si_RequestForHO_r9_57;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_RxTxTimeDiffPeriodical_r9_59;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_includeLocationInfo_r10_62;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reportAddNeighMeas_r10_64;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_triggerQuantity_v1310_82;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reportQuantity_v1310_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_includeMultiBandInfo_r13_92;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_purpose_v1430_98;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ReportConfigEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ReportConfigEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ReportConfigEUTRA_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RSRQ-RangeConfig-r12.h"
#include "LTE_MeasRSSI-ReportConfig-r13.h"
#include "LTE_UL-DelayConfig-r13.h"

#endif	/* _LTE_ReportConfigEUTRA_H_ */
#include <asn_internal.h>
