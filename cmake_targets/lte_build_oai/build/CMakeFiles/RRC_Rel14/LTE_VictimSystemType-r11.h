/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_VictimSystemType_r11_H_
#define	_LTE_VictimSystemType_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_VictimSystemType_r11__gps_r11 {
	LTE_VictimSystemType_r11__gps_r11_true	= 0
} e_LTE_VictimSystemType_r11__gps_r11;
typedef enum LTE_VictimSystemType_r11__glonass_r11 {
	LTE_VictimSystemType_r11__glonass_r11_true	= 0
} e_LTE_VictimSystemType_r11__glonass_r11;
typedef enum LTE_VictimSystemType_r11__bds_r11 {
	LTE_VictimSystemType_r11__bds_r11_true	= 0
} e_LTE_VictimSystemType_r11__bds_r11;
typedef enum LTE_VictimSystemType_r11__galileo_r11 {
	LTE_VictimSystemType_r11__galileo_r11_true	= 0
} e_LTE_VictimSystemType_r11__galileo_r11;
typedef enum LTE_VictimSystemType_r11__wlan_r11 {
	LTE_VictimSystemType_r11__wlan_r11_true	= 0
} e_LTE_VictimSystemType_r11__wlan_r11;
typedef enum LTE_VictimSystemType_r11__bluetooth_r11 {
	LTE_VictimSystemType_r11__bluetooth_r11_true	= 0
} e_LTE_VictimSystemType_r11__bluetooth_r11;

/* LTE_VictimSystemType-r11 */
typedef struct LTE_VictimSystemType_r11 {
	long	*gps_r11;	/* OPTIONAL */
	long	*glonass_r11;	/* OPTIONAL */
	long	*bds_r11;	/* OPTIONAL */
	long	*galileo_r11;	/* OPTIONAL */
	long	*wlan_r11;	/* OPTIONAL */
	long	*bluetooth_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VictimSystemType_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_gps_r11_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_glonass_r11_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_bds_r11_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_galileo_r11_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_wlan_r11_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_bluetooth_r11_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VictimSystemType_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_VictimSystemType_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_VictimSystemType_r11_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_VictimSystemType_r11_H_ */
#include <asn_internal.h>
