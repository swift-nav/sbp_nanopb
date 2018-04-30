/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:13:00 2018. */

#ifndef PB_SWIFTNAV_SBP_TRACKING_TRACKING_PB_H_INCLUDED
#define PB_SWIFTNAV_SBP_TRACKING_TRACKING_PB_H_INCLUDED
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
typedef struct _swiftnav_sbp_tracking_MsgMeasurementState {
    pb_callback_t states;
/* @@protoc_insertion_point(struct:swiftnav_sbp_tracking_MsgMeasurementState) */
} swiftnav_sbp_tracking_MsgMeasurementState;

typedef struct _swiftnav_sbp_tracking_MsgTrackingState {
    pb_callback_t states;
/* @@protoc_insertion_point(struct:swiftnav_sbp_tracking_MsgTrackingState) */
} swiftnav_sbp_tracking_MsgTrackingState;

typedef struct _swiftnav_sbp_tracking_MeasurementState {
    swiftnav_sbp_gnss_GnssSignal mesid;
    uint32_t cn0;
/* @@protoc_insertion_point(struct:swiftnav_sbp_tracking_MeasurementState) */
} swiftnav_sbp_tracking_MeasurementState;

typedef struct _swiftnav_sbp_tracking_MsgTrackingIq {
    uint32_t channel;
    swiftnav_sbp_gnss_GnssSignal sid;
    pb_callback_t corrs;
/* @@protoc_insertion_point(struct:swiftnav_sbp_tracking_MsgTrackingIq) */
} swiftnav_sbp_tracking_MsgTrackingIq;

typedef struct _swiftnav_sbp_tracking_TrackingChannelCorrelation {
    int32_t I;
    int32_t Q;
/* @@protoc_insertion_point(struct:swiftnav_sbp_tracking_TrackingChannelCorrelation) */
} swiftnav_sbp_tracking_TrackingChannelCorrelation;

typedef struct _swiftnav_sbp_tracking_TrackingChannelState {
    swiftnav_sbp_gnss_GnssSignal sid;
    uint32_t fcn;
    uint32_t cn0;
/* @@protoc_insertion_point(struct:swiftnav_sbp_tracking_TrackingChannelState) */
} swiftnav_sbp_tracking_TrackingChannelState;

/* Default values for struct fields */

/* Initializer values for message structs */
#define swiftnav_sbp_tracking_TrackingChannelState_init_default {swiftnav_sbp_gnss_GnssSignal_init_default, 0, 0}
#define swiftnav_sbp_tracking_MsgTrackingState_init_default {{{NULL}, NULL}}
#define swiftnav_sbp_tracking_MeasurementState_init_default {swiftnav_sbp_gnss_GnssSignal_init_default, 0}
#define swiftnav_sbp_tracking_MsgMeasurementState_init_default {{{NULL}, NULL}}
#define swiftnav_sbp_tracking_TrackingChannelCorrelation_init_default {0, 0}
#define swiftnav_sbp_tracking_MsgTrackingIq_init_default {0, swiftnav_sbp_gnss_GnssSignal_init_default, {{NULL}, NULL}}
#define swiftnav_sbp_tracking_TrackingChannelState_init_zero {swiftnav_sbp_gnss_GnssSignal_init_zero, 0, 0}
#define swiftnav_sbp_tracking_MsgTrackingState_init_zero {{{NULL}, NULL}}
#define swiftnav_sbp_tracking_MeasurementState_init_zero {swiftnav_sbp_gnss_GnssSignal_init_zero, 0}
#define swiftnav_sbp_tracking_MsgMeasurementState_init_zero {{{NULL}, NULL}}
#define swiftnav_sbp_tracking_TrackingChannelCorrelation_init_zero {0, 0}
#define swiftnav_sbp_tracking_MsgTrackingIq_init_zero {0, swiftnav_sbp_gnss_GnssSignal_init_zero, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define swiftnav_sbp_tracking_MsgMeasurementState_states_tag 1
#define swiftnav_sbp_tracking_MsgTrackingState_states_tag 1
#define swiftnav_sbp_tracking_MeasurementState_mesid_tag 1
#define swiftnav_sbp_tracking_MeasurementState_cn0_tag 2
#define swiftnav_sbp_tracking_MsgTrackingIq_channel_tag 1
#define swiftnav_sbp_tracking_MsgTrackingIq_sid_tag 2
#define swiftnav_sbp_tracking_MsgTrackingIq_corrs_tag 3
#define swiftnav_sbp_tracking_TrackingChannelCorrelation_I_tag 1
#define swiftnav_sbp_tracking_TrackingChannelCorrelation_Q_tag 2
#define swiftnav_sbp_tracking_TrackingChannelState_sid_tag 1
#define swiftnav_sbp_tracking_TrackingChannelState_fcn_tag 2
#define swiftnav_sbp_tracking_TrackingChannelState_cn0_tag 3

/* Struct field encoding specification for nanopb */
extern const pb_field_t swiftnav_sbp_tracking_TrackingChannelState_fields[4];
extern const pb_field_t swiftnav_sbp_tracking_MsgTrackingState_fields[2];
extern const pb_field_t swiftnav_sbp_tracking_MeasurementState_fields[3];
extern const pb_field_t swiftnav_sbp_tracking_MsgMeasurementState_fields[2];
extern const pb_field_t swiftnav_sbp_tracking_TrackingChannelCorrelation_fields[3];
extern const pb_field_t swiftnav_sbp_tracking_MsgTrackingIq_fields[4];

/* Maximum encoded size of messages (where known) */
#define swiftnav_sbp_tracking_TrackingChannelState_size 26
/* swiftnav_sbp_tracking_MsgTrackingState_size depends on runtime parameters */
#define swiftnav_sbp_tracking_MeasurementState_size 20
/* swiftnav_sbp_tracking_MsgMeasurementState_size depends on runtime parameters */
#define swiftnav_sbp_tracking_TrackingChannelCorrelation_size 12
/* swiftnav_sbp_tracking_MsgTrackingIq_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define TRACKING_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif