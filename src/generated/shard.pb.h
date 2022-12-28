/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8-dev */

#ifndef PB_SHARD_SHARD_PB_H_INCLUDED
#define PB_SHARD_SHARD_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* a boolean choice */
typedef struct _Shard_Variable_Boolean {
    bool value;
    bool initial;
    pb_callback_t true_val;
    pb_callback_t false_val;
} Shard_Variable_Boolean;

/* inclusive range type for integers */
typedef struct _Shard_Variable_Integer_Range {
    int32_t min;
    int32_t max;
} Shard_Variable_Integer_Range;

/* an integer
 optionally existing within some range [min, max] */
typedef struct _Shard_Variable_Integer {
    int32_t value;
    int32_t initial;
    /* default range to display */
    bool has_default_range;
    Shard_Variable_Integer_Range default_range;
    /* optional, an allowed range */
    bool has_allowed_range;
    Shard_Variable_Integer_Range allowed_range;
} Shard_Variable_Integer;

/* inclusive range type for floating point variables */
typedef struct _Shard_Variable_Double_Range {
    double min;
    double max;
} Shard_Variable_Double_Range;

/* a floating point value
 optionally existing within some range [min, max] */
typedef struct _Shard_Variable_Double {
    double value;
    double initial;
    /* default range to display */
    bool has_default_range;
    Shard_Variable_Double_Range default_range;
    /* optional, an allowed range */
    bool has_allowed_range;
    Shard_Variable_Double_Range allowed_range;
} Shard_Variable_Double;

/* selection of a string option */
typedef struct _Shard_Variable_Option {
    uint32_t value;
    uint32_t initial;
    /* the available options
 values are selected by index */
    pb_callback_t options;
} Shard_Variable_Option;

/* *
 Variable: Defines parameters of a variable.
 Allows exposition of variables at runtime. */
typedef struct _Shard_Variable {
    pb_callback_t name;
    pb_callback_t description;
    /* the type of the variable (required)
 key:
   0: boolean
   1: integer
   2: double (floating point)
   3: option (single selection) */
    uint32_t type;
    bool has_boolean_var;
    Shard_Variable_Boolean boolean_var;
    bool has_integer_var;
    Shard_Variable_Integer integer_var;
    bool has_double_var;
    Shard_Variable_Double double_var;
    bool has_option_var;
    Shard_Variable_Option option_var;
} Shard_Variable;

/* *
 Atom: Minimal information about an executable script.
 Used for final transmission to the device. */
typedef struct _Shard_Atom {
    /* the source code encoded in utf-8
 optionally minified */
    pb_callback_t source;
} Shard_Atom;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define Shard_Variable_init_default              {{{NULL}, NULL}, {{NULL}, NULL}, 0, false, Shard_Variable_Boolean_init_default, false, Shard_Variable_Integer_init_default, false, Shard_Variable_Double_init_default, false, Shard_Variable_Option_init_default}
#define Shard_Variable_Boolean_init_default      {0, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define Shard_Variable_Integer_init_default      {0, 0, false, Shard_Variable_Integer_Range_init_default, false, Shard_Variable_Integer_Range_init_default}
#define Shard_Variable_Integer_Range_init_default {0, 0}
#define Shard_Variable_Double_init_default       {0, 0, false, Shard_Variable_Double_Range_init_default, false, Shard_Variable_Double_Range_init_default}
#define Shard_Variable_Double_Range_init_default {0, 0}
#define Shard_Variable_Option_init_default       {0, 0, {{NULL}, NULL}}
#define Shard_Atom_init_default                  {{{NULL}, NULL}}
#define Shard_Variable_init_zero                 {{{NULL}, NULL}, {{NULL}, NULL}, 0, false, Shard_Variable_Boolean_init_zero, false, Shard_Variable_Integer_init_zero, false, Shard_Variable_Double_init_zero, false, Shard_Variable_Option_init_zero}
#define Shard_Variable_Boolean_init_zero         {0, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define Shard_Variable_Integer_init_zero         {0, 0, false, Shard_Variable_Integer_Range_init_zero, false, Shard_Variable_Integer_Range_init_zero}
#define Shard_Variable_Integer_Range_init_zero   {0, 0}
#define Shard_Variable_Double_init_zero          {0, 0, false, Shard_Variable_Double_Range_init_zero, false, Shard_Variable_Double_Range_init_zero}
#define Shard_Variable_Double_Range_init_zero    {0, 0}
#define Shard_Variable_Option_init_zero          {0, 0, {{NULL}, NULL}}
#define Shard_Atom_init_zero                     {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define Shard_Variable_Boolean_value_tag         1
#define Shard_Variable_Boolean_initial_tag       2
#define Shard_Variable_Boolean_true_val_tag      3
#define Shard_Variable_Boolean_false_val_tag     4
#define Shard_Variable_Integer_Range_min_tag     1
#define Shard_Variable_Integer_Range_max_tag     2
#define Shard_Variable_Integer_value_tag         1
#define Shard_Variable_Integer_initial_tag       2
#define Shard_Variable_Integer_default_range_tag 4
#define Shard_Variable_Integer_allowed_range_tag 5
#define Shard_Variable_Double_Range_min_tag      1
#define Shard_Variable_Double_Range_max_tag      2
#define Shard_Variable_Double_value_tag          1
#define Shard_Variable_Double_initial_tag        2
#define Shard_Variable_Double_default_range_tag  4
#define Shard_Variable_Double_allowed_range_tag  5
#define Shard_Variable_Option_value_tag          1
#define Shard_Variable_Option_initial_tag        2
#define Shard_Variable_Option_options_tag        3
#define Shard_Variable_name_tag                  1
#define Shard_Variable_description_tag           2
#define Shard_Variable_type_tag                  3
#define Shard_Variable_boolean_var_tag           4
#define Shard_Variable_integer_var_tag           5
#define Shard_Variable_double_var_tag            6
#define Shard_Variable_option_var_tag            7
#define Shard_Atom_source_tag                    1

/* Struct field encoding specification for nanopb */
#define Shard_Variable_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, SINGULAR, STRING,   description,       2) \
X(a, STATIC,   SINGULAR, UINT32,   type,              3) \
X(a, STATIC,   OPTIONAL, MESSAGE,  boolean_var,       4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  integer_var,       5) \
X(a, STATIC,   OPTIONAL, MESSAGE,  double_var,        6) \
X(a, STATIC,   OPTIONAL, MESSAGE,  option_var,        7)
#define Shard_Variable_CALLBACK pb_default_field_callback
#define Shard_Variable_DEFAULT NULL
#define Shard_Variable_boolean_var_MSGTYPE Shard_Variable_Boolean
#define Shard_Variable_integer_var_MSGTYPE Shard_Variable_Integer
#define Shard_Variable_double_var_MSGTYPE Shard_Variable_Double
#define Shard_Variable_option_var_MSGTYPE Shard_Variable_Option

#define Shard_Variable_Boolean_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     value,             1) \
X(a, STATIC,   SINGULAR, BOOL,     initial,           2) \
X(a, CALLBACK, SINGULAR, STRING,   true_val,          3) \
X(a, CALLBACK, SINGULAR, STRING,   false_val,         4)
#define Shard_Variable_Boolean_CALLBACK pb_default_field_callback
#define Shard_Variable_Boolean_DEFAULT NULL

#define Shard_Variable_Integer_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    value,             1) \
X(a, STATIC,   SINGULAR, INT32,    initial,           2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  default_range,     4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  allowed_range,     5)
#define Shard_Variable_Integer_CALLBACK NULL
#define Shard_Variable_Integer_DEFAULT NULL
#define Shard_Variable_Integer_default_range_MSGTYPE Shard_Variable_Integer_Range
#define Shard_Variable_Integer_allowed_range_MSGTYPE Shard_Variable_Integer_Range

#define Shard_Variable_Integer_Range_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    min,               1) \
X(a, STATIC,   SINGULAR, INT32,    max,               2)
#define Shard_Variable_Integer_Range_CALLBACK NULL
#define Shard_Variable_Integer_Range_DEFAULT NULL

#define Shard_Variable_Double_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, DOUBLE,   value,             1) \
X(a, STATIC,   SINGULAR, DOUBLE,   initial,           2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  default_range,     4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  allowed_range,     5)
#define Shard_Variable_Double_CALLBACK NULL
#define Shard_Variable_Double_DEFAULT NULL
#define Shard_Variable_Double_default_range_MSGTYPE Shard_Variable_Double_Range
#define Shard_Variable_Double_allowed_range_MSGTYPE Shard_Variable_Double_Range

#define Shard_Variable_Double_Range_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, DOUBLE,   min,               1) \
X(a, STATIC,   SINGULAR, DOUBLE,   max,               2)
#define Shard_Variable_Double_Range_CALLBACK NULL
#define Shard_Variable_Double_Range_DEFAULT NULL

#define Shard_Variable_Option_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   value,             1) \
X(a, STATIC,   SINGULAR, UINT32,   initial,           2) \
X(a, CALLBACK, REPEATED, STRING,   options,           3)
#define Shard_Variable_Option_CALLBACK pb_default_field_callback
#define Shard_Variable_Option_DEFAULT NULL

#define Shard_Atom_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    source,            1)
#define Shard_Atom_CALLBACK pb_default_field_callback
#define Shard_Atom_DEFAULT NULL

extern const pb_msgdesc_t Shard_Variable_msg;
extern const pb_msgdesc_t Shard_Variable_Boolean_msg;
extern const pb_msgdesc_t Shard_Variable_Integer_msg;
extern const pb_msgdesc_t Shard_Variable_Integer_Range_msg;
extern const pb_msgdesc_t Shard_Variable_Double_msg;
extern const pb_msgdesc_t Shard_Variable_Double_Range_msg;
extern const pb_msgdesc_t Shard_Variable_Option_msg;
extern const pb_msgdesc_t Shard_Atom_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Shard_Variable_fields &Shard_Variable_msg
#define Shard_Variable_Boolean_fields &Shard_Variable_Boolean_msg
#define Shard_Variable_Integer_fields &Shard_Variable_Integer_msg
#define Shard_Variable_Integer_Range_fields &Shard_Variable_Integer_Range_msg
#define Shard_Variable_Double_fields &Shard_Variable_Double_msg
#define Shard_Variable_Double_Range_fields &Shard_Variable_Double_Range_msg
#define Shard_Variable_Option_fields &Shard_Variable_Option_msg
#define Shard_Atom_fields &Shard_Atom_msg

/* Maximum encoded size of messages (where known) */
/* Shard_Variable_size depends on runtime parameters */
/* Shard_Variable_Boolean_size depends on runtime parameters */
/* Shard_Variable_Option_size depends on runtime parameters */
/* Shard_Atom_size depends on runtime parameters */
#define Shard_Variable_Double_Range_size         18
#define Shard_Variable_Double_size               58
#define Shard_Variable_Integer_Range_size        22
#define Shard_Variable_Integer_size              70

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
