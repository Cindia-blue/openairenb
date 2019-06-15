/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CQI-ReportAperiodicProc-r11.h"

asn_TYPE_member_t asn_MBR_LTE_CQI_ReportAperiodicProc_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_r11, cqi_ReportModeAperiodic_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CQI_ReportModeAperiodic,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportModeAperiodic-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_r11, trigger01_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger01-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_r11, trigger10_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger10-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodicProc_r11, trigger11_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trigger11-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_CQI_ReportAperiodicProc_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CQI_ReportAperiodicProc_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportModeAperiodic-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger01-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trigger10-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* trigger11-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportAperiodicProc_r11_specs_1 = {
	sizeof(struct LTE_CQI_ReportAperiodicProc_r11),
	offsetof(struct LTE_CQI_ReportAperiodicProc_r11, _asn_ctx),
	asn_MAP_LTE_CQI_ReportAperiodicProc_r11_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportAperiodicProc_r11 = {
	"CQI-ReportAperiodicProc-r11",
	"CQI-ReportAperiodicProc-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CQI_ReportAperiodicProc_r11_tags_1,
	sizeof(asn_DEF_LTE_CQI_ReportAperiodicProc_r11_tags_1)
		/sizeof(asn_DEF_LTE_CQI_ReportAperiodicProc_r11_tags_1[0]), /* 1 */
	asn_DEF_LTE_CQI_ReportAperiodicProc_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CQI_ReportAperiodicProc_r11_tags_1)
		/sizeof(asn_DEF_LTE_CQI_ReportAperiodicProc_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CQI_ReportAperiodicProc_r11_1,
	4,	/* Elements count */
	&asn_SPC_LTE_CQI_ReportAperiodicProc_r11_specs_1	/* Additional specs */
};

