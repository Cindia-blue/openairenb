/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_E-RABs-ToBeReleased-RelReqItem.h"

static asn_per_constraints_t asn_PER_type_X2AP_E_RABs_ToBeReleased_RelReqItem_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeReleased_RelReqItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeReleased_RelReqItem, choice.sCG_Bearer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RABs_ToBeReleased_RelReqItem_SCG_Bearer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCG-Bearer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeReleased_RelReqItem, choice.split_Bearer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RABs_ToBeReleased_RelReqItem_Split_Bearer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"split-Bearer"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_E_RABs_ToBeReleased_RelReqItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCG-Bearer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* split-Bearer */
};
static asn_CHOICE_specifics_t asn_SPC_X2AP_E_RABs_ToBeReleased_RelReqItem_specs_1 = {
	sizeof(struct X2AP_E_RABs_ToBeReleased_RelReqItem),
	offsetof(struct X2AP_E_RABs_ToBeReleased_RelReqItem, _asn_ctx),
	offsetof(struct X2AP_E_RABs_ToBeReleased_RelReqItem, present),
	sizeof(((struct X2AP_E_RABs_ToBeReleased_RelReqItem *)0)->present),
	asn_MAP_X2AP_E_RABs_ToBeReleased_RelReqItem_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeReleased_RelReqItem = {
	"E-RABs-ToBeReleased-RelReqItem",
	"E-RABs-ToBeReleased-RelReqItem",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_E_RABs_ToBeReleased_RelReqItem_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_E_RABs_ToBeReleased_RelReqItem_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_E_RABs_ToBeReleased_RelReqItem_specs_1	/* Additional specs */
};

