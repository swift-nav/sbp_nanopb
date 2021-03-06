/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:58 2018. */

#include "piksi.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_piksi_MsgAlmanac_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgSetTime_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgReset_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgReset, flags, flags, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgCwResults_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgCwStart_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgResetFilters_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgResetFilters, filter, filter, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgInitBase_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgThreadState_fields[4] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, swiftnav_sbp_piksi_MsgThreadState, name, name, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgThreadState, cpu, name, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgThreadState, stack_free, cpu, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_UARTChannel_fields[7] = {
    PB_FIELD(  1, FLOAT   , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_UARTChannel, tx_throughput, tx_throughput, 0),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_UARTChannel, rx_throughput, tx_throughput, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_UARTChannel, crc_error_count, rx_throughput, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_UARTChannel, io_error_count, crc_error_count, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_UARTChannel, tx_buffer_level, io_error_count, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_UARTChannel, rx_buffer_level, tx_buffer_level, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_Period_fields[5] = {
    PB_FIELD(  1, SINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_Period, avg, avg, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_Period, pmin, avg, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_Period, pmax, pmin, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_Period, current, pmax, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_Latency_fields[5] = {
    PB_FIELD(  1, SINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_Latency, avg, avg, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_Latency, lmin, avg, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_Latency, lmax, lmin, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_Latency, current, lmax, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgUartState_fields[6] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgUartState, uart_a, uart_a, &swiftnav_sbp_piksi_UARTChannel_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgUartState, uart_b, uart_a, &swiftnav_sbp_piksi_UARTChannel_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgUartState, uart_ftdi, uart_b, &swiftnav_sbp_piksi_UARTChannel_fields),
    PB_FIELD(  4, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgUartState, latency, uart_ftdi, &swiftnav_sbp_piksi_Latency_fields),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgUartState, obs_period, latency, &swiftnav_sbp_piksi_Period_fields),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgIarState_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgIarState, num_hyps, num_hyps, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgMaskSatellite_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgMaskSatellite, mask, mask, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgMaskSatellite, sid, mask, &swiftnav_sbp_gnss_GnssSignal_fields),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgDeviceMonitor_fields[6] = {
    PB_FIELD(  1, SINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgDeviceMonitor, dev_vin, dev_vin, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgDeviceMonitor, cpu_vint, dev_vin, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgDeviceMonitor, cpu_vaux, cpu_vint, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgDeviceMonitor, cpu_temperature, cpu_vaux, 0),
    PB_FIELD(  5, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgDeviceMonitor, fe_temperature, cpu_temperature, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgCommandReq_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgCommandReq, sequence, sequence, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, swiftnav_sbp_piksi_MsgCommandReq, command, sequence, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgCommandResp_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgCommandResp, sequence, sequence, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgCommandResp, code, sequence, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgCommandOutput_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgCommandOutput, sequence, sequence, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, swiftnav_sbp_piksi_MsgCommandOutput, line, sequence, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgNetworkStateReq_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgNetworkStateResp_fields[9] = {
    PB_FIELD(  1, UINT32  , REPEATED, CALLBACK, FIRST, swiftnav_sbp_piksi_MsgNetworkStateResp, ipv4_address, ipv4_address, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgNetworkStateResp, ipv4_mask_size, ipv4_address, 0),
    PB_FIELD(  3, UINT32  , REPEATED, CALLBACK, OTHER, swiftnav_sbp_piksi_MsgNetworkStateResp, ipv6_address, ipv4_mask_size, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgNetworkStateResp, ipv6_mask_size, ipv6_address, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgNetworkStateResp, rx_bytes, ipv6_mask_size, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgNetworkStateResp, tx_bytes, rx_bytes, 0),
    PB_FIELD(  7, STRING  , SINGULAR, CALLBACK, OTHER, swiftnav_sbp_piksi_MsgNetworkStateResp, interface_name, tx_bytes, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgNetworkStateResp, flags, interface_name, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_NetworkUsage_fields[6] = {
    PB_FIELD(  1, UINT64  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_NetworkUsage, duration, duration, 0),
    PB_FIELD(  2, UINT64  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_NetworkUsage, total_bytes, duration, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_NetworkUsage, rx_bytes, total_bytes, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_NetworkUsage, tx_bytes, rx_bytes, 0),
    PB_FIELD(  5, STRING  , SINGULAR, CALLBACK, OTHER, swiftnav_sbp_piksi_NetworkUsage, interface_name, tx_bytes, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgNetworkBandwidthUsage_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, swiftnav_sbp_piksi_MsgNetworkBandwidthUsage, interfaces, interfaces, &swiftnav_sbp_piksi_NetworkUsage_fields),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgCellModemStatus_fields[3] = {
    PB_FIELD(  1, SINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgCellModemStatus, signal_strength, signal_strength, 0),
    PB_FIELD(  2, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgCellModemStatus, signal_error_rate, signal_strength, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_piksi_MsgSpecan_fields[8] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_piksi_MsgSpecan, channel_tag, channel_tag, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgSpecan, t, channel_tag, &swiftnav_sbp_gnss_GpsTime_fields),
    PB_FIELD(  3, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgSpecan, freq_ref, t, 0),
    PB_FIELD(  4, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgSpecan, freq_step, freq_ref, 0),
    PB_FIELD(  5, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgSpecan, amplitude_ref, freq_step, 0),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_piksi_MsgSpecan, amplitude_unit, amplitude_ref, 0),
    PB_FIELD(  7, UINT32  , REPEATED, CALLBACK, OTHER, swiftnav_sbp_piksi_MsgSpecan, amplitude_value, amplitude_unit, 0),
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
PB_STATIC_ASSERT((pb_membersize(swiftnav_sbp_piksi_MsgUartState, uart_a) < 65536 && pb_membersize(swiftnav_sbp_piksi_MsgUartState, uart_b) < 65536 && pb_membersize(swiftnav_sbp_piksi_MsgUartState, uart_ftdi) < 65536 && pb_membersize(swiftnav_sbp_piksi_MsgUartState, latency) < 65536 && pb_membersize(swiftnav_sbp_piksi_MsgUartState, obs_period) < 65536 && pb_membersize(swiftnav_sbp_piksi_MsgMaskSatellite, sid) < 65536 && pb_membersize(swiftnav_sbp_piksi_MsgSpecan, t) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_swiftnav_sbp_piksi_MsgAlmanac_swiftnav_sbp_piksi_MsgSetTime_swiftnav_sbp_piksi_MsgReset_swiftnav_sbp_piksi_MsgCwResults_swiftnav_sbp_piksi_MsgCwStart_swiftnav_sbp_piksi_MsgResetFilters_swiftnav_sbp_piksi_MsgInitBase_swiftnav_sbp_piksi_MsgThreadState_swiftnav_sbp_piksi_UARTChannel_swiftnav_sbp_piksi_Period_swiftnav_sbp_piksi_Latency_swiftnav_sbp_piksi_MsgUartState_swiftnav_sbp_piksi_MsgIarState_swiftnav_sbp_piksi_MsgMaskSatellite_swiftnav_sbp_piksi_MsgDeviceMonitor_swiftnav_sbp_piksi_MsgCommandReq_swiftnav_sbp_piksi_MsgCommandResp_swiftnav_sbp_piksi_MsgCommandOutput_swiftnav_sbp_piksi_MsgNetworkStateReq_swiftnav_sbp_piksi_MsgNetworkStateResp_swiftnav_sbp_piksi_NetworkUsage_swiftnav_sbp_piksi_MsgNetworkBandwidthUsage_swiftnav_sbp_piksi_MsgCellModemStatus_swiftnav_sbp_piksi_MsgSpecan)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(swiftnav_sbp_piksi_MsgUartState, uart_a) < 256 && pb_membersize(swiftnav_sbp_piksi_MsgUartState, uart_b) < 256 && pb_membersize(swiftnav_sbp_piksi_MsgUartState, uart_ftdi) < 256 && pb_membersize(swiftnav_sbp_piksi_MsgUartState, latency) < 256 && pb_membersize(swiftnav_sbp_piksi_MsgUartState, obs_period) < 256 && pb_membersize(swiftnav_sbp_piksi_MsgMaskSatellite, sid) < 256 && pb_membersize(swiftnav_sbp_piksi_MsgSpecan, t) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_swiftnav_sbp_piksi_MsgAlmanac_swiftnav_sbp_piksi_MsgSetTime_swiftnav_sbp_piksi_MsgReset_swiftnav_sbp_piksi_MsgCwResults_swiftnav_sbp_piksi_MsgCwStart_swiftnav_sbp_piksi_MsgResetFilters_swiftnav_sbp_piksi_MsgInitBase_swiftnav_sbp_piksi_MsgThreadState_swiftnav_sbp_piksi_UARTChannel_swiftnav_sbp_piksi_Period_swiftnav_sbp_piksi_Latency_swiftnav_sbp_piksi_MsgUartState_swiftnav_sbp_piksi_MsgIarState_swiftnav_sbp_piksi_MsgMaskSatellite_swiftnav_sbp_piksi_MsgDeviceMonitor_swiftnav_sbp_piksi_MsgCommandReq_swiftnav_sbp_piksi_MsgCommandResp_swiftnav_sbp_piksi_MsgCommandOutput_swiftnav_sbp_piksi_MsgNetworkStateReq_swiftnav_sbp_piksi_MsgNetworkStateResp_swiftnav_sbp_piksi_NetworkUsage_swiftnav_sbp_piksi_MsgNetworkBandwidthUsage_swiftnav_sbp_piksi_MsgCellModemStatus_swiftnav_sbp_piksi_MsgSpecan)
#endif


/* @@protoc_insertion_point(eof) */
