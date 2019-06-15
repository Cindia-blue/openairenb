/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RRCConnectionReject-NB-r13-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_extendedWaitTime_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 1800)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_rrc_SuspendIndication_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_extendedWaitTime_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  1,  1800 }	/* (1..1800) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_rrc_SuspendIndication_r13_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_rrc_SuspendIndication_r13_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rrc_SuspendIndication_r13_specs_3 = {
	asn_MAP_LTE_rrc_SuspendIndication_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rrc_SuspendIndication_r13_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rrc_SuspendIndication_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rrc_SuspendIndication_r13_3 = {
	"rrc-SuspendIndication-r13",
	"rrc-SuspendIndication-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rrc_SuspendIndication_r13_tags_3,
	sizeof(asn_DEF_LTE_rrc_SuspendIndication_r13_tags_3)
		/sizeof(asn_DEF_LTE_rrc_SuspendIndication_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_rrc_SuspendIndication_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_rrc_SuspendIndication_r13_tags_3)
		/sizeof(asn_DEF_LTE_rrc_SuspendIndication_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_rrc_SuspendIndication_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rrc_SuspendIndication_r13_specs_3	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_6 = {
	sizeof(struct LTE_RRCConnectionReject_NB_r13_IEs__nonCriticalExtension),
	offsetof(struct LTE_RRCConnectionReject_NB_r13_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_6 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_6,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReject_NB_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReject_NB_r13_IEs, extendedWaitTime_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_extendedWaitTime_r13_constr_2,  memb_LTE_extendedWaitTime_r13_constraint_1 },
		0, 0, /* No default value */
		"extendedWaitTime-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionReject_NB_r13_IEs, rrc_SuspendIndication_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rrc_SuspendIndication_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrc-SuspendIndication-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionReject_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionReject_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionReject_NB_r13_IEs_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionReject_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionReject_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* extendedWaitTime-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrc-SuspendIndication-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReject_NB_r13_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionReject_NB_r13_IEs),
	offsetof(struct LTE_RRCConnectionReject_NB_r13_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionReject_NB_r13_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionReject_NB_r13_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReject_NB_r13_IEs = {
	"RRCConnectionReject-NB-r13-IEs",
	"RRCConnectionReject-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionReject_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionReject_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReject_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionReject_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionReject_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReject_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionReject_NB_r13_IEs_1,
	4,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionReject_NB_r13_IEs_specs_1	/* Additional specs */
};

