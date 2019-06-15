/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CarrierFreqInfoUTRA_FDD_v8h0_H_
#define	_LTE_CarrierFreqInfoUTRA_FDD_v8h0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_FreqBandIndicator-UTRA-FDD.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CarrierFreqInfoUTRA-FDD-v8h0 */
typedef struct LTE_CarrierFreqInfoUTRA_FDD_v8h0 {
	struct LTE_CarrierFreqInfoUTRA_FDD_v8h0__multiBandInfoList {
		A_SEQUENCE_OF(LTE_FreqBandIndicator_UTRA_FDD_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierFreqInfoUTRA_FDD_v8h0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreqInfoUTRA_FDD_v8h0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreqInfoUTRA_FDD_v8h0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierFreqInfoUTRA_FDD_v8h0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CarrierFreqInfoUTRA_FDD_v8h0_H_ */
#include <asn_internal.h>
