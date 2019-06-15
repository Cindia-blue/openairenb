/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_UE-Capability-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_ue_Category_NB_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_multipleDRB_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_ue_Category_NB_r13_value2enum_3[] = {
	{ 0,	3,	"nb1" }
};
static const unsigned int asn_MAP_LTE_ue_Category_NB_r13_enum2value_3[] = {
	0	/* nb1(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ue_Category_NB_r13_specs_3 = {
	asn_MAP_LTE_ue_Category_NB_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ue_Category_NB_r13_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ue_Category_NB_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ue_Category_NB_r13_3 = {
	"ue-Category-NB-r13",
	"ue-Category-NB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ue_Category_NB_r13_tags_3,
	sizeof(asn_DEF_LTE_ue_Category_NB_r13_tags_3)
		/sizeof(asn_DEF_LTE_ue_Category_NB_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_ue_Category_NB_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_ue_Category_NB_r13_tags_3)
		/sizeof(asn_DEF_LTE_ue_Category_NB_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ue_Category_NB_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ue_Category_NB_r13_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_multipleDRB_r13_value2enum_5[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_multipleDRB_r13_enum2value_5[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_multipleDRB_r13_specs_5 = {
	asn_MAP_LTE_multipleDRB_r13_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_multipleDRB_r13_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_multipleDRB_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_multipleDRB_r13_5 = {
	"multipleDRB-r13",
	"multipleDRB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_multipleDRB_r13_tags_5,
	sizeof(asn_DEF_LTE_multipleDRB_r13_tags_5)
		/sizeof(asn_DEF_LTE_multipleDRB_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_multipleDRB_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_multipleDRB_r13_tags_5)
		/sizeof(asn_DEF_LTE_multipleDRB_r13_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_multipleDRB_r13_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_multipleDRB_r13_specs_5	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_dummy_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_dummy_specs_10 = {
	sizeof(struct LTE_UE_Capability_NB_r13__dummy),
	offsetof(struct LTE_UE_Capability_NB_r13__dummy, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dummy_10 = {
	"dummy",
	"dummy",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_dummy_tags_10,
	sizeof(asn_DEF_LTE_dummy_tags_10)
		/sizeof(asn_DEF_LTE_dummy_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_dummy_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_dummy_tags_10)
		/sizeof(asn_DEF_LTE_dummy_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_dummy_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UE_Capability_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_Capability_NB_r13, accessStratumRelease_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AccessStratumRelease_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"accessStratumRelease-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_Capability_NB_r13, ue_Category_NB_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ue_Category_NB_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Category-NB-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_Capability_NB_r13, multipleDRB_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_multipleDRB_r13_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multipleDRB-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_Capability_NB_r13, pdcp_Parameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCP_Parameters_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Parameters-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_Capability_NB_r13, phyLayerParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhyLayerParameters_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_Capability_NB_r13, rf_Parameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RF_Parameters_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_Capability_NB_r13, dummy),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_dummy_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
};
static const int asn_MAP_LTE_UE_Capability_NB_r13_oms_1[] = { 1, 2, 3, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_Capability_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_Capability_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accessStratumRelease-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-Category-NB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* multipleDRB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pdcp-Parameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* phyLayerParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rf-Parameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* dummy */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_Capability_NB_r13_specs_1 = {
	sizeof(struct LTE_UE_Capability_NB_r13),
	offsetof(struct LTE_UE_Capability_NB_r13, _asn_ctx),
	asn_MAP_LTE_UE_Capability_NB_r13_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_UE_Capability_NB_r13_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_Capability_NB_r13 = {
	"UE-Capability-NB-r13",
	"UE-Capability-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_Capability_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_UE_Capability_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_UE_Capability_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_Capability_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_Capability_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_UE_Capability_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_Capability_NB_r13_1,
	7,	/* Elements count */
	&asn_SPC_LTE_UE_Capability_NB_r13_specs_1	/* Additional specs */
};

