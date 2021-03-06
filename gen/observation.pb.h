/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:58 2018. */

#ifndef PB_SWIFTNAV_SBP_OBSERVATION_OBSERVATION_PB_H_INCLUDED
#define PB_SWIFTNAV_SBP_OBSERVATION_OBSERVATION_PB_H_INCLUDED
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
typedef struct _swiftnav_sbp_observation_AlmanacCommonContent {
    swiftnav_sbp_gnss_GnssSignal sid;
    swiftnav_sbp_gnss_GpsTimeSec toa;
    double ura;
    uint32_t fit_interval;
    uint32_t valid;
    uint32_t health_bits;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_AlmanacCommonContent) */
} swiftnav_sbp_observation_AlmanacCommonContent;

typedef struct _swiftnav_sbp_observation_Doppler {
    int32_t i;
    uint32_t f;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_Doppler) */
} swiftnav_sbp_observation_Doppler;

typedef struct _swiftnav_sbp_observation_EphemerisCommonContent {
    swiftnav_sbp_gnss_GnssSignal sid;
    swiftnav_sbp_gnss_GpsTimeSec toe;
    double ura;
    uint32_t fit_interval;
    uint32_t valid;
    uint32_t health_bits;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_EphemerisCommonContent) */
} swiftnav_sbp_observation_EphemerisCommonContent;

typedef struct _swiftnav_sbp_observation_MsgBasePosEcef {
    double x;
    double y;
    double z;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgBasePosEcef) */
} swiftnav_sbp_observation_MsgBasePosEcef;

typedef struct _swiftnav_sbp_observation_MsgBasePosLlh {
    double lat;
    double lon;
    double height;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgBasePosLlh) */
} swiftnav_sbp_observation_MsgBasePosLlh;

typedef struct _swiftnav_sbp_observation_MsgGloBiases {
    uint32_t mask;
    int32_t l1ca_bias;
    int32_t l1p_bias;
    int32_t l2ca_bias;
    int32_t l2p_bias;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgGloBiases) */
} swiftnav_sbp_observation_MsgGloBiases;

typedef struct _swiftnav_sbp_observation_MsgGroupDelay {
    swiftnav_sbp_gnss_GpsTimeSec t_op;
    swiftnav_sbp_gnss_GnssSignal sid;
    uint32_t valid;
    int32_t tgd;
    int32_t isc_l1ca;
    int32_t isc_l2c;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgGroupDelay) */
} swiftnav_sbp_observation_MsgGroupDelay;

typedef struct _swiftnav_sbp_observation_MsgIono {
    swiftnav_sbp_gnss_GpsTimeSec t_nmct;
    double a0;
    double a1;
    double a2;
    double a3;
    double b0;
    double b1;
    double b2;
    double b3;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgIono) */
} swiftnav_sbp_observation_MsgIono;

typedef struct _swiftnav_sbp_observation_MsgSvConfigurationGps {
    swiftnav_sbp_gnss_GpsTimeSec t_nmct;
    uint32_t l2c_mask;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgSvConfigurationGps) */
} swiftnav_sbp_observation_MsgSvConfigurationGps;

typedef struct _swiftnav_sbp_observation_ObservationHeader {
    swiftnav_sbp_gnss_GpsTime t;
    uint32_t n_obs;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_ObservationHeader) */
} swiftnav_sbp_observation_ObservationHeader;

typedef struct _swiftnav_sbp_observation_MsgAlmanacGlo {
    swiftnav_sbp_observation_AlmanacCommonContent common;
    double lambda_na;
    double t_lambda_na;
    double i;
    double t;
    double t_dot;
    double epsilon;
    double omega;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgAlmanacGlo) */
} swiftnav_sbp_observation_MsgAlmanacGlo;

typedef struct _swiftnav_sbp_observation_MsgAlmanacGps {
    swiftnav_sbp_observation_AlmanacCommonContent common;
    double m0;
    double ecc;
    double sqrta;
    double omega0;
    double omegadot;
    double w;
    double inc;
    double af0;
    double af1;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgAlmanacGps) */
} swiftnav_sbp_observation_MsgAlmanacGps;

typedef struct _swiftnav_sbp_observation_MsgEphemerisGlo {
    swiftnav_sbp_observation_EphemerisCommonContent common;
    double gamma;
    double tau;
    double d_tau;
    pb_callback_t pos;
    pb_callback_t vel;
    pb_callback_t acc;
    uint32_t fcn;
    uint32_t iod;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgEphemerisGlo) */
} swiftnav_sbp_observation_MsgEphemerisGlo;

typedef struct _swiftnav_sbp_observation_MsgEphemerisGps {
    swiftnav_sbp_observation_EphemerisCommonContent common;
    double tgd;
    double c_rs;
    double c_rc;
    double c_uc;
    double c_us;
    double c_ic;
    double c_is;
    double dn;
    double m0;
    double ecc;
    double sqrta;
    double omega0;
    double omegadot;
    double w;
    double inc;
    double inc_dot;
    double af0;
    double af1;
    double af2;
    swiftnav_sbp_gnss_GpsTimeSec toc;
    uint32_t iode;
    uint32_t iodc;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgEphemerisGps) */
} swiftnav_sbp_observation_MsgEphemerisGps;

typedef struct _swiftnav_sbp_observation_MsgEphemerisSbas {
    swiftnav_sbp_observation_EphemerisCommonContent common;
    pb_callback_t pos;
    pb_callback_t vel;
    pb_callback_t acc;
    double a_gf0;
    double a_gf1;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgEphemerisSbas) */
} swiftnav_sbp_observation_MsgEphemerisSbas;

typedef struct _swiftnav_sbp_observation_MsgObs {
    swiftnav_sbp_observation_ObservationHeader header;
    pb_callback_t obs;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_MsgObs) */
} swiftnav_sbp_observation_MsgObs;

typedef struct _swiftnav_sbp_observation_PackedObsContent {
    uint32_t P;
    swiftnav_sbp_gnss_CarrierPhase L;
    swiftnav_sbp_observation_Doppler D;
    uint32_t cn0;
    uint32_t lock;
    uint32_t flags;
    swiftnav_sbp_gnss_GnssSignal sid;
/* @@protoc_insertion_point(struct:swiftnav_sbp_observation_PackedObsContent) */
} swiftnav_sbp_observation_PackedObsContent;

/* Default values for struct fields */

/* Initializer values for message structs */
#define swiftnav_sbp_observation_ObservationHeader_init_default {swiftnav_sbp_gnss_GpsTime_init_default, 0}
#define swiftnav_sbp_observation_Doppler_init_default {0, 0}
#define swiftnav_sbp_observation_PackedObsContent_init_default {0, swiftnav_sbp_gnss_CarrierPhase_init_default, swiftnav_sbp_observation_Doppler_init_default, 0, 0, 0, swiftnav_sbp_gnss_GnssSignal_init_default}
#define swiftnav_sbp_observation_MsgObs_init_default {swiftnav_sbp_observation_ObservationHeader_init_default, {{NULL}, NULL}}
#define swiftnav_sbp_observation_MsgBasePosLlh_init_default {0, 0, 0}
#define swiftnav_sbp_observation_MsgBasePosEcef_init_default {0, 0, 0}
#define swiftnav_sbp_observation_EphemerisCommonContent_init_default {swiftnav_sbp_gnss_GnssSignal_init_default, swiftnav_sbp_gnss_GpsTimeSec_init_default, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgEphemerisGps_init_default {swiftnav_sbp_observation_EphemerisCommonContent_init_default, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, swiftnav_sbp_gnss_GpsTimeSec_init_default, 0, 0}
#define swiftnav_sbp_observation_MsgEphemerisSbas_init_default {swiftnav_sbp_observation_EphemerisCommonContent_init_default, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define swiftnav_sbp_observation_MsgEphemerisGlo_init_default {swiftnav_sbp_observation_EphemerisCommonContent_init_default, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define swiftnav_sbp_observation_MsgIono_init_default {swiftnav_sbp_gnss_GpsTimeSec_init_default, 0, 0, 0, 0, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgSvConfigurationGps_init_default {swiftnav_sbp_gnss_GpsTimeSec_init_default, 0}
#define swiftnav_sbp_observation_MsgGroupDelay_init_default {swiftnav_sbp_gnss_GpsTimeSec_init_default, swiftnav_sbp_gnss_GnssSignal_init_default, 0, 0, 0, 0}
#define swiftnav_sbp_observation_AlmanacCommonContent_init_default {swiftnav_sbp_gnss_GnssSignal_init_default, swiftnav_sbp_gnss_GpsTimeSec_init_default, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgAlmanacGps_init_default {swiftnav_sbp_observation_AlmanacCommonContent_init_default, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgAlmanacGlo_init_default {swiftnav_sbp_observation_AlmanacCommonContent_init_default, 0, 0, 0, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgGloBiases_init_default {0, 0, 0, 0, 0}
#define swiftnav_sbp_observation_ObservationHeader_init_zero {swiftnav_sbp_gnss_GpsTime_init_zero, 0}
#define swiftnav_sbp_observation_Doppler_init_zero {0, 0}
#define swiftnav_sbp_observation_PackedObsContent_init_zero {0, swiftnav_sbp_gnss_CarrierPhase_init_zero, swiftnav_sbp_observation_Doppler_init_zero, 0, 0, 0, swiftnav_sbp_gnss_GnssSignal_init_zero}
#define swiftnav_sbp_observation_MsgObs_init_zero {swiftnav_sbp_observation_ObservationHeader_init_zero, {{NULL}, NULL}}
#define swiftnav_sbp_observation_MsgBasePosLlh_init_zero {0, 0, 0}
#define swiftnav_sbp_observation_MsgBasePosEcef_init_zero {0, 0, 0}
#define swiftnav_sbp_observation_EphemerisCommonContent_init_zero {swiftnav_sbp_gnss_GnssSignal_init_zero, swiftnav_sbp_gnss_GpsTimeSec_init_zero, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgEphemerisGps_init_zero {swiftnav_sbp_observation_EphemerisCommonContent_init_zero, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, swiftnav_sbp_gnss_GpsTimeSec_init_zero, 0, 0}
#define swiftnav_sbp_observation_MsgEphemerisSbas_init_zero {swiftnav_sbp_observation_EphemerisCommonContent_init_zero, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define swiftnav_sbp_observation_MsgEphemerisGlo_init_zero {swiftnav_sbp_observation_EphemerisCommonContent_init_zero, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define swiftnav_sbp_observation_MsgIono_init_zero {swiftnav_sbp_gnss_GpsTimeSec_init_zero, 0, 0, 0, 0, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgSvConfigurationGps_init_zero {swiftnav_sbp_gnss_GpsTimeSec_init_zero, 0}
#define swiftnav_sbp_observation_MsgGroupDelay_init_zero {swiftnav_sbp_gnss_GpsTimeSec_init_zero, swiftnav_sbp_gnss_GnssSignal_init_zero, 0, 0, 0, 0}
#define swiftnav_sbp_observation_AlmanacCommonContent_init_zero {swiftnav_sbp_gnss_GnssSignal_init_zero, swiftnav_sbp_gnss_GpsTimeSec_init_zero, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgAlmanacGps_init_zero {swiftnav_sbp_observation_AlmanacCommonContent_init_zero, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgAlmanacGlo_init_zero {swiftnav_sbp_observation_AlmanacCommonContent_init_zero, 0, 0, 0, 0, 0, 0, 0}
#define swiftnav_sbp_observation_MsgGloBiases_init_zero {0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define swiftnav_sbp_observation_AlmanacCommonContent_sid_tag 1
#define swiftnav_sbp_observation_AlmanacCommonContent_toa_tag 2
#define swiftnav_sbp_observation_AlmanacCommonContent_ura_tag 3
#define swiftnav_sbp_observation_AlmanacCommonContent_fit_interval_tag 4
#define swiftnav_sbp_observation_AlmanacCommonContent_valid_tag 5
#define swiftnav_sbp_observation_AlmanacCommonContent_health_bits_tag 6
#define swiftnav_sbp_observation_Doppler_i_tag   1
#define swiftnav_sbp_observation_Doppler_f_tag   2
#define swiftnav_sbp_observation_EphemerisCommonContent_sid_tag 1
#define swiftnav_sbp_observation_EphemerisCommonContent_toe_tag 2
#define swiftnav_sbp_observation_EphemerisCommonContent_ura_tag 3
#define swiftnav_sbp_observation_EphemerisCommonContent_fit_interval_tag 4
#define swiftnav_sbp_observation_EphemerisCommonContent_valid_tag 5
#define swiftnav_sbp_observation_EphemerisCommonContent_health_bits_tag 6
#define swiftnav_sbp_observation_MsgBasePosEcef_x_tag 1
#define swiftnav_sbp_observation_MsgBasePosEcef_y_tag 2
#define swiftnav_sbp_observation_MsgBasePosEcef_z_tag 3
#define swiftnav_sbp_observation_MsgBasePosLlh_lat_tag 1
#define swiftnav_sbp_observation_MsgBasePosLlh_lon_tag 2
#define swiftnav_sbp_observation_MsgBasePosLlh_height_tag 3
#define swiftnav_sbp_observation_MsgGloBiases_mask_tag 1
#define swiftnav_sbp_observation_MsgGloBiases_l1ca_bias_tag 2
#define swiftnav_sbp_observation_MsgGloBiases_l1p_bias_tag 3
#define swiftnav_sbp_observation_MsgGloBiases_l2ca_bias_tag 4
#define swiftnav_sbp_observation_MsgGloBiases_l2p_bias_tag 5
#define swiftnav_sbp_observation_MsgGroupDelay_t_op_tag 1
#define swiftnav_sbp_observation_MsgGroupDelay_sid_tag 2
#define swiftnav_sbp_observation_MsgGroupDelay_valid_tag 3
#define swiftnav_sbp_observation_MsgGroupDelay_tgd_tag 4
#define swiftnav_sbp_observation_MsgGroupDelay_isc_l1ca_tag 5
#define swiftnav_sbp_observation_MsgGroupDelay_isc_l2c_tag 6
#define swiftnav_sbp_observation_MsgIono_t_nmct_tag 1
#define swiftnav_sbp_observation_MsgIono_a0_tag  2
#define swiftnav_sbp_observation_MsgIono_a1_tag  3
#define swiftnav_sbp_observation_MsgIono_a2_tag  4
#define swiftnav_sbp_observation_MsgIono_a3_tag  5
#define swiftnav_sbp_observation_MsgIono_b0_tag  6
#define swiftnav_sbp_observation_MsgIono_b1_tag  7
#define swiftnav_sbp_observation_MsgIono_b2_tag  8
#define swiftnav_sbp_observation_MsgIono_b3_tag  9
#define swiftnav_sbp_observation_MsgSvConfigurationGps_t_nmct_tag 1
#define swiftnav_sbp_observation_MsgSvConfigurationGps_l2c_mask_tag 2
#define swiftnav_sbp_observation_ObservationHeader_t_tag 1
#define swiftnav_sbp_observation_ObservationHeader_n_obs_tag 2
#define swiftnav_sbp_observation_MsgAlmanacGlo_common_tag 1
#define swiftnav_sbp_observation_MsgAlmanacGlo_lambda_na_tag 2
#define swiftnav_sbp_observation_MsgAlmanacGlo_t_lambda_na_tag 3
#define swiftnav_sbp_observation_MsgAlmanacGlo_i_tag 4
#define swiftnav_sbp_observation_MsgAlmanacGlo_t_tag 5
#define swiftnav_sbp_observation_MsgAlmanacGlo_t_dot_tag 6
#define swiftnav_sbp_observation_MsgAlmanacGlo_epsilon_tag 7
#define swiftnav_sbp_observation_MsgAlmanacGlo_omega_tag 8
#define swiftnav_sbp_observation_MsgAlmanacGps_common_tag 1
#define swiftnav_sbp_observation_MsgAlmanacGps_m0_tag 2
#define swiftnav_sbp_observation_MsgAlmanacGps_ecc_tag 3
#define swiftnav_sbp_observation_MsgAlmanacGps_sqrta_tag 4
#define swiftnav_sbp_observation_MsgAlmanacGps_omega0_tag 5
#define swiftnav_sbp_observation_MsgAlmanacGps_omegadot_tag 6
#define swiftnav_sbp_observation_MsgAlmanacGps_w_tag 7
#define swiftnav_sbp_observation_MsgAlmanacGps_inc_tag 8
#define swiftnav_sbp_observation_MsgAlmanacGps_af0_tag 9
#define swiftnav_sbp_observation_MsgAlmanacGps_af1_tag 10
#define swiftnav_sbp_observation_MsgEphemerisGlo_common_tag 1
#define swiftnav_sbp_observation_MsgEphemerisGlo_gamma_tag 2
#define swiftnav_sbp_observation_MsgEphemerisGlo_tau_tag 3
#define swiftnav_sbp_observation_MsgEphemerisGlo_d_tau_tag 4
#define swiftnav_sbp_observation_MsgEphemerisGlo_pos_tag 5
#define swiftnav_sbp_observation_MsgEphemerisGlo_vel_tag 6
#define swiftnav_sbp_observation_MsgEphemerisGlo_acc_tag 7
#define swiftnav_sbp_observation_MsgEphemerisGlo_fcn_tag 8
#define swiftnav_sbp_observation_MsgEphemerisGlo_iod_tag 9
#define swiftnav_sbp_observation_MsgEphemerisGps_common_tag 1
#define swiftnav_sbp_observation_MsgEphemerisGps_tgd_tag 2
#define swiftnav_sbp_observation_MsgEphemerisGps_c_rs_tag 3
#define swiftnav_sbp_observation_MsgEphemerisGps_c_rc_tag 4
#define swiftnav_sbp_observation_MsgEphemerisGps_c_uc_tag 5
#define swiftnav_sbp_observation_MsgEphemerisGps_c_us_tag 6
#define swiftnav_sbp_observation_MsgEphemerisGps_c_ic_tag 7
#define swiftnav_sbp_observation_MsgEphemerisGps_c_is_tag 8
#define swiftnav_sbp_observation_MsgEphemerisGps_dn_tag 9
#define swiftnav_sbp_observation_MsgEphemerisGps_m0_tag 10
#define swiftnav_sbp_observation_MsgEphemerisGps_ecc_tag 11
#define swiftnav_sbp_observation_MsgEphemerisGps_sqrta_tag 12
#define swiftnav_sbp_observation_MsgEphemerisGps_omega0_tag 13
#define swiftnav_sbp_observation_MsgEphemerisGps_omegadot_tag 14
#define swiftnav_sbp_observation_MsgEphemerisGps_w_tag 15
#define swiftnav_sbp_observation_MsgEphemerisGps_inc_tag 16
#define swiftnav_sbp_observation_MsgEphemerisGps_inc_dot_tag 17
#define swiftnav_sbp_observation_MsgEphemerisGps_af0_tag 18
#define swiftnav_sbp_observation_MsgEphemerisGps_af1_tag 19
#define swiftnav_sbp_observation_MsgEphemerisGps_af2_tag 20
#define swiftnav_sbp_observation_MsgEphemerisGps_toc_tag 21
#define swiftnav_sbp_observation_MsgEphemerisGps_iode_tag 22
#define swiftnav_sbp_observation_MsgEphemerisGps_iodc_tag 23
#define swiftnav_sbp_observation_MsgEphemerisSbas_common_tag 1
#define swiftnav_sbp_observation_MsgEphemerisSbas_pos_tag 2
#define swiftnav_sbp_observation_MsgEphemerisSbas_vel_tag 3
#define swiftnav_sbp_observation_MsgEphemerisSbas_acc_tag 4
#define swiftnav_sbp_observation_MsgEphemerisSbas_a_gf0_tag 5
#define swiftnav_sbp_observation_MsgEphemerisSbas_a_gf1_tag 6
#define swiftnav_sbp_observation_MsgObs_header_tag 1
#define swiftnav_sbp_observation_MsgObs_obs_tag  2
#define swiftnav_sbp_observation_PackedObsContent_P_tag 1
#define swiftnav_sbp_observation_PackedObsContent_L_tag 2
#define swiftnav_sbp_observation_PackedObsContent_D_tag 3
#define swiftnav_sbp_observation_PackedObsContent_cn0_tag 4
#define swiftnav_sbp_observation_PackedObsContent_lock_tag 5
#define swiftnav_sbp_observation_PackedObsContent_flags_tag 6
#define swiftnav_sbp_observation_PackedObsContent_sid_tag 7

/* Struct field encoding specification for nanopb */
extern const pb_field_t swiftnav_sbp_observation_ObservationHeader_fields[3];
extern const pb_field_t swiftnav_sbp_observation_Doppler_fields[3];
extern const pb_field_t swiftnav_sbp_observation_PackedObsContent_fields[8];
extern const pb_field_t swiftnav_sbp_observation_MsgObs_fields[3];
extern const pb_field_t swiftnav_sbp_observation_MsgBasePosLlh_fields[4];
extern const pb_field_t swiftnav_sbp_observation_MsgBasePosEcef_fields[4];
extern const pb_field_t swiftnav_sbp_observation_EphemerisCommonContent_fields[7];
extern const pb_field_t swiftnav_sbp_observation_MsgEphemerisGps_fields[24];
extern const pb_field_t swiftnav_sbp_observation_MsgEphemerisSbas_fields[7];
extern const pb_field_t swiftnav_sbp_observation_MsgEphemerisGlo_fields[10];
extern const pb_field_t swiftnav_sbp_observation_MsgIono_fields[10];
extern const pb_field_t swiftnav_sbp_observation_MsgSvConfigurationGps_fields[3];
extern const pb_field_t swiftnav_sbp_observation_MsgGroupDelay_fields[7];
extern const pb_field_t swiftnav_sbp_observation_AlmanacCommonContent_fields[7];
extern const pb_field_t swiftnav_sbp_observation_MsgAlmanacGps_fields[11];
extern const pb_field_t swiftnav_sbp_observation_MsgAlmanacGlo_fields[9];
extern const pb_field_t swiftnav_sbp_observation_MsgGloBiases_fields[6];

/* Maximum encoded size of messages (where known) */
#define swiftnav_sbp_observation_ObservationHeader_size 26
#define swiftnav_sbp_observation_Doppler_size    12
#define swiftnav_sbp_observation_PackedObsContent_size 66
/* swiftnav_sbp_observation_MsgObs_size depends on runtime parameters */
#define swiftnav_sbp_observation_MsgBasePosLlh_size 27
#define swiftnav_sbp_observation_MsgBasePosEcef_size 27
#define swiftnav_sbp_observation_EphemerisCommonContent_size 55
#define swiftnav_sbp_observation_MsgEphemerisGps_size 262
/* swiftnav_sbp_observation_MsgEphemerisSbas_size depends on runtime parameters */
/* swiftnav_sbp_observation_MsgEphemerisGlo_size depends on runtime parameters */
#define swiftnav_sbp_observation_MsgIono_size    86
#define swiftnav_sbp_observation_MsgSvConfigurationGps_size 20
#define swiftnav_sbp_observation_MsgGroupDelay_size 52
#define swiftnav_sbp_observation_AlmanacCommonContent_size 55
#define swiftnav_sbp_observation_MsgAlmanacGps_size 138
#define swiftnav_sbp_observation_MsgAlmanacGlo_size 120
#define swiftnav_sbp_observation_MsgGloBiases_size 30

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define OBSERVATION_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
