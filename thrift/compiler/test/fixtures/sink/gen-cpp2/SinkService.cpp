/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/sink/gen-cpp2/SinkService.h"
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/SinkService.tcc"
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::cpp2::SinkService>::getProcessor() {
  return std::make_unique<::cpp2::SinkServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::cpp2::SinkService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::cpp2::SinkService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::cpp2::SinkServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::cpp2::SinkService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::cpp2::SinkServiceServiceInfoHolder apache::thrift::ServiceHandler<::cpp2::SinkService>::__fbthrift_serviceInfoHolder;


::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> apache::thrift::ServiceHandler<::cpp2::SinkService>::method() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method");
}

folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::semifuture_method() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_method.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return method();
}

folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::future_method() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_method.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_method(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::SinkService>::async_tm_method(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_method.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_method.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_method();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_method();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(method());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse> apache::thrift::ServiceHandler<::cpp2::SinkService>::methodAndReponse() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodAndReponse");
}

folly::SemiFuture<::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::semifuture_methodAndReponse() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodAndReponse.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return methodAndReponse();
}

folly::Future<::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::future_methodAndReponse() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodAndReponse.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodAndReponse(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::SinkService>::async_tm_methodAndReponse(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodAndReponse.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodAndReponse.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodAndReponse();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodAndReponse();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(methodAndReponse());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> apache::thrift::ServiceHandler<::cpp2::SinkService>::methodThrow() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodThrow");
}

folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::semifuture_methodThrow() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodThrow.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return methodThrow();
}

folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::future_methodThrow() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodThrow.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodThrow(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::SinkService>::async_tm_methodThrow(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodThrow.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodThrow.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodThrow();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodThrow();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(methodThrow());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> apache::thrift::ServiceHandler<::cpp2::SinkService>::methodSinkThrow() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodSinkThrow");
}

folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::semifuture_methodSinkThrow() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodSinkThrow.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return methodSinkThrow();
}

folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::future_methodSinkThrow() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodSinkThrow.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodSinkThrow(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::SinkService>::async_tm_methodSinkThrow(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodSinkThrow.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodSinkThrow.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodSinkThrow();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodSinkThrow();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(methodSinkThrow());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> apache::thrift::ServiceHandler<::cpp2::SinkService>::methodFinalThrow() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodFinalThrow");
}

folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::semifuture_methodFinalThrow() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodFinalThrow.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return methodFinalThrow();
}

folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::future_methodFinalThrow() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodFinalThrow.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodFinalThrow(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::SinkService>::async_tm_methodFinalThrow(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodFinalThrow.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodFinalThrow.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodFinalThrow();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodFinalThrow();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(methodFinalThrow());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> apache::thrift::ServiceHandler<::cpp2::SinkService>::methodBothThrow() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodBothThrow");
}

folly::SemiFuture<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::semifuture_methodBothThrow() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodBothThrow.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return methodBothThrow();
}

folly::Future<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>> apache::thrift::ServiceHandler<::cpp2::SinkService>::future_methodBothThrow() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodBothThrow.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodBothThrow(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::SinkService>::async_tm_methodBothThrow(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodBothThrow.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodBothThrow.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodBothThrow();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodBothThrow();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(methodBothThrow());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void apache::thrift::ServiceHandler<::cpp2::SinkService>::async_eb_methodFast(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse>>> callback) {
  callback->exception(apache::thrift::detail::si::create_app_exn_unimplemented("methodFast"));
}


namespace cpp2 {

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::method() {
  return {};
}

::apache::thrift::ResponseAndSinkConsumer<::cpp2::InitialResponse, ::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::methodAndReponse() {
  return {};
}

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::methodThrow() {
  return {};
}

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::methodSinkThrow() {
  return {};
}

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::methodFinalThrow() {
  return {};
}

::apache::thrift::SinkConsumer<::cpp2::SinkPayload, ::cpp2::FinalResponse> SinkServiceSvNull::methodBothThrow() {
  return {};
}


const char* SinkServiceAsyncProcessor::getServiceName() {
  return "SinkService";
}

void SinkServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen(response);
}

void SinkServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void SinkServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void SinkServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const SinkServiceAsyncProcessor::ProcessMap& SinkServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const SinkServiceAsyncProcessor::ProcessMap SinkServiceAsyncProcessor::kOwnProcessMap_ {
  {"method",
    {&SinkServiceAsyncProcessor::setUpAndProcess_method<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::setUpAndProcess_method<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_method<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_method<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodAndReponse",
    {&SinkServiceAsyncProcessor::setUpAndProcess_methodAndReponse<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::setUpAndProcess_methodAndReponse<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodAndReponse<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodAndReponse<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodThrow",
    {&SinkServiceAsyncProcessor::setUpAndProcess_methodThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::setUpAndProcess_methodThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodSinkThrow",
    {&SinkServiceAsyncProcessor::setUpAndProcess_methodSinkThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::setUpAndProcess_methodSinkThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodSinkThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodSinkThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodFinalThrow",
    {&SinkServiceAsyncProcessor::setUpAndProcess_methodFinalThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::setUpAndProcess_methodFinalThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodFinalThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodFinalThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodBothThrow",
    {&SinkServiceAsyncProcessor::setUpAndProcess_methodBothThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::setUpAndProcess_methodBothThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodBothThrow<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodBothThrow<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodFast",
    {&SinkServiceAsyncProcessor::setUpAndProcess_methodFast<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::setUpAndProcess_methodFast<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodFast<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SinkServiceAsyncProcessor::executeRequest_methodFast<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& SinkServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap SinkServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"method",
    {false,
     apache::thrift::RpcKind::SINK,
     "SinkService.method",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  {"methodAndReponse",
    {false,
     apache::thrift::RpcKind::SINK,
     "SinkService.methodAndReponse",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  {"methodThrow",
    {false,
     apache::thrift::RpcKind::SINK,
     "SinkService.methodThrow",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  {"methodSinkThrow",
    {false,
     apache::thrift::RpcKind::SINK,
     "SinkService.methodSinkThrow",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  {"methodFinalThrow",
    {false,
     apache::thrift::RpcKind::SINK,
     "SinkService.methodFinalThrow",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  {"methodBothThrow",
    {false,
     apache::thrift::RpcKind::SINK,
     "SinkService.methodBothThrow",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  {"methodFast",
    {true,
     apache::thrift::RpcKind::SINK,
     "SinkService.methodFast",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  };

  return requestInfoMap;
}
} // cpp2