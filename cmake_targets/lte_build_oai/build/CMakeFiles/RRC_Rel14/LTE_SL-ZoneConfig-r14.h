/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_ZoneConfig_r14_H_
#define	_LTE_SL_ZoneConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_ZoneConfig_r14__zoneLength_r14 {
	LTE_SL_ZoneConfig_r14__zoneLength_r14_m5	= 0,
	LTE_SL_ZoneConfig_r14__zoneLength_r14_m10	= 1,
	LTE_SL_ZoneConfig_r14__zoneLength_r14_m20	= 2,
	LTE_SL_ZoneConfig_r14__zoneLength_r14_m50	= 3,
	LTE_SL_ZoneConfig_r14__zoneLength_r14_m100	= 4,
	LTE_SL_ZoneConfig_r14__zoneLength_r14_m200	= 5,
	LTE_SL_ZoneConfig_r14__zoneLength_r14_m500	= 6,
	LTE_SL_ZoneConfig_r14__zoneLength_r14_spare1	= 7
} e_LTE_SL_ZoneConfig_r14__zoneLength_r14;
typedef enum LTE_SL_ZoneConfig_r14__zoneWidth_r14 {
	LTE_SL_ZoneConfig_r14__zoneWidth_r14_m5	= 0,
	LTE_SL_ZoneConfig_r14__zoneWidth_r14_m10	= 1,
	LTE_SL_ZoneConfig_r14__zoneWidth_r14_m20	= 2,
	LTE_SL_ZoneConfig_r14__zoneWidth_r14_m50	= 3,
	LTE_SL_ZoneConfig_r14__zoneWidth_r14_m100	= 4,
	LTE_SL_ZoneConfig_r14__zoneWidth_r14_m200	= 5,
	LTE_SL_ZoneConfig_r14__zoneWidth_r14_m500	= 6,
	LTE_SL_ZoneConfig_r14__zoneWidth_r14_spare1	= 7
} e_LTE_SL_ZoneConfig_r14__zoneWidth_r14;

/* LTE_SL-ZoneConfig-r14 */
typedef struct LTE_SL_ZoneConfig_r14 {
	long	 zoneLength_r14;
	long	 zoneWidth_r14;
	long	 zoneIdLongiMod_r14;
	long	 zoneIdLatiMod_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_ZoneConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_zoneLength_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_zoneWidth_r14_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_ZoneConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_ZoneConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_ZoneConfig_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_ZoneConfig_r14_H_ */
#include <asn_internal.h>
