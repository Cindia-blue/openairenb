/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_IntraFreqCellReselectionInfo-NB-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_powerClass14dBm_Offset_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ce_AuthorisationOffset_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_powerClass14dBm_Offset_r14_value2enum_2[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	4,	"dB-3" },
	{ 2,	3,	"dB3" },
	{ 3,	3,	"dB6" },
	{ 4,	3,	"dB9" },
	{ 5,	4,	"dB12" }
};
static const unsigned int asn_MAP_LTE_powerClass14dBm_Offset_r14_enum2value_2[] = {
	1,	/* dB-3(1) */
	0,	/* dB-6(0) */
	5,	/* dB12(5) */
	2,	/* dB3(2) */
	3,	/* dB6(3) */
	4	/* dB9(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_powerClass14dBm_Offset_r14_specs_2 = {
	asn_MAP_LTE_powerClass14dBm_Offset_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_powerClass14dBm_Offset_r14_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_powerClass14dBm_Offset_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_powerClass14dBm_Offset_r14_2 = {
	"powerClass14dBm-Offset-r14",
	"powerClass14dBm-Offset-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_powerClass14dBm_Offset_r14_tags_2,
	sizeof(asn_DEF_LTE_powerClass14dBm_Offset_r14_tags_2)
		/sizeof(asn_DEF_LTE_powerClass14dBm_Offset_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_powerClass14dBm_Offset_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_powerClass14dBm_Offset_r14_tags_2)
		/sizeof(asn_DEF_LTE_powerClass14dBm_Offset_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_powerClass14dBm_Offset_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_powerClass14dBm_Offset_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ce_AuthorisationOffset_r14_value2enum_9[] = {
	{ 0,	3,	"dB5" },
	{ 1,	4,	"dB10" },
	{ 2,	4,	"dB15" },
	{ 3,	4,	"dB20" },
	{ 4,	4,	"dB25" },
	{ 5,	4,	"dB30" },
	{ 6,	4,	"dB35" }
};
static const unsigned int asn_MAP_LTE_ce_AuthorisationOffset_r14_enum2value_9[] = {
	1,	/* dB10(1) */
	2,	/* dB15(2) */
	3,	/* dB20(3) */
	4,	/* dB25(4) */
	5,	/* dB30(5) */
	6,	/* dB35(6) */
	0	/* dB5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ce_AuthorisationOffset_r14_specs_9 = {
	asn_MAP_LTE_ce_AuthorisationOffset_r14_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ce_AuthorisationOffset_r14_enum2value_9,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ce_AuthorisationOffset_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ce_AuthorisationOffset_r14_9 = {
	"ce-AuthorisationOffset-r14",
	"ce-AuthorisationOffset-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ce_AuthorisationOffset_r14_tags_9,
	sizeof(asn_DEF_LTE_ce_AuthorisationOffset_r14_tags_9)
		/sizeof(asn_DEF_LTE_ce_AuthorisationOffset_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_ce_AuthorisationOffset_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_ce_AuthorisationOffset_r14_tags_9)
		/sizeof(asn_DEF_LTE_ce_AuthorisationOffset_r14_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ce_AuthorisationOffset_r14_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ce_AuthorisationOffset_r14_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_IntraFreqCellReselectionInfo_NB_v1430_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_IntraFreqCellReselectionInfo_NB_v1430, powerClass14dBm_Offset_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_powerClass14dBm_Offset_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerClass14dBm-Offset-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_IntraFreqCellReselectionInfo_NB_v1430, ce_AuthorisationOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ce_AuthorisationOffset_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-AuthorisationOffset-r14"
		},
};
static const int asn_MAP_LTE_IntraFreqCellReselectionInfo_NB_v1430_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_IntraFreqCellReselectionInfo_NB_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerClass14dBm-Offset-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ce-AuthorisationOffset-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_IntraFreqCellReselectionInfo_NB_v1430_specs_1 = {
	sizeof(struct LTE_IntraFreqCellReselectionInfo_NB_v1430),
	offsetof(struct LTE_IntraFreqCellReselectionInfo_NB_v1430, _asn_ctx),
	asn_MAP_LTE_IntraFreqCellReselectionInfo_NB_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_IntraFreqCellReselectionInfo_NB_v1430_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1430 = {
	"IntraFreqCellReselectionInfo-NB-v1430",
	"IntraFreqCellReselectionInfo-NB-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1430_tags_1,
	sizeof(asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1430_tags_1)
		/sizeof(asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1430_tags_1[0]), /* 1 */
	asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1430_tags_1)
		/sizeof(asn_DEF_LTE_IntraFreqCellReselectionInfo_NB_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_IntraFreqCellReselectionInfo_NB_v1430_1,
	2,	/* Elements count */
	&asn_SPC_LTE_IntraFreqCellReselectionInfo_NB_v1430_specs_1	/* Additional specs */
};

