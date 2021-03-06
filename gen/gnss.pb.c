/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:56 2018. */

#include "gnss.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_gnss_GnssSignal_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_gnss_GnssSignal, sat, sat, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_gnss_GnssSignal, code, sat, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_gnss_GpsTimeSec_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_gnss_GpsTimeSec, tow, tow, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_gnss_GpsTimeSec, wn, tow, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_gnss_GpsTime_fields[4] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_gnss_GpsTime, tow, tow, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_gnss_GpsTime, ns_residual, tow, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_gnss_GpsTime, wn, ns_residual, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_gnss_CarrierPhase_fields[3] = {
    PB_FIELD(  1, SINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_gnss_CarrierPhase, i, i, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_gnss_CarrierPhase, f, i, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
