/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_HoppingConfigComm_r12_H_
#define	_LTE_SL_HoppingConfigComm_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_HoppingConfigComm_r12__numSubbands_r12 {
	LTE_SL_HoppingConfigComm_r12__numSubbands_r12_ns1	= 0,
	LTE_SL_HoppingConfigComm_r12__numSubbands_r12_ns2	= 1,
	LTE_SL_HoppingConfigComm_r12__numSubbands_r12_ns4	= 2
} e_LTE_SL_HoppingConfigComm_r12__numSubbands_r12;

/* LTE_SL-HoppingConfigComm-r12 */
typedef struct LTE_SL_HoppingConfigComm_r12 {
	long	 hoppingParameter_r12;
	long	 numSubbands_r12;
	long	 rb_Offset_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_HoppingConfigComm_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_numSubbands_r12_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_HoppingConfigComm_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_HoppingConfigComm_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_HoppingConfigComm_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_HoppingConfigComm_r12_H_ */
#include <asn_internal.h>
