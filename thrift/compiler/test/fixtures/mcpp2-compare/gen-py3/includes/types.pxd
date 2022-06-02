#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport includes.types_fields as _fbthrift_types_fields

cdef extern from "gen-py3/includes/types.h":
  pass

cdef extern from "folly/sorted_vector_types.h":
  pass

cdef extern from "gen-cpp2/includes_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "gen-cpp2/includes_types.h" namespace "::a::different::ns":
    cdef cppclass cAnEnum "::a::different::ns::AnEnum":
        pass





cdef class AnEnum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "gen-cpp2/includes_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "gen-cpp2/includes_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "gen-cpp2/includes_types_custom_protocol.h" namespace "::a::different::ns":

    cdef cppclass cAStruct "::a::different::ns::AStruct":
        cAStruct() except +
        cAStruct(const cAStruct&) except +
        bint operator==(cAStruct&)
        bint operator!=(cAStruct&)
        bint operator<(cAStruct&)
        bint operator>(cAStruct&)
        bint operator<=(cAStruct&)
        bint operator>=(cAStruct&)
        __field_ref[cint32_t] FieldA_ref()


    cdef cppclass cAStructB "::a::different::ns::AStructB":
        cAStructB() except +
        cAStructB(const cAStructB&) except +
        bint operator==(cAStructB&)
        bint operator!=(cAStructB&)
        bint operator<(cAStructB&)
        bint operator>(cAStructB&)
        bint operator<=(cAStructB&)
        bint operator>=(cAStructB&)
        shared_ptr[const cAStruct] FieldA_ref()




cdef class AStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cAStruct] _cpp_obj
    cdef _fbthrift_types_fields.__AStruct_FieldsSetter _fields_setter
    cdef inline object FieldA_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cAStruct])



cdef class AStructB(thrift.py3.types.Struct):
    cdef shared_ptr[cAStructB] _cpp_obj
    cdef _fbthrift_types_fields.__AStructB_FieldsSetter _fields_setter
    cdef inline object FieldA_impl(self)
    cdef AStruct __fbthrift_cached_FieldA

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cAStructB])



cdef extern from "gen-cpp2/includes_constants.h" namespace "::a::different::ns":
    cdef cint64_t cIncludedConstant "::a::different::ns::includes_constants::IncludedConstant"
