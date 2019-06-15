/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_HandoverFromEUTRAPreparationRequest-r8-IEs.h"

asn_TYPE_member_t asn_MBR_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_r8_IEs, cdma2000_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CDMA2000_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdma2000-Type"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_r8_IEs, rand),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RAND_CDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rand"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_r8_IEs, mobilityParameters),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MobilityParametersCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityParameters"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v890_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cdma2000-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rand */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mobilityParameters */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_specs_1 = {
	sizeof(struct LTE_HandoverFromEUTRAPreparationRequest_r8_IEs),
	offsetof(struct LTE_HandoverFromEUTRAPreparationRequest_r8_IEs, _asn_ctx),
	asn_MAP_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs = {
	"HandoverFromEUTRAPreparationRequest-r8-IEs",
	"HandoverFromEUTRAPreparationRequest-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tags_1,
	sizeof(asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tags_1)
		/sizeof(asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tags_1)
		/sizeof(asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_1,
	4,	/* Elements count */
	&asn_SPC_LTE_HandoverFromEUTRAPreparationRequest_r8_IEs_specs_1	/* Additional specs */
};

