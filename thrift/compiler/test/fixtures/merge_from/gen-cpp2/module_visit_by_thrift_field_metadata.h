/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/merge_from/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::cpp2::Fields> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 100:
      return f(0, static_cast<T&&>(t).injected_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Fields");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::FieldsInjectedToEmptyStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 100:
      return f(0, static_cast<T&&>(t).injected_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::FieldsInjectedToEmptyStruct");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::FieldsInjectedToStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).string_field_ref());
    case 100:
      return f(1, static_cast<T&&>(t).injected_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::FieldsInjectedToStruct");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::FieldsInjectedWithIncludedStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).string_field_ref());
    case 100:
      return f(1, static_cast<T&&>(t).injected_field_ref());
    case 101:
      return f(2, static_cast<T&&>(t).injected_structured_annotation_field_ref());
    case 102:
      return f(3, static_cast<T&&>(t).injected_unstructured_annotation_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::FieldsInjectedWithIncludedStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache