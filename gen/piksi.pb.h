/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:58 2018. */

#ifndef PB_SWIFTNAV_SBP_PIKSI_PIKSI_PB_H_INCLUDED
#define PB_SWIFTNAV_SBP_PIKSI_PIKSI_PB_H_INCLUDED
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
typedef struct _swiftnav_sbp_piksi_MsgAlmanac {
    char dummy_field;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgAlmanac) */
} swiftnav_sbp_piksi_MsgAlmanac;

typedef struct _swiftnav_sbp_piksi_MsgCwResults {
    char dummy_field;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgCwResults) */
} swiftnav_sbp_piksi_MsgCwResults;

typedef struct _swiftnav_sbp_piksi_MsgCwStart {
    char dummy_field;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgCwStart) */
} swiftnav_sbp_piksi_MsgCwStart;

typedef struct _swiftnav_sbp_piksi_MsgInitBase {
    char dummy_field;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgInitBase) */
} swiftnav_sbp_piksi_MsgInitBase;

typedef struct _swiftnav_sbp_piksi_MsgNetworkBandwidthUsage {
    pb_callback_t interfaces;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgNetworkBandwidthUsage) */
} swiftnav_sbp_piksi_MsgNetworkBandwidthUsage;

typedef struct _swiftnav_sbp_piksi_MsgNetworkStateReq {
    char dummy_field;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgNetworkStateReq) */
} swiftnav_sbp_piksi_MsgNetworkStateReq;

typedef struct _swiftnav_sbp_piksi_MsgSetTime {
    char dummy_field;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgSetTime) */
} swiftnav_sbp_piksi_MsgSetTime;

typedef struct _swiftnav_sbp_piksi_Latency {
    int32_t avg;
    int32_t lmin;
    int32_t lmax;
    int32_t current;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_Latency) */
} swiftnav_sbp_piksi_Latency;

typedef struct _swiftnav_sbp_piksi_MsgCellModemStatus {
    int32_t signal_strength;
    float signal_error_rate;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgCellModemStatus) */
} swiftnav_sbp_piksi_MsgCellModemStatus;

typedef struct _swiftnav_sbp_piksi_MsgCommandOutput {
    uint32_t sequence;
    pb_callback_t line;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgCommandOutput) */
} swiftnav_sbp_piksi_MsgCommandOutput;

typedef struct _swiftnav_sbp_piksi_MsgCommandReq {
    uint32_t sequence;
    pb_callback_t command;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgCommandReq) */
} swiftnav_sbp_piksi_MsgCommandReq;

typedef struct _swiftnav_sbp_piksi_MsgCommandResp {
    uint32_t sequence;
    int32_t code;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgCommandResp) */
} swiftnav_sbp_piksi_MsgCommandResp;

typedef struct _swiftnav_sbp_piksi_MsgDeviceMonitor {
    int32_t dev_vin;
    int32_t cpu_vint;
    int32_t cpu_vaux;
    int32_t cpu_temperature;
    int32_t fe_temperature;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgDeviceMonitor) */
} swiftnav_sbp_piksi_MsgDeviceMonitor;

typedef struct _swiftnav_sbp_piksi_MsgIarState {
    uint32_t num_hyps;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgIarState) */
} swiftnav_sbp_piksi_MsgIarState;

typedef struct _swiftnav_sbp_piksi_MsgMaskSatellite {
    uint32_t mask;
    swiftnav_sbp_gnss_GnssSignal sid;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgMaskSatellite) */
} swiftnav_sbp_piksi_MsgMaskSatellite;

typedef struct _swiftnav_sbp_piksi_MsgNetworkStateResp {
    pb_callback_t ipv4_address;
    uint32_t ipv4_mask_size;
    pb_callback_t ipv6_address;
    uint32_t ipv6_mask_size;
    uint32_t rx_bytes;
    uint32_t tx_bytes;
    pb_callback_t interface_name;
    uint32_t flags;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgNetworkStateResp) */
} swiftnav_sbp_piksi_MsgNetworkStateResp;

typedef struct _swiftnav_sbp_piksi_MsgReset {
    uint32_t flags;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgReset) */
} swiftnav_sbp_piksi_MsgReset;

typedef struct _swiftnav_sbp_piksi_MsgResetFilters {
    uint32_t filter;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgResetFilters) */
} swiftnav_sbp_piksi_MsgResetFilters;

typedef struct _swiftnav_sbp_piksi_MsgSpecan {
    uint32_t channel_tag;
    swiftnav_sbp_gnss_GpsTime t;
    float freq_ref;
    float freq_step;
    float amplitude_ref;
    float amplitude_unit;
    pb_callback_t amplitude_value;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgSpecan) */
} swiftnav_sbp_piksi_MsgSpecan;

typedef struct _swiftnav_sbp_piksi_MsgThreadState {
    pb_callback_t name;
    uint32_t cpu;
    uint32_t stack_free;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgThreadState) */
} swiftnav_sbp_piksi_MsgThreadState;

typedef struct _swiftnav_sbp_piksi_NetworkUsage {
    uint64_t duration;
    uint64_t total_bytes;
    uint32_t rx_bytes;
    uint32_t tx_bytes;
    pb_callback_t interface_name;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_NetworkUsage) */
} swiftnav_sbp_piksi_NetworkUsage;

typedef struct _swiftnav_sbp_piksi_Period {
    int32_t avg;
    int32_t pmin;
    int32_t pmax;
    int32_t current;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_Period) */
} swiftnav_sbp_piksi_Period;

typedef struct _swiftnav_sbp_piksi_UARTChannel {
    float tx_throughput;
    float rx_throughput;
    uint32_t crc_error_count;
    uint32_t io_error_count;
    uint32_t tx_buffer_level;
    uint32_t rx_buffer_level;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_UARTChannel) */
} swiftnav_sbp_piksi_UARTChannel;

typedef struct _swiftnav_sbp_piksi_MsgUartState {
    swiftnav_sbp_piksi_UARTChannel uart_a;
    swiftnav_sbp_piksi_UARTChannel uart_b;
    swiftnav_sbp_piksi_UARTChannel uart_ftdi;
    swiftnav_sbp_piksi_Latency latency;
    swiftnav_sbp_piksi_Period obs_period;
/* @@protoc_insertion_point(struct:swiftnav_sbp_piksi_MsgUartState) */
} swiftnav_sbp_piksi_MsgUartState;

/* Default values for struct fields */

/* Initializer values for message structs */
#define swiftnav_sbp_piksi_MsgAlmanac_init_default {0}
#define swiftnav_sbp_piksi_MsgSetTime_init_default {0}
#define swiftnav_sbp_piksi_MsgReset_init_default {0}
#define swiftnav_sbp_piksi_MsgCwResults_init_default {0}
#define swiftnav_sbp_piksi_MsgCwStart_init_default {0}
#define swiftnav_sbp_piksi_MsgResetFilters_init_default {0}
#define swiftnav_sbp_piksi_MsgInitBase_init_default {0}
#define swiftnav_sbp_piksi_MsgThreadState_init_default {{{NULL}, NULL}, 0, 0}
#define swiftnav_sbp_piksi_UARTChannel_init_default {0, 0, 0, 0, 0, 0}
#define swiftnav_sbp_piksi_Period_init_default   {0, 0, 0, 0}
#define swiftnav_sbp_piksi_Latency_init_default  {0, 0, 0, 0}
#define swiftnav_sbp_piksi_MsgUartState_init_default {swiftnav_sbp_piksi_UARTChannel_init_default, swiftnav_sbp_piksi_UARTChannel_init_default, swiftnav_sbp_piksi_UARTChannel_init_default, swiftnav_sbp_piksi_Latency_init_default, swiftnav_sbp_piksi_Period_init_default}
#define swiftnav_sbp_piksi_MsgIarState_init_default {0}
#define swiftnav_sbp_piksi_MsgMaskSatellite_init_default {0, swiftnav_sbp_gnss_GnssSignal_init_default}
#define swiftnav_sbp_piksi_MsgDeviceMonitor_init_default {0, 0, 0, 0, 0}
#define swiftnav_sbp_piksi_MsgCommandReq_init_default {0, {{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgCommandResp_init_default {0, 0}
#define swiftnav_sbp_piksi_MsgCommandOutput_init_default {0, {{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgNetworkStateReq_init_default {0}
#define swiftnav_sbp_piksi_MsgNetworkStateResp_init_default {{{NULL}, NULL}, 0, {{NULL}, NULL}, 0, 0, 0, {{NULL}, NULL}, 0}
#define swiftnav_sbp_piksi_NetworkUsage_init_default {0, 0, 0, 0, {{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgNetworkBandwidthUsage_init_default {{{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgCellModemStatus_init_default {0, 0}
#define swiftnav_sbp_piksi_MsgSpecan_init_default {0, swiftnav_sbp_gnss_GpsTime_init_default, 0, 0, 0, 0, {{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgAlmanac_init_zero  {0}
#define swiftnav_sbp_piksi_MsgSetTime_init_zero  {0}
#define swiftnav_sbp_piksi_MsgReset_init_zero    {0}
#define swiftnav_sbp_piksi_MsgCwResults_init_zero {0}
#define swiftnav_sbp_piksi_MsgCwStart_init_zero  {0}
#define swiftnav_sbp_piksi_MsgResetFilters_init_zero {0}
#define swiftnav_sbp_piksi_MsgInitBase_init_zero {0}
#define swiftnav_sbp_piksi_MsgThreadState_init_zero {{{NULL}, NULL}, 0, 0}
#define swiftnav_sbp_piksi_UARTChannel_init_zero {0, 0, 0, 0, 0, 0}
#define swiftnav_sbp_piksi_Period_init_zero      {0, 0, 0, 0}
#define swiftnav_sbp_piksi_Latency_init_zero     {0, 0, 0, 0}
#define swiftnav_sbp_piksi_MsgUartState_init_zero {swiftnav_sbp_piksi_UARTChannel_init_zero, swiftnav_sbp_piksi_UARTChannel_init_zero, swiftnav_sbp_piksi_UARTChannel_init_zero, swiftnav_sbp_piksi_Latency_init_zero, swiftnav_sbp_piksi_Period_init_zero}
#define swiftnav_sbp_piksi_MsgIarState_init_zero {0}
#define swiftnav_sbp_piksi_MsgMaskSatellite_init_zero {0, swiftnav_sbp_gnss_GnssSignal_init_zero}
#define swiftnav_sbp_piksi_MsgDeviceMonitor_init_zero {0, 0, 0, 0, 0}
#define swiftnav_sbp_piksi_MsgCommandReq_init_zero {0, {{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgCommandResp_init_zero {0, 0}
#define swiftnav_sbp_piksi_MsgCommandOutput_init_zero {0, {{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgNetworkStateReq_init_zero {0}
#define swiftnav_sbp_piksi_MsgNetworkStateResp_init_zero {{{NULL}, NULL}, 0, {{NULL}, NULL}, 0, 0, 0, {{NULL}, NULL}, 0}
#define swiftnav_sbp_piksi_NetworkUsage_init_zero {0, 0, 0, 0, {{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgNetworkBandwidthUsage_init_zero {{{NULL}, NULL}}
#define swiftnav_sbp_piksi_MsgCellModemStatus_init_zero {0, 0}
#define swiftnav_sbp_piksi_MsgSpecan_init_zero   {0, swiftnav_sbp_gnss_GpsTime_init_zero, 0, 0, 0, 0, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define swiftnav_sbp_piksi_MsgNetworkBandwidthUsage_interfaces_tag 1
#define swiftnav_sbp_piksi_Latency_avg_tag       1
#define swiftnav_sbp_piksi_Latency_lmin_tag      2
#define swiftnav_sbp_piksi_Latency_lmax_tag      3
#define swiftnav_sbp_piksi_Latency_current_tag   4
#define swiftnav_sbp_piksi_MsgCellModemStatus_signal_strength_tag 1
#define swiftnav_sbp_piksi_MsgCellModemStatus_signal_error_rate_tag 2
#define swiftnav_sbp_piksi_MsgCommandOutput_sequence_tag 1
#define swiftnav_sbp_piksi_MsgCommandOutput_line_tag 2
#define swiftnav_sbp_piksi_MsgCommandReq_sequence_tag 1
#define swiftnav_sbp_piksi_MsgCommandReq_command_tag 2
#define swiftnav_sbp_piksi_MsgCommandResp_sequence_tag 1
#define swiftnav_sbp_piksi_MsgCommandResp_code_tag 2
#define swiftnav_sbp_piksi_MsgDeviceMonitor_dev_vin_tag 1
#define swiftnav_sbp_piksi_MsgDeviceMonitor_cpu_vint_tag 2
#define swiftnav_sbp_piksi_MsgDeviceMonitor_cpu_vaux_tag 3
#define swiftnav_sbp_piksi_MsgDeviceMonitor_cpu_temperature_tag 4
#define swiftnav_sbp_piksi_MsgDeviceMonitor_fe_temperature_tag 5
#define swiftnav_sbp_piksi_MsgIarState_num_hyps_tag 1
#define swiftnav_sbp_piksi_MsgMaskSatellite_mask_tag 1
#define swiftnav_sbp_piksi_MsgMaskSatellite_sid_tag 2
#define swiftnav_sbp_piksi_MsgNetworkStateResp_ipv4_address_tag 1
#define swiftnav_sbp_piksi_MsgNetworkStateResp_ipv4_mask_size_tag 2
#define swiftnav_sbp_piksi_MsgNetworkStateResp_ipv6_address_tag 3
#define swiftnav_sbp_piksi_MsgNetworkStateResp_ipv6_mask_size_tag 4
#define swiftnav_sbp_piksi_MsgNetworkStateResp_rx_bytes_tag 5
#define swiftnav_sbp_piksi_MsgNetworkStateResp_tx_bytes_tag 6
#define swiftnav_sbp_piksi_MsgNetworkStateResp_interface_name_tag 7
#define swiftnav_sbp_piksi_MsgNetworkStateResp_flags_tag 8
#define swiftnav_sbp_piksi_MsgReset_flags_tag    1
#define swiftnav_sbp_piksi_MsgResetFilters_filter_tag 1
#define swiftnav_sbp_piksi_MsgSpecan_channel_tag_tag 1
#define swiftnav_sbp_piksi_MsgSpecan_t_tag       2
#define swiftnav_sbp_piksi_MsgSpecan_freq_ref_tag 3
#define swiftnav_sbp_piksi_MsgSpecan_freq_step_tag 4
#define swiftnav_sbp_piksi_MsgSpecan_amplitude_ref_tag 5
#define swiftnav_sbp_piksi_MsgSpecan_amplitude_unit_tag 6
#define swiftnav_sbp_piksi_MsgSpecan_amplitude_value_tag 7
#define swiftnav_sbp_piksi_MsgThreadState_name_tag 1
#define swiftnav_sbp_piksi_MsgThreadState_cpu_tag 2
#define swiftnav_sbp_piksi_MsgThreadState_stack_free_tag 3
#define swiftnav_sbp_piksi_NetworkUsage_duration_tag 1
#define swiftnav_sbp_piksi_NetworkUsage_total_bytes_tag 2
#define swiftnav_sbp_piksi_NetworkUsage_rx_bytes_tag 3
#define swiftnav_sbp_piksi_NetworkUsage_tx_bytes_tag 4
#define swiftnav_sbp_piksi_NetworkUsage_interface_name_tag 5
#define swiftnav_sbp_piksi_Period_avg_tag        1
#define swiftnav_sbp_piksi_Period_pmin_tag       2
#define swiftnav_sbp_piksi_Period_pmax_tag       3
#define swiftnav_sbp_piksi_Period_current_tag    4
#define swiftnav_sbp_piksi_UARTChannel_tx_throughput_tag 1
#define swiftnav_sbp_piksi_UARTChannel_rx_throughput_tag 2
#define swiftnav_sbp_piksi_UARTChannel_crc_error_count_tag 3
#define swiftnav_sbp_piksi_UARTChannel_io_error_count_tag 4
#define swiftnav_sbp_piksi_UARTChannel_tx_buffer_level_tag 5
#define swiftnav_sbp_piksi_UARTChannel_rx_buffer_level_tag 6
#define swiftnav_sbp_piksi_MsgUartState_uart_a_tag 1
#define swiftnav_sbp_piksi_MsgUartState_uart_b_tag 2
#define swiftnav_sbp_piksi_MsgUartState_uart_ftdi_tag 3
#define swiftnav_sbp_piksi_MsgUartState_latency_tag 4
#define swiftnav_sbp_piksi_MsgUartState_obs_period_tag 5

/* Struct field encoding specification for nanopb */
extern const pb_field_t swiftnav_sbp_piksi_MsgAlmanac_fields[1];
extern const pb_field_t swiftnav_sbp_piksi_MsgSetTime_fields[1];
extern const pb_field_t swiftnav_sbp_piksi_MsgReset_fields[2];
extern const pb_field_t swiftnav_sbp_piksi_MsgCwResults_fields[1];
extern const pb_field_t swiftnav_sbp_piksi_MsgCwStart_fields[1];
extern const pb_field_t swiftnav_sbp_piksi_MsgResetFilters_fields[2];
extern const pb_field_t swiftnav_sbp_piksi_MsgInitBase_fields[1];
extern const pb_field_t swiftnav_sbp_piksi_MsgThreadState_fields[4];
extern const pb_field_t swiftnav_sbp_piksi_UARTChannel_fields[7];
extern const pb_field_t swiftnav_sbp_piksi_Period_fields[5];
extern const pb_field_t swiftnav_sbp_piksi_Latency_fields[5];
extern const pb_field_t swiftnav_sbp_piksi_MsgUartState_fields[6];
extern const pb_field_t swiftnav_sbp_piksi_MsgIarState_fields[2];
extern const pb_field_t swiftnav_sbp_piksi_MsgMaskSatellite_fields[3];
extern const pb_field_t swiftnav_sbp_piksi_MsgDeviceMonitor_fields[6];
extern const pb_field_t swiftnav_sbp_piksi_MsgCommandReq_fields[3];
extern const pb_field_t swiftnav_sbp_piksi_MsgCommandResp_fields[3];
extern const pb_field_t swiftnav_sbp_piksi_MsgCommandOutput_fields[3];
extern const pb_field_t swiftnav_sbp_piksi_MsgNetworkStateReq_fields[1];
extern const pb_field_t swiftnav_sbp_piksi_MsgNetworkStateResp_fields[9];
extern const pb_field_t swiftnav_sbp_piksi_NetworkUsage_fields[6];
extern const pb_field_t swiftnav_sbp_piksi_MsgNetworkBandwidthUsage_fields[2];
extern const pb_field_t swiftnav_sbp_piksi_MsgCellModemStatus_fields[3];
extern const pb_field_t swiftnav_sbp_piksi_MsgSpecan_fields[8];

/* Maximum encoded size of messages (where known) */
#define swiftnav_sbp_piksi_MsgAlmanac_size       0
#define swiftnav_sbp_piksi_MsgSetTime_size       0
#define swiftnav_sbp_piksi_MsgReset_size         6
#define swiftnav_sbp_piksi_MsgCwResults_size     0
#define swiftnav_sbp_piksi_MsgCwStart_size       0
#define swiftnav_sbp_piksi_MsgResetFilters_size  6
#define swiftnav_sbp_piksi_MsgInitBase_size      0
/* swiftnav_sbp_piksi_MsgThreadState_size depends on runtime parameters */
#define swiftnav_sbp_piksi_UARTChannel_size      34
#define swiftnav_sbp_piksi_Period_size           24
#define swiftnav_sbp_piksi_Latency_size          24
#define swiftnav_sbp_piksi_MsgUartState_size     160
#define swiftnav_sbp_piksi_MsgIarState_size      6
#define swiftnav_sbp_piksi_MsgMaskSatellite_size 20
#define swiftnav_sbp_piksi_MsgDeviceMonitor_size 30
/* swiftnav_sbp_piksi_MsgCommandReq_size depends on runtime parameters */
#define swiftnav_sbp_piksi_MsgCommandResp_size   12
/* swiftnav_sbp_piksi_MsgCommandOutput_size depends on runtime parameters */
#define swiftnav_sbp_piksi_MsgNetworkStateReq_size 0
/* swiftnav_sbp_piksi_MsgNetworkStateResp_size depends on runtime parameters */
/* swiftnav_sbp_piksi_NetworkUsage_size depends on runtime parameters */
/* swiftnav_sbp_piksi_MsgNetworkBandwidthUsage_size depends on runtime parameters */
#define swiftnav_sbp_piksi_MsgCellModemStatus_size 11
/* swiftnav_sbp_piksi_MsgSpecan_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PIKSI_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
