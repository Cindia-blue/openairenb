/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_VarMeasConfig.h"

static int
memb_LTE_s_Measure_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -140 && value <= -44)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_speedStatePars_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_s_Measure_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -140, -44 }	/* (-140..-44) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_setup_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_VarMeasConfig__speedStatePars__setup, mobilityStateParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MobilityStateParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityStateParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_VarMeasConfig__speedStatePars__setup, timeToTrigger_SF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger-SF"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mobilityStateParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timeToTrigger-SF */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_15 = {
	sizeof(struct LTE_VarMeasConfig__speedStatePars__setup),
	offsetof(struct LTE_VarMeasConfig__speedStatePars__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_15 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_15,
	sizeof(asn_DEF_LTE_setup_tags_15)
		/sizeof(asn_DEF_LTE_setup_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_15)
		/sizeof(asn_DEF_LTE_setup_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_15,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_speedStatePars_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_VarMeasConfig__speedStatePars, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_VarMeasConfig__speedStatePars, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_speedStatePars_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_speedStatePars_specs_13 = {
	sizeof(struct LTE_VarMeasConfig__speedStatePars),
	offsetof(struct LTE_VarMeasConfig__speedStatePars, _asn_ctx),
	offsetof(struct LTE_VarMeasConfig__speedStatePars, present),
	sizeof(((struct LTE_VarMeasConfig__speedStatePars *)0)->present),
	asn_MAP_LTE_speedStatePars_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_speedStatePars_13 = {
	"speedStatePars",
	"speedStatePars",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_speedStatePars_constr_13, CHOICE_constraint },
	asn_MBR_LTE_speedStatePars_13,
	2,	/* Elements count */
	&asn_SPC_LTE_speedStatePars_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_VarMeasConfig_1[] = {
	{ ATF_POINTER, 13, offsetof(struct LTE_VarMeasConfig, measIdList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdList"
		},
	{ ATF_POINTER, 12, offsetof(struct LTE_VarMeasConfig, measIdListExt_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToAddModListExt_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdListExt-r12"
		},
	{ ATF_POINTER, 11, offsetof(struct LTE_VarMeasConfig, measIdList_v1310),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToAddModList_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdList-v1310"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_VarMeasConfig, measIdListExt_v1310),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdToAddModListExt_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdListExt-v1310"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_VarMeasConfig, measObjectList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectList"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_VarMeasConfig, measObjectListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectToAddModListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectListExt-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_VarMeasConfig, measObjectList_v9i0),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectToAddModList_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectList-v9i0"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_VarMeasConfig, reportConfigList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReportConfigToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportConfigList"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_VarMeasConfig, quantityConfig),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_QuantityConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfig"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_VarMeasConfig, measScaleFactor_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasScaleFactor_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measScaleFactor-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_VarMeasConfig, s_Measure),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_s_Measure_constr_12,  memb_LTE_s_Measure_constraint_1 },
		0, 0, /* No default value */
		"s-Measure"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_VarMeasConfig, speedStatePars),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_speedStatePars_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedStatePars"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_VarMeasConfig, allowInterruptions_r11),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowInterruptions-r11"
		},
};
static const int asn_MAP_LTE_VarMeasConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_LTE_VarMeasConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_VarMeasConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measIdList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measIdListExt-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measIdList-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measIdListExt-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measObjectList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measObjectListExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measObjectList-v9i0 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* reportConfigList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* quantityConfig */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* measScaleFactor-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* s-Measure */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* speedStatePars */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* allowInterruptions-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_VarMeasConfig_specs_1 = {
	sizeof(struct LTE_VarMeasConfig),
	offsetof(struct LTE_VarMeasConfig, _asn_ctx),
	asn_MAP_LTE_VarMeasConfig_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_LTE_VarMeasConfig_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_VarMeasConfig = {
	"VarMeasConfig",
	"VarMeasConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_VarMeasConfig_tags_1,
	sizeof(asn_DEF_LTE_VarMeasConfig_tags_1)
		/sizeof(asn_DEF_LTE_VarMeasConfig_tags_1[0]), /* 1 */
	asn_DEF_LTE_VarMeasConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_VarMeasConfig_tags_1)
		/sizeof(asn_DEF_LTE_VarMeasConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_VarMeasConfig_1,
	13,	/* Elements count */
	&asn_SPC_LTE_VarMeasConfig_specs_1	/* Additional specs */
};

