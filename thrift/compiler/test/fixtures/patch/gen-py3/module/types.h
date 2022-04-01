/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "src/gen-cpp2/module_data.h"
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {



template<>
void reset_field<::cpp2::MyData>(
    ::cpp2::MyData& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.data1_ref().copy_from(default_inst<::cpp2::MyData>().data1_ref());
      return;
    case 1:
      obj.data2_ref().copy_from(default_inst<::cpp2::MyData>().data2_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyStruct>(
    ::cpp2::MyStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.boolVal_ref().copy_from(default_inst<::cpp2::MyStruct>().boolVal_ref());
      return;
    case 1:
      obj.byteVal_ref().copy_from(default_inst<::cpp2::MyStruct>().byteVal_ref());
      return;
    case 2:
      obj.i16Val_ref().copy_from(default_inst<::cpp2::MyStruct>().i16Val_ref());
      return;
    case 3:
      obj.i32Val_ref().copy_from(default_inst<::cpp2::MyStruct>().i32Val_ref());
      return;
    case 4:
      obj.i64Val_ref().copy_from(default_inst<::cpp2::MyStruct>().i64Val_ref());
      return;
    case 5:
      obj.floatVal_ref().copy_from(default_inst<::cpp2::MyStruct>().floatVal_ref());
      return;
    case 6:
      obj.doubleVal_ref().copy_from(default_inst<::cpp2::MyStruct>().doubleVal_ref());
      return;
    case 7:
      obj.stringVal_ref().copy_from(default_inst<::cpp2::MyStruct>().stringVal_ref());
      return;
    case 8:
      obj.binaryVal_ref().copy_from(default_inst<::cpp2::MyStruct>().binaryVal_ref());
      return;
    case 9:
      obj.structVal_ref().copy_from(default_inst<::cpp2::MyStruct>().structVal_ref());
      return;
    case 10:
      obj.optBoolVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optBoolVal_ref());
      return;
    case 11:
      obj.optByteVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optByteVal_ref());
      return;
    case 12:
      obj.optI16Val_ref().copy_from(default_inst<::cpp2::MyStruct>().optI16Val_ref());
      return;
    case 13:
      obj.optI32Val_ref().copy_from(default_inst<::cpp2::MyStruct>().optI32Val_ref());
      return;
    case 14:
      obj.optI64Val_ref().copy_from(default_inst<::cpp2::MyStruct>().optI64Val_ref());
      return;
    case 15:
      obj.optFloatVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optFloatVal_ref());
      return;
    case 16:
      obj.optDoubleVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optDoubleVal_ref());
      return;
    case 17:
      obj.optStringVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optStringVal_ref());
      return;
    case 18:
      obj.optBinaryVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optBinaryVal_ref());
      return;
    case 19:
      obj.optStructVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optStructVal_ref());
      return;
    case 20:
      obj.optListVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optListVal_ref());
      return;
    case 21:
      obj.optSetVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optSetVal_ref());
      return;
    case 22:
      obj.optMapVal_ref().copy_from(default_inst<::cpp2::MyStruct>().optMapVal_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyDataPatch>(
    ::cpp2::MyDataPatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.data1_ref().copy_from(default_inst<::cpp2::MyDataPatch>().data1_ref());
      return;
    case 1:
      obj.data2_ref().copy_from(default_inst<::cpp2::MyDataPatch>().data2_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyDataValuePatch>(
    ::cpp2::MyDataValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::cpp2::MyDataValuePatch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::cpp2::MyDataValuePatch>().clear_ref());
      return;
    case 2:
      obj.patch_ref().copy_from(default_inst<::cpp2::MyDataValuePatch>().patch_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::OptionalMyDataValuePatch>(
    ::cpp2::OptionalMyDataValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::cpp2::OptionalMyDataValuePatch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::cpp2::OptionalMyDataValuePatch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::cpp2::OptionalMyDataValuePatch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::cpp2::OptionalMyDataValuePatch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyStructPatch>(
    ::cpp2::MyStructPatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.boolVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().boolVal_ref());
      return;
    case 1:
      obj.byteVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().byteVal_ref());
      return;
    case 2:
      obj.i16Val_ref().copy_from(default_inst<::cpp2::MyStructPatch>().i16Val_ref());
      return;
    case 3:
      obj.i32Val_ref().copy_from(default_inst<::cpp2::MyStructPatch>().i32Val_ref());
      return;
    case 4:
      obj.i64Val_ref().copy_from(default_inst<::cpp2::MyStructPatch>().i64Val_ref());
      return;
    case 5:
      obj.floatVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().floatVal_ref());
      return;
    case 6:
      obj.doubleVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().doubleVal_ref());
      return;
    case 7:
      obj.stringVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().stringVal_ref());
      return;
    case 8:
      obj.binaryVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().binaryVal_ref());
      return;
    case 9:
      obj.structVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().structVal_ref());
      return;
    case 10:
      obj.optBoolVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optBoolVal_ref());
      return;
    case 11:
      obj.optByteVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optByteVal_ref());
      return;
    case 12:
      obj.optI16Val_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optI16Val_ref());
      return;
    case 13:
      obj.optI32Val_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optI32Val_ref());
      return;
    case 14:
      obj.optI64Val_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optI64Val_ref());
      return;
    case 15:
      obj.optFloatVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optFloatVal_ref());
      return;
    case 16:
      obj.optDoubleVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optDoubleVal_ref());
      return;
    case 17:
      obj.optStringVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optStringVal_ref());
      return;
    case 18:
      obj.optBinaryVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optBinaryVal_ref());
      return;
    case 19:
      obj.optStructVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optStructVal_ref());
      return;
    case 20:
      obj.optListVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optListVal_ref());
      return;
    case 21:
      obj.optSetVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optSetVal_ref());
      return;
    case 22:
      obj.optMapVal_ref().copy_from(default_inst<::cpp2::MyStructPatch>().optMapVal_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyStructField21Patch>(
    ::cpp2::MyStructField21Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::cpp2::MyStructField21Patch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::cpp2::MyStructField21Patch>().clear_ref());
      return;
    case 2:
      obj.prepend_ref().copy_from(default_inst<::cpp2::MyStructField21Patch>().prepend_ref());
      return;
    case 3:
      obj.append_ref().copy_from(default_inst<::cpp2::MyStructField21Patch>().append_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::OptionalMyStructField21Patch>(
    ::cpp2::OptionalMyStructField21Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::cpp2::OptionalMyStructField21Patch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::cpp2::OptionalMyStructField21Patch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::cpp2::OptionalMyStructField21Patch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::cpp2::OptionalMyStructField21Patch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyStructField22Patch>(
    ::cpp2::MyStructField22Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::cpp2::MyStructField22Patch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::cpp2::MyStructField22Patch>().clear_ref());
      return;
    case 2:
      obj.remove_ref().copy_from(default_inst<::cpp2::MyStructField22Patch>().remove_ref());
      return;
    case 3:
      obj.add_ref().copy_from(default_inst<::cpp2::MyStructField22Patch>().add_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::OptionalMyStructField22Patch>(
    ::cpp2::OptionalMyStructField22Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::cpp2::OptionalMyStructField22Patch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::cpp2::OptionalMyStructField22Patch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::cpp2::OptionalMyStructField22Patch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::cpp2::OptionalMyStructField22Patch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyStructField23Patch>(
    ::cpp2::MyStructField23Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::cpp2::MyStructField23Patch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::cpp2::MyStructField23Patch>().clear_ref());
      return;
    case 2:
      obj.put_ref().copy_from(default_inst<::cpp2::MyStructField23Patch>().put_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::OptionalMyStructField23Patch>(
    ::cpp2::OptionalMyStructField23Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::cpp2::OptionalMyStructField23Patch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::cpp2::OptionalMyStructField23Patch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::cpp2::OptionalMyStructField23Patch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::cpp2::OptionalMyStructField23Patch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyStructValuePatch>(
    ::cpp2::MyStructValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::cpp2::MyStructValuePatch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::cpp2::MyStructValuePatch>().clear_ref());
      return;
    case 2:
      obj.patch_ref().copy_from(default_inst<::cpp2::MyStructValuePatch>().patch_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::OptionalMyStructValuePatch>(
    ::cpp2::OptionalMyStructValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::cpp2::OptionalMyStructValuePatch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::cpp2::OptionalMyStructValuePatch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::cpp2::OptionalMyStructValuePatch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::cpp2::OptionalMyStructValuePatch>().patchAfter_ref());
      return;
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyData>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyDataPatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyDataValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::OptionalMyDataValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyStructPatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyStructField21Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::OptionalMyStructField21Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyStructField22Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::OptionalMyStructField22Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyStructField23Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::OptionalMyStructField23Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyStructValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::OptionalMyStructValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
