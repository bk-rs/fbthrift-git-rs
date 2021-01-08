/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.includes;

import java.util.*;
import org.apache.thrift.protocol.*;

public class MyServiceRpcServerHandler 
  implements com.facebook.swift.transport.server.RpcServerHandler {

  private final java.util.Map<String, com.facebook.swift.transport.server.RpcServerHandler> _methodMap;

  private final MyService.Reactive _delegate;

  private final java.util.List<com.facebook.swift.transport.payload.Reader> _queryReaders;
  private final java.util.List<com.facebook.swift.transport.payload.Reader> _hasArgDocsReaders;

  private final java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers;

  public MyServiceRpcServerHandler(MyService _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers,
                                    reactor.core.scheduler.Scheduler _scheduler) {
    this(new MyServiceBlockingReactiveWrapper(_delegate, _scheduler), _eventHandlers);
  }

  public MyServiceRpcServerHandler(MyService.Async _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    this(new MyServiceAsyncReactiveWrapper(_delegate), _eventHandlers);
  }

  public MyServiceRpcServerHandler(MyService.Reactive _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    
    this._methodMap = new java.util.HashMap<>();
    this._delegate = _delegate;
    this._eventHandlers = _eventHandlers;

    _methodMap.put("query", this);
    _queryReaders = _createqueryReaders();

    _methodMap.put("hasArgDocs", this);
    _hasArgDocsReaders = _createhasArgDocsReaders();

  }

  private static java.util.List<com.facebook.swift.transport.payload.Reader> _createqueryReaders() {
    java.util.List<com.facebook.swift.transport.payload.Reader> _readerList = new java.util.ArrayList<>();

    
    _readerList.add(oprot -> {
      try {
        test.fixtures.includes.MyStruct _r = test.fixtures.includes.MyStruct.read0(oprot);
        return _r;

      } catch (Exception e) {
        throw reactor.core.Exceptions.propagate(e);
      }
    });
    
    _readerList.add(oprot -> {
      try {
        test.fixtures.includes.includes.Included _r = test.fixtures.includes.includes.Included.read0(oprot);
        return _r;

      } catch (Exception e) {
        throw reactor.core.Exceptions.propagate(e);
      }
    });

    return _readerList;
  }

  private static com.facebook.swift.transport.payload.Writer _createqueryWriter(
      final Object _r,
      final com.facebook.swift.service.ContextChain _chain,
      final int _seqId) {
      return oprot -> {
      try {
        oprot.writeMessageBegin(new org.apache.thrift.protocol.TMessage("query", TMessageType.REPLY, _seqId));
        oprot.writeStructBegin(com.facebook.swift.transport.util.GeneratedUtil.TSTRUCT);

        

        oprot.writeFieldBegin(com.facebook.swift.transport.util.GeneratedUtil.VOID_FIELD);


        oprot.writeFieldEnd();
        oprot.writeFieldStop();
        oprot.writeStructEnd();
        oprot.writeMessageEnd();

        _chain.postWrite(_r);
      } catch (Exception e) {
        throw reactor.core.Exceptions.propagate(e);
      }
    };
  }

  private static reactor.core.publisher.Mono<com.facebook.swift.transport.payload.ServerResponsePayload>
    _doquery(
    MyService.Reactive _delegate,
    String _name,
    com.facebook.swift.transport.payload.ServerRequestPayload _payload,
    java.util.List<com.facebook.swift.transport.payload.Reader> _readers,
    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    final com.facebook.swift.service.ContextChain _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
          _chain.preRead();
          java.util.List<Object>_data = _payload.getData(_readers);
          java.util.Iterator<Object> _iterator = _data.iterator();

          test.fixtures.includes.MyStruct s = (test.fixtures.includes.MyStruct) _iterator.next();
          test.fixtures.includes.includes.Included i = (test.fixtures.includes.includes.Included) _iterator.next();

          _chain.postRead(_data);

          return _delegate
            .query(s, i)
            .map(_response -> {
              _chain.preWrite(_response);
                com.facebook.swift.transport.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.swift.transport.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _createqueryWriter(_response, _chain, _payload.getMessageSeqId()));

                return _serverResponsePayload;
            })
            .<com.facebook.swift.transport.payload.ServerResponsePayload>onErrorResume(_t -> {
                _chain.preWriteException(_t);
                com.facebook.swift.transport.payload.Writer _exceptionWriter = null;

                com.facebook.swift.transport.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.swift.transport.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _exceptionWriter);

                return reactor.core.publisher.Mono.just(_serverResponsePayload);
            });
  }
  private static java.util.List<com.facebook.swift.transport.payload.Reader> _createhasArgDocsReaders() {
    java.util.List<com.facebook.swift.transport.payload.Reader> _readerList = new java.util.ArrayList<>();

    
    _readerList.add(oprot -> {
      try {
        test.fixtures.includes.MyStruct _r = test.fixtures.includes.MyStruct.read0(oprot);
        return _r;

      } catch (Exception e) {
        throw reactor.core.Exceptions.propagate(e);
      }
    });
    
    _readerList.add(oprot -> {
      try {
        test.fixtures.includes.includes.Included _r = test.fixtures.includes.includes.Included.read0(oprot);
        return _r;

      } catch (Exception e) {
        throw reactor.core.Exceptions.propagate(e);
      }
    });

    return _readerList;
  }

  private static com.facebook.swift.transport.payload.Writer _createhasArgDocsWriter(
      final Object _r,
      final com.facebook.swift.service.ContextChain _chain,
      final int _seqId) {
      return oprot -> {
      try {
        oprot.writeMessageBegin(new org.apache.thrift.protocol.TMessage("hasArgDocs", TMessageType.REPLY, _seqId));
        oprot.writeStructBegin(com.facebook.swift.transport.util.GeneratedUtil.TSTRUCT);

        

        oprot.writeFieldBegin(com.facebook.swift.transport.util.GeneratedUtil.VOID_FIELD);


        oprot.writeFieldEnd();
        oprot.writeFieldStop();
        oprot.writeStructEnd();
        oprot.writeMessageEnd();

        _chain.postWrite(_r);
      } catch (Exception e) {
        throw reactor.core.Exceptions.propagate(e);
      }
    };
  }

  private static reactor.core.publisher.Mono<com.facebook.swift.transport.payload.ServerResponsePayload>
    _dohasArgDocs(
    MyService.Reactive _delegate,
    String _name,
    com.facebook.swift.transport.payload.ServerRequestPayload _payload,
    java.util.List<com.facebook.swift.transport.payload.Reader> _readers,
    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    final com.facebook.swift.service.ContextChain _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
          _chain.preRead();
          java.util.List<Object>_data = _payload.getData(_readers);
          java.util.Iterator<Object> _iterator = _data.iterator();

          test.fixtures.includes.MyStruct s = (test.fixtures.includes.MyStruct) _iterator.next();
          test.fixtures.includes.includes.Included i = (test.fixtures.includes.includes.Included) _iterator.next();

          _chain.postRead(_data);

          return _delegate
            .hasArgDocs(s, i)
            .map(_response -> {
              _chain.preWrite(_response);
                com.facebook.swift.transport.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.swift.transport.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _createhasArgDocsWriter(_response, _chain, _payload.getMessageSeqId()));

                return _serverResponsePayload;
            })
            .<com.facebook.swift.transport.payload.ServerResponsePayload>onErrorResume(_t -> {
                _chain.preWriteException(_t);
                com.facebook.swift.transport.payload.Writer _exceptionWriter = null;

                com.facebook.swift.transport.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.swift.transport.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _exceptionWriter);

                return reactor.core.publisher.Mono.just(_serverResponsePayload);
            });
  }

  @Override
  public reactor.core.publisher.Mono<com.facebook.swift.transport.payload.ServerResponsePayload> singleRequestSingleResponse(com.facebook.swift.transport.payload.ServerRequestPayload _payload) {
    final String _name = _payload.getRequestRpcMetadata().getName();

    reactor.core.publisher.Mono<com.facebook.swift.transport.payload.ServerResponsePayload> _result;
    try {
      switch (_name) {
        case "query":
          _result = _doquery(_delegate, _name, _payload, _queryReaders, _eventHandlers);
        break;
        case "hasArgDocs":
          _result = _dohasArgDocs(_delegate, _name, _payload, _hasArgDocsReaders, _eventHandlers);
        break;
        default: {
          _result = reactor.core.publisher.Mono.error(new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.UNKNOWN_METHOD, "no method found with name " + _name));
        }
      }
    } catch (Throwable t) {
      _result = reactor.core.publisher.Mono.error(t);
    }

    return _result;
  }

  public java.util.Map<String, com.facebook.swift.transport.server.RpcServerHandler> getMethodMap() {
      return _methodMap;
  }

}
