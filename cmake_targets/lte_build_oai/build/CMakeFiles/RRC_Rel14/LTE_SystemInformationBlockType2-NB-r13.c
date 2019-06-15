/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformationBlockType2-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_multiBandInfoList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_LTE_multiBandInfoList_r13_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_cp_Reestablishment_r14_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_servingCellMeasInfo_r14_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_cqi_Reporting_r14_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_multiBandInfoList_r13_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_freqInfo_r13_4[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType2_NB_r13__freqInfo_r13, ul_CarrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CarrierFreq_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CarrierFreq-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType2_NB_r13__freqInfo_r13, additionalSpectrumEmission_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-r13"
		},
};
static const int asn_MAP_LTE_freqInfo_r13_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_freqInfo_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_freqInfo_r13_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* additionalSpectrumEmission-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_freqInfo_r13_specs_4 = {
	sizeof(struct LTE_SystemInformationBlockType2_NB_r13__freqInfo_r13),
	offsetof(struct LTE_SystemInformationBlockType2_NB_r13__freqInfo_r13, _asn_ctx),
	asn_MAP_LTE_freqInfo_r13_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_freqInfo_r13_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_freqInfo_r13_4 = {
	"freqInfo-r13",
	"freqInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_freqInfo_r13_tags_4,
	sizeof(asn_DEF_LTE_freqInfo_r13_tags_4)
		/sizeof(asn_DEF_LTE_freqInfo_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_freqInfo_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_freqInfo_r13_tags_4)
		/sizeof(asn_DEF_LTE_freqInfo_r13_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_freqInfo_r13_4,
	2,	/* Elements count */
	&asn_SPC_LTE_freqInfo_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_multiBandInfoList_r13_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LTE_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_multiBandInfoList_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_multiBandInfoList_r13_specs_8 = {
	sizeof(struct LTE_SystemInformationBlockType2_NB_r13__multiBandInfoList_r13),
	offsetof(struct LTE_SystemInformationBlockType2_NB_r13__multiBandInfoList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_multiBandInfoList_r13_8 = {
	"multiBandInfoList-r13",
	"multiBandInfoList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_multiBandInfoList_r13_tags_8,
	sizeof(asn_DEF_LTE_multiBandInfoList_r13_tags_8)
		/sizeof(asn_DEF_LTE_multiBandInfoList_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_multiBandInfoList_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_multiBandInfoList_r13_tags_8)
		/sizeof(asn_DEF_LTE_multiBandInfoList_r13_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_multiBandInfoList_r13_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_LTE_multiBandInfoList_r13_8,
	1,	/* Single element */
	&asn_SPC_LTE_multiBandInfoList_r13_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_cp_Reestablishment_r14_value2enum_13[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_cp_Reestablishment_r14_enum2value_13[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_cp_Reestablishment_r14_specs_13 = {
	asn_MAP_LTE_cp_Reestablishment_r14_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_cp_Reestablishment_r14_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_cp_Reestablishment_r14_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cp_Reestablishment_r14_13 = {
	"cp-Reestablishment-r14",
	"cp-Reestablishment-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_cp_Reestablishment_r14_tags_13,
	sizeof(asn_DEF_LTE_cp_Reestablishment_r14_tags_13)
		/sizeof(asn_DEF_LTE_cp_Reestablishment_r14_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_cp_Reestablishment_r14_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_cp_Reestablishment_r14_tags_13)
		/sizeof(asn_DEF_LTE_cp_Reestablishment_r14_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_cp_Reestablishment_r14_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_cp_Reestablishment_r14_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_12[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType2_NB_r13__ext1, cp_Reestablishment_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_cp_Reestablishment_r14_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cp-Reestablishment-r14"
		},
};
static const int asn_MAP_LTE_ext1_oms_12[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cp-Reestablishment-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_12 = {
	sizeof(struct LTE_SystemInformationBlockType2_NB_r13__ext1),
	offsetof(struct LTE_SystemInformationBlockType2_NB_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_12,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_12 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_12,
	sizeof(asn_DEF_LTE_ext1_tags_12)
		/sizeof(asn_DEF_LTE_ext1_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_12)
		/sizeof(asn_DEF_LTE_ext1_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_12,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_servingCellMeasInfo_r14_value2enum_16[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_servingCellMeasInfo_r14_enum2value_16[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_servingCellMeasInfo_r14_specs_16 = {
	asn_MAP_LTE_servingCellMeasInfo_r14_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_servingCellMeasInfo_r14_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_servingCellMeasInfo_r14_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_servingCellMeasInfo_r14_16 = {
	"servingCellMeasInfo-r14",
	"servingCellMeasInfo-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_servingCellMeasInfo_r14_tags_16,
	sizeof(asn_DEF_LTE_servingCellMeasInfo_r14_tags_16)
		/sizeof(asn_DEF_LTE_servingCellMeasInfo_r14_tags_16[0]) - 1, /* 1 */
	asn_DEF_LTE_servingCellMeasInfo_r14_tags_16,	/* Same as above */
	sizeof(asn_DEF_LTE_servingCellMeasInfo_r14_tags_16)
		/sizeof(asn_DEF_LTE_servingCellMeasInfo_r14_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_servingCellMeasInfo_r14_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_servingCellMeasInfo_r14_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_cqi_Reporting_r14_value2enum_18[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_cqi_Reporting_r14_enum2value_18[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_cqi_Reporting_r14_specs_18 = {
	asn_MAP_LTE_cqi_Reporting_r14_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_cqi_Reporting_r14_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_cqi_Reporting_r14_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cqi_Reporting_r14_18 = {
	"cqi-Reporting-r14",
	"cqi-Reporting-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_cqi_Reporting_r14_tags_18,
	sizeof(asn_DEF_LTE_cqi_Reporting_r14_tags_18)
		/sizeof(asn_DEF_LTE_cqi_Reporting_r14_tags_18[0]) - 1, /* 1 */
	asn_DEF_LTE_cqi_Reporting_r14_tags_18,	/* Same as above */
	sizeof(asn_DEF_LTE_cqi_Reporting_r14_tags_18)
		/sizeof(asn_DEF_LTE_cqi_Reporting_r14_tags_18[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_cqi_Reporting_r14_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_cqi_Reporting_r14_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_15[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType2_NB_r13__ext2, servingCellMeasInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_servingCellMeasInfo_r14_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellMeasInfo-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType2_NB_r13__ext2, cqi_Reporting_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_cqi_Reporting_r14_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-Reporting-r14"
		},
};
static const int asn_MAP_LTE_ext2_oms_15[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servingCellMeasInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cqi-Reporting-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_15 = {
	sizeof(struct LTE_SystemInformationBlockType2_NB_r13__ext2),
	offsetof(struct LTE_SystemInformationBlockType2_NB_r13__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_15,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_15,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_15 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_15,
	sizeof(asn_DEF_LTE_ext2_tags_15)
		/sizeof(asn_DEF_LTE_ext2_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_15)
		/sizeof(asn_DEF_LTE_ext2_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_15,
	2,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType2_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType2_NB_r13, radioResourceConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RadioResourceConfigCommonSIB_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommon-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType2_NB_r13, ue_TimersAndConstants_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_TimersAndConstants_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-TimersAndConstants-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType2_NB_r13, freqInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_freqInfo_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType2_NB_r13, timeAlignmentTimerCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_TimeAlignmentTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeAlignmentTimerCommon-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SystemInformationBlockType2_NB_r13, multiBandInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_multiBandInfoList_r13_8,
		0,
		{ 0, &asn_PER_memb_LTE_multiBandInfoList_r13_constr_8,  memb_LTE_multiBandInfoList_r13_constraint_1 },
		0, 0, /* No default value */
		"multiBandInfoList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType2_NB_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType2_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext1_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType2_NB_r13, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext2_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType2_NB_r13_oms_1[] = { 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType2_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType2_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-TimersAndConstants-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* freqInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeAlignmentTimerCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* multiBandInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType2_NB_r13_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType2_NB_r13),
	offsetof(struct LTE_SystemInformationBlockType2_NB_r13, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType2_NB_r13_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType2_NB_r13_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType2_NB_r13 = {
	"SystemInformationBlockType2-NB-r13",
	"SystemInformationBlockType2-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType2_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType2_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType2_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType2_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType2_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType2_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType2_NB_r13_1,
	8,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType2_NB_r13_specs_1	/* Additional specs */
};

