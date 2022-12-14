#ifndef FLATTOOLDATA_VERIFIER_H
#define FLATTOOLDATA_VERIFIER_H

/* Generated by flatcc 0.6.0-pre FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATTOOLDATA_READER_H
#include "flattooldata_reader.h"
#endif
#include "flatcc/flatcc_verifier.h"
#include "flatcc/flatcc_prologue.h"

static int NDI_FlatToolData_ToolData_verify_table(flatcc_table_verifier_descriptor_t *td);
static int NDI_FlatToolData_ToolDataWrapper_verify_table(flatcc_table_verifier_descriptor_t *td);

static inline int NDI_FlatToolData_Marker_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_struct_as_root(buf, bufsiz, NDI_FlatToolData_Marker_identifier, 32, 8);
}

static inline int NDI_FlatToolData_Marker_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_struct_as_typed_root(buf, bufsiz, NDI_FlatToolData_Marker_type_hash, 32, 8);
}

static inline int NDI_FlatToolData_Marker_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_struct_as_typed_root(buf, bufsiz, thash, 32, 8);
}

static inline int NDI_FlatToolData_Marker_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_struct_as_root(buf, bufsiz, fid, 32, 8);
}

static inline int NDI_FlatToolData_SystemAlert_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_struct_as_root(buf, bufsiz, NDI_FlatToolData_SystemAlert_identifier, 4, 2);
}

static inline int NDI_FlatToolData_SystemAlert_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_struct_as_typed_root(buf, bufsiz, NDI_FlatToolData_SystemAlert_type_hash, 4, 2);
}

static inline int NDI_FlatToolData_SystemAlert_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_struct_as_typed_root(buf, bufsiz, thash, 4, 2);
}

static inline int NDI_FlatToolData_SystemAlert_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_struct_as_root(buf, bufsiz, fid, 4, 2);
}

static inline int NDI_FlatToolData_Transform_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_struct_as_root(buf, bufsiz, NDI_FlatToolData_Transform_identifier, 72, 8);
}

static inline int NDI_FlatToolData_Transform_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_struct_as_typed_root(buf, bufsiz, NDI_FlatToolData_Transform_type_hash, 72, 8);
}

static inline int NDI_FlatToolData_Transform_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_struct_as_typed_root(buf, bufsiz, thash, 72, 8);
}

static inline int NDI_FlatToolData_Transform_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_struct_as_root(buf, bufsiz, fid, 72, 8);
}

static int NDI_FlatToolData_ToolData_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 4, 4) /* framenumber */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 72, 8) /* transform */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 4, 4) /* timespec_s */)) return ret;
    if ((ret = flatcc_verify_field(td, 3, 4, 4) /* timespec_ns */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 4, 0, 32, 8, INT64_C(134217727)) /* markers */)) return ret;
    if ((ret = flatcc_verify_vector_field(td, 5, 0, 4, 2, INT64_C(1073741823)) /* alerts */)) return ret;
    return flatcc_verify_ok;
}

static inline int NDI_FlatToolData_ToolData_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, NDI_FlatToolData_ToolData_identifier, &NDI_FlatToolData_ToolData_verify_table);
}

static inline int NDI_FlatToolData_ToolData_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, NDI_FlatToolData_ToolData_type_identifier, &NDI_FlatToolData_ToolData_verify_table);
}

static inline int NDI_FlatToolData_ToolData_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &NDI_FlatToolData_ToolData_verify_table);
}

static inline int NDI_FlatToolData_ToolData_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &NDI_FlatToolData_ToolData_verify_table);
}

static int NDI_FlatToolData_ToolDataWrapper_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_vector_field(td, 0, 0, &NDI_FlatToolData_ToolData_verify_table) /* tooldatas */)) return ret;
    return flatcc_verify_ok;
}

static inline int NDI_FlatToolData_ToolDataWrapper_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, NDI_FlatToolData_ToolDataWrapper_identifier, &NDI_FlatToolData_ToolDataWrapper_verify_table);
}

static inline int NDI_FlatToolData_ToolDataWrapper_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, NDI_FlatToolData_ToolDataWrapper_type_identifier, &NDI_FlatToolData_ToolDataWrapper_verify_table);
}

static inline int NDI_FlatToolData_ToolDataWrapper_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &NDI_FlatToolData_ToolDataWrapper_verify_table);
}

static inline int NDI_FlatToolData_ToolDataWrapper_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &NDI_FlatToolData_ToolDataWrapper_verify_table);
}

#include "flatcc/flatcc_epilogue.h"
#endif /* FLATTOOLDATA_VERIFIER_H */
