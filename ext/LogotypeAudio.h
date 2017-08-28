/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LogotypeCertExtn"
 * 	found in "rfc3709-LogotypeCertExtn.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_LogotypeAudio_H_
#define	_LogotypeAudio_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LogotypeDetails.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LogotypeAudioInfo;

/* LogotypeAudio */
typedef struct LogotypeAudio {
	LogotypeDetails_t	 audioDetails;
	struct LogotypeAudioInfo	*audioInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogotypeAudio_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogotypeAudio;
extern asn_SEQUENCE_specifics_t asn_SPC_LogotypeAudio_specs_1;
extern asn_TYPE_member_t asn_MBR_LogotypeAudio_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LogotypeAudioInfo.h"

#endif	/* _LogotypeAudio_H_ */
#include <asn_internal.h>
