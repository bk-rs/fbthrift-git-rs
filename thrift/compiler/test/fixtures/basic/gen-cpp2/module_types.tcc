/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
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
          iprot->readI64(this->MyIntField);
          this->__isset.MyIntField = true;
        } else {
          iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          iprot->readString(this->MyStringField);
          this->__isset.MyStringField = true;
        } else {
          iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          ::apache::thrift::Cpp2Ops<  ::cpp2::MyDataItem>::read(iprot, &this->MyDataField);
          this->__isset.MyDataField = true;
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
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  xfer += prot_->serializedFieldSize("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->MyIntField);
  xfer += prot_->serializedFieldSize("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->MyStringField);
  xfer += prot_->serializedFieldSize("MyDataField", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyDataItem>::serializedSize(prot_, &this->MyDataField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  xfer += prot_->serializedFieldSize("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->MyIntField);
  xfer += prot_->serializedFieldSize("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->MyStringField);
  xfer += prot_->serializedFieldSize("MyDataField", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyDataItem>::serializedSizeZC(prot_, &this->MyDataField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  xfer += prot_->writeFieldBegin("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->writeI64(this->MyIntField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->MyStringField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("MyDataField", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::MyDataItem>::write(prot_, &this->MyDataField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t MyDataItem::read(Protocol_* iprot) {
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
uint32_t MyDataItem::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyDataItem");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyDataItem::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyDataItem");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyDataItem::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyDataItem");
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
