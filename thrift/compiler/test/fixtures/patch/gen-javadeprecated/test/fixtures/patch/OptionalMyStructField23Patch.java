/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class OptionalMyStructField23Patch implements TBase, java.io.Serializable, Cloneable, Comparable<OptionalMyStructField23Patch> {
  private static final TStruct STRUCT_DESC = new TStruct("OptionalMyStructField23Patch");
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)3);
  private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.MAP, (short)1);
  private static final TField PATCH_AFTER_FIELD_DESC = new TField("patchAfter", TType.STRUCT, (short)4);

  /**
   * Clears any set value. Applies first.
   */
  public boolean clear;
  /**
   * Patches any set value. Applies second.
   */
  public MyStructField23Patch patch;
  /**
   * Initializes any unset value. Applies third.
   */
  public Map<String,String> ensure;
  /**
   * Patches any set value, including newly set values. Applies fourth.
   */
  public MyStructField23Patch patchAfter;
  public static final int CLEAR = 2;
  public static final int PATCH = 3;
  public static final int ENSURE = 1;
  public static final int PATCHAFTER = 4;

  // isset id assignments
  private static final int __CLEAR_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(CLEAR, new FieldMetaData("clear", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.BOOL)));
    tmpMetaDataMap.put(PATCH, new FieldMetaData("patch", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyStructField23Patch.class)));
    tmpMetaDataMap.put(ENSURE, new FieldMetaData("ensure", TFieldRequirementType.OPTIONAL, 
        new MapMetaData(TType.MAP, 
            new FieldValueMetaData(TType.STRING), 
            new FieldValueMetaData(TType.STRING))));
    tmpMetaDataMap.put(PATCHAFTER, new FieldMetaData("patchAfter", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyStructField23Patch.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(OptionalMyStructField23Patch.class, metaDataMap);
  }

  public OptionalMyStructField23Patch() {
  }

  public OptionalMyStructField23Patch(
      boolean clear,
      MyStructField23Patch patch,
      MyStructField23Patch patchAfter) {
    this();
    this.clear = clear;
    setClearIsSet(true);
    this.patch = patch;
    this.patchAfter = patchAfter;
  }

  public OptionalMyStructField23Patch(
      boolean clear,
      MyStructField23Patch patch,
      Map<String,String> ensure,
      MyStructField23Patch patchAfter) {
    this();
    this.clear = clear;
    setClearIsSet(true);
    this.patch = patch;
    this.ensure = ensure;
    this.patchAfter = patchAfter;
  }

  public static class Builder {
    private boolean clear;
    private MyStructField23Patch patch;
    private Map<String,String> ensure;
    private MyStructField23Patch patchAfter;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setClear(final boolean clear) {
      this.clear = clear;
      __optional_isset.set(__CLEAR_ISSET_ID, true);
      return this;
    }

    public Builder setPatch(final MyStructField23Patch patch) {
      this.patch = patch;
      return this;
    }

    public Builder setEnsure(final Map<String,String> ensure) {
      this.ensure = ensure;
      return this;
    }

    public Builder setPatchAfter(final MyStructField23Patch patchAfter) {
      this.patchAfter = patchAfter;
      return this;
    }

    public OptionalMyStructField23Patch build() {
      OptionalMyStructField23Patch result = new OptionalMyStructField23Patch();
      if (__optional_isset.get(__CLEAR_ISSET_ID)) {
        result.setClear(this.clear);
      }
      result.setPatch(this.patch);
      result.setEnsure(this.ensure);
      result.setPatchAfter(this.patchAfter);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public OptionalMyStructField23Patch(OptionalMyStructField23Patch other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.clear = TBaseHelper.deepCopy(other.clear);
    if (other.isSetPatch()) {
      this.patch = TBaseHelper.deepCopy(other.patch);
    }
    if (other.isSetEnsure()) {
      this.ensure = TBaseHelper.deepCopy(other.ensure);
    }
    if (other.isSetPatchAfter()) {
      this.patchAfter = TBaseHelper.deepCopy(other.patchAfter);
    }
  }

  public OptionalMyStructField23Patch deepCopy() {
    return new OptionalMyStructField23Patch(this);
  }

  /**
   * Clears any set value. Applies first.
   */
  public boolean isClear() {
    return this.clear;
  }

  /**
   * Clears any set value. Applies first.
   */
  public OptionalMyStructField23Patch setClear(boolean clear) {
    this.clear = clear;
    setClearIsSet(true);
    return this;
  }

  public void unsetClear() {
    __isset_bit_vector.clear(__CLEAR_ISSET_ID);
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return __isset_bit_vector.get(__CLEAR_ISSET_ID);
  }

  public void setClearIsSet(boolean __value) {
    __isset_bit_vector.set(__CLEAR_ISSET_ID, __value);
  }

  /**
   * Patches any set value. Applies second.
   */
  public MyStructField23Patch getPatch() {
    return this.patch;
  }

  /**
   * Patches any set value. Applies second.
   */
  public OptionalMyStructField23Patch setPatch(MyStructField23Patch patch) {
    this.patch = patch;
    return this;
  }

  public void unsetPatch() {
    this.patch = null;
  }

  // Returns true if field patch is set (has been assigned a value) and false otherwise
  public boolean isSetPatch() {
    return this.patch != null;
  }

  public void setPatchIsSet(boolean __value) {
    if (!__value) {
      this.patch = null;
    }
  }

  /**
   * Initializes any unset value. Applies third.
   */
  public Map<String,String> getEnsure() {
    return this.ensure;
  }

  /**
   * Initializes any unset value. Applies third.
   */
  public OptionalMyStructField23Patch setEnsure(Map<String,String> ensure) {
    this.ensure = ensure;
    return this;
  }

  public void unsetEnsure() {
    this.ensure = null;
  }

  // Returns true if field ensure is set (has been assigned a value) and false otherwise
  public boolean isSetEnsure() {
    return this.ensure != null;
  }

  public void setEnsureIsSet(boolean __value) {
    if (!__value) {
      this.ensure = null;
    }
  }

  /**
   * Patches any set value, including newly set values. Applies fourth.
   */
  public MyStructField23Patch getPatchAfter() {
    return this.patchAfter;
  }

  /**
   * Patches any set value, including newly set values. Applies fourth.
   */
  public OptionalMyStructField23Patch setPatchAfter(MyStructField23Patch patchAfter) {
    this.patchAfter = patchAfter;
    return this;
  }

  public void unsetPatchAfter() {
    this.patchAfter = null;
  }

  // Returns true if field patchAfter is set (has been assigned a value) and false otherwise
  public boolean isSetPatchAfter() {
    return this.patchAfter != null;
  }

  public void setPatchAfterIsSet(boolean __value) {
    if (!__value) {
      this.patchAfter = null;
    }
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case CLEAR:
      if (__value == null) {
        unsetClear();
      } else {
        setClear((Boolean)__value);
      }
      break;

    case PATCH:
      if (__value == null) {
        unsetPatch();
      } else {
        setPatch((MyStructField23Patch)__value);
      }
      break;

    case ENSURE:
      if (__value == null) {
        unsetEnsure();
      } else {
        setEnsure((Map<String,String>)__value);
      }
      break;

    case PATCHAFTER:
      if (__value == null) {
        unsetPatchAfter();
      } else {
        setPatchAfter((MyStructField23Patch)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case CLEAR:
      return new Boolean(isClear());

    case PATCH:
      return getPatch();

    case ENSURE:
      return getEnsure();

    case PATCHAFTER:
      return getPatchAfter();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof OptionalMyStructField23Patch))
      return false;
    OptionalMyStructField23Patch that = (OptionalMyStructField23Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatch(), that.isSetPatch(), this.patch, that.patch)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEnsure(), that.isSetEnsure(), this.ensure, that.ensure)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatchAfter(), that.isSetPatchAfter(), this.patchAfter, that.patchAfter)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {clear, patch, ensure, patchAfter});
  }

  @Override
  public int compareTo(OptionalMyStructField23Patch other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetClear()).compareTo(other.isSetClear());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(clear, other.clear);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPatch()).compareTo(other.isSetPatch());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(patch, other.patch);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetEnsure()).compareTo(other.isSetEnsure());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(ensure, other.ensure);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPatchAfter()).compareTo(other.isSetPatchAfter());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(patchAfter, other.patchAfter);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case CLEAR:
          if (__field.type == TType.BOOL) {
            this.clear = iprot.readBool();
            setClearIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCH:
          if (__field.type == TType.STRUCT) {
            this.patch = new MyStructField23Patch();
            this.patch.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ENSURE:
          if (__field.type == TType.MAP) {
            {
              TMap _map55 = iprot.readMapBegin();
              this.ensure = new HashMap<String,String>(Math.max(0, 2*_map55.size));
              for (int _i56 = 0; 
                   (_map55.size < 0) ? iprot.peekMap() : (_i56 < _map55.size); 
                   ++_i56)
              {
                String _key57;
                String _val58;
                _key57 = iprot.readString();
                _val58 = iprot.readString();
                this.ensure.put(_key57, _val58);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCHAFTER:
          if (__field.type == TType.STRUCT) {
            this.patchAfter = new MyStructField23Patch();
            this.patchAfter.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.ensure != null) {
      if (isSetEnsure()) {
        oprot.writeFieldBegin(ENSURE_FIELD_DESC);
        {
          oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, this.ensure.size()));
          for (Map.Entry<String, String> _iter59 : this.ensure.entrySet())          {
            oprot.writeString(_iter59.getKey());
            oprot.writeString(_iter59.getValue());
          }
          oprot.writeMapEnd();
        }
        oprot.writeFieldEnd();
      }
    }
    oprot.writeFieldBegin(CLEAR_FIELD_DESC);
    oprot.writeBool(this.clear);
    oprot.writeFieldEnd();
    if (this.patch != null) {
      oprot.writeFieldBegin(PATCH_FIELD_DESC);
      this.patch.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.patchAfter != null) {
      oprot.writeFieldBegin(PATCH_AFTER_FIELD_DESC);
      this.patchAfter.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("OptionalMyStructField23Patch");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("clear");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.isClear(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("patch");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPatch() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPatch(), indent + 1, prettyPrint));
    }
    first = false;
    if (isSetEnsure())
    {
      if (!first) sb.append("," + newLine);
      sb.append(indentStr);
      sb.append("ensure");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getEnsure() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getEnsure(), indent + 1, prettyPrint));
      }
      first = false;
    }
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("patchAfter");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPatchAfter() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPatchAfter(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

