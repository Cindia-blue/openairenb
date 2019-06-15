/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SIB-Type-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_SIB_Type_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_SIB_Type_NB_r13_value2enum_1[] = {
	{ 0,	15,	"sibType3-NB-r13" },
	{ 1,	15,	"sibType4-NB-r13" },
	{ 2,	15,	"sibType5-NB-r13" },
	{ 3,	16,	"sibType14-NB-r13" },
	{ 4,	16,	"sibType16-NB-r13" },
	{ 5,	16,	"sibType15-NB-r14" },
	{ 6,	16,	"sibType20-NB-r14" },
	{ 7,	16,	"sibType22-NB-r14" }
};
static const unsigned int asn_MAP_LTE_SIB_Type_NB_r13_enum2value_1[] = {
	3,	/* sibType14-NB-r13(3) */
	5,	/* sibType15-NB-r14(5) */
	4,	/* sibType16-NB-r13(4) */
	6,	/* sibType20-NB-r14(6) */
	7,	/* sibType22-NB-r14(7) */
	0,	/* sibType3-NB-r13(0) */
	1,	/* sibType4-NB-r13(1) */
	2	/* sibType5-NB-r13(2) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_SIB_Type_NB_r13_specs_1 = {
	asn_MAP_LTE_SIB_Type_NB_r13_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_SIB_Type_NB_r13_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_SIB_Type_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SIB_Type_NB_r13 = {
	"SIB-Type-NB-r13",
	"SIB-Type-NB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_SIB_Type_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_SIB_Type_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SIB_Type_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SIB_Type_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SIB_Type_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SIB_Type_NB_r13_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_SIB_Type_NB_r13_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_SIB_Type_NB_r13_specs_1	/* Additional specs */
};

