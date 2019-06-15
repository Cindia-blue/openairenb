/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_ReportConfigInterRAT_H_
#define	_LTE_ReportConfigInterRAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_ReportInterval.h"
#include <NativeEnumerated.h>
#include "LTE_Hysteresis.h"
#include "LTE_TimeToTrigger.h"
#include "LTE_ThresholdUTRA.h"
#include "LTE_ThresholdGERAN.h"
#include "LTE_ThresholdCDMA2000.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "LTE_ThresholdEUTRA.h"
#include "LTE_WLAN-RSSI-Range-r13.h"
#include <BOOLEAN.h>
#include <NULL.h>
#include "LTE_RSRQ-Range-v1250.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ReportConfigInterRAT__triggerType_PR {
	LTE_ReportConfigInterRAT__triggerType_PR_NOTHING,	/* No components present */
	LTE_ReportConfigInterRAT__triggerType_PR_event,
	LTE_ReportConfigInterRAT__triggerType_PR_periodical
} LTE_ReportConfigInterRAT__triggerType_PR;
typedef enum LTE_ReportConfigInterRAT__triggerType__event__eventId_PR {
	LTE_ReportConfigInterRAT__triggerType__event__eventId_PR_NOTHING,	/* No components present */
	LTE_ReportConfigInterRAT__triggerType__event__eventId_PR_eventB1,
	LTE_ReportConfigInterRAT__triggerType__event__eventId_PR_eventB2,
	/* Extensions may appear below */
	LTE_ReportConfigInterRAT__triggerType__event__eventId_PR_eventW1_r13,
	LTE_ReportConfigInterRAT__triggerType__event__eventId_PR_eventW2_r13,
	LTE_ReportConfigInterRAT__triggerType__event__eventId_PR_eventW3_r13
} LTE_ReportConfigInterRAT__triggerType__event__eventId_PR;
typedef enum LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR {
	LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_NOTHING,	/* No components present */
	LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdUTRA,
	LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdGERAN,
	LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdCDMA2000
} LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR;
typedef enum LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR {
	LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_NOTHING,	/* No components present */
	LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2UTRA,
	LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2GERAN,
	LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2CDMA2000
} LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR;
typedef enum LTE_ReportConfigInterRAT__triggerType__periodical__purpose {
	LTE_ReportConfigInterRAT__triggerType__periodical__purpose_reportStrongestCells	= 0,
	LTE_ReportConfigInterRAT__triggerType__periodical__purpose_reportStrongestCellsForSON	= 1,
	LTE_ReportConfigInterRAT__triggerType__periodical__purpose_reportCGI	= 2
} e_LTE_ReportConfigInterRAT__triggerType__periodical__purpose;
typedef enum LTE_ReportConfigInterRAT__reportAmount {
	LTE_ReportConfigInterRAT__reportAmount_r1	= 0,
	LTE_ReportConfigInterRAT__reportAmount_r2	= 1,
	LTE_ReportConfigInterRAT__reportAmount_r4	= 2,
	LTE_ReportConfigInterRAT__reportAmount_r8	= 3,
	LTE_ReportConfigInterRAT__reportAmount_r16	= 4,
	LTE_ReportConfigInterRAT__reportAmount_r32	= 5,
	LTE_ReportConfigInterRAT__reportAmount_r64	= 6,
	LTE_ReportConfigInterRAT__reportAmount_infinity	= 7
} e_LTE_ReportConfigInterRAT__reportAmount;
typedef enum LTE_ReportConfigInterRAT__ext1__si_RequestForHO_r9 {
	LTE_ReportConfigInterRAT__ext1__si_RequestForHO_r9_setup	= 0
} e_LTE_ReportConfigInterRAT__ext1__si_RequestForHO_r9;
typedef enum LTE_ReportConfigInterRAT__ext2__reportQuantityUTRA_FDD_r10 {
	LTE_ReportConfigInterRAT__ext2__reportQuantityUTRA_FDD_r10_both	= 0
} e_LTE_ReportConfigInterRAT__ext2__reportQuantityUTRA_FDD_r10;
typedef enum LTE_ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR {
	LTE_ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR_NOTHING,	/* No components present */
	LTE_ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR_release,
	LTE_ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR_setup
} LTE_ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR;

/* Forward declarations */
struct LTE_ReportQuantityWLAN_r13;

/* LTE_ReportConfigInterRAT */
typedef struct LTE_ReportConfigInterRAT {
	struct LTE_ReportConfigInterRAT__triggerType {
		LTE_ReportConfigInterRAT__triggerType_PR present;
		union LTE_ReportConfigInterRAT__LTE_triggerType_u {
			struct LTE_ReportConfigInterRAT__triggerType__event {
				struct LTE_ReportConfigInterRAT__triggerType__event__eventId {
					LTE_ReportConfigInterRAT__triggerType__event__eventId_PR present;
					union LTE_ReportConfigInterRAT__LTE_triggerType__LTE_event__LTE_eventId_u {
						struct LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1 {
							struct LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold {
								LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR present;
								union LTE_ReportConfigInterRAT__LTE_triggerType__LTE_event__LTE_eventId__LTE_eventB1__LTE_b1_Threshold_u {
									LTE_ThresholdUTRA_t	 b1_ThresholdUTRA;
									LTE_ThresholdGERAN_t	 b1_ThresholdGERAN;
									LTE_ThresholdCDMA2000_t	 b1_ThresholdCDMA2000;
								} choice;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} b1_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventB1;
						struct LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2 {
							LTE_ThresholdEUTRA_t	 b2_Threshold1;
							struct LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2 {
								LTE_ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR present;
								union LTE_ReportConfigInterRAT__LTE_triggerType__LTE_event__LTE_eventId__LTE_eventB2__LTE_b2_Threshold2_u {
									LTE_ThresholdUTRA_t	 b2_Threshold2UTRA;
									LTE_ThresholdGERAN_t	 b2_Threshold2GERAN;
									LTE_ThresholdCDMA2000_t	 b2_Threshold2CDMA2000;
								} choice;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} b2_Threshold2;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventB2;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
						struct LTE_ReportConfigInterRAT__triggerType__event__eventId__eventW1_r13 {
							LTE_WLAN_RSSI_Range_r13_t	 w1_Threshold_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventW1_r13;
						struct LTE_ReportConfigInterRAT__triggerType__event__eventId__eventW2_r13 {
							LTE_WLAN_RSSI_Range_r13_t	 w2_Threshold1_r13;
							LTE_WLAN_RSSI_Range_r13_t	 w2_Threshold2_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventW2_r13;
						struct LTE_ReportConfigInterRAT__triggerType__event__eventId__eventW3_r13 {
							LTE_WLAN_RSSI_Range_r13_t	 w3_Threshold_r13;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventW3_r13;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} eventId;
				LTE_Hysteresis_t	 hysteresis;
				LTE_TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} event;
			struct LTE_ReportConfigInterRAT__triggerType__periodical {
				long	 purpose;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} periodical;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} triggerType;
	long	 maxReportCells;
	LTE_ReportInterval_t	 reportInterval;
	long	 reportAmount;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_ReportConfigInterRAT__ext1 {
		long	*si_RequestForHO_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_ReportConfigInterRAT__ext2 {
		long	*reportQuantityUTRA_FDD_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_ReportConfigInterRAT__ext3 {
		BOOLEAN_t	*includeLocationInfo_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_ReportConfigInterRAT__ext4 {
		struct LTE_ReportConfigInterRAT__ext4__b2_Threshold1_v1250 {
			LTE_ReportConfigInterRAT__ext4__b2_Threshold1_v1250_PR present;
			union LTE_ReportConfigInterRAT__LTE_ext4__LTE_b2_Threshold1_v1250_u {
				NULL_t	 release;
				LTE_RSRQ_Range_v1250_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *b2_Threshold1_v1250;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_ReportConfigInterRAT__ext5 {
		struct LTE_ReportQuantityWLAN_r13	*reportQuantityWLAN_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_ReportConfigInterRAT__ext6 {
		BOOLEAN_t	*reportAnyWLAN_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ReportConfigInterRAT_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_purpose_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reportAmount_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_si_RequestForHO_r9_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reportQuantityUTRA_FDD_r10_47;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ReportConfigInterRAT;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ReportConfigInterRAT_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ReportConfigInterRAT_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_ReportQuantityWLAN-r13.h"

#endif	/* _LTE_ReportConfigInterRAT_H_ */
#include <asn_internal.h>
