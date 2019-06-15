/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_DRX-Config-v1310.h"

static int
memb_LTE_sf60_v1310_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 59)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_sf60_v1310_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  59 }	/* (0..59) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_longDRX_CycleStartOffset_v1310_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DRX_Config_v1310__longDRX_CycleStartOffset_v1310, sf60_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf60_v1310_constr_3,  memb_LTE_sf60_v1310_constraint_2 },
		0, 0, /* No default value */
		"sf60-v1310"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_longDRX_CycleStartOffset_v1310_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_longDRX_CycleStartOffset_v1310_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sf60-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_longDRX_CycleStartOffset_v1310_specs_2 = {
	sizeof(struct LTE_DRX_Config_v1310__longDRX_CycleStartOffset_v1310),
	offsetof(struct LTE_DRX_Config_v1310__longDRX_CycleStartOffset_v1310, _asn_ctx),
	asn_MAP_LTE_longDRX_CycleStartOffset_v1310_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_longDRX_CycleStartOffset_v1310_2 = {
	"longDRX-CycleStartOffset-v1310",
	"longDRX-CycleStartOffset-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_longDRX_CycleStartOffset_v1310_tags_2,
	sizeof(asn_DEF_LTE_longDRX_CycleStartOffset_v1310_tags_2)
		/sizeof(asn_DEF_LTE_longDRX_CycleStartOffset_v1310_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_longDRX_CycleStartOffset_v1310_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_longDRX_CycleStartOffset_v1310_tags_2)
		/sizeof(asn_DEF_LTE_longDRX_CycleStartOffset_v1310_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_longDRX_CycleStartOffset_v1310_2,
	1,	/* Elements count */
	&asn_SPC_LTE_longDRX_CycleStartOffset_v1310_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_DRX_Config_v1310_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_DRX_Config_v1310, longDRX_CycleStartOffset_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_longDRX_CycleStartOffset_v1310_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"longDRX-CycleStartOffset-v1310"
		},
};
static const int asn_MAP_LTE_DRX_Config_v1310_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_DRX_Config_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_DRX_Config_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* longDRX-CycleStartOffset-v1310 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_DRX_Config_v1310_specs_1 = {
	sizeof(struct LTE_DRX_Config_v1310),
	offsetof(struct LTE_DRX_Config_v1310, _asn_ctx),
	asn_MAP_LTE_DRX_Config_v1310_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_DRX_Config_v1310_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_DRX_Config_v1310 = {
	"DRX-Config-v1310",
	"DRX-Config-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_DRX_Config_v1310_tags_1,
	sizeof(asn_DEF_LTE_DRX_Config_v1310_tags_1)
		/sizeof(asn_DEF_LTE_DRX_Config_v1310_tags_1[0]), /* 1 */
	asn_DEF_LTE_DRX_Config_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_DRX_Config_v1310_tags_1)
		/sizeof(asn_DEF_LTE_DRX_Config_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_DRX_Config_v1310_1,
	1,	/* Elements count */
	&asn_SPC_LTE_DRX_Config_v1310_specs_1	/* Additional specs */
};

