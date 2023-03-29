/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/service-schema/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/PrimitivesServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/module_types.h"
#include "thrift/annotation/gen-cpp2/thrift_types.h"
#include "thrift/lib/thrift/gen-cpp2/schema_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {
class PrimitivesService;
class PrimitivesServiceAsyncProcessor;

class PrimitivesServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::PrimitivesService> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "PrimitivesService"; }

  typedef ::cpp2::PrimitivesServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
  #if defined(THRIFT_SCHEMA_AVAILABLE)
  std::optional<std::vector<apache::thrift::type::Schema>> getServiceMetadataV1() override;
  #endif
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual ::std::int64_t sync_init(::std::int64_t /*param0*/, ::std::int64_t /*param1*/);
  [[deprecated("Use sync_init instead")]] virtual ::std::int64_t init(::std::int64_t /*param0*/, ::std::int64_t /*param1*/);
  virtual folly::Future<::std::int64_t> future_init(::std::int64_t p_param0, ::std::int64_t p_param1);
  virtual folly::SemiFuture<::std::int64_t> semifuture_init(::std::int64_t p_param0, ::std::int64_t p_param1);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::std::int64_t> co_init(::std::int64_t p_param0, ::std::int64_t p_param1);
  virtual folly::coro::Task<::std::int64_t> co_init(apache::thrift::RequestParams params, ::std::int64_t p_param0, ::std::int64_t p_param1);
#endif
  virtual void async_tm_init(std::unique_ptr<apache::thrift::HandlerCallback<::std::int64_t>> callback, ::std::int64_t p_param0, ::std::int64_t p_param1);
 private:
  static ::cpp2::PrimitivesServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_init{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using PrimitivesServiceSvIf [[deprecated("Use apache::thrift::ServiceHandler<PrimitivesService> instead")]] = ::apache::thrift::ServiceHandler<PrimitivesService>;
} // cpp2
namespace cpp2 {
class PrimitivesServiceSvNull : public ::apache::thrift::ServiceHandler<PrimitivesService> {
 public:
  ::std::int64_t init(::std::int64_t /*param0*/, ::std::int64_t /*param1*/) override;
};

class PrimitivesServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessorBase {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::PrimitivesService>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<PrimitivesServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const PrimitivesServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const PrimitivesServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_init(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_init(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_init(apache::thrift::ContextStack* ctx, ::std::int64_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_init(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  PrimitivesServiceAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::PrimitivesService>* iface) :
      iface_(iface) {}
  ~PrimitivesServiceAsyncProcessor() override {}
};

} // cpp2
