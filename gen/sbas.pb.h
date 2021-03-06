/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:59 2018. */

#ifndef PB_SWIFTNAV_SBP_SBAS_SBAS_PB_H_INCLUDED
#define PB_SWIFTNAV_SBP_SBAS_SBAS_PB_H_INCLUDED
#include <pb.h>

#include "gnss.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _swiftnav_sbp_sbas_MsgSbasRaw {
    swiftnav_sbp_gnss_GnssSignal sid;
    uint32_t tow;
    uint32_t message_type;
    pb_callback_t data;
/* @@protoc_insertion_point(struct:swiftnav_sbp_sbas_MsgSbasRaw) */
} swiftnav_sbp_sbas_MsgSbasRaw;

/* Default values for struct fields */

/* Initializer values for message structs */
#define swiftnav_sbp_sbas_MsgSbasRaw_init_default {swiftnav_sbp_gnss_GnssSignal_init_default, 0, 0, {{NULL}, NULL}}
#define swiftnav_sbp_sbas_MsgSbasRaw_init_zero   {swiftnav_sbp_gnss_GnssSignal_init_zero, 0, 0, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define swiftnav_sbp_sbas_MsgSbasRaw_sid_tag     1
#define swiftnav_sbp_sbas_MsgSbasRaw_tow_tag     2
#define swiftnav_sbp_sbas_MsgSbasRaw_message_type_tag 3
#define swiftnav_sbp_sbas_MsgSbasRaw_data_tag    4

/* Struct field encoding specification for nanopb */
extern const pb_field_t swiftnav_sbp_sbas_MsgSbasRaw_fields[5];

/* Maximum encoded size of messages (where known) */
/* swiftnav_sbp_sbas_MsgSbasRaw_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SBAS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
