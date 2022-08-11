/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<src/gen-cpp2/Service.h>)
#include <src/gen-cpp2/Service.h>
#else
#include <src/gen-cpp2/module_handlers.h>
#endif
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace facebook {
namespace thrift {
namespace test {

class ServiceWrapper : virtual public ServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit ServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_func(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback
        , std::unique_ptr<std::string> arg1
        , std::unique_ptr<std::string> arg2
        , std::unique_ptr<::facebook::thrift::test::Foo> arg3
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> ServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace facebook
} // namespace thrift
} // namespace test