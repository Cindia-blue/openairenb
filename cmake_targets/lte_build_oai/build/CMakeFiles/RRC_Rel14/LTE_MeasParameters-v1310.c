/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_MeasParameters-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_rs_SINR_Meas_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_whiteCellList_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_extendedMaxObjectId_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ul_PDCP_Delay_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_extendedFreqPriorities_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_multiBandInfoReport_r13_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_rssi_AndChannelOccupancyReporting_r13_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_rs_SINR_Meas_r13_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_rs_SINR_Meas_r13_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rs_SINR_Meas_r13_specs_2 = {
	asn_MAP_LTE_rs_SINR_Meas_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rs_SINR_Meas_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rs_SINR_Meas_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rs_SINR_Meas_r13_2 = {
	"rs-SINR-Meas-r13",
	"rs-SINR-Meas-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rs_SINR_Meas_r13_tags_2,
	sizeof(asn_DEF_LTE_rs_SINR_Meas_r13_tags_2)
		/sizeof(asn_DEF_LTE_rs_SINR_Meas_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_rs_SINR_Meas_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_rs_SINR_Meas_r13_tags_2)
		/sizeof(asn_DEF_LTE_rs_SINR_Meas_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_rs_SINR_Meas_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rs_SINR_Meas_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_whiteCellList_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_whiteCellList_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_whiteCellList_r13_specs_4 = {
	asn_MAP_LTE_whiteCellList_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_whiteCellList_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_whiteCellList_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_whiteCellList_r13_4 = {
	"whiteCellList-r13",
	"whiteCellList-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_whiteCellList_r13_tags_4,
	sizeof(asn_DEF_LTE_whiteCellList_r13_tags_4)
		/sizeof(asn_DEF_LTE_whiteCellList_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_whiteCellList_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_whiteCellList_r13_tags_4)
		/sizeof(asn_DEF_LTE_whiteCellList_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_whiteCellList_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_whiteCellList_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_extendedMaxObjectId_r13_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_extendedMaxObjectId_r13_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_extendedMaxObjectId_r13_specs_6 = {
	asn_MAP_LTE_extendedMaxObjectId_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_extendedMaxObjectId_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_extendedMaxObjectId_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_extendedMaxObjectId_r13_6 = {
	"extendedMaxObjectId-r13",
	"extendedMaxObjectId-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_extendedMaxObjectId_r13_tags_6,
	sizeof(asn_DEF_LTE_extendedMaxObjectId_r13_tags_6)
		/sizeof(asn_DEF_LTE_extendedMaxObjectId_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_extendedMaxObjectId_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_extendedMaxObjectId_r13_tags_6)
		/sizeof(asn_DEF_LTE_extendedMaxObjectId_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_extendedMaxObjectId_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_extendedMaxObjectId_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ul_PDCP_Delay_r13_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_ul_PDCP_Delay_r13_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ul_PDCP_Delay_r13_specs_8 = {
	asn_MAP_LTE_ul_PDCP_Delay_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ul_PDCP_Delay_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ul_PDCP_Delay_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ul_PDCP_Delay_r13_8 = {
	"ul-PDCP-Delay-r13",
	"ul-PDCP-Delay-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ul_PDCP_Delay_r13_tags_8,
	sizeof(asn_DEF_LTE_ul_PDCP_Delay_r13_tags_8)
		/sizeof(asn_DEF_LTE_ul_PDCP_Delay_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_ul_PDCP_Delay_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_ul_PDCP_Delay_r13_tags_8)
		/sizeof(asn_DEF_LTE_ul_PDCP_Delay_r13_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ul_PDCP_Delay_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ul_PDCP_Delay_r13_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_extendedFreqPriorities_r13_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_extendedFreqPriorities_r13_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_extendedFreqPriorities_r13_specs_10 = {
	asn_MAP_LTE_extendedFreqPriorities_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_extendedFreqPriorities_r13_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_extendedFreqPriorities_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_extendedFreqPriorities_r13_10 = {
	"extendedFreqPriorities-r13",
	"extendedFreqPriorities-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_extendedFreqPriorities_r13_tags_10,
	sizeof(asn_DEF_LTE_extendedFreqPriorities_r13_tags_10)
		/sizeof(asn_DEF_LTE_extendedFreqPriorities_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_extendedFreqPriorities_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_extendedFreqPriorities_r13_tags_10)
		/sizeof(asn_DEF_LTE_extendedFreqPriorities_r13_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_extendedFreqPriorities_r13_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_extendedFreqPriorities_r13_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_multiBandInfoReport_r13_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_multiBandInfoReport_r13_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_multiBandInfoReport_r13_specs_12 = {
	asn_MAP_LTE_multiBandInfoReport_r13_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_multiBandInfoReport_r13_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_multiBandInfoReport_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_multiBandInfoReport_r13_12 = {
	"multiBandInfoReport-r13",
	"multiBandInfoReport-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_multiBandInfoReport_r13_tags_12,
	sizeof(asn_DEF_LTE_multiBandInfoReport_r13_tags_12)
		/sizeof(asn_DEF_LTE_multiBandInfoReport_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_multiBandInfoReport_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_multiBandInfoReport_r13_tags_12)
		/sizeof(asn_DEF_LTE_multiBandInfoReport_r13_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_multiBandInfoReport_r13_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_multiBandInfoReport_r13_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_rssi_AndChannelOccupancyReporting_r13_value2enum_14[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_rssi_AndChannelOccupancyReporting_r13_enum2value_14[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rssi_AndChannelOccupancyReporting_r13_specs_14 = {
	asn_MAP_LTE_rssi_AndChannelOccupancyReporting_r13_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rssi_AndChannelOccupancyReporting_r13_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_14 = {
	"rssi-AndChannelOccupancyReporting-r13",
	"rssi-AndChannelOccupancyReporting-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_tags_14,
	sizeof(asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_tags_14)
		/sizeof(asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_tags_14)
		/sizeof(asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_rssi_AndChannelOccupancyReporting_r13_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rssi_AndChannelOccupancyReporting_r13_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MeasParameters_v1310_1[] = {
	{ ATF_POINTER, 7, offsetof(struct LTE_MeasParameters_v1310, rs_SINR_Meas_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rs_SINR_Meas_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-SINR-Meas-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_MeasParameters_v1310, whiteCellList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_whiteCellList_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"whiteCellList-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_MeasParameters_v1310, extendedMaxObjectId_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_extendedMaxObjectId_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extendedMaxObjectId-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_MeasParameters_v1310, ul_PDCP_Delay_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ul_PDCP_Delay_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-PDCP-Delay-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MeasParameters_v1310, extendedFreqPriorities_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_extendedFreqPriorities_r13_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extendedFreqPriorities-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasParameters_v1310, multiBandInfoReport_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_multiBandInfoReport_r13_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoReport-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasParameters_v1310, rssi_AndChannelOccupancyReporting_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rssi_AndChannelOccupancyReporting_r13_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rssi-AndChannelOccupancyReporting-r13"
		},
};
static const int asn_MAP_LTE_MeasParameters_v1310_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_MeasParameters_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasParameters_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rs-SINR-Meas-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* whiteCellList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* extendedMaxObjectId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ul-PDCP-Delay-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* extendedFreqPriorities-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* multiBandInfoReport-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* rssi-AndChannelOccupancyReporting-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasParameters_v1310_specs_1 = {
	sizeof(struct LTE_MeasParameters_v1310),
	offsetof(struct LTE_MeasParameters_v1310, _asn_ctx),
	asn_MAP_LTE_MeasParameters_v1310_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_MeasParameters_v1310_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasParameters_v1310 = {
	"MeasParameters-v1310",
	"MeasParameters-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasParameters_v1310_tags_1,
	sizeof(asn_DEF_LTE_MeasParameters_v1310_tags_1)
		/sizeof(asn_DEF_LTE_MeasParameters_v1310_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasParameters_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasParameters_v1310_tags_1)
		/sizeof(asn_DEF_LTE_MeasParameters_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MeasParameters_v1310_1,
	7,	/* Elements count */
	&asn_SPC_LTE_MeasParameters_v1310_specs_1	/* Additional specs */
};

