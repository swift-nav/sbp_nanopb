/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Mon Apr 30 15:12:56 2018. */

#include "flash.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_flash_MsgFlashProgram_fields[5] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_flash_MsgFlashProgram, target, target, 0),
    PB_FIELD(  2, UINT32  , REPEATED, CALLBACK, OTHER, swiftnav_sbp_flash_MsgFlashProgram, addr_start, target, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_flash_MsgFlashProgram, addr_len, addr_start, 0),
    PB_FIELD(  4, UINT32  , REPEATED, CALLBACK, OTHER, swiftnav_sbp_flash_MsgFlashProgram, data, addr_len, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgFlashDone_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_flash_MsgFlashDone, response, response, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgFlashReadReq_fields[4] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_flash_MsgFlashReadReq, target, target, 0),
    PB_FIELD(  2, UINT32  , REPEATED, CALLBACK, OTHER, swiftnav_sbp_flash_MsgFlashReadReq, addr_start, target, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_flash_MsgFlashReadReq, addr_len, addr_start, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgFlashReadResp_fields[4] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_flash_MsgFlashReadResp, target, target, 0),
    PB_FIELD(  2, UINT32  , REPEATED, CALLBACK, OTHER, swiftnav_sbp_flash_MsgFlashReadResp, addr_start, target, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_flash_MsgFlashReadResp, addr_len, addr_start, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgFlashErase_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_flash_MsgFlashErase, target, target, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_flash_MsgFlashErase, sector_num, target, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgStmFlashLockSector_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_flash_MsgStmFlashLockSector, sector, sector, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgStmFlashUnlockSector_fields[2] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_flash_MsgStmFlashUnlockSector, sector, sector, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgStmUniqueIdReq_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgStmUniqueIdResp_fields[2] = {
    PB_FIELD(  1, UINT32  , REPEATED, CALLBACK, FIRST, swiftnav_sbp_flash_MsgStmUniqueIdResp, stm_id, stm_id, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_flash_MsgM25FlashWriteStatus_fields[2] = {
    PB_FIELD(  1, UINT32  , REPEATED, CALLBACK, FIRST, swiftnav_sbp_flash_MsgM25FlashWriteStatus, status, status, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
