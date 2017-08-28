/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_Time_H_
#define	_Time_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTCTime.h>
#include <GeneralizedTime.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Time_PR {
	Time_PR_NOTHING,	/* No components present */
	Time_PR_utcTime,
	Time_PR_generalTime
} Time_PR;

/* Time */
typedef struct Time {
	Time_PR present;
	union Time_u {
		UTCTime_t	 utcTime;
		GeneralizedTime_t	 generalTime;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Time_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Time;
extern asn_CHOICE_specifics_t asn_SPC_Time_specs_1;
extern asn_TYPE_member_t asn_MBR_Time_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Time_H_ */
#include <asn_internal.h>
