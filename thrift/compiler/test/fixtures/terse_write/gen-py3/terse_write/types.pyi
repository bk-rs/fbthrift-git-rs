#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types


__property__ = property


class MyEnum(thrift.py3.types.Enum):
    ME0: MyEnum = ...
    ME1: MyEnum = ...


class MyStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __call__(
        self, 
    ) -> MyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStruct') -> bool: ...
    def __gt__(self, other: 'MyStruct') -> bool: ...
    def __le__(self, other: 'MyStruct') -> bool: ...
    def __ge__(self, other: 'MyStruct') -> bool: ...


class StructLevelTerseStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    bool_field: Final[bool] = ...

    byte_field: Final[int] = ...

    short_field: Final[int] = ...

    int_field: Final[int] = ...

    long_field: Final[int] = ...

    float_field: Final[float] = ...

    double_field: Final[float] = ...

    string_field: Final[str] = ...

    binary_field: Final[bytes] = ...

    enum_field: Final[MyEnum] = ...

    list_field: Final[_typing.Sequence[int]] = ...

    set_field: Final[_typing.AbstractSet[int]] = ...

    map_field: Final[_typing.Mapping[int, int]] = ...

    struct_field: Final[MyStruct] = ...

    def __init__(
        self, *,
        bool_field: _typing.Optional[bool]=None,
        byte_field: _typing.Optional[int]=None,
        short_field: _typing.Optional[int]=None,
        int_field: _typing.Optional[int]=None,
        long_field: _typing.Optional[int]=None,
        float_field: _typing.Optional[float]=None,
        double_field: _typing.Optional[float]=None,
        string_field: _typing.Optional[str]=None,
        binary_field: _typing.Optional[bytes]=None,
        enum_field: _typing.Optional[MyEnum]=None,
        list_field: _typing.Optional[_typing.Sequence[int]]=None,
        set_field: _typing.Optional[_typing.AbstractSet[int]]=None,
        map_field: _typing.Optional[_typing.Mapping[int, int]]=None,
        struct_field: _typing.Optional[MyStruct]=None
    ) -> None: ...

    def __call__(
        self, *,
        bool_field: _typing.Union[bool, '__NotSet', None]=NOTSET,
        byte_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        short_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        int_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        long_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        float_field: _typing.Union[float, '__NotSet', None]=NOTSET,
        double_field: _typing.Union[float, '__NotSet', None]=NOTSET,
        string_field: _typing.Union[str, '__NotSet', None]=NOTSET,
        binary_field: _typing.Union[bytes, '__NotSet', None]=NOTSET,
        enum_field: _typing.Union[MyEnum, '__NotSet', None]=NOTSET,
        list_field: _typing.Union[_typing.Sequence[int], '__NotSet', None]=NOTSET,
        set_field: _typing.Union[_typing.AbstractSet[int], '__NotSet', None]=NOTSET,
        map_field: _typing.Union[_typing.Mapping[int, int], '__NotSet', None]=NOTSET,
        struct_field: _typing.Union[MyStruct, '__NotSet', None]=NOTSET
    ) -> StructLevelTerseStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['StructLevelTerseStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'StructLevelTerseStruct') -> bool: ...
    def __gt__(self, other: 'StructLevelTerseStruct') -> bool: ...
    def __le__(self, other: 'StructLevelTerseStruct') -> bool: ...
    def __ge__(self, other: 'StructLevelTerseStruct') -> bool: ...


class FieldLevelTerseStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        bool_field: bool
        byte_field: bool
        short_field: bool
        int_field: bool
        long_field: bool
        float_field: bool
        double_field: bool
        string_field: bool
        binary_field: bool
        enum_field: bool
        list_field: bool
        set_field: bool
        map_field: bool
        struct_field: bool
        pass

    terse_bool_field: Final[bool] = ...

    terse_byte_field: Final[int] = ...

    terse_short_field: Final[int] = ...

    terse_int_field: Final[int] = ...

    terse_long_field: Final[int] = ...

    terse_float_field: Final[float] = ...

    terse_double_field: Final[float] = ...

    terse_string_field: Final[str] = ...

    terse_binary_field: Final[bytes] = ...

    terse_enum_field: Final[MyEnum] = ...

    terse_list_field: Final[_typing.Sequence[int]] = ...

    terse_set_field: Final[_typing.AbstractSet[int]] = ...

    terse_map_field: Final[_typing.Mapping[int, int]] = ...

    terse_struct_field: Final[MyStruct] = ...

    bool_field: Final[bool] = ...

    byte_field: Final[int] = ...

    short_field: Final[int] = ...

    int_field: Final[int] = ...

    long_field: Final[int] = ...

    float_field: Final[float] = ...

    double_field: Final[float] = ...

    string_field: Final[str] = ...

    binary_field: Final[bytes] = ...

    enum_field: Final[MyEnum] = ...

    list_field: Final[_typing.Sequence[int]] = ...

    set_field: Final[_typing.AbstractSet[int]] = ...

    map_field: Final[_typing.Mapping[int, int]] = ...

    struct_field: Final[MyStruct] = ...

    def __init__(
        self, *,
        terse_bool_field: _typing.Optional[bool]=None,
        terse_byte_field: _typing.Optional[int]=None,
        terse_short_field: _typing.Optional[int]=None,
        terse_int_field: _typing.Optional[int]=None,
        terse_long_field: _typing.Optional[int]=None,
        terse_float_field: _typing.Optional[float]=None,
        terse_double_field: _typing.Optional[float]=None,
        terse_string_field: _typing.Optional[str]=None,
        terse_binary_field: _typing.Optional[bytes]=None,
        terse_enum_field: _typing.Optional[MyEnum]=None,
        terse_list_field: _typing.Optional[_typing.Sequence[int]]=None,
        terse_set_field: _typing.Optional[_typing.AbstractSet[int]]=None,
        terse_map_field: _typing.Optional[_typing.Mapping[int, int]]=None,
        terse_struct_field: _typing.Optional[MyStruct]=None,
        bool_field: _typing.Optional[bool]=None,
        byte_field: _typing.Optional[int]=None,
        short_field: _typing.Optional[int]=None,
        int_field: _typing.Optional[int]=None,
        long_field: _typing.Optional[int]=None,
        float_field: _typing.Optional[float]=None,
        double_field: _typing.Optional[float]=None,
        string_field: _typing.Optional[str]=None,
        binary_field: _typing.Optional[bytes]=None,
        enum_field: _typing.Optional[MyEnum]=None,
        list_field: _typing.Optional[_typing.Sequence[int]]=None,
        set_field: _typing.Optional[_typing.AbstractSet[int]]=None,
        map_field: _typing.Optional[_typing.Mapping[int, int]]=None,
        struct_field: _typing.Optional[MyStruct]=None
    ) -> None: ...

    def __call__(
        self, *,
        terse_bool_field: _typing.Union[bool, '__NotSet', None]=NOTSET,
        terse_byte_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        terse_short_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        terse_int_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        terse_long_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        terse_float_field: _typing.Union[float, '__NotSet', None]=NOTSET,
        terse_double_field: _typing.Union[float, '__NotSet', None]=NOTSET,
        terse_string_field: _typing.Union[str, '__NotSet', None]=NOTSET,
        terse_binary_field: _typing.Union[bytes, '__NotSet', None]=NOTSET,
        terse_enum_field: _typing.Union[MyEnum, '__NotSet', None]=NOTSET,
        terse_list_field: _typing.Union[_typing.Sequence[int], '__NotSet', None]=NOTSET,
        terse_set_field: _typing.Union[_typing.AbstractSet[int], '__NotSet', None]=NOTSET,
        terse_map_field: _typing.Union[_typing.Mapping[int, int], '__NotSet', None]=NOTSET,
        terse_struct_field: _typing.Union[MyStruct, '__NotSet', None]=NOTSET,
        bool_field: _typing.Union[bool, '__NotSet', None]=NOTSET,
        byte_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        short_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        int_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        long_field: _typing.Union[int, '__NotSet', None]=NOTSET,
        float_field: _typing.Union[float, '__NotSet', None]=NOTSET,
        double_field: _typing.Union[float, '__NotSet', None]=NOTSET,
        string_field: _typing.Union[str, '__NotSet', None]=NOTSET,
        binary_field: _typing.Union[bytes, '__NotSet', None]=NOTSET,
        enum_field: _typing.Union[MyEnum, '__NotSet', None]=NOTSET,
        list_field: _typing.Union[_typing.Sequence[int], '__NotSet', None]=NOTSET,
        set_field: _typing.Union[_typing.AbstractSet[int], '__NotSet', None]=NOTSET,
        map_field: _typing.Union[_typing.Mapping[int, int], '__NotSet', None]=NOTSET,
        struct_field: _typing.Union[MyStruct, '__NotSet', None]=NOTSET
    ) -> FieldLevelTerseStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['FieldLevelTerseStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'FieldLevelTerseStruct') -> bool: ...
    def __gt__(self, other: 'FieldLevelTerseStruct') -> bool: ...
    def __le__(self, other: 'FieldLevelTerseStruct') -> bool: ...
    def __ge__(self, other: 'FieldLevelTerseStruct') -> bool: ...


_List__i16T = _typing.TypeVar('_List__i16T', bound=_typing.Sequence[int])


class List__i16(_typing.Sequence[int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[int]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> int: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[int]: ...
    def __add__(self, other: _typing.Sequence[int]) -> 'List__i16': ...
    def __radd__(self, other: _List__i16T) -> _List__i16T: ...
    def __reversed__(self) -> _typing.Iterator[int]: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Set__i16(_typing.AbstractSet[int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[int]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[int]) -> 'Set__i16': ...
    def intersection(self, other: _typing.AbstractSet[int]) -> 'Set__i16': ...
    def difference(self, other: _typing.AbstractSet[int]) -> 'Set__i16': ...
    def symmetric_difference(self, other: _typing.AbstractSet[int]) -> 'Set__i16': ...
    def issubset(self, other: _typing.AbstractSet[int]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[int]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


class Map__i16_i16(_typing.Mapping[int, int], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Mapping[int, int]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Mapping[int, int]: ...
    def __getitem__(self, key: int) -> int: ...
    def __iter__(self) -> _typing.Iterator[int]: ...


