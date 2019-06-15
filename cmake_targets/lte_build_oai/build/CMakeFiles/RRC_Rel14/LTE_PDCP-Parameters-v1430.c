/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PDCP-Parameters-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_maxNumberROHC_ContextSessions_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_supportedUplinkOnlyROHC_Profiles_r14_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_v1430__supportedUplinkOnlyROHC_Profiles_r14, profile0x0006_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0006-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_supportedUplinkOnlyROHC_Profiles_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* profile0x0006-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_supportedUplinkOnlyROHC_Profiles_r14_specs_2 = {
	sizeof(struct LTE_PDCP_Parameters_v1430__supportedUplinkOnlyROHC_Profiles_r14),
	offsetof(struct LTE_PDCP_Parameters_v1430__supportedUplinkOnlyROHC_Profiles_r14, _asn_ctx),
	asn_MAP_LTE_supportedUplinkOnlyROHC_Profiles_r14_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_2 = {
	"supportedUplinkOnlyROHC-Profiles-r14",
	"supportedUplinkOnlyROHC-Profiles-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_tags_2,
	sizeof(asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_tags_2)
		/sizeof(asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_tags_2)
		/sizeof(asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_supportedUplinkOnlyROHC_Profiles_r14_2,
	1,	/* Elements count */
	&asn_SPC_LTE_supportedUplinkOnlyROHC_Profiles_r14_specs_2	/* Additional specs */
};

static int asn_DFL_4_cmp_4(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_4_set_4(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
static const asn_INTEGER_enum_map_t asn_MAP_LTE_maxNumberROHC_ContextSessions_r14_value2enum_4[] = {
	{ 0,	3,	"cs2" },
	{ 1,	3,	"cs4" },
	{ 2,	3,	"cs8" },
	{ 3,	4,	"cs12" },
	{ 4,	4,	"cs16" },
	{ 5,	4,	"cs24" },
	{ 6,	4,	"cs32" },
	{ 7,	4,	"cs48" },
	{ 8,	4,	"cs64" },
	{ 9,	5,	"cs128" },
	{ 10,	5,	"cs256" },
	{ 11,	5,	"cs512" },
	{ 12,	6,	"cs1024" },
	{ 13,	7,	"cs16384" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_maxNumberROHC_ContextSessions_r14_enum2value_4[] = {
	12,	/* cs1024(12) */
	3,	/* cs12(3) */
	9,	/* cs128(9) */
	4,	/* cs16(4) */
	13,	/* cs16384(13) */
	0,	/* cs2(0) */
	5,	/* cs24(5) */
	10,	/* cs256(10) */
	6,	/* cs32(6) */
	1,	/* cs4(1) */
	7,	/* cs48(7) */
	11,	/* cs512(11) */
	8,	/* cs64(8) */
	2,	/* cs8(2) */
	15,	/* spare1(15) */
	14	/* spare2(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_maxNumberROHC_ContextSessions_r14_specs_4 = {
	asn_MAP_LTE_maxNumberROHC_ContextSessions_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_maxNumberROHC_ContextSessions_r14_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_4 = {
	"maxNumberROHC-ContextSessions-r14",
	"maxNumberROHC-ContextSessions-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_tags_4,
	sizeof(asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_tags_4)
		/sizeof(asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_tags_4)
		/sizeof(asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_maxNumberROHC_ContextSessions_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_maxNumberROHC_ContextSessions_r14_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PDCP_Parameters_v1430_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_v1430, supportedUplinkOnlyROHC_Profiles_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_supportedUplinkOnlyROHC_Profiles_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedUplinkOnlyROHC-Profiles-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PDCP_Parameters_v1430, maxNumberROHC_ContextSessions_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_maxNumberROHC_ContextSessions_r14_4,
		0,
		{ 0, 0, 0 },
		&asn_DFL_4_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_4_set_4,	/* Set DEFAULT 4 */
		"maxNumberROHC-ContextSessions-r14"
		},
};
static const int asn_MAP_LTE_PDCP_Parameters_v1430_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_PDCP_Parameters_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PDCP_Parameters_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedUplinkOnlyROHC-Profiles-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxNumberROHC-ContextSessions-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PDCP_Parameters_v1430_specs_1 = {
	sizeof(struct LTE_PDCP_Parameters_v1430),
	offsetof(struct LTE_PDCP_Parameters_v1430, _asn_ctx),
	asn_MAP_LTE_PDCP_Parameters_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_PDCP_Parameters_v1430_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PDCP_Parameters_v1430 = {
	"PDCP-Parameters-v1430",
	"PDCP-Parameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PDCP_Parameters_v1430_tags_1,
	sizeof(asn_DEF_LTE_PDCP_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_LTE_PDCP_Parameters_v1430_tags_1[0]), /* 1 */
	asn_DEF_LTE_PDCP_Parameters_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PDCP_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_LTE_PDCP_Parameters_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PDCP_Parameters_v1430_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PDCP_Parameters_v1430_specs_1	/* Additional specs */
};

