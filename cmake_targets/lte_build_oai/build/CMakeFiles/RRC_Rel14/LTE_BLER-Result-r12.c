/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_BLER-Result-r12.h"

static int
memb_LTE_n_r12_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 3)) {
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
memb_LTE_m_r12_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_n_r12_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_m_r12_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_blocksReceived_r12_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BLER_Result_r12__blocksReceived_r12, n_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_n_r12_constr_4,  memb_LTE_n_r12_constraint_3 },
		0, 0, /* No default value */
		"n-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BLER_Result_r12__blocksReceived_r12, m_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_m_r12_constr_5,  memb_LTE_m_r12_constraint_3 },
		0, 0, /* No default value */
		"m-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_blocksReceived_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_blocksReceived_r12_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* m-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_blocksReceived_r12_specs_3 = {
	sizeof(struct LTE_BLER_Result_r12__blocksReceived_r12),
	offsetof(struct LTE_BLER_Result_r12__blocksReceived_r12, _asn_ctx),
	asn_MAP_LTE_blocksReceived_r12_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_blocksReceived_r12_3 = {
	"blocksReceived-r12",
	"blocksReceived-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_blocksReceived_r12_tags_3,
	sizeof(asn_DEF_LTE_blocksReceived_r12_tags_3)
		/sizeof(asn_DEF_LTE_blocksReceived_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_blocksReceived_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_blocksReceived_r12_tags_3)
		/sizeof(asn_DEF_LTE_blocksReceived_r12_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_blocksReceived_r12_3,
	2,	/* Elements count */
	&asn_SPC_LTE_blocksReceived_r12_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BLER_Result_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BLER_Result_r12, bler_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_BLER_Range_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bler-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BLER_Result_r12, blocksReceived_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_blocksReceived_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"blocksReceived-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_BLER_Result_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BLER_Result_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bler-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* blocksReceived-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BLER_Result_r12_specs_1 = {
	sizeof(struct LTE_BLER_Result_r12),
	offsetof(struct LTE_BLER_Result_r12, _asn_ctx),
	asn_MAP_LTE_BLER_Result_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BLER_Result_r12 = {
	"BLER-Result-r12",
	"BLER-Result-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BLER_Result_r12_tags_1,
	sizeof(asn_DEF_LTE_BLER_Result_r12_tags_1)
		/sizeof(asn_DEF_LTE_BLER_Result_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_BLER_Result_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BLER_Result_r12_tags_1)
		/sizeof(asn_DEF_LTE_BLER_Result_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_BLER_Result_r12_1,
	2,	/* Elements count */
	&asn_SPC_LTE_BLER_Result_r12_specs_1	/* Additional specs */
};

