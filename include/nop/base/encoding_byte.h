#ifndef LIBNOP_INCLUDE_NOP_BASE_ENCODING_BYTE_H_
#define LIBNOP_INCLUDE_NOP_BASE_ENCODING_BYTE_H_

#include <cstdint>

namespace nop {

// First byte of an encoding specifies its type and possibly other embedded
// values.
enum class EncodingByte : std::uint8_t {
  // Positive integer type with embedded value.
  PositiveFixInt = 0x00,
  PositiveFixIntMin = 0x00,
  PositiveFixIntMax = 0x7f,
  PositiveFixIntMask = 0x7f,

  // Boolean types with embedded value.
  False = 0x00,
  True = 0x01,

  // Unsigned integer types.
  U8 = 0x80,
  U16 = 0x81,
  U32 = 0x82,
  U64 = 0x83,

  // Signed integer types.
  I8 = 0x84,
  I16 = 0x85,
  I32 = 0x86,
  I64 = 0x87,

  // Floating point types.
  F32 = 0x88,
  F64 = 0x89,

  // Reserved types.
  ReservedMin = 0x8a,
  ReservedMax = 0xb9,

  // Array types.
  Array = 0xba,

  // Map types.
  Map = 0xbb,

  // Binary types.
  Binary = 0xbc,

  // String types.
  String = 0xbd,

  // Nil type.
  Nil = 0xbe,

  // Extended type.
  Extension = 0xbf,

  // Negative integer type with embedded value.
  NegativeFixInt = 0xc0,
  NegativeFixIntMin = 0xc0,
  NegativeFixIntMax = 0xff,
};

}  // namespace nop

#endif  // LIBNOP_INCLUDE_NOP_BASE_ENCODING_BYTE_H_