/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "Curve.h"

asn_TYPE_member_t asn_MBR_Curve_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Curve, a),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_FieldElement,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"a"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Curve, b),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_FieldElement,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"b"
		},
	{ ATF_POINTER, 1, offsetof(struct Curve, seed),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"seed"
		},
};
static const ber_tlv_tag_t asn_DEF_Curve_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Curve_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 2, 0, 0 }, /* seed */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 1 }, /* a */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, -1, 0 } /* b */
};
asn_SEQUENCE_specifics_t asn_SPC_Curve_specs_1 = {
	sizeof(struct Curve),
	offsetof(struct Curve, _asn_ctx),
	asn_MAP_Curve_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Curve = {
	"Curve",
	"Curve",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_Curve_tags_1,
	sizeof(asn_DEF_Curve_tags_1)
		/sizeof(asn_DEF_Curve_tags_1[0]), /* 1 */
	asn_DEF_Curve_tags_1,	/* Same as above */
	sizeof(asn_DEF_Curve_tags_1)
		/sizeof(asn_DEF_Curve_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_Curve_1,
	3,	/* Elements count */
	&asn_SPC_Curve_specs_1	/* Additional specs */
};

