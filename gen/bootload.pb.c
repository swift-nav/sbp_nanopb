/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:55 2018. */

#include "bootload.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_bootload_MsgBootloaderHandshakeReq_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_bootload_MsgBootloaderHandshakeResp_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_bootload_MsgBootloaderHandshakeResp, flags, flags, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, swiftnav_sbp_bootload_MsgBootloaderHandshakeResp, version, flags, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_bootload_MsgBootloaderJumpToApp_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_bootload_MsgBootloaderJumpToApp, jump, jump, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_bootload_MsgNapDeviceDnaReq_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_bootload_MsgNapDeviceDnaResp_fields[2] = {
    PB_FIELD(  1, UINT32  , REPEATED, CALLBACK, FIRST, swiftnav_sbp_bootload_MsgNapDeviceDnaResp, dna, dna, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
