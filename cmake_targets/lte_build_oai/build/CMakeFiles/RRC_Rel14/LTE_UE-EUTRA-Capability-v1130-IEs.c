/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_UE-EUTRA-Capability-v1130-IEs.h"

asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1130_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, pdcp_Parameters_v1130),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCP_Parameters_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Parameters-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, phyLayerParameters_v1130),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhyLayerParameters_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, rf_Parameters_v1130),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RF_Parameters_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, measParameters_v1130),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasParameters_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measParameters-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, interRAT_ParametersCDMA2000_v1130),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersCDMA2000_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersCDMA2000-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, otherParameters_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Other_Parameters_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherParameters-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, fdd_Add_UE_EUTRA_Capabilities_v1130),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1130"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, tdd_Add_UE_EUTRA_Capabilities_v1130),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_EUTRA_Capability_v1170_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_UE_EUTRA_Capability_v1130_IEs_oms_1[] = { 1, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_EUTRA_Capability_v1130_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_EUTRA_Capability_v1130_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcp-Parameters-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* phyLayerParameters-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rf-Parameters-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measParameters-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* interRAT-ParametersCDMA2000-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* otherParameters-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1130_IEs_specs_1 = {
	sizeof(struct LTE_UE_EUTRA_Capability_v1130_IEs),
	offsetof(struct LTE_UE_EUTRA_Capability_v1130_IEs, _asn_ctx),
	asn_MAP_LTE_UE_EUTRA_Capability_v1130_IEs_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LTE_UE_EUTRA_Capability_v1130_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1130_IEs = {
	"UE-EUTRA-Capability-v1130-IEs",
	"UE-EUTRA-Capability-v1130-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_EUTRA_Capability_v1130_IEs_tags_1,
	sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1130_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1130_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_EUTRA_Capability_v1130_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1130_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_Capability_v1130_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_EUTRA_Capability_v1130_IEs_1,
	9,	/* Elements count */
	&asn_SPC_LTE_UE_EUTRA_Capability_v1130_IEs_specs_1	/* Additional specs */
};
