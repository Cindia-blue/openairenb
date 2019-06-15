/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/enb_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_GERAN-Cell-ID.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_GERAN_Cell_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_GERAN_Cell_ID, lAI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_LAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lAI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_GERAN_Cell_ID, rAC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_RAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rAC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_GERAN_Cell_ID, cI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cI"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_GERAN_Cell_ID, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P46,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_GERAN_Cell_ID_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_S1AP_GERAN_Cell_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_GERAN_Cell_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lAI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rAC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_GERAN_Cell_ID_specs_1 = {
	sizeof(struct S1AP_GERAN_Cell_ID),
	offsetof(struct S1AP_GERAN_Cell_ID, _asn_ctx),
	asn_MAP_S1AP_GERAN_Cell_ID_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1AP_GERAN_Cell_ID_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_GERAN_Cell_ID = {
	"GERAN-Cell-ID",
	"GERAN-Cell-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_GERAN_Cell_ID_tags_1,
	sizeof(asn_DEF_S1AP_GERAN_Cell_ID_tags_1)
		/sizeof(asn_DEF_S1AP_GERAN_Cell_ID_tags_1[0]), /* 1 */
	asn_DEF_S1AP_GERAN_Cell_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_GERAN_Cell_ID_tags_1)
		/sizeof(asn_DEF_S1AP_GERAN_Cell_ID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_GERAN_Cell_ID_1,
	4,	/* Elements count */
	&asn_SPC_S1AP_GERAN_Cell_ID_specs_1	/* Additional specs */
};

