/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_AntennaInfoCommon.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_antennaPortsCount_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_antennaPortsCount_value2enum_2[] = {
	{ 0,	3,	"an1" },
	{ 1,	3,	"an2" },
	{ 2,	3,	"an4" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_antennaPortsCount_enum2value_2[] = {
	0,	/* an1(0) */
	1,	/* an2(1) */
	2,	/* an4(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_antennaPortsCount_specs_2 = {
	asn_MAP_LTE_antennaPortsCount_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_antennaPortsCount_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_antennaPortsCount_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_antennaPortsCount_2 = {
	"antennaPortsCount",
	"antennaPortsCount",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_antennaPortsCount_tags_2,
	sizeof(asn_DEF_LTE_antennaPortsCount_tags_2)
		/sizeof(asn_DEF_LTE_antennaPortsCount_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_antennaPortsCount_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_antennaPortsCount_tags_2)
		/sizeof(asn_DEF_LTE_antennaPortsCount_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_antennaPortsCount_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_antennaPortsCount_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_AntennaInfoCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_AntennaInfoCommon, antennaPortsCount),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_antennaPortsCount_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaPortsCount"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_AntennaInfoCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_AntennaInfoCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* antennaPortsCount */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_AntennaInfoCommon_specs_1 = {
	sizeof(struct LTE_AntennaInfoCommon),
	offsetof(struct LTE_AntennaInfoCommon, _asn_ctx),
	asn_MAP_LTE_AntennaInfoCommon_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_AntennaInfoCommon = {
	"AntennaInfoCommon",
	"AntennaInfoCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_AntennaInfoCommon_tags_1,
	sizeof(asn_DEF_LTE_AntennaInfoCommon_tags_1)
		/sizeof(asn_DEF_LTE_AntennaInfoCommon_tags_1[0]), /* 1 */
	asn_DEF_LTE_AntennaInfoCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_AntennaInfoCommon_tags_1)
		/sizeof(asn_DEF_LTE_AntennaInfoCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_AntennaInfoCommon_1,
	1,	/* Elements count */
	&asn_SPC_LTE_AntennaInfoCommon_specs_1	/* Additional specs */
};

