/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_MBSFN-ResultToLogInfo.h"

#include "S1AP_ProtocolExtensionContainer.h"
static int
memb_S1AP_mBSFN_AreaId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_S1AP_mBSFN_AreaId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_MBSFN_ResultToLogInfo_1[] = {
	{ ATF_POINTER, 1, offsetof(struct S1AP_MBSFN_ResultToLogInfo, mBSFN_AreaId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_S1AP_mBSFN_AreaId_constr_2,  memb_S1AP_mBSFN_AreaId_constraint_1 },
		0, 0, /* No default value */
		"mBSFN-AreaId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_MBSFN_ResultToLogInfo, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_MBSFN_ResultToLogInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P73,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_MBSFN_ResultToLogInfo_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_MBSFN_ResultToLogInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_MBSFN_ResultToLogInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mBSFN-AreaId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_MBSFN_ResultToLogInfo_specs_1 = {
	sizeof(struct S1AP_MBSFN_ResultToLogInfo),
	offsetof(struct S1AP_MBSFN_ResultToLogInfo, _asn_ctx),
	asn_MAP_S1AP_MBSFN_ResultToLogInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_MBSFN_ResultToLogInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_MBSFN_ResultToLogInfo = {
	"MBSFN-ResultToLogInfo",
	"MBSFN-ResultToLogInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_MBSFN_ResultToLogInfo_tags_1,
	sizeof(asn_DEF_S1AP_MBSFN_ResultToLogInfo_tags_1)
		/sizeof(asn_DEF_S1AP_MBSFN_ResultToLogInfo_tags_1[0]), /* 1 */
	asn_DEF_S1AP_MBSFN_ResultToLogInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_MBSFN_ResultToLogInfo_tags_1)
		/sizeof(asn_DEF_S1AP_MBSFN_ResultToLogInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_MBSFN_ResultToLogInfo_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_MBSFN_ResultToLogInfo_specs_1	/* Additional specs */
};

