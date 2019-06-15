/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CarrierFreqUTRA-FDD.h"

static int
memb_LTE_q_RxLevMin_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_LTE_p_MaxUTRA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_LTE_q_QualMin_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_LTE_q_RxLevMin_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -60, -13 }	/* (-60..-13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p_MaxUTRA_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -50,  33 }	/* (-50..33) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_q_QualMin_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -24,  0 }	/* (-24..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_threshX_Q_r9_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD__ext1__threshX_Q_r9, threshX_HighQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-HighQ-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD__ext1__threshX_Q_r9, threshX_LowQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThresholdQ_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-LowQ-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_threshX_Q_r9_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_threshX_Q_r9_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshX-HighQ-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* threshX-LowQ-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_threshX_Q_r9_specs_11 = {
	sizeof(struct LTE_CarrierFreqUTRA_FDD__ext1__threshX_Q_r9),
	offsetof(struct LTE_CarrierFreqUTRA_FDD__ext1__threshX_Q_r9, _asn_ctx),
	asn_MAP_LTE_threshX_Q_r9_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_threshX_Q_r9_11 = {
	"threshX-Q-r9",
	"threshX-Q-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_threshX_Q_r9_tags_11,
	sizeof(asn_DEF_LTE_threshX_Q_r9_tags_11)
		/sizeof(asn_DEF_LTE_threshX_Q_r9_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_threshX_Q_r9_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_threshX_Q_r9_tags_11)
		/sizeof(asn_DEF_LTE_threshX_Q_r9_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_threshX_Q_r9_11,
	2,	/* Elements count */
	&asn_SPC_LTE_threshX_Q_r9_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_10[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_CarrierFreqUTRA_FDD__ext1, threshX_Q_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_threshX_Q_r9_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-Q-r9"
		},
};
static const int asn_MAP_LTE_ext1_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* threshX-Q-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_10 = {
	sizeof(struct LTE_CarrierFreqUTRA_FDD__ext1),
	offsetof(struct LTE_CarrierFreqUTRA_FDD__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_10 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_10,
	sizeof(asn_DEF_LTE_ext1_tags_10)
		/sizeof(asn_DEF_LTE_ext1_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_10)
		/sizeof(asn_DEF_LTE_ext1_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_10,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CarrierFreqUTRA_FDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CarrierFreqUTRA_FDD, cellReselectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellReselectionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionPriority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD, threshX_High),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-High"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD, threshX_Low),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshX-Low"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_q_RxLevMin_constr_6,  memb_LTE_q_RxLevMin_constraint_1 },
		0, 0, /* No default value */
		"q-RxLevMin"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD, p_MaxUTRA),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p_MaxUTRA_constr_7,  memb_LTE_p_MaxUTRA_constraint_1 },
		0, 0, /* No default value */
		"p-MaxUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CarrierFreqUTRA_FDD, q_QualMin),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_q_QualMin_constr_8,  memb_LTE_q_QualMin_constraint_1 },
		0, 0, /* No default value */
		"q-QualMin"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CarrierFreqUTRA_FDD, ext1),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext1_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_CarrierFreqUTRA_FDD_oms_1[] = { 1, 7 };
static const ber_tlv_tag_t asn_DEF_LTE_CarrierFreqUTRA_FDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CarrierFreqUTRA_FDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* threshX-High */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* threshX-Low */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* q-RxLevMin */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* p-MaxUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* q-QualMin */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreqUTRA_FDD_specs_1 = {
	sizeof(struct LTE_CarrierFreqUTRA_FDD),
	offsetof(struct LTE_CarrierFreqUTRA_FDD, _asn_ctx),
	asn_MAP_LTE_CarrierFreqUTRA_FDD_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_LTE_CarrierFreqUTRA_FDD_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreqUTRA_FDD = {
	"CarrierFreqUTRA-FDD",
	"CarrierFreqUTRA-FDD",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CarrierFreqUTRA_FDD_tags_1,
	sizeof(asn_DEF_LTE_CarrierFreqUTRA_FDD_tags_1)
		/sizeof(asn_DEF_LTE_CarrierFreqUTRA_FDD_tags_1[0]), /* 1 */
	asn_DEF_LTE_CarrierFreqUTRA_FDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CarrierFreqUTRA_FDD_tags_1)
		/sizeof(asn_DEF_LTE_CarrierFreqUTRA_FDD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CarrierFreqUTRA_FDD_1,
	8,	/* Elements count */
	&asn_SPC_LTE_CarrierFreqUTRA_FDD_specs_1	/* Additional specs */
};

