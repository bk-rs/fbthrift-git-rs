#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

import python_module_root.my.namespacing.test.hsmodule.thrift_types


class _fbthrift_ExtendTestService_check_args(_fbthrift_python_types.Struct):
    struct1: _typing.Final[python_module_root.my.namespacing.test.hsmodule.thrift_types.HsFoo] = ...

    def __init__(
        self, *,
        struct1: _typing.Optional[python_module_root.my.namespacing.test.hsmodule.thrift_types.HsFoo]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, python_module_root.my.namespacing.test.hsmodule.thrift_types.HsFoo]]]: ...


class _fbthrift_ExtendTestService_check_result(_fbthrift_python_types.Struct):
    success: _typing.Final[bool]

    def __init__(
        self, *, success: _typing.Optional[bool] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bool,
        ]]]: ...