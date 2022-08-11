#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport facebook.thrift.annotation.hack.types as _facebook_thrift_annotation_hack_types
cimport facebook.thrift.annotation.hack.builders as _facebook_thrift_annotation_hack_builders

cimport test.fixtures.basic.module.types as _test_fixtures_basic_module_types

cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint MyIntField
    cdef public str MyStringField
    cdef public object MyDataField
    cdef public _test_fixtures_basic_module_types.MyEnum myEnum
    cdef public pbool oneway
    cdef public pbool readonly
    cdef public pbool idempotent
    cdef public set floatSet
    cdef public str no_hack_codegen_field


cdef class MyDataItem_Builder(thrift.py3.builder.StructBuilder):
    pass


cdef class MyUnion_Builder(thrift.py3.builder.StructBuilder):
    cdef public _test_fixtures_basic_module_types.MyEnum myEnum
    cdef public object myStruct
    cdef public object myDataItem
    cdef public set floatSet


cdef class ReservedKeyword_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint reserved_field


cdef class UnionToBeRenamed_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint reserved_field

