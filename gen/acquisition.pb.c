/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:55 2018. */

#include "acquisition.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_acquisition_MsgAcqResult_fields[5] = {
    PB_FIELD(  1, FLOAT   , SINGULAR, STATIC  , FIRST, swiftnav_sbp_acquisition_MsgAcqResult, cn0, cn0, 0),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_MsgAcqResult, cp, cn0, 0),
    PB_FIELD(  3, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_MsgAcqResult, cf, cp, 0),
    PB_FIELD(  4, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_MsgAcqResult, sid, cf, &swiftnav_sbp_gnss_GnssSignal_fields),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_acquisition_AcqSvProfile_fields[13] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_acquisition_AcqSvProfile, job_type, job_type, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, status, job_type, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, cn0, status, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, int_time, cn0, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, sid, int_time, &swiftnav_sbp_gnss_GnssSignal_fields),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, bin_width, sid, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, timestamp, bin_width, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, time_spent, timestamp, 0),
    PB_FIELD(  9, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, cf_min, time_spent, 0),
    PB_FIELD( 10, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, cf_max, cf_min, 0),
    PB_FIELD( 11, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, cf, cf_max, 0),
    PB_FIELD( 12, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_acquisition_AcqSvProfile, cp, cf, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_acquisition_MsgAcqSvProfile_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, swiftnav_sbp_acquisition_MsgAcqSvProfile, acq_sv_profile, acq_sv_profile, &swiftnav_sbp_acquisition_AcqSvProfile_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(swiftnav_sbp_acquisition_MsgAcqResult, sid) < 65536 && pb_membersize(swiftnav_sbp_acquisition_AcqSvProfile, sid) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_swiftnav_sbp_acquisition_MsgAcqResult_swiftnav_sbp_acquisition_AcqSvProfile_swiftnav_sbp_acquisition_MsgAcqSvProfile)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(swiftnav_sbp_acquisition_MsgAcqResult, sid) < 256 && pb_membersize(swiftnav_sbp_acquisition_AcqSvProfile, sid) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_swiftnav_sbp_acquisition_MsgAcqResult_swiftnav_sbp_acquisition_AcqSvProfile_swiftnav_sbp_acquisition_MsgAcqSvProfile)
#endif


/* @@protoc_insertion_point(eof) */
