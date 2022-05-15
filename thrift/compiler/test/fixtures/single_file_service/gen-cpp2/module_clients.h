/**
 * Autogenerated by Thrift for 
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/single_file_service/gen-cpp2/module_types.h"

// cpp_include's
#include <memory>

// for sinks
#include <thrift/lib/cpp2/async/ClientSinkBridge.h>
#include <thrift/lib/cpp2/async/Sink.h>

// for streams
#include <thrift/lib/cpp2/async/ClientBufferedStream.h>

// for interactions
#include <thrift/lib/cpp2/async/ClientBufferedStream.h>
#include <thrift/lib/cpp2/async/ClientSinkBridge.h>
#include <thrift/lib/cpp2/async/Sink.h>

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class A;
} // cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::A> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "A";
  }

class I final : public apache::thrift::InteractionHandle {
  using apache::thrift::InteractionHandle::InteractionHandle;
  friend class ::apache::thrift::Client<::cpp2::A>;
 public:


  char const* getServiceName() const noexcept override {
    return "A";
  }


 void interact(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void interactImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  void sync_interact();
  void sync_interact(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<folly::Unit> semifuture_interact();
  folly::SemiFuture<folly::Unit> semifuture_interact(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_interact() {
    return co_interact<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_interact(apache::thrift::RpcOptions& rpcOptions) {
    return co_interact<true>(&rpcOptions);
  }
#else
  folly::coro::Task<void> co_interact() {
    co_await folly::coro::detachOnCancel(semifuture_interact());
  }
  folly::coro::Task<void> co_interact(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_interact(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_interact(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = interactCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      interactImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      interactImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_interact(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  static folly::exception_wrapper recv_wrapped_interact(::apache::thrift::ClientReceiveState& state);
  static void recv_interact(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void interactT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> interactCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};
  I createI();
  virtual void foo(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void foo(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fooImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  virtual void sync_foo(::cpp2::Foo& _return);
  virtual void sync_foo(apache::thrift::RpcOptions& rpcOptions, ::cpp2::Foo& _return);

  virtual folly::Future<::cpp2::Foo> future_foo();
  virtual folly::SemiFuture<::cpp2::Foo> semifuture_foo();
  virtual folly::Future<::cpp2::Foo> future_foo(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<::cpp2::Foo> semifuture_foo(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<::cpp2::Foo, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_foo(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<::cpp2::Foo, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_foo(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<::cpp2::Foo> co_foo() {
    return co_foo<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<::cpp2::Foo> co_foo(apache::thrift::RpcOptions& rpcOptions) {
    return co_foo<true>(&rpcOptions);
  }
#else
  folly::coro::Task<::cpp2::Foo> co_foo() {
    co_return co_await folly::coro::detachOnCancel(semifuture_foo());
  }
  folly::coro::Task<::cpp2::Foo> co_foo(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_foo(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::cpp2::Foo> co_foo(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = fooCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      fooImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fooImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::cpp2::Foo _return;
    if (auto ew = recv_wrapped_foo(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void foo(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_foo(::cpp2::Foo& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_foo(::cpp2::Foo& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_foo(::cpp2::Foo& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_foo(::cpp2::Foo& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void fooT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> fooCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using AAsyncClient = ::apache::thrift::Client<A>;
} // cpp2

namespace cpp2 {
class B;
} // cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::B> : public ::cpp2::AAsyncClient {
 public:
  using ::cpp2::AAsyncClient::AAsyncClient;

  char const* getServiceName() const noexcept override {
    return "B";
  }


  virtual void bar(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::Foo& p_foo);
  virtual void bar(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::Foo& p_foo);
 protected:
  void barImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::Foo& p_foo, bool stealRpcOptions = false);
 public:

  virtual void sync_bar(const ::cpp2::Foo& p_foo);
  virtual void sync_bar(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::Foo& p_foo);

  virtual folly::Future<folly::Unit> future_bar(const ::cpp2::Foo& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_bar(const ::cpp2::Foo& p_foo);
  virtual folly::Future<folly::Unit> future_bar(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::Foo& p_foo);
  virtual folly::SemiFuture<folly::Unit> semifuture_bar(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::Foo& p_foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_bar(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::Foo& p_foo);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_bar(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::Foo& p_foo);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_bar(const ::cpp2::Foo& p_foo) {
    return co_bar<false>(nullptr, p_foo);
  }
  template <int = 0>
  folly::coro::Task<void> co_bar(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::Foo& p_foo) {
    return co_bar<true>(&rpcOptions, p_foo);
  }
#else
  folly::coro::Task<void> co_bar(const ::cpp2::Foo& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_bar(p_foo));
  }
  folly::coro::Task<void> co_bar(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::Foo& p_foo) {
    co_await folly::coro::detachOnCancel(semifuture_bar(rpcOptions, p_foo));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_bar(apache::thrift::RpcOptions* rpcOptions, const ::cpp2::Foo& p_foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = barCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      barImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    } else {
      barImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_foo);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_bar(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void bar(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::Foo& p_foo);


  static folly::exception_wrapper recv_wrapped_bar(::apache::thrift::ClientReceiveState& state);
  static void recv_bar(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_bar(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_bar(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void barT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::Foo& p_foo);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> barCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void stream_stuff(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void stream_stuff(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void stream_stuffImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::StreamClientCallback* callback, bool stealRpcOptions = false);
 public:

  virtual apache::thrift::ClientBufferedStream<::std::int32_t> sync_stream_stuff();
  virtual apache::thrift::ClientBufferedStream<::std::int32_t> sync_stream_stuff(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<::std::int32_t>> semifuture_stream_stuff();
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<::std::int32_t>> semifuture_stream_stuff(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<::std::int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_stream_stuff(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::std::int32_t>> co_stream_stuff() {
    return co_stream_stuff<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::std::int32_t>> co_stream_stuff(apache::thrift::RpcOptions& rpcOptions) {
    return co_stream_stuff<true>(&rpcOptions);
  }
#else
  folly::coro::Task<apache::thrift::ClientBufferedStream<::std::int32_t>> co_stream_stuff() {
    co_return co_await folly::coro::detachOnCancel(semifuture_stream_stuff());
  }
  folly::coro::Task<apache::thrift::ClientBufferedStream<::std::int32_t>> co_stream_stuff(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_stream_stuff(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::std::int32_t>> co_stream_stuff(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = stream_stuffCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::createStreamClientCallback(
        apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback),
      hasRpcOptions ? rpcOptions->getBufferOptions() : defaultRpcOptions.getBufferOptions());
    if constexpr (hasRpcOptions) {
      stream_stuffImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      stream_stuffImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    apache::thrift::ClientBufferedStream<::std::int32_t> _return;
    if (auto ew = recv_wrapped_stream_stuff(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES



  static folly::exception_wrapper recv_wrapped_stream_stuff(apache::thrift::ClientBufferedStream<::std::int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientBufferedStream<::std::int32_t> recv_stream_stuff(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientBufferedStream<::std::int32_t> recv_instance_stream_stuff(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_stream_stuff(apache::thrift::ClientBufferedStream<::std::int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void stream_stuffT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::StreamClientCallback* callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> stream_stuffCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
 protected:
  void sink_stuffImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::SinkClientCallback* callback, bool stealRpcOptions = false);
 public:
#if FOLLY_HAS_COROUTINES
  folly::coro::Task<apache::thrift::ClientSink<::std::int32_t, ::std::int32_t>> co_sink_stuff();
  folly::coro::Task<apache::thrift::ClientSink<::std::int32_t, ::std::int32_t>> co_sink_stuff(apache::thrift::RpcOptions& rpcOptions);
#endif // FOLLY_HAS_COROUTINES

  static folly::exception_wrapper recv_wrapped_sink_stuff(apache::thrift::ClientSink<::std::int32_t, ::std::int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientSink<::std::int32_t, ::std::int32_t> recv_sink_stuff(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientSink<::std::int32_t, ::std::int32_t> recv_instance_sink_stuff(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_sink_stuff(apache::thrift::ClientSink<::std::int32_t, ::std::int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void sink_stuffT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::SinkClientCallback* callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> sink_stuffCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using BAsyncClient = ::apache::thrift::Client<B>;
} // cpp2

namespace cpp2 {
class C;
} // cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::C> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "C";
  }

class I final : public apache::thrift::InteractionHandle {
  using apache::thrift::InteractionHandle::InteractionHandle;
  friend class ::apache::thrift::Client<::cpp2::C>;
 public:


  char const* getServiceName() const noexcept override {
    return "C";
  }


 void interact(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void interactImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  void sync_interact();
  void sync_interact(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<folly::Unit> semifuture_interact();
  folly::SemiFuture<folly::Unit> semifuture_interact(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_interact() {
    return co_interact<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_interact(apache::thrift::RpcOptions& rpcOptions) {
    return co_interact<true>(&rpcOptions);
  }
#else
  folly::coro::Task<void> co_interact() {
    co_await folly::coro::detachOnCancel(semifuture_interact());
  }
  folly::coro::Task<void> co_interact(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_interact(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_interact(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = interactCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      interactImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      interactImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_interact(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  static folly::exception_wrapper recv_wrapped_interact(::apache::thrift::ClientReceiveState& state);
  static void recv_interact(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void interactT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> interactCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};
  I createI();
};

} // namespace apache::thrift

namespace cpp2 {
using CAsyncClient = ::apache::thrift::Client<C>;
} // cpp2
