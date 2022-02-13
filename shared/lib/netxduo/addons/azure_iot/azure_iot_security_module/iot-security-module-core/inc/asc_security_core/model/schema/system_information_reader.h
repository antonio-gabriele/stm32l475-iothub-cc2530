#ifndef SYSTEM_INFORMATION_READER_H
#define SYSTEM_INFORMATION_READER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif


typedef const struct AzureIoTSecurity_SystemInformation_table *AzureIoTSecurity_SystemInformation_table_t;
typedef struct AzureIoTSecurity_SystemInformation_table *AzureIoTSecurity_SystemInformation_mutable_table_t;
typedef const flatbuffers_uoffset_t *AzureIoTSecurity_SystemInformation_vec_t;
typedef flatbuffers_uoffset_t *AzureIoTSecurity_SystemInformation_mutable_vec_t;
#ifndef AzureIoTSecurity_SystemInformation_file_identifier
#define AzureIoTSecurity_SystemInformation_file_identifier flatbuffers_identifier
#endif
/* deprecated, use AzureIoTSecurity_SystemInformation_file_identifier */
#ifndef AzureIoTSecurity_SystemInformation_identifier
#define AzureIoTSecurity_SystemInformation_identifier flatbuffers_identifier
#endif
#define AzureIoTSecurity_SystemInformation_type_hash ((flatbuffers_thash_t)0xa7b9fff1)
#define AzureIoTSecurity_SystemInformation_type_identifier "\xf1\xff\xb9\xa7"



struct AzureIoTSecurity_SystemInformation_table { uint8_t unused__; };

static inline size_t AzureIoTSecurity_SystemInformation_vec_len(AzureIoTSecurity_SystemInformation_vec_t vec)
__flatbuffers_vec_len(vec)
static inline AzureIoTSecurity_SystemInformation_table_t AzureIoTSecurity_SystemInformation_vec_at(AzureIoTSecurity_SystemInformation_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(AzureIoTSecurity_SystemInformation_table_t, vec, i, 0)
__flatbuffers_table_as_root(AzureIoTSecurity_SystemInformation)

__flatbuffers_define_string_field(0, AzureIoTSecurity_SystemInformation, os_info, 0)
__flatbuffers_define_string_field(1, AzureIoTSecurity_SystemInformation, kernel_info, 0)
__flatbuffers_define_string_field(2, AzureIoTSecurity_SystemInformation, hw_info, 0)


#include "flatcc/flatcc_epilogue.h"
#endif /* SYSTEM_INFORMATION_READER_H */