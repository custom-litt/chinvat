/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8-dev */

#ifndef PB_UTILITIES_UUIDV4_PB_H_INCLUDED
#define PB_UTILITIES_UUIDV4_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* *
 UUIDv4: A universally unique identifier. */
typedef struct _UUIDv4 {
    uint64_t upper;
    uint64_t lower;
} UUIDv4;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define UUIDv4_init_default                      {0, 0}
#define UUIDv4_init_zero                         {0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define UUIDv4_upper_tag                         1
#define UUIDv4_lower_tag                         2

/* Struct field encoding specification for nanopb */
#define UUIDv4_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   upper,             1) \
X(a, STATIC,   SINGULAR, UINT64,   lower,             2)
#define UUIDv4_CALLBACK NULL
#define UUIDv4_DEFAULT NULL

extern const pb_msgdesc_t UUIDv4_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define UUIDv4_fields &UUIDv4_msg

/* Maximum encoded size of messages (where known) */
#define UUIDv4_size                              22

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
