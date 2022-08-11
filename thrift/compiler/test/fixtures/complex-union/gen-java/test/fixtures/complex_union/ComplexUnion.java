/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.complex_union;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("ComplexUnion")
public final class ComplexUnion implements com.facebook.thrift.payload.ThriftSerializable {
    private static final TStruct STRUCT_DESC = new TStruct("ComplexUnion");
    private static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    private static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final ComplexUnion _DEFAULT = new ComplexUnion();

    public static final int _INTVALUE = 1;
    private static final TField INT_VALUE_FIELD_DESC = new TField("intValue", TType.I64, (short)1);
    public static final int _STRINGVALUE = 5;
    private static final TField STRING_VALUE_FIELD_DESC = new TField("stringValue", TType.STRING, (short)5);
    public static final int _INTLISTVALUE = 2;
    private static final TField INT_LIST_VALUE_FIELD_DESC = new TField("intListValue", TType.LIST, (short)2);
    public static final int _STRINGLISTVALUE = 3;
    private static final TField STRING_LIST_VALUE_FIELD_DESC = new TField("stringListValue", TType.LIST, (short)3);
    public static final int _TYPEDEFVALUE = 9;
    private static final TField TYPEDEF_VALUE_FIELD_DESC = new TField("typedefValue", TType.MAP, (short)9);
    public static final int _STRINGREF = 14;
    private static final TField STRING_REF_FIELD_DESC = new TField("stringRef", TType.STRING, (short)14);

    static {
      NAMES_TO_IDS.put("intValue", 1);
      THRIFT_NAMES_TO_IDS.put("intValue", 1);
      FIELD_METADATA.put(1, INT_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("stringValue", 5);
      THRIFT_NAMES_TO_IDS.put("stringValue", 5);
      FIELD_METADATA.put(5, STRING_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("intListValue", 2);
      THRIFT_NAMES_TO_IDS.put("intListValue", 2);
      FIELD_METADATA.put(2, INT_LIST_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("stringListValue", 3);
      THRIFT_NAMES_TO_IDS.put("stringListValue", 3);
      FIELD_METADATA.put(3, STRING_LIST_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("typedefValue", 9);
      THRIFT_NAMES_TO_IDS.put("typedefValue", 9);
      FIELD_METADATA.put(9, TYPEDEF_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("stringRef", 14);
      THRIFT_NAMES_TO_IDS.put("stringRef", 14);
      FIELD_METADATA.put(14, STRING_REF_FIELD_DESC);
    }

    private java.lang.Object value;
    private short id;

    @ThriftConstructor
    public ComplexUnion() {
    }
    
    public static ComplexUnion fromIntValue(final long intValue) {
        ComplexUnion res = new ComplexUnion();
        res.value = intValue;
        res.id = 1;
        return res;
    }
    
    public static ComplexUnion fromStringValue(final String stringValue) {
        ComplexUnion res = new ComplexUnion();
        res.value = stringValue;
        res.id = 5;
        return res;
    }
    
    public static ComplexUnion fromIntListValue(final List<Long> intListValue) {
        ComplexUnion res = new ComplexUnion();
        res.value = intListValue;
        res.id = 2;
        return res;
    }
    
    public static ComplexUnion fromStringListValue(final List<String> stringListValue) {
        ComplexUnion res = new ComplexUnion();
        res.value = stringListValue;
        res.id = 3;
        return res;
    }
    
    public static ComplexUnion fromTypedefValue(final Map<Short, String> typedefValue) {
        ComplexUnion res = new ComplexUnion();
        res.value = typedefValue;
        res.id = 9;
        return res;
    }
    
    public static ComplexUnion fromStringRef(final String stringRef) {
        ComplexUnion res = new ComplexUnion();
        res.value = stringRef;
        res.id = 14;
        return res;
    }
    
    @com.facebook.swift.codec.ThriftField
    @Deprecated
    public void setIntValue(final long intValue) {
        this.value = intValue;
        this.id = 1;
    }
    @com.facebook.swift.codec.ThriftField
    @Deprecated
    public void setStringValue(final String stringValue) {
        this.value = stringValue;
        this.id = 5;
    }
    @com.facebook.swift.codec.ThriftField
    @Deprecated
    public void setIntListValue(final List<Long> intListValue) {
        this.value = intListValue;
        this.id = 2;
    }
    @com.facebook.swift.codec.ThriftField
    @Deprecated
    public void setStringListValue(final List<String> stringListValue) {
        this.value = stringListValue;
        this.id = 3;
    }
    @com.facebook.swift.codec.ThriftField
    @Deprecated
    public void setTypedefValue(final Map<Short, String> typedefValue) {
        this.value = typedefValue;
        this.id = 9;
    }
    @com.facebook.swift.codec.ThriftField
    @Deprecated
    public void setStringRef(final String stringRef) {
        this.value = stringRef;
        this.id = 14;
    }

    @com.facebook.swift.codec.ThriftField(value=1, name="intValue", requiredness=Requiredness.NONE)
    public long getIntValue() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a intValue element!");
        }
        return (long) value;
    }

    public boolean isSetIntValue() {
        return this.id == 1;
    }

    @com.facebook.swift.codec.ThriftField(value=5, name="stringValue", requiredness=Requiredness.NONE)
    public String getStringValue() {
        if (this.id != 5) {
            throw new IllegalStateException("Not a stringValue element!");
        }
        return (String) value;
    }

    public boolean isSetStringValue() {
        return this.id == 5;
    }

    @com.facebook.swift.codec.ThriftField(value=2, name="intListValue", requiredness=Requiredness.NONE)
    public List<Long> getIntListValue() {
        if (this.id != 2) {
            throw new IllegalStateException("Not a intListValue element!");
        }
        return (List<Long>) value;
    }

    public boolean isSetIntListValue() {
        return this.id == 2;
    }

    @com.facebook.swift.codec.ThriftField(value=3, name="stringListValue", requiredness=Requiredness.NONE)
    public List<String> getStringListValue() {
        if (this.id != 3) {
            throw new IllegalStateException("Not a stringListValue element!");
        }
        return (List<String>) value;
    }

    public boolean isSetStringListValue() {
        return this.id == 3;
    }

    @com.facebook.swift.codec.ThriftField(value=9, name="typedefValue", requiredness=Requiredness.NONE)
    public Map<Short, String> getTypedefValue() {
        if (this.id != 9) {
            throw new IllegalStateException("Not a typedefValue element!");
        }
        return (Map<Short, String>) value;
    }

    public boolean isSetTypedefValue() {
        return this.id == 9;
    }

    @com.facebook.swift.codec.ThriftField(value=14, name="stringRef", requiredness=Requiredness.NONE)
    public String getStringRef() {
        if (this.id != 14) {
            throw new IllegalStateException("Not a stringRef element!");
        }
        return (String) value;
    }

    public boolean isSetStringRef() {
        return this.id == 14;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public String getThriftName() {
        TField tField = (TField) FIELD_METADATA.get((int) this.id);
        if (tField == null) {
            return "null";
        } else {
            return tField.name;
        }
    }

    public void accept(Visitor visitor) {
        if (isSetIntValue()) {
            visitor.visitIntValue(getIntValue());
            return;
        }
        if (isSetStringValue()) {
            visitor.visitStringValue(getStringValue());
            return;
        }
        if (isSetIntListValue()) {
            visitor.visitIntListValue(getIntListValue());
            return;
        }
        if (isSetStringListValue()) {
            visitor.visitStringListValue(getStringListValue());
            return;
        }
        if (isSetTypedefValue()) {
            visitor.visitTypedefValue(getTypedefValue());
            return;
        }
        if (isSetStringRef()) {
            visitor.visitStringRef(getStringRef());
            return;
        }
    }

    @java.lang.Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }

    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        ComplexUnion other = (ComplexUnion)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            id,
            value,
        });
    }

    public interface Visitor {
        void visitIntValue(long intValue);
        void visitStringValue(String stringValue);
        void visitIntListValue(List<Long> intListValue);
        void visitStringListValue(List<String> stringListValue);
        void visitTypedefValue(Map<Short, String> typedefValue);
        void visitStringRef(String stringRef);
    }

    public void write0(TProtocol oprot) throws TException {
      if (this.id != 0 && this.value == null ){
         return;
      }
      oprot.writeStructBegin(STRUCT_DESC);
      switch (this.id) {
      case _INTVALUE: {
        oprot.writeFieldBegin(INT_VALUE_FIELD_DESC);
        long intValue = (long)this.value;
        oprot.writeI64(intValue);
        oprot.writeFieldEnd();
        break;
      }
      case _STRINGVALUE: {
        oprot.writeFieldBegin(STRING_VALUE_FIELD_DESC);
        String stringValue = (String)this.value;
        oprot.writeString(stringValue);
        oprot.writeFieldEnd();
        break;
      }
      case _INTLISTVALUE: {
        oprot.writeFieldBegin(INT_LIST_VALUE_FIELD_DESC);
        List<Long> _iter0 = (List<Long>)this.value;
        oprot.writeListBegin(new TList(TType.I64, _iter0.size()));
        for (long _iter1 : _iter0) {
          oprot.writeI64(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
        break;
      }
      case _STRINGLISTVALUE: {
        oprot.writeFieldBegin(STRING_LIST_VALUE_FIELD_DESC);
        List<String> _iter0 = (List<String>)this.value;
        oprot.writeListBegin(new TList(TType.STRING, _iter0.size()));
        for (String _iter1 : _iter0) {
          oprot.writeString(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
        break;
      }
      case _TYPEDEFVALUE: {
        oprot.writeFieldBegin(TYPEDEF_VALUE_FIELD_DESC);
        Map<Short, String> _iter0 = (Map<Short, String>)this.value;
        oprot.writeMapBegin(new TMap(TType.I16, TType.STRING, _iter0.size()));
        for (Map.Entry<Short, String> _iter1 : _iter0.entrySet()) {
          oprot.writeI16(_iter1.getKey());
          oprot.writeString(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
        break;
      }
      case _STRINGREF: {
        oprot.writeFieldBegin(STRING_REF_FIELD_DESC);
        String stringRef = (String)this.value;
        oprot.writeString(stringRef);
        oprot.writeFieldEnd();
        break;
      }
      default:
          // ignore unknown field
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    
    public static com.facebook.thrift.payload.Reader<ComplexUnion> asReader() {
      return ComplexUnion::read0;
    }
    
    public static ComplexUnion read0(TProtocol oprot) throws TException {
      ComplexUnion res = new ComplexUnion();
      res.value = null;
      res.id = (short) 0;
      oprot.readStructBegin(ComplexUnion.NAMES_TO_IDS, ComplexUnion.THRIFT_NAMES_TO_IDS, ComplexUnion.FIELD_METADATA);
      TField __field = oprot.readFieldBegin();
      if (__field.type != TType.STOP) {
          switch (__field.id) {
          case _INTVALUE:
            if (__field.type == INT_VALUE_FIELD_DESC.type) {
              long intValue = oprot.readI64();
              res.value = intValue;
            }
            break;
          case _STRINGVALUE:
            if (__field.type == STRING_VALUE_FIELD_DESC.type) {
              String stringValue = oprot.readString();
              res.value = stringValue;
            }
            break;
          case _INTLISTVALUE:
            if (__field.type == INT_LIST_VALUE_FIELD_DESC.type) {
              List<Long> intListValue;
            {
            TList _list = oprot.readListBegin();
            intListValue = new ArrayList<Long>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                long _value1 = oprot.readI64();
                intListValue.add(_value1);
            }
            oprot.readListEnd();
            }
              res.value = intListValue;
            }
            break;
          case _STRINGLISTVALUE:
            if (__field.type == STRING_LIST_VALUE_FIELD_DESC.type) {
              List<String> stringListValue;
            {
            TList _list = oprot.readListBegin();
            stringListValue = new ArrayList<String>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                String _value1 = oprot.readString();
                stringListValue.add(_value1);
            }
            oprot.readListEnd();
            }
              res.value = stringListValue;
            }
            break;
          case _TYPEDEFVALUE:
            if (__field.type == TYPEDEF_VALUE_FIELD_DESC.type) {
              Map<Short, String> typedefValue;
            {
            TMap _map = oprot.readMapBegin();
            typedefValue = new HashMap<Short, String>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                short _key1 = oprot.readI16();
                String _value1 = oprot.readString();
                typedefValue.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
              res.value = typedefValue;
            }
            break;
          case _STRINGREF:
            if (__field.type == STRING_REF_FIELD_DESC.type) {
              String stringRef = oprot.readString();
              res.value = stringRef;
            }
            break;
          default:
            TProtocolUtil.skip(oprot, __field.type);
          }
        if (res.value != null) {
          res.id = __field.id;
        }
        oprot.readFieldEnd();
        TField __stopField = oprot.readFieldBegin(); // Consume the STOP byte
        if (__stopField.type != TType.STOP) {
          throw new TProtocolException(TProtocolException.INVALID_DATA, "Union 'ComplexUnion' is missing a STOP byte");
        }
      }
      oprot.readStructEnd();
      return res;
    }
    public static ComplexUnion defaultInstance() {
        return _DEFAULT;
    }

}