#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.memory cimport make_unique, unique_ptr, shared_ptr
from thrift.py3.types cimport assign_unique_ptr, assign_shared_ptr, assign_shared_const_ptr

cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast


@__cython.auto_pickle(False)
cdef class __MyStructNestedAnnotation_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __MyStructNestedAnnotation_FieldsSetter _fbthrift_create(_module_types.cMyStructNestedAnnotation* struct_cpp_obj):
        cdef __MyStructNestedAnnotation_FieldsSetter __fbthrift_inst = __MyStructNestedAnnotation_FieldsSetter.__new__(__MyStructNestedAnnotation_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"name")] = __MyStructNestedAnnotation_FieldsSetter._set_field_0
        return __fbthrift_inst

    cdef void set_field(__MyStructNestedAnnotation_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __MyStructNestedAnnotation_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field name
        if _fbthrift_value is None:
            __reset_field[_module_types.cMyStructNestedAnnotation](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'name is not a { str !r}.')
        deref(self._struct_cpp_obj).name_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))


@__cython.auto_pickle(False)
cdef class __SecretStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __SecretStruct_FieldsSetter _fbthrift_create(_module_types.cSecretStruct* struct_cpp_obj):
        cdef __SecretStruct_FieldsSetter __fbthrift_inst = __SecretStruct_FieldsSetter.__new__(__SecretStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"id")] = __SecretStruct_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"password")] = __SecretStruct_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__SecretStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __SecretStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field id
        if _fbthrift_value is None:
            __reset_field[_module_types.cSecretStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'id is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).id_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field password
        if _fbthrift_value is None:
            __reset_field[_module_types.cSecretStruct](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'password is not a { str !r}.')
        deref(self._struct_cpp_obj).password_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))
