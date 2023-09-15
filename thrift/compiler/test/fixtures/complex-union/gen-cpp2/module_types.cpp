/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/complex-union/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/complex-union/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/complex-union/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/complex-union/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::ComplexUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::ComplexUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

#if FOLLY_CPLUSPLUS < 201703L
constexpr std::size_t const TEnumTraits<::cpp2::ComplexUnion::Type>::size;
#endif
folly::Range<::cpp2::ComplexUnion::Type const*> const TEnumTraits<::cpp2::ComplexUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::ComplexUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::ComplexUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::ComplexUnion::Type>::names);

bool TEnumTraits<::cpp2::ComplexUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::ComplexUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

const folly::StringPiece ComplexUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<ComplexUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece ComplexUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<ComplexUnion>::name;
}

void ComplexUnion::__fbthrift_clear() {
  // clear all fields
  if (getType() == Type::__EMPTY__) { return; }
  switch(getType()) {
    case Type::intValue:
      destruct(value_.intValue);
      break;
    case Type::stringValue:
      destruct(value_.stringValue);
      break;
    case Type::intListValue:
      destruct(value_.intListValue);
      break;
    case Type::stringListValue:
      destruct(value_.stringListValue);
      break;
    case Type::typedefValue:
      destruct(value_.typedefValue);
      break;
    case Type::stringRef:
      destruct(value_.stringRef);
      break;
    default:
      assert(false);
      break;
  }
  type_ = folly::to_underlying(Type::__EMPTY__);
}

bool ComplexUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}

bool ComplexUnion::operator==(const ComplexUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool ComplexUnion::operator<(FOLLY_MAYBE_UNUSED const ComplexUnion& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (lhs.getType() != rhs.getType()) {
    return lhs.getType() < rhs.getType();
  }
  switch (lhs.getType()) {
    case Type::intValue:
      return lhs.value_.intValue < rhs.value_.intValue;
    case Type::stringValue:
      return lhs.value_.stringValue < rhs.value_.stringValue;
    case Type::intListValue:
      return lhs.value_.intListValue < rhs.value_.intListValue;
    case Type::stringListValue:
      return lhs.value_.stringListValue < rhs.value_.stringListValue;
    case Type::typedefValue:
      return lhs.value_.typedefValue < rhs.value_.typedefValue;
    case Type::stringRef:
      return *lhs.value_.stringRef < *rhs.value_.stringRef;
    default:
      return false;
  }
}

void swap(ComplexUnion& a, ComplexUnion& b) {
  ComplexUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void ComplexUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ComplexUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ComplexUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ComplexUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ComplexUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ComplexUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ComplexUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ComplexUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::ListUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::ListUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

#if FOLLY_CPLUSPLUS < 201703L
constexpr std::size_t const TEnumTraits<::cpp2::ListUnion::Type>::size;
#endif
folly::Range<::cpp2::ListUnion::Type const*> const TEnumTraits<::cpp2::ListUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::ListUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::ListUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::ListUnion::Type>::names);

bool TEnumTraits<::cpp2::ListUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::ListUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

const folly::StringPiece ListUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<ListUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece ListUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<ListUnion>::name;
}

void ListUnion::__fbthrift_clear() {
  // clear all fields
  if (getType() == Type::__EMPTY__) { return; }
  switch(getType()) {
    case Type::intListValue:
      destruct(value_.intListValue);
      break;
    case Type::stringListValue:
      destruct(value_.stringListValue);
      break;
    default:
      assert(false);
      break;
  }
  type_ = folly::to_underlying(Type::__EMPTY__);
}

bool ListUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}

bool ListUnion::operator==(const ListUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool ListUnion::operator<(FOLLY_MAYBE_UNUSED const ListUnion& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (lhs.getType() != rhs.getType()) {
    return lhs.getType() < rhs.getType();
  }
  switch (lhs.getType()) {
    case Type::intListValue:
      return lhs.value_.intListValue < rhs.value_.intListValue;
    case Type::stringListValue:
      return lhs.value_.stringListValue < rhs.value_.stringListValue;
    default:
      return false;
  }
}

void swap(ListUnion& a, ListUnion& b) {
  ListUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void ListUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ListUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ListUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ListUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ListUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ListUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ListUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ListUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::DataUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::DataUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

#if FOLLY_CPLUSPLUS < 201703L
constexpr std::size_t const TEnumTraits<::cpp2::DataUnion::Type>::size;
#endif
folly::Range<::cpp2::DataUnion::Type const*> const TEnumTraits<::cpp2::DataUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::DataUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::DataUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::DataUnion::Type>::names);

bool TEnumTraits<::cpp2::DataUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::DataUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

const folly::StringPiece DataUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<DataUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece DataUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<DataUnion>::name;
}

void DataUnion::__fbthrift_clear() {
  // clear all fields
  if (getType() == Type::__EMPTY__) { return; }
  switch(getType()) {
    case Type::binaryData:
      destruct(value_.binaryData);
      break;
    case Type::stringData:
      destruct(value_.stringData);
      break;
    default:
      assert(false);
      break;
  }
  type_ = folly::to_underlying(Type::__EMPTY__);
}

bool DataUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}

bool DataUnion::operator==(const DataUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool DataUnion::operator<(FOLLY_MAYBE_UNUSED const DataUnion& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (lhs.getType() != rhs.getType()) {
    return lhs.getType() < rhs.getType();
  }
  switch (lhs.getType()) {
    case Type::binaryData:
    return !apache::thrift::StringTraits<std::string>::isEqual(value_.binaryData, rhs.value_.binaryData) &&
      apache::thrift::StringTraits<std::string>::isLess(value_.binaryData, rhs.value_.binaryData);
    case Type::stringData:
      return lhs.value_.stringData < rhs.value_.stringData;
    default:
      return false;
  }
}

void swap(DataUnion& a, DataUnion& b) {
  DataUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void DataUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t DataUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t DataUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t DataUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void DataUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t DataUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t DataUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t DataUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Val>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Val>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece Val::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Val>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece Val::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Val>::name;
}

Val::Val(const Val&) = default;
Val& Val::operator=(const Val&) = default;
Val::Val() :
      __fbthrift_field_intVal() {
}


Val::~Val() {}

Val::Val(FOLLY_MAYBE_UNUSED Val&& other) noexcept :
    __fbthrift_field_strVal(std::move(other.__fbthrift_field_strVal)),
    __fbthrift_field_intVal(std::move(other.__fbthrift_field_intVal)),
    __fbthrift_field_typedefValue(std::move(other.__fbthrift_field_typedefValue)),
    __isset(other.__isset) {
}

Val& Val::operator=(FOLLY_MAYBE_UNUSED Val&& other) noexcept {
    this->__fbthrift_field_strVal = std::move(other.__fbthrift_field_strVal);
    this->__fbthrift_field_intVal = std::move(other.__fbthrift_field_intVal);
    this->__fbthrift_field_typedefValue = std::move(other.__fbthrift_field_typedefValue);
    __isset = other.__isset;
    return *this;
}


Val::Val(apache::thrift::FragileConstructor, ::std::string strVal__arg, ::std::int32_t intVal__arg, ::cpp2::containerTypedef typedefValue__arg) :
    __fbthrift_field_strVal(std::move(strVal__arg)),
    __fbthrift_field_intVal(std::move(intVal__arg)),
    __fbthrift_field_typedefValue(std::move(typedefValue__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
}


void Val::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_strVal = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_intVal = ::std::int32_t();
  this->__fbthrift_field_typedefValue.clear();
  __isset = {};
}

void Val::__fbthrift_clear_terse_fields() {
}

bool Val::__fbthrift_is_empty() const {
  return false;
}

bool Val::operator==(FOLLY_MAYBE_UNUSED const Val& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool Val::operator<(FOLLY_MAYBE_UNUSED const Val& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.strVal_ref() == rhs.strVal_ref())) {
    return lhs.strVal_ref() < rhs.strVal_ref();
  }
  if (!(lhs.intVal_ref() == rhs.intVal_ref())) {
    return lhs.intVal_ref() < rhs.intVal_ref();
  }
  if (!(lhs.typedefValue_ref() == rhs.typedefValue_ref())) {
    return lhs.typedefValue_ref() < rhs.typedefValue_ref();
  }
  return false;
}

const ::cpp2::containerTypedef& Val::get_typedefValue() const& {
  return __fbthrift_field_typedefValue;
}

::cpp2::containerTypedef Val::get_typedefValue() && {
  return std::move(__fbthrift_field_typedefValue);
}


void swap(FOLLY_MAYBE_UNUSED Val& a, FOLLY_MAYBE_UNUSED Val& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_strVal, b.__fbthrift_field_strVal);
  swap(a.__fbthrift_field_intVal, b.__fbthrift_field_intVal);
  swap(a.__fbthrift_field_typedefValue, b.__fbthrift_field_typedefValue);
  swap(a.__isset, b.__isset);
}

template void Val::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Val::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Val::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Val::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Val::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Val::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Val::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Val::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::ValUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::ValUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

#if FOLLY_CPLUSPLUS < 201703L
constexpr std::size_t const TEnumTraits<::cpp2::ValUnion::Type>::size;
#endif
folly::Range<::cpp2::ValUnion::Type const*> const TEnumTraits<::cpp2::ValUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::ValUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::ValUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::ValUnion::Type>::names);

bool TEnumTraits<::cpp2::ValUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::ValUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

const folly::StringPiece ValUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<ValUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece ValUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<ValUnion>::name;
}

void ValUnion::__fbthrift_clear() {
  // clear all fields
  if (getType() == Type::__EMPTY__) { return; }
  switch(getType()) {
    case Type::v1:
      destruct(value_.v1);
      break;
    case Type::v2:
      destruct(value_.v2);
      break;
    default:
      assert(false);
      break;
  }
  type_ = folly::to_underlying(Type::__EMPTY__);
}

bool ValUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}

bool ValUnion::operator==(const ValUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool ValUnion::operator<(FOLLY_MAYBE_UNUSED const ValUnion& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (lhs.getType() != rhs.getType()) {
    return lhs.getType() < rhs.getType();
  }
  switch (lhs.getType()) {
    case Type::v1:
      return lhs.value_.v1 < rhs.value_.v1;
    case Type::v2:
      return lhs.value_.v2 < rhs.value_.v2;
    default:
      return false;
  }
}

void swap(ValUnion& a, ValUnion& b) {
  ValUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void ValUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ValUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ValUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ValUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ValUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ValUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ValUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ValUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ValUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::Val>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ValUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::Val>,
    "inconsistent use of json option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::VirtualComplexUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::VirtualComplexUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

#if FOLLY_CPLUSPLUS < 201703L
constexpr std::size_t const TEnumTraits<::cpp2::VirtualComplexUnion::Type>::size;
#endif
folly::Range<::cpp2::VirtualComplexUnion::Type const*> const TEnumTraits<::cpp2::VirtualComplexUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::VirtualComplexUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::VirtualComplexUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::VirtualComplexUnion::Type>::names);

bool TEnumTraits<::cpp2::VirtualComplexUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::VirtualComplexUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

const folly::StringPiece VirtualComplexUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<VirtualComplexUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece VirtualComplexUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<VirtualComplexUnion>::name;
}

void VirtualComplexUnion::__fbthrift_clear() {
  // clear all fields
  if (getType() == Type::__EMPTY__) { return; }
  switch(getType()) {
    case Type::thingOne:
      destruct(value_.thingOne);
      break;
    case Type::thingTwo:
      destruct(value_.thingTwo);
      break;
    default:
      assert(false);
      break;
  }
  type_ = folly::to_underlying(Type::__EMPTY__);
}

bool VirtualComplexUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}

bool VirtualComplexUnion::operator==(const VirtualComplexUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool VirtualComplexUnion::operator<(FOLLY_MAYBE_UNUSED const VirtualComplexUnion& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (lhs.getType() != rhs.getType()) {
    return lhs.getType() < rhs.getType();
  }
  switch (lhs.getType()) {
    case Type::thingOne:
      return lhs.value_.thingOne < rhs.value_.thingOne;
    case Type::thingTwo:
      return lhs.value_.thingTwo < rhs.value_.thingTwo;
    default:
      return false;
  }
}

void swap(VirtualComplexUnion& a, VirtualComplexUnion& b) {
  VirtualComplexUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void VirtualComplexUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t VirtualComplexUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t VirtualComplexUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t VirtualComplexUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void VirtualComplexUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t VirtualComplexUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t VirtualComplexUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t VirtualComplexUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::NonCopyableStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::NonCopyableStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece NonCopyableStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<NonCopyableStruct>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece NonCopyableStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<NonCopyableStruct>::name;
}


NonCopyableStruct::NonCopyableStruct(apache::thrift::FragileConstructor, ::std::int64_t num__arg) :
    __fbthrift_field_num(std::move(num__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void NonCopyableStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_num = ::std::int64_t();
  __isset = {};
}

void NonCopyableStruct::__fbthrift_clear_terse_fields() {
}

bool NonCopyableStruct::__fbthrift_is_empty() const {
  return false;
}

bool NonCopyableStruct::operator==(FOLLY_MAYBE_UNUSED const NonCopyableStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool NonCopyableStruct::operator<(FOLLY_MAYBE_UNUSED const NonCopyableStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.num_ref() == rhs.num_ref())) {
    return lhs.num_ref() < rhs.num_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED NonCopyableStruct& a, FOLLY_MAYBE_UNUSED NonCopyableStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_num, b.__fbthrift_field_num);
  swap(a.__isset, b.__isset);
}

template void NonCopyableStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NonCopyableStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NonCopyableStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NonCopyableStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NonCopyableStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NonCopyableStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NonCopyableStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NonCopyableStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::NonCopyableUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::NonCopyableUnion>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift {

#if FOLLY_CPLUSPLUS < 201703L
constexpr std::size_t const TEnumTraits<::cpp2::NonCopyableUnion::Type>::size;
#endif
folly::Range<::cpp2::NonCopyableUnion::Type const*> const TEnumTraits<::cpp2::NonCopyableUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::NonCopyableUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::NonCopyableUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::NonCopyableUnion::Type>::names);

bool TEnumTraits<::cpp2::NonCopyableUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::NonCopyableUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

const folly::StringPiece NonCopyableUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<NonCopyableUnion>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece NonCopyableUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<NonCopyableUnion>::name;
}

void NonCopyableUnion::__fbthrift_clear() {
  // clear all fields
  if (getType() == Type::__EMPTY__) { return; }
  switch(getType()) {
    case Type::s:
      destruct(value_.s);
      break;
    default:
      assert(false);
      break;
  }
  type_ = folly::to_underlying(Type::__EMPTY__);
}

bool NonCopyableUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}

bool NonCopyableUnion::operator==(const NonCopyableUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool NonCopyableUnion::operator<(FOLLY_MAYBE_UNUSED const NonCopyableUnion& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (lhs.getType() != rhs.getType()) {
    return lhs.getType() < rhs.getType();
  }
  switch (lhs.getType()) {
    case Type::s:
      return lhs.value_.s < rhs.value_.s;
    default:
      return false;
  }
}

void swap(NonCopyableUnion& a, NonCopyableUnion& b) {
  NonCopyableUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void NonCopyableUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NonCopyableUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NonCopyableUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NonCopyableUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NonCopyableUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NonCopyableUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NonCopyableUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NonCopyableUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        NonCopyableUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::NonCopyableStruct>,
    "inconsistent use of json option");

} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
