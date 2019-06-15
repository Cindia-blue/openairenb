/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PUSCH-ConfigDedicated-v1130.h"

static int
memb_LTE_nPUSCH_Identity_r11_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 509)) {
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
memb_LTE_nDMRS_CSH_Identity_r11_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 509)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_nPUSCH_Identity_r11_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  509 }	/* (0..509) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_nDMRS_CSH_Identity_r11_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  509 }	/* (0..509) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pusch_DMRS_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11__setup, nPUSCH_Identity_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_nPUSCH_Identity_r11_constr_5,  memb_LTE_nPUSCH_Identity_r11_constraint_4 },
		0, 0, /* No default value */
		"nPUSCH-Identity-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11__setup, nDMRS_CSH_Identity_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_nDMRS_CSH_Identity_r11_constr_6,  memb_LTE_nDMRS_CSH_Identity_r11_constraint_4 },
		0, 0, /* No default value */
		"nDMRS-CSH-Identity-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nPUSCH-Identity-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nDMRS-CSH-Identity-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_4 = {
	sizeof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11__setup),
	offsetof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_4 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_4,
	sizeof(asn_DEF_LTE_setup_tags_4)
		/sizeof(asn_DEF_LTE_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_4)
		/sizeof(asn_DEF_LTE_setup_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_4,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_pusch_DMRS_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_pusch_DMRS_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_pusch_DMRS_r11_specs_2 = {
	sizeof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11),
	offsetof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11, _asn_ctx),
	offsetof(struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11, present),
	sizeof(((struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11 *)0)->present),
	asn_MAP_LTE_pusch_DMRS_r11_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pusch_DMRS_r11_2 = {
	"pusch-DMRS-r11",
	"pusch-DMRS-r11",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_pusch_DMRS_r11_constr_2, CHOICE_constraint },
	asn_MBR_LTE_pusch_DMRS_r11_2,
	2,	/* Elements count */
	&asn_SPC_LTE_pusch_DMRS_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUSCH_ConfigDedicated_v1130_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicated_v1130, pusch_DMRS_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_pusch_DMRS_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-DMRS-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PUSCH_ConfigDedicated_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUSCH_ConfigDedicated_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pusch-DMRS-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PUSCH_ConfigDedicated_v1130_specs_1 = {
	sizeof(struct LTE_PUSCH_ConfigDedicated_v1130),
	offsetof(struct LTE_PUSCH_ConfigDedicated_v1130, _asn_ctx),
	asn_MAP_LTE_PUSCH_ConfigDedicated_v1130_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_ConfigDedicated_v1130 = {
	"PUSCH-ConfigDedicated-v1130",
	"PUSCH-ConfigDedicated-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PUSCH_ConfigDedicated_v1130_tags_1,
	sizeof(asn_DEF_LTE_PUSCH_ConfigDedicated_v1130_tags_1)
		/sizeof(asn_DEF_LTE_PUSCH_ConfigDedicated_v1130_tags_1[0]), /* 1 */
	asn_DEF_LTE_PUSCH_ConfigDedicated_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PUSCH_ConfigDedicated_v1130_tags_1)
		/sizeof(asn_DEF_LTE_PUSCH_ConfigDedicated_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PUSCH_ConfigDedicated_v1130_1,
	1,	/* Elements count */
	&asn_SPC_LTE_PUSCH_ConfigDedicated_v1130_specs_1	/* Additional specs */
};

