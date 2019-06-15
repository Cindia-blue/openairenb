/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PollPDU.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_PollPDU_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_PollPDU_value2enum_1[] = {
	{ 0,	2,	"p4" },
	{ 1,	2,	"p8" },
	{ 2,	3,	"p16" },
	{ 3,	3,	"p32" },
	{ 4,	3,	"p64" },
	{ 5,	4,	"p128" },
	{ 6,	4,	"p256" },
	{ 7,	9,	"pInfinity" }
};
static const unsigned int asn_MAP_LTE_PollPDU_enum2value_1[] = {
	5,	/* p128(5) */
	2,	/* p16(2) */
	6,	/* p256(6) */
	3,	/* p32(3) */
	0,	/* p4(0) */
	4,	/* p64(4) */
	1,	/* p8(1) */
	7	/* pInfinity(7) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_PollPDU_specs_1 = {
	asn_MAP_LTE_PollPDU_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_PollPDU_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_PollPDU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_PollPDU = {
	"PollPDU",
	"PollPDU",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_PollPDU_tags_1,
	sizeof(asn_DEF_LTE_PollPDU_tags_1)
		/sizeof(asn_DEF_LTE_PollPDU_tags_1[0]), /* 1 */
	asn_DEF_LTE_PollPDU_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PollPDU_tags_1)
		/sizeof(asn_DEF_LTE_PollPDU_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_PollPDU_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_PollPDU_specs_1	/* Additional specs */
};

