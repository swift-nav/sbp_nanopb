/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:57 2018. */

#include "navigation.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_navigation_MsgGpsTime_fields[5] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgGpsTime, wn, wn, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgGpsTime, tow, wn, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgGpsTime, ns_residual, tow, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgGpsTime, flags, ns_residual, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgUtcTime_fields[10] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgUtcTime, flags, flags, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgUtcTime, tow, flags, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgUtcTime, year, tow, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgUtcTime, month, year, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgUtcTime, day, month, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgUtcTime, hours, day, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgUtcTime, minutes, hours, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgUtcTime, seconds, minutes, 0),
    PB_FIELD(  9, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgUtcTime, ns, seconds, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgDops_fields[8] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgDops, tow, tow, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgDops, gdop, tow, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgDops, pdop, gdop, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgDops, tdop, pdop, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgDops, hdop, tdop, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgDops, vdop, hdop, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgDops, flags, vdop, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgPosEcef_fields[8] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgPosEcef, tow, tow, 0),
    PB_FIELD(  2, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcef, x, tow, 0),
    PB_FIELD(  3, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcef, y, x, 0),
    PB_FIELD(  4, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcef, z, y, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcef, accuracy, z, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcef, n_sats, accuracy, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcef, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgPosEcefCov_fields[13] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgPosEcefCov, tow, tow, 0),
    PB_FIELD(  2, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, x, tow, 0),
    PB_FIELD(  3, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, y, x, 0),
    PB_FIELD(  4, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, z, y, 0),
    PB_FIELD(  5, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, cov_x_x, z, 0),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, cov_x_y, cov_x_x, 0),
    PB_FIELD(  7, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, cov_x_z, cov_x_y, 0),
    PB_FIELD(  8, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, cov_y_y, cov_x_z, 0),
    PB_FIELD(  9, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, cov_y_z, cov_y_y, 0),
    PB_FIELD( 10, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, cov_z_z, cov_y_z, 0),
    PB_FIELD( 11, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, n_sats, cov_z_z, 0),
    PB_FIELD( 12, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosEcefCov, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgPosLlh_fields[9] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgPosLlh, tow, tow, 0),
    PB_FIELD(  2, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlh, lat, tow, 0),
    PB_FIELD(  3, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlh, lon, lat, 0),
    PB_FIELD(  4, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlh, height, lon, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlh, h_accuracy, height, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlh, v_accuracy, h_accuracy, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlh, n_sats, v_accuracy, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlh, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgPosLlhCov_fields[13] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgPosLlhCov, tow, tow, 0),
    PB_FIELD(  2, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, lat, tow, 0),
    PB_FIELD(  3, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, lon, lat, 0),
    PB_FIELD(  4, DOUBLE  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, height, lon, 0),
    PB_FIELD(  5, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, cov_n_n, height, 0),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, cov_n_e, cov_n_n, 0),
    PB_FIELD(  7, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, cov_n_d, cov_n_e, 0),
    PB_FIELD(  8, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, cov_e_e, cov_n_d, 0),
    PB_FIELD(  9, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, cov_e_d, cov_e_e, 0),
    PB_FIELD( 10, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, cov_d_d, cov_e_d, 0),
    PB_FIELD( 11, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, n_sats, cov_d_d, 0),
    PB_FIELD( 12, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgPosLlhCov, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgBaselineEcef_fields[8] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgBaselineEcef, tow, tow, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineEcef, x, tow, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineEcef, y, x, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineEcef, z, y, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineEcef, accuracy, z, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineEcef, n_sats, accuracy, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineEcef, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgBaselineNed_fields[9] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgBaselineNed, tow, tow, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineNed, n, tow, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineNed, e, n, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineNed, d, e, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineNed, h_accuracy, d, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineNed, v_accuracy, h_accuracy, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineNed, n_sats, v_accuracy, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgBaselineNed, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgVelEcef_fields[8] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgVelEcef, tow, tow, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcef, x, tow, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcef, y, x, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcef, z, y, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcef, accuracy, z, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcef, n_sats, accuracy, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcef, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgVelEcefCov_fields[13] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgVelEcefCov, tow, tow, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, x, tow, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, y, x, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, z, y, 0),
    PB_FIELD(  5, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, cov_x_x, z, 0),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, cov_x_y, cov_x_x, 0),
    PB_FIELD(  7, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, cov_x_z, cov_x_y, 0),
    PB_FIELD(  8, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, cov_y_y, cov_x_z, 0),
    PB_FIELD(  9, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, cov_y_z, cov_y_y, 0),
    PB_FIELD( 10, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, cov_z_z, cov_y_z, 0),
    PB_FIELD( 11, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, n_sats, cov_z_z, 0),
    PB_FIELD( 12, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelEcefCov, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgVelNed_fields[9] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgVelNed, tow, tow, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNed, n, tow, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNed, e, n, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNed, d, e, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNed, h_accuracy, d, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNed, v_accuracy, h_accuracy, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNed, n_sats, v_accuracy, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNed, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgVelNedCov_fields[13] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgVelNedCov, tow, tow, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, n, tow, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, e, n, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, d, e, 0),
    PB_FIELD(  5, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, cov_n_n, d, 0),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, cov_n_e, cov_n_n, 0),
    PB_FIELD(  7, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, cov_n_d, cov_n_e, 0),
    PB_FIELD(  8, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, cov_e_e, cov_n_d, 0),
    PB_FIELD(  9, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, cov_e_d, cov_e_e, 0),
    PB_FIELD( 10, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, cov_d_d, cov_e_d, 0),
    PB_FIELD( 11, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, n_sats, cov_d_d, 0),
    PB_FIELD( 12, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelNedCov, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgVelBody_fields[13] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgVelBody, tow, tow, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, x, tow, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, y, x, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, z, y, 0),
    PB_FIELD(  5, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, cov_x_x, z, 0),
    PB_FIELD(  6, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, cov_x_y, cov_x_x, 0),
    PB_FIELD(  7, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, cov_x_z, cov_x_y, 0),
    PB_FIELD(  8, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, cov_y_y, cov_x_z, 0),
    PB_FIELD(  9, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, cov_y_z, cov_y_y, 0),
    PB_FIELD( 10, FLOAT   , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, cov_z_z, cov_y_z, 0),
    PB_FIELD( 11, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, n_sats, cov_z_z, 0),
    PB_FIELD( 12, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgVelBody, flags, n_sats, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_navigation_MsgAgeCorrections_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_navigation_MsgAgeCorrections, tow, tow, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_navigation_MsgAgeCorrections, age, tow, 0),
    PB_LAST_FIELD
};


/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

/* @@protoc_insertion_point(eof) */
