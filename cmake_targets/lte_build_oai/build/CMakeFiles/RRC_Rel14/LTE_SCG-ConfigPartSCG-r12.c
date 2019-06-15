/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SCG-ConfigPartSCG-r12.h"

static asn_TYPE_member_t asn_MBR_LTE_ext1_8[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SCG_ConfigPartSCG_r12__ext1, sCellToReleaseListSCG_Ext_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellToReleaseListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToReleaseListSCG-Ext-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SCG_ConfigPartSCG_r12__ext1, sCellToAddModListSCG_Ext_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellToAddModListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToAddModListSCG-Ext-r13"
		},
};
static const int asn_MAP_LTE_ext1_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellToReleaseListSCG-Ext-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sCellToAddModListSCG-Ext-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_8 = {
	sizeof(struct LTE_SCG_ConfigPartSCG_r12__ext1),
	offsetof(struct LTE_SCG_ConfigPartSCG_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_8 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_8,
	sizeof(asn_DEF_LTE_ext1_tags_8)
		/sizeof(asn_DEF_LTE_ext1_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_8)
		/sizeof(asn_DEF_LTE_ext1_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_8,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_11[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SCG_ConfigPartSCG_r12__ext2, sCellToAddModListSCG_Ext_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellToAddModListExt_v1370,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToAddModListSCG-Ext-v1370"
		},
};
static const int asn_MAP_LTE_ext2_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sCellToAddModListSCG-Ext-v1370 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_11 = {
	sizeof(struct LTE_SCG_ConfigPartSCG_r12__ext2),
	offsetof(struct LTE_SCG_ConfigPartSCG_r12__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_11 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_11,
	sizeof(asn_DEF_LTE_ext2_tags_11)
		/sizeof(asn_DEF_LTE_ext2_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_11)
		/sizeof(asn_DEF_LTE_ext2_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_11,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_13[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SCG_ConfigPartSCG_r12__ext3, pSCellToAddMod_v1440),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PSCellToAddMod_v1440,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pSCellToAddMod-v1440"
		},
};
static const int asn_MAP_LTE_ext3_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pSCellToAddMod-v1440 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_13 = {
	sizeof(struct LTE_SCG_ConfigPartSCG_r12__ext3),
	offsetof(struct LTE_SCG_ConfigPartSCG_r12__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_13 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_13,
	sizeof(asn_DEF_LTE_ext3_tags_13)
		/sizeof(asn_DEF_LTE_ext3_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_13)
		/sizeof(asn_DEF_LTE_ext3_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_13,
	1,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SCG_ConfigPartSCG_r12_1[] = {
	{ ATF_POINTER, 8, offsetof(struct LTE_SCG_ConfigPartSCG_r12, radioResourceConfigDedicatedSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RadioResourceConfigDedicatedSCG_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicatedSCG-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_SCG_ConfigPartSCG_r12, sCellToReleaseListSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellToReleaseList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToReleaseListSCG-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_SCG_ConfigPartSCG_r12, pSCellToAddMod_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PSCellToAddMod_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pSCellToAddMod-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SCG_ConfigPartSCG_r12, sCellToAddModListSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellToAddModList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToAddModListSCG-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SCG_ConfigPartSCG_r12, mobilityControlInfoSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MobilityControlInfoSCG_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityControlInfoSCG-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SCG_ConfigPartSCG_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext1_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SCG_ConfigPartSCG_r12, ext2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext2_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SCG_ConfigPartSCG_r12, ext3),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext3_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_LTE_SCG_ConfigPartSCG_r12_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_LTE_SCG_ConfigPartSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SCG_ConfigPartSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigDedicatedSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sCellToReleaseListSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pSCellToAddMod-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sCellToAddModListSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mobilityControlInfoSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SCG_ConfigPartSCG_r12_specs_1 = {
	sizeof(struct LTE_SCG_ConfigPartSCG_r12),
	offsetof(struct LTE_SCG_ConfigPartSCG_r12, _asn_ctx),
	asn_MAP_LTE_SCG_ConfigPartSCG_r12_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_LTE_SCG_ConfigPartSCG_r12_oms_1,	/* Optional members */
	5, 3,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SCG_ConfigPartSCG_r12 = {
	"SCG-ConfigPartSCG-r12",
	"SCG-ConfigPartSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SCG_ConfigPartSCG_r12_tags_1,
	sizeof(asn_DEF_LTE_SCG_ConfigPartSCG_r12_tags_1)
		/sizeof(asn_DEF_LTE_SCG_ConfigPartSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_SCG_ConfigPartSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SCG_ConfigPartSCG_r12_tags_1)
		/sizeof(asn_DEF_LTE_SCG_ConfigPartSCG_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SCG_ConfigPartSCG_r12_1,
	8,	/* Elements count */
	&asn_SPC_LTE_SCG_ConfigPartSCG_r12_specs_1	/* Additional specs */
};

