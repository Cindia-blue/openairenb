/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CarrierFreqUTRA-FDD-Ext-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_q_RxLevMin_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= -13)) {
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
memb_LTE_p_MaxUTRA_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -50 && value <= 33)) {
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
memb_LTE_q_QualMin_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -24 && value <= 0)) {
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
memb_LTE_multiBandInfoList_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_multiBandInfoList_r12_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_reducedMeasPerformance_r12_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_q_RxLevMin_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -60, -13 }	/* (-60..-13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p_MaxUTRA_r12_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -50,  33 }	/* (-50..33) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_q_QualMin_r12_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -24,  0 }	/* (-24..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_multiBandInfoList_r12_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_threshX_Q_r12_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12__threshX_Q_r12, threshX_HighQ_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-HighQ-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12__threshX_Q_r12, threshX_LowQ_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-LowQ-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_threshX_Q_r12_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_threshX_Q_r12_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshX-HighQ-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* threshX-LowQ-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_threshX_Q_r12_specs_9 = {
	sizeof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12__threshX_Q_r12),
	offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12__threshX_Q_r12, _asn_ctx),
	asn_MAP_LTE_threshX_Q_r12_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_threshX_Q_r12_9 = {
	"threshX-Q-r12",
	"threshX-Q-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_threshX_Q_r12_tags_9,
	sizeof(asn_DEF_LTE_threshX_Q_r12_tags_9)
		/sizeof(asn_DEF_LTE_threshX_Q_r12_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_threshX_Q_r12_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_threshX_Q_r12_tags_9)
		/sizeof(asn_DEF_LTE_threshX_Q_r12_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_threshX_Q_r12_9,
	2,	/* Elements count */
	&asn_SPC_LTE_threshX_Q_r12_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_multiBandInfoList_r12_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LTE_FreqBandIndicator_UTRA_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_multiBandInfoList_r12_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_multiBandInfoList_r12_specs_12 = {
	sizeof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12__multiBandInfoList_r12),
	offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12__multiBandInfoList_r12, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_multiBandInfoList_r12_12 = {
	"multiBandInfoList-r12",
	"multiBandInfoList-r12",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_multiBandInfoList_r12_tags_12,
	sizeof(asn_DEF_LTE_multiBandInfoList_r12_tags_12)
		/sizeof(asn_DEF_LTE_multiBandInfoList_r12_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_multiBandInfoList_r12_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_multiBandInfoList_r12_tags_12)
		/sizeof(asn_DEF_LTE_multiBandInfoList_r12_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_multiBandInfoList_r12_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_LTE_multiBandInfoList_r12_12,
	1,	/* Single element */
	&asn_SPC_LTE_multiBandInfoList_r12_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_reducedMeasPerformance_r12_value2enum_14[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_reducedMeasPerformance_r12_enum2value_14[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_reducedMeasPerformance_r12_specs_14 = {
	asn_MAP_LTE_reducedMeasPerformance_r12_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_reducedMeasPerformance_r12_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_reducedMeasPerformance_r12_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_reducedMeasPerformance_r12_14 = {
	"reducedMeasPerformance-r12",
	"reducedMeasPerformance-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_reducedMeasPerformance_r12_tags_14,
	sizeof(asn_DEF_LTE_reducedMeasPerformance_r12_tags_14)
		/sizeof(asn_DEF_LTE_reducedMeasPerformance_r12_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_reducedMeasPerformance_r12_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_reducedMeasPerformance_r12_tags_14)
		/sizeof(asn_DEF_LTE_reducedMeasPerformance_r12_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_reducedMeasPerformance_r12_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_reducedMeasPerformance_r12_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CarrierFreqUTRA_FDD_Ext_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, carrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, cellReselectionPriority_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellReselectionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionPriority-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, threshX_High_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-High-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, threshX_Low_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-Low-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, q_RxLevMin_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_q_RxLevMin_r12_constr_6,  memb_LTE_q_RxLevMin_r12_constraint_1 },
		0, 0, /* No default value */
		"q-RxLevMin-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, p_MaxUTRA_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p_MaxUTRA_r12_constr_7,  memb_LTE_p_MaxUTRA_r12_constraint_1 },
		0, 0, /* No default value */
		"p-MaxUTRA-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, q_QualMin_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_q_QualMin_r12_constr_8,  memb_LTE_q_QualMin_r12_constraint_1 },
		0, 0, /* No default value */
		"q-QualMin-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, threshX_Q_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_threshX_Q_r12_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-Q-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, multiBandInfoList_r12),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LTE_multiBandInfoList_r12_12,
		0,
		{ 0, &asn_PER_memb_LTE_multiBandInfoList_r12_constr_12,  memb_LTE_multiBandInfoList_r12_constraint_1 },
		0, 0, /* No default value */
		"multiBandInfoList-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_reducedMeasPerformance_r12_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMeasPerformance-r12"
		},
};
static const int asn_MAP_LTE_CarrierFreqUTRA_FDD_Ext_r12_oms_1[] = { 1, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_LTE_CarrierFreqUTRA_FDD_Ext_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CarrierFreqUTRA_FDD_Ext_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionPriority-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* threshX-High-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* threshX-Low-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* q-RxLevMin-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* p-MaxUTRA-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* q-QualMin-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* threshX-Q-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* multiBandInfoList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* reducedMeasPerformance-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreqUTRA_FDD_Ext_r12_specs_1 = {
	sizeof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12),
	offsetof(struct LTE_CarrierFreqUTRA_FDD_Ext_r12, _asn_ctx),
	asn_MAP_LTE_CarrierFreqUTRA_FDD_Ext_r12_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_LTE_CarrierFreqUTRA_FDD_Ext_r12_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreqUTRA_FDD_Ext_r12 = {
	"CarrierFreqUTRA-FDD-Ext-r12",
	"CarrierFreqUTRA-FDD-Ext-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CarrierFreqUTRA_FDD_Ext_r12_tags_1,
	sizeof(asn_DEF_LTE_CarrierFreqUTRA_FDD_Ext_r12_tags_1)
		/sizeof(asn_DEF_LTE_CarrierFreqUTRA_FDD_Ext_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_CarrierFreqUTRA_FDD_Ext_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CarrierFreqUTRA_FDD_Ext_r12_tags_1)
		/sizeof(asn_DEF_LTE_CarrierFreqUTRA_FDD_Ext_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CarrierFreqUTRA_FDD_Ext_r12_1,
	10,	/* Elements count */
	&asn_SPC_LTE_CarrierFreqUTRA_FDD_Ext_r12_specs_1	/* Additional specs */
};

