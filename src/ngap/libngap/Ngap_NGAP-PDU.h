/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_NGAP_PDU_H_
#define _Ngap_NGAP_PDU_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_NGAP_PDU_PR {
  Ngap_NGAP_PDU_PR_NOTHING, /* No components present */
  Ngap_NGAP_PDU_PR_initiatingMessage,
  Ngap_NGAP_PDU_PR_successfulOutcome,
  Ngap_NGAP_PDU_PR_unsuccessfulOutcome
  /* Extensions may appear below */

} Ngap_NGAP_PDU_PR;

/* Forward declarations */
struct Ngap_InitiatingMessage;
struct Ngap_SuccessfulOutcome;
struct Ngap_UnsuccessfulOutcome;

/* Ngap_NGAP-PDU */
typedef struct Ngap_NGAP_PDU {
  Ngap_NGAP_PDU_PR present;
  union Ngap_NGAP_PDU_u {
    struct Ngap_InitiatingMessage* initiatingMessage;
    struct Ngap_SuccessfulOutcome* successfulOutcome;
    struct Ngap_UnsuccessfulOutcome* unsuccessfulOutcome;
    /*
     * This type is extensible,
     * possible extensions are below.
     */
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_NGAP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_NGAP_PDU;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_NGAP_PDU_H_ */
#include <asn_internal.h>
