/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "KEA-Parms-Id.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_KEA_Parms_Id_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_KEA_Parms_Id = {
	"KEA-Parms-Id",
	"KEA-Parms-Id",
	&asn_OP_OCTET_STRING,
	OCTET_STRING_constraint,
	asn_DEF_KEA_Parms_Id_tags_1,
	sizeof(asn_DEF_KEA_Parms_Id_tags_1)
		/sizeof(asn_DEF_KEA_Parms_Id_tags_1[0]), /* 1 */
	asn_DEF_KEA_Parms_Id_tags_1,	/* Same as above */
	sizeof(asn_DEF_KEA_Parms_Id_tags_1)
		/sizeof(asn_DEF_KEA_Parms_Id_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

