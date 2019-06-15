/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RadioResourceConfigDedicated.h"

static asn_per_constraints_t asn_PER_type_LTE_mac_MainConfig_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_mac_MainConfig_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RadioResourceConfigDedicated__mac_MainConfig, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MAC_MainConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RadioResourceConfigDedicated__mac_MainConfig, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_mac_MainConfig_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_mac_MainConfig_specs_5 = {
	sizeof(struct LTE_RadioResourceConfigDedicated__mac_MainConfig),
	offsetof(struct LTE_RadioResourceConfigDedicated__mac_MainConfig, _asn_ctx),
	offsetof(struct LTE_RadioResourceConfigDedicated__mac_MainConfig, present),
	sizeof(((struct LTE_RadioResourceConfigDedicated__mac_MainConfig *)0)->present),
	asn_MAP_LTE_mac_MainConfig_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mac_MainConfig_5 = {
	"mac-MainConfig",
	"mac-MainConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_mac_MainConfig_constr_5, CHOICE_constraint },
	asn_MBR_LTE_mac_MainConfig_5,
	2,	/* Elements count */
	&asn_SPC_LTE_mac_MainConfig_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_11[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicated__ext1, rlf_TimersAndConstants_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_RLF_TimersAndConstants_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-TimersAndConstants-r9"
		},
};
static const int asn_MAP_LTE_ext1_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rlf-TimersAndConstants-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_11 = {
	sizeof(struct LTE_RadioResourceConfigDedicated__ext1),
	offsetof(struct LTE_RadioResourceConfigDedicated__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_11 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_11,
	sizeof(asn_DEF_LTE_ext1_tags_11)
		/sizeof(asn_DEF_LTE_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_11)
		/sizeof(asn_DEF_LTE_ext1_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_11,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_13[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicated__ext2, measSubframePatternPCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_MeasSubframePatternPCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measSubframePatternPCell-r10"
		},
};
static const int asn_MAP_LTE_ext2_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measSubframePatternPCell-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_13 = {
	sizeof(struct LTE_RadioResourceConfigDedicated__ext2),
	offsetof(struct LTE_RadioResourceConfigDedicated__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_13 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_13,
	sizeof(asn_DEF_LTE_ext2_tags_13)
		/sizeof(asn_DEF_LTE_ext2_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_13)
		/sizeof(asn_DEF_LTE_ext2_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_13,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_15[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicated__ext3, neighCellsCRS_Info_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_NeighCellsCRS_Info_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-Info-r11"
		},
};
static const int asn_MAP_LTE_ext3_oms_15[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* neighCellsCRS-Info-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_15 = {
	sizeof(struct LTE_RadioResourceConfigDedicated__ext3),
	offsetof(struct LTE_RadioResourceConfigDedicated__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_15,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_15,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_15 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_15,
	sizeof(asn_DEF_LTE_ext3_tags_15)
		/sizeof(asn_DEF_LTE_ext3_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_15)
		/sizeof(asn_DEF_LTE_ext3_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_15,
	1,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext4_17[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicated__ext4, naics_Info_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_NAICS_AssistanceInfo_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"naics-Info-r12"
		},
};
static const int asn_MAP_LTE_ext4_oms_17[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext4_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext4_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* naics-Info-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext4_specs_17 = {
	sizeof(struct LTE_RadioResourceConfigDedicated__ext4),
	offsetof(struct LTE_RadioResourceConfigDedicated__ext4, _asn_ctx),
	asn_MAP_LTE_ext4_tag2el_17,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext4_oms_17,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext4_17 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext4_tags_17,
	sizeof(asn_DEF_LTE_ext4_tags_17)
		/sizeof(asn_DEF_LTE_ext4_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_ext4_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_ext4_tags_17)
		/sizeof(asn_DEF_LTE_ext4_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext4_17,
	1,	/* Elements count */
	&asn_SPC_LTE_ext4_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext5_19[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_RadioResourceConfigDedicated__ext5, neighCellsCRS_Info_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_NeighCellsCRS_Info_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-Info-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicated__ext5, rlf_TimersAndConstants_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_RLF_TimersAndConstants_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-TimersAndConstants-r13"
		},
};
static const int asn_MAP_LTE_ext5_oms_19[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext5_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext5_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* neighCellsCRS-Info-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rlf-TimersAndConstants-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext5_specs_19 = {
	sizeof(struct LTE_RadioResourceConfigDedicated__ext5),
	offsetof(struct LTE_RadioResourceConfigDedicated__ext5, _asn_ctx),
	asn_MAP_LTE_ext5_tag2el_19,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext5_oms_19,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext5_19 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext5_tags_19,
	sizeof(asn_DEF_LTE_ext5_tags_19)
		/sizeof(asn_DEF_LTE_ext5_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_ext5_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_ext5_tags_19)
		/sizeof(asn_DEF_LTE_ext5_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext5_19,
	2,	/* Elements count */
	&asn_SPC_LTE_ext5_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext6_22[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicated__ext6, sps_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-v1430"
		},
};
static const int asn_MAP_LTE_ext6_oms_22[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext6_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext6_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sps-Config-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext6_specs_22 = {
	sizeof(struct LTE_RadioResourceConfigDedicated__ext6),
	offsetof(struct LTE_RadioResourceConfigDedicated__ext6, _asn_ctx),
	asn_MAP_LTE_ext6_tag2el_22,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext6_oms_22,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext6_22 = {
	"ext6",
	"ext6",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext6_tags_22,
	sizeof(asn_DEF_LTE_ext6_tags_22)
		/sizeof(asn_DEF_LTE_ext6_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_ext6_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_ext6_tags_22)
		/sizeof(asn_DEF_LTE_ext6_tags_22[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext6_22,
	1,	/* Elements count */
	&asn_SPC_LTE_ext6_specs_22	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigDedicated_1[] = {
	{ ATF_POINTER, 12, offsetof(struct LTE_RadioResourceConfigDedicated, srb_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SRB_ToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srb-ToAddModList"
		},
	{ ATF_POINTER, 11, offsetof(struct LTE_RadioResourceConfigDedicated, drb_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DRB_ToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ToAddModList"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_RadioResourceConfigDedicated, drb_ToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DRB_ToReleaseList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ToReleaseList"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_RadioResourceConfigDedicated, mac_MainConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_mac_MainConfig_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-MainConfig"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_RadioResourceConfigDedicated, sps_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_RadioResourceConfigDedicated, physicalConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysicalConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalConfigDedicated"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_RadioResourceConfigDedicated, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext1_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_RadioResourceConfigDedicated, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext2_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RadioResourceConfigDedicated, ext3),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LTE_ext3_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RadioResourceConfigDedicated, ext4),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_LTE_ext4_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RadioResourceConfigDedicated, ext5),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_LTE_ext5_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext5"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RadioResourceConfigDedicated, ext6),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_LTE_ext6_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext6"
		},
};
static const int asn_MAP_LTE_RadioResourceConfigDedicated_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_LTE_RadioResourceConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RadioResourceConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-ToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-ToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* drb-ToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mac-MainConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sps-Config */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* physicalConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ext5 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* ext6 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigDedicated_specs_1 = {
	sizeof(struct LTE_RadioResourceConfigDedicated),
	offsetof(struct LTE_RadioResourceConfigDedicated, _asn_ctx),
	asn_MAP_LTE_RadioResourceConfigDedicated_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_LTE_RadioResourceConfigDedicated_oms_1,	/* Optional members */
	6, 6,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigDedicated = {
	"RadioResourceConfigDedicated",
	"RadioResourceConfigDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RadioResourceConfigDedicated_tags_1,
	sizeof(asn_DEF_LTE_RadioResourceConfigDedicated_tags_1)
		/sizeof(asn_DEF_LTE_RadioResourceConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_LTE_RadioResourceConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RadioResourceConfigDedicated_tags_1)
		/sizeof(asn_DEF_LTE_RadioResourceConfigDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RadioResourceConfigDedicated_1,
	12,	/* Elements count */
	&asn_SPC_LTE_RadioResourceConfigDedicated_specs_1	/* Additional specs */
};

