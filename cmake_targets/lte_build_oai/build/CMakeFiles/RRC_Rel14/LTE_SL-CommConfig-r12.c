/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-CommConfig-r12.h"

static int
memb_LTE_mcs_r12_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_LTE_mcs_r12_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  28 }	/* (0..28) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_setup_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_commTxResources_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_setup_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_commTxResources_v1310_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_scheduled_r12_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__scheduled_r12, sl_RNTI_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-RNTI-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__scheduled_r12, mac_MainConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MAC_MainConfigSL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-MainConfig-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__scheduled_r12, sc_CommTxConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommResourcePool_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-CommTxConfig-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__scheduled_r12, mcs_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_mcs_r12_constr_9,  memb_LTE_mcs_r12_constraint_5 },
		0, 0, /* No default value */
		"mcs-r12"
		},
};
static const int asn_MAP_LTE_scheduled_r12_oms_5[] = { 3 };
static const ber_tlv_tag_t asn_DEF_LTE_scheduled_r12_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_scheduled_r12_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-RNTI-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mac-MainConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sc-CommTxConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mcs-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_scheduled_r12_specs_5 = {
	sizeof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__scheduled_r12),
	offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__scheduled_r12, _asn_ctx),
	asn_MAP_LTE_scheduled_r12_tag2el_5,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_scheduled_r12_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_scheduled_r12_5 = {
	"scheduled-r12",
	"scheduled-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_scheduled_r12_tags_5,
	sizeof(asn_DEF_LTE_scheduled_r12_tags_5)
		/sizeof(asn_DEF_LTE_scheduled_r12_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_scheduled_r12_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_scheduled_r12_tags_5)
		/sizeof(asn_DEF_LTE_scheduled_r12_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_scheduled_r12_5,
	4,	/* Elements count */
	&asn_SPC_LTE_scheduled_r12_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_commTxPoolNormalDedicated_r12_11[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12__commTxPoolNormalDedicated_r12, poolToReleaseList_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_TxPoolToReleaseList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"poolToReleaseList-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12__commTxPoolNormalDedicated_r12, poolToAddModList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommTxPoolToAddModList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"poolToAddModList-r12"
		},
};
static const int asn_MAP_LTE_commTxPoolNormalDedicated_r12_oms_11[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_commTxPoolNormalDedicated_r12_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_commTxPoolNormalDedicated_r12_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* poolToReleaseList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* poolToAddModList-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_commTxPoolNormalDedicated_r12_specs_11 = {
	sizeof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12__commTxPoolNormalDedicated_r12),
	offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12__commTxPoolNormalDedicated_r12, _asn_ctx),
	asn_MAP_LTE_commTxPoolNormalDedicated_r12_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_commTxPoolNormalDedicated_r12_oms_11,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_commTxPoolNormalDedicated_r12_11 = {
	"commTxPoolNormalDedicated-r12",
	"commTxPoolNormalDedicated-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_commTxPoolNormalDedicated_r12_tags_11,
	sizeof(asn_DEF_LTE_commTxPoolNormalDedicated_r12_tags_11)
		/sizeof(asn_DEF_LTE_commTxPoolNormalDedicated_r12_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_commTxPoolNormalDedicated_r12_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_commTxPoolNormalDedicated_r12_tags_11)
		/sizeof(asn_DEF_LTE_commTxPoolNormalDedicated_r12_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_commTxPoolNormalDedicated_r12_11,
	2,	/* Elements count */
	&asn_SPC_LTE_commTxPoolNormalDedicated_r12_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ue_Selected_r12_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12, commTxPoolNormalDedicated_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_commTxPoolNormalDedicated_r12_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxPoolNormalDedicated-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_ue_Selected_r12_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ue_Selected_r12_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* commTxPoolNormalDedicated-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ue_Selected_r12_specs_10 = {
	sizeof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12),
	offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup__ue_Selected_r12, _asn_ctx),
	asn_MAP_LTE_ue_Selected_r12_tag2el_10,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ue_Selected_r12_10 = {
	"ue-Selected-r12",
	"ue-Selected-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ue_Selected_r12_tags_10,
	sizeof(asn_DEF_LTE_ue_Selected_r12_tags_10)
		/sizeof(asn_DEF_LTE_ue_Selected_r12_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_ue_Selected_r12_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_ue_Selected_r12_tags_10)
		/sizeof(asn_DEF_LTE_ue_Selected_r12_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ue_Selected_r12_10,
	1,	/* Elements count */
	&asn_SPC_LTE_ue_Selected_r12_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup, choice.scheduled_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_scheduled_r12_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scheduled-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup, choice.ue_Selected_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_ue_Selected_r12_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Selected-r12"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scheduled-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-Selected-r12 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_setup_specs_4 = {
	sizeof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup),
	offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup, _asn_ctx),
	offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12__setup, present),
	sizeof(((struct LTE_SL_CommConfig_r12__commTxResources_r12__setup *)0)->present),
	asn_MAP_LTE_setup_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_4 = {
	"setup",
	"setup",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_setup_constr_4, CHOICE_constraint },
	asn_MBR_LTE_setup_4,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_commTxResources_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_commTxResources_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_commTxResources_r12_specs_2 = {
	sizeof(struct LTE_SL_CommConfig_r12__commTxResources_r12),
	offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12, _asn_ctx),
	offsetof(struct LTE_SL_CommConfig_r12__commTxResources_r12, present),
	sizeof(((struct LTE_SL_CommConfig_r12__commTxResources_r12 *)0)->present),
	asn_MAP_LTE_commTxResources_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_commTxResources_r12_2 = {
	"commTxResources-r12",
	"commTxResources-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_commTxResources_r12_constr_2, CHOICE_constraint },
	asn_MBR_LTE_commTxResources_r12_2,
	2,	/* Elements count */
	&asn_SPC_LTE_commTxResources_r12_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_scheduled_v1310_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__scheduled_v1310, logicalChGroupInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_LogicalChGroupInfoList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChGroupInfoList-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__scheduled_v1310, multipleTx_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multipleTx-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_scheduled_v1310_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_scheduled_v1310_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logicalChGroupInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* multipleTx-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_scheduled_v1310_specs_19 = {
	sizeof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__scheduled_v1310),
	offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__scheduled_v1310, _asn_ctx),
	asn_MAP_LTE_scheduled_v1310_tag2el_19,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_scheduled_v1310_19 = {
	"scheduled-v1310",
	"scheduled-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_scheduled_v1310_tags_19,
	sizeof(asn_DEF_LTE_scheduled_v1310_tags_19)
		/sizeof(asn_DEF_LTE_scheduled_v1310_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_scheduled_v1310_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_scheduled_v1310_tags_19)
		/sizeof(asn_DEF_LTE_scheduled_v1310_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_scheduled_v1310_19,
	2,	/* Elements count */
	&asn_SPC_LTE_scheduled_v1310_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_commTxPoolNormalDedicatedExt_r13_23[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310__commTxPoolNormalDedicatedExt_r13, poolToReleaseListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_TxPoolToReleaseListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"poolToReleaseListExt-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310__commTxPoolNormalDedicatedExt_r13, poolToAddModListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommTxPoolToAddModListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"poolToAddModListExt-r13"
		},
};
static const int asn_MAP_LTE_commTxPoolNormalDedicatedExt_r13_oms_23[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_commTxPoolNormalDedicatedExt_r13_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* poolToReleaseListExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* poolToAddModListExt-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_commTxPoolNormalDedicatedExt_r13_specs_23 = {
	sizeof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310__commTxPoolNormalDedicatedExt_r13),
	offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310__commTxPoolNormalDedicatedExt_r13, _asn_ctx),
	asn_MAP_LTE_commTxPoolNormalDedicatedExt_r13_tag2el_23,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_commTxPoolNormalDedicatedExt_r13_oms_23,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_23 = {
	"commTxPoolNormalDedicatedExt-r13",
	"commTxPoolNormalDedicatedExt-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_tags_23,
	sizeof(asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_tags_23)
		/sizeof(asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_tags_23[0]) - 1, /* 1 */
	asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_tags_23,	/* Same as above */
	sizeof(asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_tags_23)
		/sizeof(asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_commTxPoolNormalDedicatedExt_r13_23,
	2,	/* Elements count */
	&asn_SPC_LTE_commTxPoolNormalDedicatedExt_r13_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ue_Selected_v1310_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310, commTxPoolNormalDedicatedExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_commTxPoolNormalDedicatedExt_r13_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxPoolNormalDedicatedExt-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_ue_Selected_v1310_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ue_Selected_v1310_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* commTxPoolNormalDedicatedExt-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ue_Selected_v1310_specs_22 = {
	sizeof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310),
	offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup__ue_Selected_v1310, _asn_ctx),
	asn_MAP_LTE_ue_Selected_v1310_tag2el_22,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ue_Selected_v1310_22 = {
	"ue-Selected-v1310",
	"ue-Selected-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ue_Selected_v1310_tags_22,
	sizeof(asn_DEF_LTE_ue_Selected_v1310_tags_22)
		/sizeof(asn_DEF_LTE_ue_Selected_v1310_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_ue_Selected_v1310_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_ue_Selected_v1310_tags_22)
		/sizeof(asn_DEF_LTE_ue_Selected_v1310_tags_22[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ue_Selected_v1310_22,
	1,	/* Elements count */
	&asn_SPC_LTE_ue_Selected_v1310_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup, choice.scheduled_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_scheduled_v1310_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scheduled-v1310"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup, choice.ue_Selected_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_ue_Selected_v1310_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Selected-v1310"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scheduled-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-Selected-v1310 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_setup_specs_18 = {
	sizeof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup),
	offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup, _asn_ctx),
	offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup, present),
	sizeof(((struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310__setup *)0)->present),
	asn_MAP_LTE_setup_tag2el_18,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_18 = {
	"setup",
	"setup",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_setup_constr_18, CHOICE_constraint },
	asn_MBR_LTE_setup_18,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_commTxResources_v1310_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_setup_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_commTxResources_v1310_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_commTxResources_v1310_specs_16 = {
	sizeof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310),
	offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310, _asn_ctx),
	offsetof(struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310, present),
	sizeof(((struct LTE_SL_CommConfig_r12__ext1__commTxResources_v1310 *)0)->present),
	asn_MAP_LTE_commTxResources_v1310_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_commTxResources_v1310_16 = {
	"commTxResources-v1310",
	"commTxResources-v1310",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_commTxResources_v1310_constr_16, CHOICE_constraint },
	asn_MBR_LTE_commTxResources_v1310_16,
	2,	/* Elements count */
	&asn_SPC_LTE_commTxResources_v1310_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_15[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_CommConfig_r12__ext1, commTxResources_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_commTxResources_v1310_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxResources-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommConfig_r12__ext1, commTxAllowRelayDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxAllowRelayDedicated-r13"
		},
};
static const int asn_MAP_LTE_ext1_oms_15[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commTxResources-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* commTxAllowRelayDedicated-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_15 = {
	sizeof(struct LTE_SL_CommConfig_r12__ext1),
	offsetof(struct LTE_SL_CommConfig_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_15,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_15,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_15 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_15,
	sizeof(asn_DEF_LTE_ext1_tags_15)
		/sizeof(asn_DEF_LTE_ext1_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_15)
		/sizeof(asn_DEF_LTE_ext1_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_15,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_CommConfig_r12_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_CommConfig_r12, commTxResources_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_commTxResources_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxResources-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommConfig_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_ext1_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_SL_CommConfig_r12_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_CommConfig_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_CommConfig_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commTxResources-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_CommConfig_r12_specs_1 = {
	sizeof(struct LTE_SL_CommConfig_r12),
	offsetof(struct LTE_SL_CommConfig_r12, _asn_ctx),
	asn_MAP_LTE_SL_CommConfig_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_SL_CommConfig_r12_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_CommConfig_r12 = {
	"SL-CommConfig-r12",
	"SL-CommConfig-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_CommConfig_r12_tags_1,
	sizeof(asn_DEF_LTE_SL_CommConfig_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_CommConfig_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_CommConfig_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_CommConfig_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_CommConfig_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_CommConfig_r12_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SL_CommConfig_r12_specs_1	/* Additional specs */
};

