#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod, ABCMeta

import module.types as _module_types

_PubSubStreamingServiceInterfaceT = _typing.TypeVar('_PubSubStreamingServiceInterfaceT', bound='PubSubStreamingServiceInterface')


class PubSubStreamingServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):

    @staticmethod
    def createPublisher_returnstream(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    def returnstream(
        self,
        i32_from: int,
        i32_to: int
    ) -> _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]: ...

    @staticmethod
    def createPublisher_streamthrows(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    def streamthrows(
        self,
        foo: int
    ) -> _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]: ...

    @staticmethod
    def createPublisher_servicethrows(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    def servicethrows(
        self,
        foo: int
    ) -> _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]: ...

    @staticmethod
    def createPublisher_servicethrows2(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    def servicethrows2(
        self,
        foo: int
    ) -> _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]: ...

    @staticmethod
    def createPublisher_boththrows(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    def boththrows(
        self,
        foo: int
    ) -> _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]: ...

    @staticmethod
    def createPublisher_responseandstreamstreamthrows(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    async def responseandstreamstreamthrows(
        self,
        foo: int
    ) -> _typing.Tuple[int, _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]]: ...

    @staticmethod
    def createPublisher_responseandstreamservicethrows(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    async def responseandstreamservicethrows(
        self,
        foo: int
    ) -> _typing.Tuple[int, _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]]: ...

    @staticmethod
    def createPublisher_responseandstreamboththrows(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    async def responseandstreamboththrows(
        self,
        foo: int
    ) -> _typing.Tuple[int, _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]]: ...

    @staticmethod
    def createPublisher_returnstreamFast(callback=None) -> _typing.Tuple[
        _typing.AsyncGenerator[int, None],
        _module_types.ServerPublisher_cint32_t
    ]: ...


    @abstractmethod
    def returnstreamFast(
        self,
        i32_from: int,
        i32_to: int
    ) -> _typing.Union[_typing.Awaitable[_typing.AsyncGenerator[int, None]],_typing.AsyncGenerator[int, None]]: ...
    pass


