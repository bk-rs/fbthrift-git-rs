<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace namespace_from_package_without_module_name;

/**
 * Original thrift struct:-
 * Foo
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/namespace_from_package_without_module_name/Foo'))>>
class Foo implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'MyInt',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'MyInt' => 1,
  ];

  const type TConstructorShape = shape(
    ?'MyInt' => ?int,
  );

  const type TShape = shape(
    'MyInt' => int,
  );
  const int STRUCTURAL_ID = 2232659903239944098;
  /**
   * Original thrift field:-
   * 1: i64 MyInt
   */
  public int $MyInt;

  public function __construct(?int $MyInt = null)[] {
    $this->MyInt = $MyInt ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'MyInt'),
    );
  }

  public function getName()[]: string {
    return 'Foo';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Foo",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "MyInt",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['MyInt'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'MyInt' => $this->MyInt,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'MyInt') !== null) {
      $this->MyInt = HH\FIXME\UNSAFE_CAST<mixed, int>($parsed['MyInt']);
    }
  }

}

