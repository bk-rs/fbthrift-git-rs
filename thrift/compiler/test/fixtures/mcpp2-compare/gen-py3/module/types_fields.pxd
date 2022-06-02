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
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.unordered_map cimport unordered_map as cumap
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.common cimport Protocol as __Protocol
from thrift.py3.std_libcpp cimport string_view as __cstring_view
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    StructFieldsSetter as __StructFieldsSetter
)
from folly.optional cimport cOptional as __cOptional

cimport includes.types as _includes_types

cimport module.types as _module_types



ctypedef void (*__Empty_FieldsSetterFunc)(__Empty_FieldsSetter, object) except *

cdef class __Empty_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cEmpty* _struct_cpp_obj
    cdef cumap[__cstring_view, __Empty_FieldsSetterFunc] _setters

    @staticmethod
    cdef __Empty_FieldsSetter _fbthrift_create(_module_types.cEmpty* struct_cpp_obj)


ctypedef void (*__ASimpleStruct_FieldsSetterFunc)(__ASimpleStruct_FieldsSetter, object) except *

cdef class __ASimpleStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cASimpleStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __ASimpleStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __ASimpleStruct_FieldsSetter _fbthrift_create(_module_types.cASimpleStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *


ctypedef void (*__ASimpleStructNoexcept_FieldsSetterFunc)(__ASimpleStructNoexcept_FieldsSetter, object) except *

cdef class __ASimpleStructNoexcept_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cASimpleStructNoexcept* _struct_cpp_obj
    cdef cumap[__cstring_view, __ASimpleStructNoexcept_FieldsSetterFunc] _setters

    @staticmethod
    cdef __ASimpleStructNoexcept_FieldsSetter _fbthrift_create(_module_types.cASimpleStructNoexcept* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *


ctypedef void (*__MyStruct_FieldsSetterFunc)(__MyStruct_FieldsSetter, object) except *

cdef class __MyStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cMyStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __MyStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __MyStruct_FieldsSetter _fbthrift_create(_module_types.cMyStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *
    cdef void _set_field_4(self, _fbthrift_value) except *
    cdef void _set_field_5(self, _fbthrift_value) except *
    cdef void _set_field_6(self, _fbthrift_value) except *
    cdef void _set_field_7(self, _fbthrift_value) except *
    cdef void _set_field_8(self, _fbthrift_value) except *
    cdef void _set_field_9(self, _fbthrift_value) except *
    cdef void _set_field_10(self, _fbthrift_value) except *


ctypedef void (*__AnException_FieldsSetterFunc)(__AnException_FieldsSetter, object) except *

cdef class __AnException_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cAnException* _struct_cpp_obj
    cdef cumap[__cstring_view, __AnException_FieldsSetterFunc] _setters

    @staticmethod
    cdef __AnException_FieldsSetter _fbthrift_create(_module_types.cAnException* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *
    cdef void _set_field_4(self, _fbthrift_value) except *
    cdef void _set_field_5(self, _fbthrift_value) except *
    cdef void _set_field_6(self, _fbthrift_value) except *
    cdef void _set_field_7(self, _fbthrift_value) except *
    cdef void _set_field_8(self, _fbthrift_value) except *
    cdef void _set_field_9(self, _fbthrift_value) except *
    cdef void _set_field_10(self, _fbthrift_value) except *
    cdef void _set_field_11(self, _fbthrift_value) except *
    cdef void _set_field_12(self, _fbthrift_value) except *
    cdef void _set_field_13(self, _fbthrift_value) except *
    cdef void _set_field_14(self, _fbthrift_value) except *
    cdef void _set_field_15(self, _fbthrift_value) except *
    cdef void _set_field_16(self, _fbthrift_value) except *


ctypedef void (*__AnotherException_FieldsSetterFunc)(__AnotherException_FieldsSetter, object) except *

cdef class __AnotherException_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cAnotherException* _struct_cpp_obj
    cdef cumap[__cstring_view, __AnotherException_FieldsSetterFunc] _setters

    @staticmethod
    cdef __AnotherException_FieldsSetter _fbthrift_create(_module_types.cAnotherException* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *


ctypedef void (*__containerStruct_FieldsSetterFunc)(__containerStruct_FieldsSetter, object) except *

cdef class __containerStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.ccontainerStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __containerStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __containerStruct_FieldsSetter _fbthrift_create(_module_types.ccontainerStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *
    cdef void _set_field_4(self, _fbthrift_value) except *
    cdef void _set_field_5(self, _fbthrift_value) except *
    cdef void _set_field_6(self, _fbthrift_value) except *
    cdef void _set_field_7(self, _fbthrift_value) except *
    cdef void _set_field_8(self, _fbthrift_value) except *
    cdef void _set_field_9(self, _fbthrift_value) except *
    cdef void _set_field_10(self, _fbthrift_value) except *
    cdef void _set_field_11(self, _fbthrift_value) except *
    cdef void _set_field_12(self, _fbthrift_value) except *
    cdef void _set_field_13(self, _fbthrift_value) except *
    cdef void _set_field_14(self, _fbthrift_value) except *
    cdef void _set_field_15(self, _fbthrift_value) except *
    cdef void _set_field_16(self, _fbthrift_value) except *
    cdef void _set_field_17(self, _fbthrift_value) except *
    cdef void _set_field_18(self, _fbthrift_value) except *
    cdef void _set_field_19(self, _fbthrift_value) except *
    cdef void _set_field_20(self, _fbthrift_value) except *
    cdef void _set_field_21(self, _fbthrift_value) except *
    cdef void _set_field_22(self, _fbthrift_value) except *
    cdef void _set_field_23(self, _fbthrift_value) except *
    cdef void _set_field_24(self, _fbthrift_value) except *
    cdef void _set_field_25(self, _fbthrift_value) except *
    cdef void _set_field_26(self, _fbthrift_value) except *
    cdef void _set_field_27(self, _fbthrift_value) except *
    cdef void _set_field_28(self, _fbthrift_value) except *
    cdef void _set_field_29(self, _fbthrift_value) except *
    cdef void _set_field_30(self, _fbthrift_value) except *
    cdef void _set_field_31(self, _fbthrift_value) except *
    cdef void _set_field_32(self, _fbthrift_value) except *
    cdef void _set_field_33(self, _fbthrift_value) except *
    cdef void _set_field_34(self, _fbthrift_value) except *
    cdef void _set_field_35(self, _fbthrift_value) except *
    cdef void _set_field_36(self, _fbthrift_value) except *
    cdef void _set_field_37(self, _fbthrift_value) except *
    cdef void _set_field_38(self, _fbthrift_value) except *
    cdef void _set_field_39(self, _fbthrift_value) except *
    cdef void _set_field_40(self, _fbthrift_value) except *
    cdef void _set_field_41(self, _fbthrift_value) except *
    cdef void _set_field_42(self, _fbthrift_value) except *
    cdef void _set_field_43(self, _fbthrift_value) except *
    cdef void _set_field_44(self, _fbthrift_value) except *
    cdef void _set_field_45(self, _fbthrift_value) except *


ctypedef void (*__MyIncludedStruct_FieldsSetterFunc)(__MyIncludedStruct_FieldsSetter, object) except *

cdef class __MyIncludedStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cMyIncludedStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __MyIncludedStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __MyIncludedStruct_FieldsSetter _fbthrift_create(_module_types.cMyIncludedStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *


ctypedef void (*__AnnotatedStruct_FieldsSetterFunc)(__AnnotatedStruct_FieldsSetter, object) except *

cdef class __AnnotatedStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cAnnotatedStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __AnnotatedStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __AnnotatedStruct_FieldsSetter _fbthrift_create(_module_types.cAnnotatedStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *
    cdef void _set_field_4(self, _fbthrift_value) except *
    cdef void _set_field_5(self, _fbthrift_value) except *
    cdef void _set_field_6(self, _fbthrift_value) except *
    cdef void _set_field_7(self, _fbthrift_value) except *
    cdef void _set_field_8(self, _fbthrift_value) except *
    cdef void _set_field_9(self, _fbthrift_value) except *
    cdef void _set_field_10(self, _fbthrift_value) except *
    cdef void _set_field_11(self, _fbthrift_value) except *
    cdef void _set_field_12(self, _fbthrift_value) except *
    cdef void _set_field_13(self, _fbthrift_value) except *
    cdef void _set_field_14(self, _fbthrift_value) except *
    cdef void _set_field_15(self, _fbthrift_value) except *
    cdef void _set_field_16(self, _fbthrift_value) except *
    cdef void _set_field_17(self, _fbthrift_value) except *
    cdef void _set_field_18(self, _fbthrift_value) except *
    cdef void _set_field_19(self, _fbthrift_value) except *
    cdef void _set_field_20(self, _fbthrift_value) except *
    cdef void _set_field_21(self, _fbthrift_value) except *
    cdef void _set_field_22(self, _fbthrift_value) except *
    cdef void _set_field_23(self, _fbthrift_value) except *
    cdef void _set_field_24(self, _fbthrift_value) except *
    cdef void _set_field_25(self, _fbthrift_value) except *
    cdef void _set_field_26(self, _fbthrift_value) except *
    cdef void _set_field_27(self, _fbthrift_value) except *
    cdef void _set_field_28(self, _fbthrift_value) except *
    cdef void _set_field_29(self, _fbthrift_value) except *
    cdef void _set_field_30(self, _fbthrift_value) except *
    cdef void _set_field_31(self, _fbthrift_value) except *
    cdef void _set_field_32(self, _fbthrift_value) except *
    cdef void _set_field_33(self, _fbthrift_value) except *
    cdef void _set_field_34(self, _fbthrift_value) except *
    cdef void _set_field_35(self, _fbthrift_value) except *
    cdef void _set_field_36(self, _fbthrift_value) except *
    cdef void _set_field_37(self, _fbthrift_value) except *
    cdef void _set_field_38(self, _fbthrift_value) except *
    cdef void _set_field_39(self, _fbthrift_value) except *


ctypedef void (*__ComplexContainerStruct_FieldsSetterFunc)(__ComplexContainerStruct_FieldsSetter, object) except *

cdef class __ComplexContainerStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cComplexContainerStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __ComplexContainerStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __ComplexContainerStruct_FieldsSetter _fbthrift_create(_module_types.cComplexContainerStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__FloatStruct_FieldsSetterFunc)(__FloatStruct_FieldsSetter, object) except *

cdef class __FloatStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cFloatStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __FloatStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __FloatStruct_FieldsSetter _fbthrift_create(_module_types.cFloatStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__AllRequiredNoExceptMoveCtrStruct_FieldsSetterFunc)(__AllRequiredNoExceptMoveCtrStruct_FieldsSetter, object) except *

cdef class __AllRequiredNoExceptMoveCtrStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cAllRequiredNoExceptMoveCtrStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __AllRequiredNoExceptMoveCtrStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __AllRequiredNoExceptMoveCtrStruct_FieldsSetter _fbthrift_create(_module_types.cAllRequiredNoExceptMoveCtrStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *

