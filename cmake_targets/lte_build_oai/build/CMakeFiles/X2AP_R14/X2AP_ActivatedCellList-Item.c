/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/lixh/enb_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_ActivatedCellList-Item.h"

#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_ActivatedCellList_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ActivatedCellList_Item, ecgi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecgi"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_ActivatedCellList_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_ActivatedCellList_Item_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_X2AP_ActivatedCellList_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_ActivatedCellList_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ecgi */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_ActivatedCellList_Item_specs_1 = {
	sizeof(struct X2AP_ActivatedCellList_Item),
	offsetof(struct X2AP_ActivatedCellList_Item, _asn_ctx),
	asn_MAP_X2AP_ActivatedCellList_Item_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_X2AP_ActivatedCellList_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ActivatedCellList_Item = {
	"ActivatedCellList-Item",
	"ActivatedCellList-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_ActivatedCellList_Item_tags_1,
	sizeof(asn_DEF_X2AP_ActivatedCellList_Item_tags_1)
		/sizeof(asn_DEF_X2AP_ActivatedCellList_Item_tags_1[0]), /* 1 */
	asn_DEF_X2AP_ActivatedCellList_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_ActivatedCellList_Item_tags_1)
		/sizeof(asn_DEF_X2AP_ActivatedCellList_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_ActivatedCellList_Item_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_ActivatedCellList_Item_specs_1	/* Additional specs */
};

