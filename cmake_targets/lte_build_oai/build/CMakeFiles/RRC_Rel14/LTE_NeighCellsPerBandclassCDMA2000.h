/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_NeighCellsPerBandclassCDMA2000_H_
#define	_LTE_NeighCellsPerBandclassCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueCDMA2000.h"
#include "LTE_PhysCellIdListCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_NeighCellsPerBandclassCDMA2000 */
typedef struct LTE_NeighCellsPerBandclassCDMA2000 {
	LTE_ARFCN_ValueCDMA2000_t	 arfcn;
	LTE_PhysCellIdListCDMA2000_t	 physCellIdList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NeighCellsPerBandclassCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NeighCellsPerBandclassCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NeighCellsPerBandclassCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NeighCellsPerBandclassCDMA2000_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NeighCellsPerBandclassCDMA2000_H_ */
#include <asn_internal.h>
