/**
 * Autogenerated by Thrift for src/include2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_types.h"
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::some::ns::IncludedB>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::some::ns::IncludedB>;
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

namespace some { namespace ns {

IncludedB::IncludedB(const IncludedB&) = default;
IncludedB& IncludedB::operator=(const IncludedB&) = default;
IncludedB::IncludedB(IncludedB&& other) noexcept  :
    __fbthrift_field_i32Field(std::move(other.__fbthrift_field_i32Field)),
    __fbthrift_field_strField(std::move(other.__fbthrift_field_strField)),
    __isset(other.__isset) {
}

IncludedB& IncludedB::operator=(FOLLY_MAYBE_UNUSED IncludedB&& other) noexcept {
    this->__fbthrift_field_i32Field = std::move(other.__fbthrift_field_i32Field);
    this->__fbthrift_field_strField = std::move(other.__fbthrift_field_strField);
    __isset = other.__isset;
    return *this;
}


IncludedB::IncludedB(apache::thrift::FragileConstructor, ::std::int32_t i32Field__arg, ::std::string strField__arg) :
    __fbthrift_field_i32Field(std::move(i32Field__arg)),
    __fbthrift_field_strField(std::move(strField__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void IncludedB::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_i32Field = ::std::int32_t();
  this->__fbthrift_field_strField = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

bool IncludedB::__fbthrift_is_empty() const {
  return false;
}

bool IncludedB::operator==(const IncludedB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field_ref() == rhs.i32Field_ref())) {
    return false;
  }
  if (!(lhs.strField_ref() == rhs.strField_ref())) {
    return false;
  }
  return true;
}

bool IncludedB::operator<(const IncludedB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field_ref() == rhs.i32Field_ref())) {
    return lhs.i32Field_ref() < rhs.i32Field_ref();
  }
  if (!(lhs.strField_ref() == rhs.strField_ref())) {
    return lhs.strField_ref() < rhs.strField_ref();
  }
  return false;
}


void swap(IncludedB& a, IncludedB& b) {
  using ::std::swap;
  swap(a.i32Field_ref().value(), b.i32Field_ref().value());
  swap(a.strField_ref().value(), b.strField_ref().value());
  swap(a.__isset, b.__isset);
}

template void IncludedB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t IncludedB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t IncludedB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void IncludedB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t IncludedB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t IncludedB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}} // some::ns

namespace some { namespace ns { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}} // some::ns
