/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CQI_ReportAperiodicProc_v1310_H_
#define	_LTE_CQI_ReportAperiodicProc_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CQI-ReportAperiodicProc-v1310 */
typedef struct LTE_CQI_ReportAperiodicProc_v1310 {
	BOOLEAN_t	 trigger001_r13;
	BOOLEAN_t	 trigger010_r13;
	BOOLEAN_t	 trigger011_r13;
	BOOLEAN_t	 trigger100_r13;
	BOOLEAN_t	 trigger101_r13;
	BOOLEAN_t	 trigger110_r13;
	BOOLEAN_t	 trigger111_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportAperiodicProc_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportAperiodicProc_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportAperiodicProc_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportAperiodicProc_v1310_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CQI_ReportAperiodicProc_v1310_H_ */
#include <asn_internal.h>
