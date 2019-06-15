/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformationBlockType10.h"

static int
memb_LTE_messageIdentifier_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
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
memb_LTE_serialNumber_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
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
memb_LTE_warningType_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 2)) {
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
memb_LTE_dummy_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 50)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_messageIdentifier_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_serialNumber_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_warningType_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_dummy_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  50,  50 }	/* (SIZE(50..50)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType10, messageIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_messageIdentifier_constr_2,  memb_LTE_messageIdentifier_constraint_1 },
		0, 0, /* No default value */
		"messageIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType10, serialNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_serialNumber_constr_3,  memb_LTE_serialNumber_constraint_1 },
		0, 0, /* No default value */
		"serialNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType10, warningType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_warningType_constr_4,  memb_LTE_warningType_constraint_1 },
		0, 0, /* No default value */
		"warningType"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType10, dummy),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_dummy_constr_5,  memb_LTE_dummy_constraint_1 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType10, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType10_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* messageIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* serialNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* warningType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType10_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType10),
	offsetof(struct LTE_SystemInformationBlockType10, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType10_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType10_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType10 = {
	"SystemInformationBlockType10",
	"SystemInformationBlockType10",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType10_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType10_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType10_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType10_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType10_1,
	5,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType10_specs_1	/* Additional specs */
};

