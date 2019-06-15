/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SPS-Config-v1430.h"

asn_TYPE_member_t asn_MBR_LTE_SPS_Config_v1430_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_SPS_Config_v1430, ul_SPS_V_RNTI_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-SPS-V-RNTI-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SPS_Config_v1430, sl_SPS_V_RNTI_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-SPS-V-RNTI-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SPS_Config_v1430, sps_ConfigUL_ToAddModList_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_ConfigUL_ToAddModList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-ConfigUL-ToAddModList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SPS_Config_v1430, sps_ConfigUL_ToReleaseList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_ConfigUL_ToReleaseList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-ConfigUL-ToReleaseList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SPS_Config_v1430, sps_ConfigSL_ToAddModList_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_ConfigSL_ToAddModList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-ConfigSL-ToAddModList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SPS_Config_v1430, sps_ConfigSL_ToReleaseList_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_ConfigSL_ToReleaseList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-ConfigSL-ToReleaseList-r14"
		},
};
static const int asn_MAP_LTE_SPS_Config_v1430_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_SPS_Config_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SPS_Config_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-SPS-V-RNTI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-SPS-V-RNTI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sps-ConfigUL-ToAddModList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sps-ConfigUL-ToReleaseList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sps-ConfigSL-ToAddModList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* sps-ConfigSL-ToReleaseList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SPS_Config_v1430_specs_1 = {
	sizeof(struct LTE_SPS_Config_v1430),
	offsetof(struct LTE_SPS_Config_v1430, _asn_ctx),
	asn_MAP_LTE_SPS_Config_v1430_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_SPS_Config_v1430_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SPS_Config_v1430 = {
	"SPS-Config-v1430",
	"SPS-Config-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SPS_Config_v1430_tags_1,
	sizeof(asn_DEF_LTE_SPS_Config_v1430_tags_1)
		/sizeof(asn_DEF_LTE_SPS_Config_v1430_tags_1[0]), /* 1 */
	asn_DEF_LTE_SPS_Config_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SPS_Config_v1430_tags_1)
		/sizeof(asn_DEF_LTE_SPS_Config_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SPS_Config_v1430_1,
	6,	/* Elements count */
	&asn_SPC_LTE_SPS_Config_v1430_specs_1	/* Additional specs */
};

