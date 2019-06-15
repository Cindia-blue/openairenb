/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_UE-ContextInformation.h"

#include "X2AP_HandoverRestrictionList.h"
#include "X2AP_LocationReportingInformation.h"
#include "X2AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_X2AP_UE_ContextInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformation, mME_UE_S1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_UE_S1AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mME-UE-S1AP-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformation, uESecurityCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_UESecurityCapabilities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uESecurityCapabilities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformation, aS_SecurityInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_AS_SecurityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aS-SecurityInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformation, uEaggregateMaximumBitRate),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_UEAggregateMaximumBitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uEaggregateMaximumBitRate"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_UE_ContextInformation, subscriberProfileIDforRFP),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_SubscriberProfileIDforRFP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subscriberProfileIDforRFP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformation, e_RABs_ToBeSetup_List),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RABs_ToBeSetup_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABs-ToBeSetup-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UE_ContextInformation, rRC_Context),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_RRC_Context,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rRC-Context"
		},
	{ ATF_POINTER, 3, offsetof(struct X2AP_UE_ContextInformation, handoverRestrictionList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_HandoverRestrictionList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverRestrictionList"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_UE_ContextInformation, locationReportingInformation),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_LocationReportingInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationReportingInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_UE_ContextInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_UE_ContextInformation_oms_1[] = { 4, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_X2AP_UE_ContextInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_UE_ContextInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mME-UE-S1AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uESecurityCapabilities */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* aS-SecurityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uEaggregateMaximumBitRate */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* subscriberProfileIDforRFP */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* e-RABs-ToBeSetup-List */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rRC-Context */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* handoverRestrictionList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* locationReportingInformation */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_UE_ContextInformation_specs_1 = {
	sizeof(struct X2AP_UE_ContextInformation),
	offsetof(struct X2AP_UE_ContextInformation, _asn_ctx),
	asn_MAP_X2AP_UE_ContextInformation_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_X2AP_UE_ContextInformation_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_UE_ContextInformation = {
	"UE-ContextInformation",
	"UE-ContextInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_UE_ContextInformation_tags_1,
	sizeof(asn_DEF_X2AP_UE_ContextInformation_tags_1)
		/sizeof(asn_DEF_X2AP_UE_ContextInformation_tags_1[0]), /* 1 */
	asn_DEF_X2AP_UE_ContextInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_UE_ContextInformation_tags_1)
		/sizeof(asn_DEF_X2AP_UE_ContextInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_UE_ContextInformation_1,
	10,	/* Elements count */
	&asn_SPC_X2AP_UE_ContextInformation_specs_1	/* Additional specs */
};

