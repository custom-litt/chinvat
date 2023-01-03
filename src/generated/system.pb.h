/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8-dev */

#ifndef PB_SYSTEM_PB_H_INCLUDED
#define PB_SYSTEM_PB_H_INCLUDED
#include <pb.h>
#include "utilities/uuidv4.pb.h"
#include "utilities/version.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* *
 HardwareInfo: Information about the hardware. */
typedef struct _HardwareInfo {
    /* unique id for the hardware */
    bool has_id;
    UUIDv4 id;
    pb_callback_t name;
    bool has_version;
    Version version;
} HardwareInfo;

/* *
 FirmwareInfo: Information about the firmware. */
typedef struct _FirmwareInfo {
    /* unique id for the firmware, used to locate updates */
    bool has_id;
    UUIDv4 id;
    pb_callback_t name;
    bool has_version;
    Version version;
    char hash[13];
} FirmwareInfo;

/* *
 NetworkInfo: Information about the network connection. */
typedef struct _NetworkInfo {
    /* the name used to identify the access point */
    char ssid[33];
    /* the password used to connect to the access point
 when used for configuration this field missing will indicate an open network
 this field will not be sent when the system state is reported */
    char password[65];
    /* the mode for networking
 key:
  0: none
  1: station
  2: access point
  others: reserved */
    uint32_t mode;
    /* represents connection status state or requests
 0: disconnected
 1: connected
 2: request connection activation
 3: request connection shutdown
 others: reserved */
    uint32_t state;
    /* ip address
 the ip address version can be found depending on the length of this field
 length 4 bytes: IPv4
 length 16 bytes: IPv6 */
    pb_callback_t ipaddr;
} NetworkInfo;

/* *
 IdentityInfo: Information about the device. */
typedef struct _IdentityInfo {
    /* unique identifier */
    pb_callback_t id;
    /* human-readable identifier, not necessarily unique */
    pb_callback_t name;
} IdentityInfo;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define HardwareInfo_init_default                {false, UUIDv4_init_default, {{NULL}, NULL}, false, Version_init_default}
#define FirmwareInfo_init_default                {false, UUIDv4_init_default, {{NULL}, NULL}, false, Version_init_default, ""}
#define NetworkInfo_init_default                 {"", "", 0, 0, {{NULL}, NULL}}
#define IdentityInfo_init_default                {{{NULL}, NULL}, {{NULL}, NULL}}
#define HardwareInfo_init_zero                   {false, UUIDv4_init_zero, {{NULL}, NULL}, false, Version_init_zero}
#define FirmwareInfo_init_zero                   {false, UUIDv4_init_zero, {{NULL}, NULL}, false, Version_init_zero, ""}
#define NetworkInfo_init_zero                    {"", "", 0, 0, {{NULL}, NULL}}
#define IdentityInfo_init_zero                   {{{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define HardwareInfo_id_tag                      1
#define HardwareInfo_name_tag                    2
#define HardwareInfo_version_tag                 3
#define FirmwareInfo_id_tag                      1
#define FirmwareInfo_name_tag                    2
#define FirmwareInfo_version_tag                 3
#define FirmwareInfo_hash_tag                    4
#define NetworkInfo_ssid_tag                     1
#define NetworkInfo_password_tag                 2
#define NetworkInfo_mode_tag                     3
#define NetworkInfo_state_tag                    4
#define NetworkInfo_ipaddr_tag                   5
#define IdentityInfo_id_tag                      1
#define IdentityInfo_name_tag                    2

/* Struct field encoding specification for nanopb */
#define HardwareInfo_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  id,                1) \
X(a, CALLBACK, SINGULAR, STRING,   name,              2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  version,           3)
#define HardwareInfo_CALLBACK pb_default_field_callback
#define HardwareInfo_DEFAULT NULL
#define HardwareInfo_id_MSGTYPE UUIDv4
#define HardwareInfo_version_MSGTYPE Version

#define FirmwareInfo_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  id,                1) \
X(a, CALLBACK, SINGULAR, STRING,   name,              2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  version,           3) \
X(a, STATIC,   SINGULAR, STRING,   hash,              4)
#define FirmwareInfo_CALLBACK pb_default_field_callback
#define FirmwareInfo_DEFAULT NULL
#define FirmwareInfo_id_MSGTYPE UUIDv4
#define FirmwareInfo_version_MSGTYPE Version

#define NetworkInfo_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   ssid,              1) \
X(a, STATIC,   SINGULAR, STRING,   password,          2) \
X(a, STATIC,   SINGULAR, UINT32,   mode,              3) \
X(a, STATIC,   SINGULAR, UINT32,   state,             4) \
X(a, CALLBACK, SINGULAR, BYTES,    ipaddr,            5)
#define NetworkInfo_CALLBACK pb_default_field_callback
#define NetworkInfo_DEFAULT NULL

#define IdentityInfo_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    id,                1) \
X(a, CALLBACK, SINGULAR, STRING,   name,              2)
#define IdentityInfo_CALLBACK pb_default_field_callback
#define IdentityInfo_DEFAULT NULL

extern const pb_msgdesc_t HardwareInfo_msg;
extern const pb_msgdesc_t FirmwareInfo_msg;
extern const pb_msgdesc_t NetworkInfo_msg;
extern const pb_msgdesc_t IdentityInfo_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define HardwareInfo_fields &HardwareInfo_msg
#define FirmwareInfo_fields &FirmwareInfo_msg
#define NetworkInfo_fields &NetworkInfo_msg
#define IdentityInfo_fields &IdentityInfo_msg

/* Maximum encoded size of messages (where known) */
/* HardwareInfo_size depends on runtime parameters */
/* FirmwareInfo_size depends on runtime parameters */
/* NetworkInfo_size depends on runtime parameters */
/* IdentityInfo_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
