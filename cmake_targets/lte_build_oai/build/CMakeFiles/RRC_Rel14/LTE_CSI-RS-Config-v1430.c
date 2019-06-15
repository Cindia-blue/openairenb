/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CSI-RS-Config-v1430.h"

asn_TYPE_member_t asn_MBR_LTE_CSI_RS_Config_v1430_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_CSI_RS_Config_v1430, eMIMO_Type_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_CSI_RS_ConfigEMIMO_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eMIMO-Type-v1430"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_CSI_RS_Config_v1430, eMIMO_Hybrid_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_CSI_RS_ConfigEMIMO_Hybrid_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eMIMO-Hybrid-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CSI_RS_Config_v1430, advancedCodebookEnabled_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"advancedCodebookEnabled-r14"
		},
};
static const int asn_MAP_LTE_CSI_RS_Config_v1430_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_CSI_RS_Config_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CSI_RS_Config_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eMIMO-Type-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eMIMO-Hybrid-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* advancedCodebookEnabled-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_Config_v1430_specs_1 = {
	sizeof(struct LTE_CSI_RS_Config_v1430),
	offsetof(struct LTE_CSI_RS_Config_v1430, _asn_ctx),
	asn_MAP_LTE_CSI_RS_Config_v1430_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_CSI_RS_Config_v1430_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_Config_v1430 = {
	"CSI-RS-Config-v1430",
	"CSI-RS-Config-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CSI_RS_Config_v1430_tags_1,
	sizeof(asn_DEF_LTE_CSI_RS_Config_v1430_tags_1)
		/sizeof(asn_DEF_LTE_CSI_RS_Config_v1430_tags_1[0]), /* 1 */
	asn_DEF_LTE_CSI_RS_Config_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CSI_RS_Config_v1430_tags_1)
		/sizeof(asn_DEF_LTE_CSI_RS_Config_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CSI_RS_Config_v1430_1,
	3,	/* Elements count */
	&asn_SPC_LTE_CSI_RS_Config_v1430_specs_1	/* Additional specs */
};

