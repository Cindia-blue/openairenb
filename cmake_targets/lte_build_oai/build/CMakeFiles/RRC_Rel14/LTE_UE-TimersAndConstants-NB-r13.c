/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_UE-TimersAndConstants-NB-r13.h"

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
static asn_per_constraints_t asn_PER_type_LTE_t300_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t301_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t310_r13_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_n310_r13_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t311_r13_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_n311_r13_constr_45 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t311_v1350_constr_56 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_t300_r13_value2enum_2[] = {
	{ 0,	6,	"ms2500" },
	{ 1,	6,	"ms4000" },
	{ 2,	6,	"ms6000" },
	{ 3,	7,	"ms10000" },
	{ 4,	7,	"ms15000" },
	{ 5,	7,	"ms25000" },
	{ 6,	7,	"ms40000" },
	{ 7,	7,	"ms60000" }
};
static const unsigned int asn_MAP_LTE_t300_r13_enum2value_2[] = {
	3,	/* ms10000(3) */
	4,	/* ms15000(4) */
	0,	/* ms2500(0) */
	5,	/* ms25000(5) */
	1,	/* ms4000(1) */
	6,	/* ms40000(6) */
	2,	/* ms6000(2) */
	7	/* ms60000(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t300_r13_specs_2 = {
	asn_MAP_LTE_t300_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t300_r13_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t300_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t300_r13_2 = {
	"t300-r13",
	"t300-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t300_r13_tags_2,
	sizeof(asn_DEF_LTE_t300_r13_tags_2)
		/sizeof(asn_DEF_LTE_t300_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_t300_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_t300_r13_tags_2)
		/sizeof(asn_DEF_LTE_t300_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t300_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t300_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t301_r13_value2enum_11[] = {
	{ 0,	6,	"ms2500" },
	{ 1,	6,	"ms4000" },
	{ 2,	6,	"ms6000" },
	{ 3,	7,	"ms10000" },
	{ 4,	7,	"ms15000" },
	{ 5,	7,	"ms25000" },
	{ 6,	7,	"ms40000" },
	{ 7,	7,	"ms60000" }
};
static const unsigned int asn_MAP_LTE_t301_r13_enum2value_11[] = {
	3,	/* ms10000(3) */
	4,	/* ms15000(4) */
	0,	/* ms2500(0) */
	5,	/* ms25000(5) */
	1,	/* ms4000(1) */
	6,	/* ms40000(6) */
	2,	/* ms6000(2) */
	7	/* ms60000(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t301_r13_specs_11 = {
	asn_MAP_LTE_t301_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t301_r13_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t301_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t301_r13_11 = {
	"t301-r13",
	"t301-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t301_r13_tags_11,
	sizeof(asn_DEF_LTE_t301_r13_tags_11)
		/sizeof(asn_DEF_LTE_t301_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_t301_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_t301_r13_tags_11)
		/sizeof(asn_DEF_LTE_t301_r13_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t301_r13_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t301_r13_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t310_r13_value2enum_20[] = {
	{ 0,	3,	"ms0" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms500" },
	{ 3,	6,	"ms1000" },
	{ 4,	6,	"ms2000" },
	{ 5,	6,	"ms4000" },
	{ 6,	6,	"ms8000" }
};
static const unsigned int asn_MAP_LTE_t310_r13_enum2value_20[] = {
	0,	/* ms0(0) */
	3,	/* ms1000(3) */
	1,	/* ms200(1) */
	4,	/* ms2000(4) */
	5,	/* ms4000(5) */
	2,	/* ms500(2) */
	6	/* ms8000(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t310_r13_specs_20 = {
	asn_MAP_LTE_t310_r13_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t310_r13_enum2value_20,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t310_r13_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t310_r13_20 = {
	"t310-r13",
	"t310-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t310_r13_tags_20,
	sizeof(asn_DEF_LTE_t310_r13_tags_20)
		/sizeof(asn_DEF_LTE_t310_r13_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_t310_r13_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_t310_r13_tags_20)
		/sizeof(asn_DEF_LTE_t310_r13_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t310_r13_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t310_r13_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_n310_r13_value2enum_28[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	3,	"n20" }
};
static const unsigned int asn_MAP_LTE_n310_r13_enum2value_28[] = {
	0,	/* n1(0) */
	6,	/* n10(6) */
	1,	/* n2(1) */
	7,	/* n20(7) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n6(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_n310_r13_specs_28 = {
	asn_MAP_LTE_n310_r13_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_n310_r13_enum2value_28,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_n310_r13_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_n310_r13_28 = {
	"n310-r13",
	"n310-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_n310_r13_tags_28,
	sizeof(asn_DEF_LTE_n310_r13_tags_28)
		/sizeof(asn_DEF_LTE_n310_r13_tags_28[0]) - 1, /* 1 */
	asn_DEF_LTE_n310_r13_tags_28,	/* Same as above */
	sizeof(asn_DEF_LTE_n310_r13_tags_28)
		/sizeof(asn_DEF_LTE_n310_r13_tags_28[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_n310_r13_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_n310_r13_specs_28	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t311_r13_value2enum_37[] = {
	{ 0,	6,	"ms1000" },
	{ 1,	6,	"ms3000" },
	{ 2,	6,	"ms5000" },
	{ 3,	7,	"ms10000" },
	{ 4,	7,	"ms15000" },
	{ 5,	7,	"ms20000" },
	{ 6,	7,	"ms30000" }
};
static const unsigned int asn_MAP_LTE_t311_r13_enum2value_37[] = {
	0,	/* ms1000(0) */
	3,	/* ms10000(3) */
	4,	/* ms15000(4) */
	5,	/* ms20000(5) */
	1,	/* ms3000(1) */
	6,	/* ms30000(6) */
	2	/* ms5000(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t311_r13_specs_37 = {
	asn_MAP_LTE_t311_r13_value2enum_37,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t311_r13_enum2value_37,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t311_r13_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t311_r13_37 = {
	"t311-r13",
	"t311-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t311_r13_tags_37,
	sizeof(asn_DEF_LTE_t311_r13_tags_37)
		/sizeof(asn_DEF_LTE_t311_r13_tags_37[0]) - 1, /* 1 */
	asn_DEF_LTE_t311_r13_tags_37,	/* Same as above */
	sizeof(asn_DEF_LTE_t311_r13_tags_37)
		/sizeof(asn_DEF_LTE_t311_r13_tags_37[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t311_r13_constr_37, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t311_r13_specs_37	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_n311_r13_value2enum_45[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n10" }
};
static const unsigned int asn_MAP_LTE_n311_r13_enum2value_45[] = {
	0,	/* n1(0) */
	7,	/* n10(7) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_n311_r13_specs_45 = {
	asn_MAP_LTE_n311_r13_value2enum_45,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_n311_r13_enum2value_45,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_n311_r13_tags_45[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_n311_r13_45 = {
	"n311-r13",
	"n311-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_n311_r13_tags_45,
	sizeof(asn_DEF_LTE_n311_r13_tags_45)
		/sizeof(asn_DEF_LTE_n311_r13_tags_45[0]) - 1, /* 1 */
	asn_DEF_LTE_n311_r13_tags_45,	/* Same as above */
	sizeof(asn_DEF_LTE_n311_r13_tags_45)
		/sizeof(asn_DEF_LTE_n311_r13_tags_45[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_n311_r13_constr_45, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_n311_r13_specs_45	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t311_v1350_value2enum_56[] = {
	{ 0,	7,	"ms40000" },
	{ 1,	7,	"ms60000" },
	{ 2,	7,	"ms90000" },
	{ 3,	8,	"ms120000" }
};
static const unsigned int asn_MAP_LTE_t311_v1350_enum2value_56[] = {
	3,	/* ms120000(3) */
	0,	/* ms40000(0) */
	1,	/* ms60000(1) */
	2	/* ms90000(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t311_v1350_specs_56 = {
	asn_MAP_LTE_t311_v1350_value2enum_56,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t311_v1350_enum2value_56,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t311_v1350_tags_56[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t311_v1350_56 = {
	"t311-v1350",
	"t311-v1350",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t311_v1350_tags_56,
	sizeof(asn_DEF_LTE_t311_v1350_tags_56)
		/sizeof(asn_DEF_LTE_t311_v1350_tags_56[0]) - 1, /* 1 */
	asn_DEF_LTE_t311_v1350_tags_56,	/* Same as above */
	sizeof(asn_DEF_LTE_t311_v1350_tags_56)
		/sizeof(asn_DEF_LTE_t311_v1350_tags_56[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t311_v1350_constr_56, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t311_v1350_specs_56	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_55[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_TimersAndConstants_NB_r13__ext1, t311_v1350),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t311_v1350_56,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t311-v1350"
		},
};
static const int asn_MAP_LTE_ext1_oms_55[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_55[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_55[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* t311-v1350 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_55 = {
	sizeof(struct LTE_UE_TimersAndConstants_NB_r13__ext1),
	offsetof(struct LTE_UE_TimersAndConstants_NB_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_55,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_55,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_55 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_55,
	sizeof(asn_DEF_LTE_ext1_tags_55)
		/sizeof(asn_DEF_LTE_ext1_tags_55[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_55,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_55)
		/sizeof(asn_DEF_LTE_ext1_tags_55[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_55,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_55	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UE_TimersAndConstants_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants_NB_r13, t300_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t300_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t300-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants_NB_r13, t301_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t301_r13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t301-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants_NB_r13, t310_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t310_r13_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t310-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants_NB_r13, n310_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_n310_r13_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n310-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants_NB_r13, t311_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t311_r13_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t311-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_TimersAndConstants_NB_r13, n311_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_n311_r13_45,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n311-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_TimersAndConstants_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext1_55,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_UE_TimersAndConstants_NB_r13_oms_1[] = { 6 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_TimersAndConstants_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_TimersAndConstants_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t300-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t301-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t310-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* n310-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t311-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n311-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_TimersAndConstants_NB_r13_specs_1 = {
	sizeof(struct LTE_UE_TimersAndConstants_NB_r13),
	offsetof(struct LTE_UE_TimersAndConstants_NB_r13, _asn_ctx),
	asn_MAP_LTE_UE_TimersAndConstants_NB_r13_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_UE_TimersAndConstants_NB_r13_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_TimersAndConstants_NB_r13 = {
	"UE-TimersAndConstants-NB-r13",
	"UE-TimersAndConstants-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_TimersAndConstants_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_UE_TimersAndConstants_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_UE_TimersAndConstants_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_TimersAndConstants_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_TimersAndConstants_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_UE_TimersAndConstants_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_TimersAndConstants_NB_r13_1,
	7,	/* Elements count */
	&asn_SPC_LTE_UE_TimersAndConstants_NB_r13_specs_1	/* Additional specs */
};

