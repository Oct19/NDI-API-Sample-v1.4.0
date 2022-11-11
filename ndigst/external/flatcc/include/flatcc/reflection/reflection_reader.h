#ifndef REFLECTION_READER_H
#define REFLECTION_READER_H

/* Generated by flatcc 0.6.0-pre FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#undef flatbuffers_identifier
#define flatbuffers_identifier "BFBS"
#undef flatbuffers_extension
#define flatbuffers_extension ".bfbs"


typedef const struct reflection_Type_table *reflection_Type_table_t;
typedef struct reflection_Type_table *reflection_Type_mutable_table_t;
typedef const flatbuffers_uoffset_t *reflection_Type_vec_t;
typedef flatbuffers_uoffset_t *reflection_Type_mutable_vec_t;
typedef const struct reflection_KeyValue_table *reflection_KeyValue_table_t;
typedef struct reflection_KeyValue_table *reflection_KeyValue_mutable_table_t;
typedef const flatbuffers_uoffset_t *reflection_KeyValue_vec_t;
typedef flatbuffers_uoffset_t *reflection_KeyValue_mutable_vec_t;
typedef const struct reflection_EnumVal_table *reflection_EnumVal_table_t;
typedef struct reflection_EnumVal_table *reflection_EnumVal_mutable_table_t;
typedef const flatbuffers_uoffset_t *reflection_EnumVal_vec_t;
typedef flatbuffers_uoffset_t *reflection_EnumVal_mutable_vec_t;
typedef const struct reflection_Enum_table *reflection_Enum_table_t;
typedef struct reflection_Enum_table *reflection_Enum_mutable_table_t;
typedef const flatbuffers_uoffset_t *reflection_Enum_vec_t;
typedef flatbuffers_uoffset_t *reflection_Enum_mutable_vec_t;
typedef const struct reflection_Field_table *reflection_Field_table_t;
typedef struct reflection_Field_table *reflection_Field_mutable_table_t;
typedef const flatbuffers_uoffset_t *reflection_Field_vec_t;
typedef flatbuffers_uoffset_t *reflection_Field_mutable_vec_t;
typedef const struct reflection_Object_table *reflection_Object_table_t;
typedef struct reflection_Object_table *reflection_Object_mutable_table_t;
typedef const flatbuffers_uoffset_t *reflection_Object_vec_t;
typedef flatbuffers_uoffset_t *reflection_Object_mutable_vec_t;
typedef const struct reflection_Schema_table *reflection_Schema_table_t;
typedef struct reflection_Schema_table *reflection_Schema_mutable_table_t;
typedef const flatbuffers_uoffset_t *reflection_Schema_vec_t;
typedef flatbuffers_uoffset_t *reflection_Schema_mutable_vec_t;
#ifndef reflection_Type_identifier
#define reflection_Type_identifier flatbuffers_identifier
#endif
#define reflection_Type_type_hash ((flatbuffers_thash_t)0x44c8fe5e)
#define reflection_Type_type_identifier "\x5e\xfe\xc8\x44"
#ifndef reflection_KeyValue_identifier
#define reflection_KeyValue_identifier flatbuffers_identifier
#endif
#define reflection_KeyValue_type_hash ((flatbuffers_thash_t)0x8c761eaa)
#define reflection_KeyValue_type_identifier "\xaa\x1e\x76\x8c"
#ifndef reflection_EnumVal_identifier
#define reflection_EnumVal_identifier flatbuffers_identifier
#endif
#define reflection_EnumVal_type_hash ((flatbuffers_thash_t)0x9531c946)
#define reflection_EnumVal_type_identifier "\x46\xc9\x31\x95"
#ifndef reflection_Enum_identifier
#define reflection_Enum_identifier flatbuffers_identifier
#endif
#define reflection_Enum_type_hash ((flatbuffers_thash_t)0xacffa90f)
#define reflection_Enum_type_identifier "\x0f\xa9\xff\xac"
#ifndef reflection_Field_identifier
#define reflection_Field_identifier flatbuffers_identifier
#endif
#define reflection_Field_type_hash ((flatbuffers_thash_t)0x9f7e408a)
#define reflection_Field_type_identifier "\x8a\x40\x7e\x9f"
#ifndef reflection_Object_identifier
#define reflection_Object_identifier flatbuffers_identifier
#endif
#define reflection_Object_type_hash ((flatbuffers_thash_t)0xb09729bd)
#define reflection_Object_type_identifier "\xbd\x29\x97\xb0"
#ifndef reflection_Schema_identifier
#define reflection_Schema_identifier flatbuffers_identifier
#endif
#define reflection_Schema_type_hash ((flatbuffers_thash_t)0xfaf93779)
#define reflection_Schema_type_identifier "\x79\x37\xf9\xfa"

typedef int8_t reflection_BaseType_enum_t;
__flatbuffers_define_integer_type(reflection_BaseType, reflection_BaseType_enum_t, 8)
#define reflection_BaseType_None ((reflection_BaseType_enum_t)INT8_C(0))
#define reflection_BaseType_UType ((reflection_BaseType_enum_t)INT8_C(1))
#define reflection_BaseType_Bool ((reflection_BaseType_enum_t)INT8_C(2))
#define reflection_BaseType_Byte ((reflection_BaseType_enum_t)INT8_C(3))
#define reflection_BaseType_UByte ((reflection_BaseType_enum_t)INT8_C(4))
#define reflection_BaseType_Short ((reflection_BaseType_enum_t)INT8_C(5))
#define reflection_BaseType_UShort ((reflection_BaseType_enum_t)INT8_C(6))
#define reflection_BaseType_Int ((reflection_BaseType_enum_t)INT8_C(7))
#define reflection_BaseType_UInt ((reflection_BaseType_enum_t)INT8_C(8))
#define reflection_BaseType_Long ((reflection_BaseType_enum_t)INT8_C(9))
#define reflection_BaseType_ULong ((reflection_BaseType_enum_t)INT8_C(10))
#define reflection_BaseType_Float ((reflection_BaseType_enum_t)INT8_C(11))
#define reflection_BaseType_Double ((reflection_BaseType_enum_t)INT8_C(12))
#define reflection_BaseType_String ((reflection_BaseType_enum_t)INT8_C(13))
#define reflection_BaseType_Vector ((reflection_BaseType_enum_t)INT8_C(14))
#define reflection_BaseType_Obj ((reflection_BaseType_enum_t)INT8_C(15))
#define reflection_BaseType_Union ((reflection_BaseType_enum_t)INT8_C(16))

static inline const char *reflection_BaseType_name(reflection_BaseType_enum_t value)
{
    switch (value) {
    case reflection_BaseType_None: return "None";
    case reflection_BaseType_UType: return "UType";
    case reflection_BaseType_Bool: return "Bool";
    case reflection_BaseType_Byte: return "Byte";
    case reflection_BaseType_UByte: return "UByte";
    case reflection_BaseType_Short: return "Short";
    case reflection_BaseType_UShort: return "UShort";
    case reflection_BaseType_Int: return "Int";
    case reflection_BaseType_UInt: return "UInt";
    case reflection_BaseType_Long: return "Long";
    case reflection_BaseType_ULong: return "ULong";
    case reflection_BaseType_Float: return "Float";
    case reflection_BaseType_Double: return "Double";
    case reflection_BaseType_String: return "String";
    case reflection_BaseType_Vector: return "Vector";
    case reflection_BaseType_Obj: return "Obj";
    case reflection_BaseType_Union: return "Union";
    default: return "";
    }
}

static inline int reflection_BaseType_is_known_value(reflection_BaseType_enum_t value)
{
    switch (value) {
    case reflection_BaseType_None: return 1;
    case reflection_BaseType_UType: return 1;
    case reflection_BaseType_Bool: return 1;
    case reflection_BaseType_Byte: return 1;
    case reflection_BaseType_UByte: return 1;
    case reflection_BaseType_Short: return 1;
    case reflection_BaseType_UShort: return 1;
    case reflection_BaseType_Int: return 1;
    case reflection_BaseType_UInt: return 1;
    case reflection_BaseType_Long: return 1;
    case reflection_BaseType_ULong: return 1;
    case reflection_BaseType_Float: return 1;
    case reflection_BaseType_Double: return 1;
    case reflection_BaseType_String: return 1;
    case reflection_BaseType_Vector: return 1;
    case reflection_BaseType_Obj: return 1;
    case reflection_BaseType_Union: return 1;
    default: return 0;
    }
}



struct reflection_Type_table { uint8_t unused__; };

static inline size_t reflection_Type_vec_len(reflection_Type_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Type_table_t reflection_Type_vec_at(reflection_Type_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(reflection_Type_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Type)

__flatbuffers_define_scalar_field(0, reflection_Type, base_type, reflection_BaseType, reflection_BaseType_enum_t, INT8_C(0))
__flatbuffers_define_scalar_field(1, reflection_Type, element, reflection_BaseType, reflection_BaseType_enum_t, INT8_C(0))
__flatbuffers_define_scalar_field(2, reflection_Type, index, flatbuffers_int32, int32_t, INT32_C(-1))

struct reflection_KeyValue_table { uint8_t unused__; };

static inline size_t reflection_KeyValue_vec_len(reflection_KeyValue_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_KeyValue_table_t reflection_KeyValue_vec_at(reflection_KeyValue_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(reflection_KeyValue_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_KeyValue)

__flatbuffers_define_string_field(0, reflection_KeyValue, key, 1)
__flatbuffers_define_find_by_string_field(reflection_KeyValue, key)
__flatbuffers_define_table_sort_by_string_field(reflection_KeyValue, key)
__flatbuffers_define_default_find_by_string_field(reflection_KeyValue, key)
__flatbuffers_define_default_scan_by_string_field(reflection_KeyValue, key)
#define reflection_KeyValue_vec_sort reflection_KeyValue_vec_sort_by_key
__flatbuffers_define_string_field(1, reflection_KeyValue, value, 0)

struct reflection_EnumVal_table { uint8_t unused__; };

static inline size_t reflection_EnumVal_vec_len(reflection_EnumVal_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_EnumVal_table_t reflection_EnumVal_vec_at(reflection_EnumVal_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(reflection_EnumVal_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_EnumVal)

__flatbuffers_define_string_field(0, reflection_EnumVal, name, 1)
__flatbuffers_define_scalar_field(1, reflection_EnumVal, value, flatbuffers_int64, int64_t, INT64_C(0))
/* Note: find only works on vectors sorted by this field. */
__flatbuffers_define_find_by_scalar_field(reflection_EnumVal, value, int64_t)
__flatbuffers_define_table_sort_by_scalar_field(reflection_EnumVal, value, int64_t)
__flatbuffers_define_default_find_by_scalar_field(reflection_EnumVal, value, int64_t)
__flatbuffers_define_default_scan_by_scalar_field(reflection_EnumVal, value, int64_t)
#define reflection_EnumVal_vec_sort reflection_EnumVal_vec_sort_by_value
__flatbuffers_define_table_field(2, reflection_EnumVal, object, reflection_Object_table_t, 0)
__flatbuffers_define_table_field(3, reflection_EnumVal, union_type, reflection_Type_table_t, 0)

struct reflection_Enum_table { uint8_t unused__; };

static inline size_t reflection_Enum_vec_len(reflection_Enum_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Enum_table_t reflection_Enum_vec_at(reflection_Enum_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(reflection_Enum_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Enum)

__flatbuffers_define_string_field(0, reflection_Enum, name, 1)
__flatbuffers_define_find_by_string_field(reflection_Enum, name)
__flatbuffers_define_table_sort_by_string_field(reflection_Enum, name)
__flatbuffers_define_default_find_by_string_field(reflection_Enum, name)
__flatbuffers_define_default_scan_by_string_field(reflection_Enum, name)
#define reflection_Enum_vec_sort reflection_Enum_vec_sort_by_name
__flatbuffers_define_vector_field(1, reflection_Enum, values, reflection_EnumVal_vec_t, 1)
__flatbuffers_define_scalar_field(2, reflection_Enum, is_union, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_table_field(3, reflection_Enum, underlying_type, reflection_Type_table_t, 1)
__flatbuffers_define_vector_field(4, reflection_Enum, attributes, reflection_KeyValue_vec_t, 0)

struct reflection_Field_table { uint8_t unused__; };

static inline size_t reflection_Field_vec_len(reflection_Field_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Field_table_t reflection_Field_vec_at(reflection_Field_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(reflection_Field_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Field)

__flatbuffers_define_string_field(0, reflection_Field, name, 1)
__flatbuffers_define_find_by_string_field(reflection_Field, name)
__flatbuffers_define_table_sort_by_string_field(reflection_Field, name)
__flatbuffers_define_default_find_by_string_field(reflection_Field, name)
__flatbuffers_define_default_scan_by_string_field(reflection_Field, name)
#define reflection_Field_vec_sort reflection_Field_vec_sort_by_name
__flatbuffers_define_table_field(1, reflection_Field, type, reflection_Type_table_t, 1)
__flatbuffers_define_scalar_field(2, reflection_Field, id, flatbuffers_uint16, uint16_t, UINT16_C(0))
__flatbuffers_define_scalar_field(3, reflection_Field, offset, flatbuffers_uint16, uint16_t, UINT16_C(0))
__flatbuffers_define_scalar_field(4, reflection_Field, default_integer, flatbuffers_int64, int64_t, INT64_C(0))
__flatbuffers_define_scalar_field(5, reflection_Field, default_real, flatbuffers_double, double, 0.000000)
__flatbuffers_define_scalar_field(6, reflection_Field, deprecated, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(7, reflection_Field, required, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(8, reflection_Field, key, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_vector_field(9, reflection_Field, attributes, reflection_KeyValue_vec_t, 0)

struct reflection_Object_table { uint8_t unused__; };

static inline size_t reflection_Object_vec_len(reflection_Object_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Object_table_t reflection_Object_vec_at(reflection_Object_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(reflection_Object_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Object)

__flatbuffers_define_string_field(0, reflection_Object, name, 1)
__flatbuffers_define_find_by_string_field(reflection_Object, name)
__flatbuffers_define_table_sort_by_string_field(reflection_Object, name)
__flatbuffers_define_default_find_by_string_field(reflection_Object, name)
__flatbuffers_define_default_scan_by_string_field(reflection_Object, name)
#define reflection_Object_vec_sort reflection_Object_vec_sort_by_name
__flatbuffers_define_vector_field(1, reflection_Object, fields, reflection_Field_vec_t, 1)
__flatbuffers_define_scalar_field(2, reflection_Object, is_struct, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_scalar_field(3, reflection_Object, minalign, flatbuffers_int32, int32_t, INT32_C(0))
__flatbuffers_define_scalar_field(4, reflection_Object, bytesize, flatbuffers_int32, int32_t, INT32_C(0))
__flatbuffers_define_vector_field(5, reflection_Object, attributes, reflection_KeyValue_vec_t, 0)

struct reflection_Schema_table { uint8_t unused__; };

static inline size_t reflection_Schema_vec_len(reflection_Schema_vec_t vec)
__flatbuffers_vec_len(vec)
static inline reflection_Schema_table_t reflection_Schema_vec_at(reflection_Schema_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(reflection_Schema_table_t, vec, i, 0)
__flatbuffers_table_as_root(reflection_Schema)

__flatbuffers_define_vector_field(0, reflection_Schema, objects, reflection_Object_vec_t, 1)
__flatbuffers_define_vector_field(1, reflection_Schema, enums, reflection_Enum_vec_t, 1)
__flatbuffers_define_string_field(2, reflection_Schema, file_ident, 0)
__flatbuffers_define_string_field(3, reflection_Schema, file_ext, 0)
__flatbuffers_define_table_field(4, reflection_Schema, root_table, reflection_Object_table_t, 0)


#include "flatcc/flatcc_epilogue.h"
#endif /* REFLECTION_READER_H */
