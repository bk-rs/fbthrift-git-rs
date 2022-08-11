/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/tablebased/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::test::fixtures::tablebased::TrivialTypesStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).fieldA_ref());
    case 2:
      return f(1, static_cast<T&&>(t).fieldB_ref());
    case 3:
      return f(2, static_cast<T&&>(t).fieldC_ref());
    case 4:
      return f(3, static_cast<T&&>(t).fieldD_ref());
    case 5:
      return f(4, static_cast<T&&>(t).fieldE_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::tablebased::TrivialTypesStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::tablebased::ContainerStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 12:
      return f(0, static_cast<T&&>(t).fieldA_ref());
    case 2:
      return f(1, static_cast<T&&>(t).fieldB_ref());
    case 3:
      return f(2, static_cast<T&&>(t).fieldC_ref());
    case 4:
      return f(3, static_cast<T&&>(t).fieldD_ref());
    case 5:
      return f(4, static_cast<T&&>(t).fieldE_ref());
    case 6:
      return f(5, static_cast<T&&>(t).fieldF_ref());
    case 7:
      return f(6, static_cast<T&&>(t).fieldG_ref());
    case 8:
      return f(7, static_cast<T&&>(t).fieldH_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::tablebased::ContainerStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::tablebased::ExampleUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).fieldA_ref());
    case 2:
      return f(1, static_cast<T&&>(t).fieldB_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::tablebased::ExampleUnion");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache