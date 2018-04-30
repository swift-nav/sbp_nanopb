/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:57 2018. */

#include "ndb.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_ndb_MsgNdbEvent_fields[9] = {
    PB_FIELD(  1, UINT64  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_ndb_MsgNdbEvent, recv_time, recv_time, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ndb_MsgNdbEvent, event, recv_time, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ndb_MsgNdbEvent, object_type, event, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ndb_MsgNdbEvent, result, object_type, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ndb_MsgNdbEvent, data_source, result, 0),
    PB_FIELD(  6, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ndb_MsgNdbEvent, object_sid, data_source, &swiftnav_sbp_gnss_GnssSignal_fields),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ndb_MsgNdbEvent, src_sid, object_sid, &swiftnav_sbp_gnss_GnssSignal_fields),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ndb_MsgNdbEvent, original_sender, src_sid, 0),
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
PB_STATIC_ASSERT((pb_membersize(swiftnav_sbp_ndb_MsgNdbEvent, object_sid) < 65536 && pb_membersize(swiftnav_sbp_ndb_MsgNdbEvent, src_sid) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_swiftnav_sbp_ndb_MsgNdbEvent)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(swiftnav_sbp_ndb_MsgNdbEvent, object_sid) < 256 && pb_membersize(swiftnav_sbp_ndb_MsgNdbEvent, src_sid) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_swiftnav_sbp_ndb_MsgNdbEvent)
#endif


/* @@protoc_insertion_point(eof) */
