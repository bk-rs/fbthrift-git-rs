/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/deprecated/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

template <class Protocol_>
uint32_t House::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (iprot->kUsesFieldNames()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I64) {
          iprot->readI64(this->id);
        } else {
          iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          iprot->readString(this->houseName);
        } else {
          iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_SET) {
          this->houseColors = std::set< ::cpp2::ColorID>();
          ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set< ::cpp2::ColorID>>::read(*iprot, this->houseColors.value());
        } else {
          iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        iprot->skip(_ftype);
        break;
      }
    }
    iprot->readFieldEnd();
  }
  iprot->readStructEnd();

  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

template <class Protocol_>
uint32_t House::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("House");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("houseName", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->houseName);
  if (this->houseColors.hasValue()) {
    xfer += prot_->serializedFieldSize("houseColors", apache::thrift::protocol::T_SET, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set< ::cpp2::ColorID>>::serializedSize<false>(*prot_, this->houseColors.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t House::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("House");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("houseName", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->houseName);
  if (this->houseColors.hasValue()) {
    xfer += prot_->serializedFieldSize("houseColors", apache::thrift::protocol::T_SET, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set< ::cpp2::ColorID>>::serializedSize<false>(*prot_, this->houseColors.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t House::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("House");
  xfer += prot_->writeFieldBegin("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->writeI64(this->id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("houseName", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->houseName);
  xfer += prot_->writeFieldEnd();
  if (this->houseColors.hasValue()) {
    xfer += prot_->writeFieldBegin("houseColors", apache::thrift::protocol::T_SET, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, std::set< ::cpp2::ColorID>>::write(*prot_, this->houseColors.value());
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t Field::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (iprot->kUsesFieldNames()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I64) {
          iprot->readI64(this->id);
        } else {
          iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          iprot->readI32(this->fieldType);
        } else {
          iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        iprot->skip(_ftype);
        break;
      }
    }
    iprot->readFieldEnd();
  }
  iprot->readStructEnd();

  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

template <class Protocol_>
uint32_t Field::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Field");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("fieldType", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->fieldType);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Field::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Field");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->id);
  xfer += prot_->serializedFieldSize("fieldType", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->fieldType);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Field::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Field");
  xfer += prot_->writeFieldBegin("id", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->writeI64(this->id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldType", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->writeI32(this->fieldType);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
