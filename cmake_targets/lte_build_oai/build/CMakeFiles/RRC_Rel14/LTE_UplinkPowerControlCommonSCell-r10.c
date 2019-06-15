/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_UplinkPowerControlCommonSCell-r10.h"

static int
memb_LTE_p0_NominalPUSCH_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_p0_NominalPUSCH_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlCommonSCell_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommonSCell_r10, p0_NominalPUSCH_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_NominalPUSCH_r10_constr_2,  memb_LTE_p0_NominalPUSCH_r10_constraint_1 },
		0, 0, /* No default value */
		"p0-NominalPUSCH-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommonSCell_r10, alpha_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Alpha_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"alpha-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_UplinkPowerControlCommonSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UplinkPowerControlCommonSCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalPUSCH-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* alpha-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlCommonSCell_r10_specs_1 = {
	sizeof(struct LTE_UplinkPowerControlCommonSCell_r10),
	offsetof(struct LTE_UplinkPowerControlCommonSCell_r10, _asn_ctx),
	asn_MAP_LTE_UplinkPowerControlCommonSCell_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlCommonSCell_r10 = {
	"UplinkPowerControlCommonSCell-r10",
	"UplinkPowerControlCommonSCell-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UplinkPowerControlCommonSCell_r10_tags_1,
	sizeof(asn_DEF_LTE_UplinkPowerControlCommonSCell_r10_tags_1)
		/sizeof(asn_DEF_LTE_UplinkPowerControlCommonSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_LTE_UplinkPowerControlCommonSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UplinkPowerControlCommonSCell_r10_tags_1)
		/sizeof(asn_DEF_LTE_UplinkPowerControlCommonSCell_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UplinkPowerControlCommonSCell_r10_1,
	2,	/* Elements count */
	&asn_SPC_LTE_UplinkPowerControlCommonSCell_r10_specs_1	/* Additional specs */
};

