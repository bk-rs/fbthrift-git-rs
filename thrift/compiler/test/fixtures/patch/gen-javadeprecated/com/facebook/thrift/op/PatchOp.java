/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package com.facebook.thrift.op;


import com.facebook.thrift.IntRangeSet;
import java.util.Map;
import java.util.HashMap;

@SuppressWarnings({ "unused" })
public enum PatchOp implements com.facebook.thrift.TEnum {
  /**
   * Set the value. Supersedes all other ops.
   * 
   * Note: Due to a limitation in current Thrift protocol encoding schemes,
   * unions cannot be reliabily distinquished from structs/exceptions, so fields
   * must be set before assign can change the value, for example via an
   * `EnsureStruct` or `EnsureUnion` operation.
   */
  Assign(1),
  /**
   * Set to the intrinsic default (which might be 'unset').
   */
  Clear(2),
  /**
   * Apply a field/value-wise patch.
   */
  PatchPrior(3),
  /**
   * Set to the given default, if not already of the same type.
   * 
   * In a dynamic context this means the ids/values must match exactly:
   *     ensureUnion(Object ensureUnion, Object value) {
   *       if (ensureUnion.ids() != value.ids())
   *         value = ensureUnion;
   *     }
   */
  EnsureUnion(4),
  /**
   *  * A pair-wise ensure operation.
   *  *
   *  * For maps this is an "add if key not present".
   *  *
   *  * For structs, this can be use to encodes the default state of the fields, based
   *  * on thier qualifier type:
   *  * - optional: absent
   *  * - terse: intrinsic default
   *  * - fill: custom default
   * *
   */
  EnsureStruct(5),
  /**
   * Apply a field/value-wise patch after all other ops.
   */
  PatchAfter(6),
  /**
   * Remove if present.
   * 
   * A key/value-based remove for set/list, 'saturating subtract' for
   * numeric/'counting' types, and 'remove by key' for maps.
   */
  Remove(7),
  /**
   * Add/prepend a value,with the following semantics:
   * - Key/value-based 'add' for set;
   * - 'prepend' for list, string, or binary; and
   * - saturating 'add' for numeric/counting types.
   */
  Add(8),
  /**
   * Put/append/invert a value, with the following semantics:
   * - Identical to 'add' for set;
   * - 'update or insert' for maps;
   * - 'append' for list, string or binary; and
   * - 'invert' for boolean.
   */
  Put(9),
  Unspecified(0);

  private final int value;

  private PatchOp(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static PatchOp findByValue(int value) { 
    switch (value) {
      case 1:
        return Assign;
      case 2:
        return Clear;
      case 3:
        return PatchPrior;
      case 4:
        return EnsureUnion;
      case 5:
        return EnsureStruct;
      case 6:
        return PatchAfter;
      case 7:
        return Remove;
      case 8:
        return Add;
      case 9:
        return Put;
      case 0:
        return Unspecified;
      default:
        return null;
    }
  }
}
