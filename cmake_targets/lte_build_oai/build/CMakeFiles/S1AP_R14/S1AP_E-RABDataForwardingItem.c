/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/lixh/enb_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_E-RABDataForwardingItem.h"

#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_E_RABDataForwardingItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABDataForwardingItem, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_POINTER, 5, offsetof(struct S1AP_E_RABDataForwardingItem, dL_transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-transportLayerAddress"
		},
	{ ATF_POINTER, 4, offsetof(struct S1AP_E_RABDataForwardingItem, dL_gTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_GTP_TEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-gTP-TEID"
		},
	{ ATF_POINTER, 3, offsetof(struct S1AP_E_RABDataForwardingItem, uL_TransportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-TransportLayerAddress"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_E_RABDataForwardingItem, uL_GTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_GTP_TEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-GTP-TEID"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_E_RABDataForwardingItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_E_RABDataForwardingItem_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_S1AP_E_RABDataForwardingItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_E_RABDataForwardingItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dL-transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dL-gTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uL-TransportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uL-GTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_E_RABDataForwardingItem_specs_1 = {
	sizeof(struct S1AP_E_RABDataForwardingItem),
	offsetof(struct S1AP_E_RABDataForwardingItem, _asn_ctx),
	asn_MAP_S1AP_E_RABDataForwardingItem_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_S1AP_E_RABDataForwardingItem_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABDataForwardingItem = {
	"E-RABDataForwardingItem",
	"E-RABDataForwardingItem",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_E_RABDataForwardingItem_tags_1,
	sizeof(asn_DEF_S1AP_E_RABDataForwardingItem_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABDataForwardingItem_tags_1[0]), /* 1 */
	asn_DEF_S1AP_E_RABDataForwardingItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_E_RABDataForwardingItem_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABDataForwardingItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_E_RABDataForwardingItem_1,
	6,	/* Elements count */
	&asn_SPC_S1AP_E_RABDataForwardingItem_specs_1	/* Additional specs */
};

