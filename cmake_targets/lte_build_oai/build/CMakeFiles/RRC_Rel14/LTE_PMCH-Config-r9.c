/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PMCH-Config-r9.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_sf_AllocEnd_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_dataMCS_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 28)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_mch_SchedulingPeriod_r9_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf_AllocEnd_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1535 }	/* (0..1535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_dataMCS_r9_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  28 }	/* (0..28) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_mch_SchedulingPeriod_r9_value2enum_4[] = {
	{ 0,	3,	"rf8" },
	{ 1,	4,	"rf16" },
	{ 2,	4,	"rf32" },
	{ 3,	4,	"rf64" },
	{ 4,	5,	"rf128" },
	{ 5,	5,	"rf256" },
	{ 6,	5,	"rf512" },
	{ 7,	6,	"rf1024" }
};
static const unsigned int asn_MAP_LTE_mch_SchedulingPeriod_r9_enum2value_4[] = {
	7,	/* rf1024(7) */
	4,	/* rf128(4) */
	1,	/* rf16(1) */
	5,	/* rf256(5) */
	2,	/* rf32(2) */
	6,	/* rf512(6) */
	3,	/* rf64(3) */
	0	/* rf8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mch_SchedulingPeriod_r9_specs_4 = {
	asn_MAP_LTE_mch_SchedulingPeriod_r9_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mch_SchedulingPeriod_r9_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mch_SchedulingPeriod_r9_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mch_SchedulingPeriod_r9_4 = {
	"mch-SchedulingPeriod-r9",
	"mch-SchedulingPeriod-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mch_SchedulingPeriod_r9_tags_4,
	sizeof(asn_DEF_LTE_mch_SchedulingPeriod_r9_tags_4)
		/sizeof(asn_DEF_LTE_mch_SchedulingPeriod_r9_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_mch_SchedulingPeriod_r9_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_mch_SchedulingPeriod_r9_tags_4)
		/sizeof(asn_DEF_LTE_mch_SchedulingPeriod_r9_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mch_SchedulingPeriod_r9_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mch_SchedulingPeriod_r9_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PMCH_Config_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PMCH_Config_r9, sf_AllocEnd_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf_AllocEnd_r9_constr_2,  memb_LTE_sf_AllocEnd_r9_constraint_1 },
		0, 0, /* No default value */
		"sf-AllocEnd-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PMCH_Config_r9, dataMCS_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_dataMCS_r9_constr_3,  memb_LTE_dataMCS_r9_constraint_1 },
		0, 0, /* No default value */
		"dataMCS-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PMCH_Config_r9, mch_SchedulingPeriod_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mch_SchedulingPeriod_r9_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mch-SchedulingPeriod-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PMCH_Config_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PMCH_Config_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf-AllocEnd-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dataMCS-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mch-SchedulingPeriod-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PMCH_Config_r9_specs_1 = {
	sizeof(struct LTE_PMCH_Config_r9),
	offsetof(struct LTE_PMCH_Config_r9, _asn_ctx),
	asn_MAP_LTE_PMCH_Config_r9_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PMCH_Config_r9 = {
	"PMCH-Config-r9",
	"PMCH-Config-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PMCH_Config_r9_tags_1,
	sizeof(asn_DEF_LTE_PMCH_Config_r9_tags_1)
		/sizeof(asn_DEF_LTE_PMCH_Config_r9_tags_1[0]), /* 1 */
	asn_DEF_LTE_PMCH_Config_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PMCH_Config_r9_tags_1)
		/sizeof(asn_DEF_LTE_PMCH_Config_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PMCH_Config_r9_1,
	3,	/* Elements count */
	&asn_SPC_LTE_PMCH_Config_r9_specs_1	/* Additional specs */
};

