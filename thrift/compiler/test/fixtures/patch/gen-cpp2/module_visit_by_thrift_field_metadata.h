/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/patch/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::test::fixtures::patch::MyData> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).data1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).data2_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyData");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::InnerUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).innerOption_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::InnerUnion");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).option1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).option2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).option3_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyUnion");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).boolVal_ref());
    case 2:
      return f(1, static_cast<T&&>(t).byteVal_ref());
    case 3:
      return f(2, static_cast<T&&>(t).i16Val_ref());
    case 4:
      return f(3, static_cast<T&&>(t).i32Val_ref());
    case 5:
      return f(4, static_cast<T&&>(t).i64Val_ref());
    case 6:
      return f(5, static_cast<T&&>(t).floatVal_ref());
    case 7:
      return f(6, static_cast<T&&>(t).doubleVal_ref());
    case 8:
      return f(7, static_cast<T&&>(t).stringVal_ref());
    case 9:
      return f(8, static_cast<T&&>(t).binaryVal_ref());
    case 10:
      return f(9, static_cast<T&&>(t).structVal_ref());
    case 11:
      return f(10, static_cast<T&&>(t).optBoolVal_ref());
    case 12:
      return f(11, static_cast<T&&>(t).optByteVal_ref());
    case 13:
      return f(12, static_cast<T&&>(t).optI16Val_ref());
    case 14:
      return f(13, static_cast<T&&>(t).optI32Val_ref());
    case 15:
      return f(14, static_cast<T&&>(t).optI64Val_ref());
    case 16:
      return f(15, static_cast<T&&>(t).optFloatVal_ref());
    case 17:
      return f(16, static_cast<T&&>(t).optDoubleVal_ref());
    case 18:
      return f(17, static_cast<T&&>(t).optStringVal_ref());
    case 19:
      return f(18, static_cast<T&&>(t).optBinaryVal_ref());
    case 20:
      return f(19, static_cast<T&&>(t).optStructVal_ref());
    case 21:
      return f(20, static_cast<T&&>(t).optListVal_ref());
    case 22:
      return f(21, static_cast<T&&>(t).optSetVal_ref());
    case 23:
      return f(22, static_cast<T&&>(t).optMapVal_ref());
    case 30:
      return f(23, static_cast<T&&>(t).unionVal_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyDataFieldPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).data1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).data2_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyDataFieldPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyDataPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(2, static_cast<T&&>(t).patchPrior_ref());
    case 5:
      return f(3, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(4, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyDataPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::OptionalMyDataPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 2:
      return f(0, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(1, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(2, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(3, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::OptionalMyDataPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::InnerUnionFieldPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).innerOption_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::InnerUnionFieldPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::InnerUnionPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(2, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(3, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(4, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::InnerUnionPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::OptionalInnerUnionPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 2:
      return f(0, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(1, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(2, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(3, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::OptionalInnerUnionPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyUnionFieldPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).option1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).option2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).option3_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyUnionFieldPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyUnionPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(2, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(3, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(4, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyUnionPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::OptionalMyUnionPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 2:
      return f(0, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(1, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(2, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(3, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::OptionalMyUnionPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyStructField21PatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 8:
      return f(2, static_cast<T&&>(t).prepend_ref());
    case 9:
      return f(3, static_cast<T&&>(t).append_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyStructField21PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::OptionalMyStructField21PatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 2:
      return f(0, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(1, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(2, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(3, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::OptionalMyStructField21PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyStructField22PatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 7:
      return f(2, static_cast<T&&>(t).remove_ref());
    case 8:
      return f(3, static_cast<T&&>(t).add_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyStructField22PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::OptionalMyStructField22PatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 2:
      return f(0, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(1, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(2, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(3, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::OptionalMyStructField22PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyStructField23PatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 5:
      return f(2, static_cast<T&&>(t).add_ref());
    case 9:
      return f(3, static_cast<T&&>(t).put_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyStructField23PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::OptionalMyStructField23PatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 2:
      return f(0, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(1, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(2, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(3, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::OptionalMyStructField23PatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyStructFieldPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).boolVal_ref());
    case 2:
      return f(1, static_cast<T&&>(t).byteVal_ref());
    case 3:
      return f(2, static_cast<T&&>(t).i16Val_ref());
    case 4:
      return f(3, static_cast<T&&>(t).i32Val_ref());
    case 5:
      return f(4, static_cast<T&&>(t).i64Val_ref());
    case 6:
      return f(5, static_cast<T&&>(t).floatVal_ref());
    case 7:
      return f(6, static_cast<T&&>(t).doubleVal_ref());
    case 8:
      return f(7, static_cast<T&&>(t).stringVal_ref());
    case 9:
      return f(8, static_cast<T&&>(t).binaryVal_ref());
    case 10:
      return f(9, static_cast<T&&>(t).structVal_ref());
    case 11:
      return f(10, static_cast<T&&>(t).optBoolVal_ref());
    case 12:
      return f(11, static_cast<T&&>(t).optByteVal_ref());
    case 13:
      return f(12, static_cast<T&&>(t).optI16Val_ref());
    case 14:
      return f(13, static_cast<T&&>(t).optI32Val_ref());
    case 15:
      return f(14, static_cast<T&&>(t).optI64Val_ref());
    case 16:
      return f(15, static_cast<T&&>(t).optFloatVal_ref());
    case 17:
      return f(16, static_cast<T&&>(t).optDoubleVal_ref());
    case 18:
      return f(17, static_cast<T&&>(t).optStringVal_ref());
    case 19:
      return f(18, static_cast<T&&>(t).optBinaryVal_ref());
    case 20:
      return f(19, static_cast<T&&>(t).optStructVal_ref());
    case 21:
      return f(20, static_cast<T&&>(t).optListVal_ref());
    case 22:
      return f(21, static_cast<T&&>(t).optSetVal_ref());
    case 23:
      return f(22, static_cast<T&&>(t).optMapVal_ref());
    case 30:
      return f(23, static_cast<T&&>(t).unionVal_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyStructFieldPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::MyStructPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).assign_ref());
    case 2:
      return f(1, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(2, static_cast<T&&>(t).patchPrior_ref());
    case 5:
      return f(3, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(4, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::MyStructPatchStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::patch::OptionalMyStructPatchStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 2:
      return f(0, static_cast<T&&>(t).clear_ref());
    case 3:
      return f(1, static_cast<T&&>(t).patchPrior_ref());
    case 4:
      return f(2, static_cast<T&&>(t).ensure_ref());
    case 6:
      return f(3, static_cast<T&&>(t).patch_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::patch::OptionalMyStructPatchStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
