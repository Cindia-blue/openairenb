/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_ULHandoverPreparationTransfer-r8-IEs.h"

static int
memb_LTE_meid_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 56)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_meid_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  56,  56 }	/* (SIZE(56..56)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_ULHandoverPreparationTransfer_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_ULHandoverPreparationTransfer_r8_IEs, cdma2000_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CDMA2000_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdma2000-Type"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_ULHandoverPreparationTransfer_r8_IEs, meid),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_meid_constr_3,  memb_LTE_meid_constraint_1 },
		0, 0, /* No default value */
		"meid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_ULHandoverPreparationTransfer_r8_IEs, dedicatedInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DedicatedInfoCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_ULHandoverPreparationTransfer_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ULHandoverPreparationTransfer_v8a0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_ULHandoverPreparationTransfer_r8_IEs_oms_1[] = { 1, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_ULHandoverPreparationTransfer_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ULHandoverPreparationTransfer_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cdma2000-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* meid */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dedicatedInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_ULHandoverPreparationTransfer_r8_IEs_specs_1 = {
	sizeof(struct LTE_ULHandoverPreparationTransfer_r8_IEs),
	offsetof(struct LTE_ULHandoverPreparationTransfer_r8_IEs, _asn_ctx),
	asn_MAP_LTE_ULHandoverPreparationTransfer_r8_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_ULHandoverPreparationTransfer_r8_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_ULHandoverPreparationTransfer_r8_IEs = {
	"ULHandoverPreparationTransfer-r8-IEs",
	"ULHandoverPreparationTransfer-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ULHandoverPreparationTransfer_r8_IEs_tags_1,
	sizeof(asn_DEF_LTE_ULHandoverPreparationTransfer_r8_IEs_tags_1)
		/sizeof(asn_DEF_LTE_ULHandoverPreparationTransfer_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_ULHandoverPreparationTransfer_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_ULHandoverPreparationTransfer_r8_IEs_tags_1)
		/sizeof(asn_DEF_LTE_ULHandoverPreparationTransfer_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ULHandoverPreparationTransfer_r8_IEs_1,
	4,	/* Elements count */
	&asn_SPC_LTE_ULHandoverPreparationTransfer_r8_IEs_specs_1	/* Additional specs */
};

