/* ==================================================================
INTEGER TYPES
================================================================== */

#include <iostream> 
#include <limits> // Numeric limits (min/max)
#include <cstdint> // Fixed-width integer types

int main() {

    /* Signed integer types (allows negative values)
    ================================================================== */
    short short_num{-100}; // At least 16 bits
    std::cout << "Short: " << short_num << '\n';

    int int_num{-1000}; // At least 16 bits
    std::cout << "Int: " << int_num << '\n';

    long long_num{-1000000L}; // At least 32 bits
    std::cout << "Long: " << long_num << '\n';

    long long llong_num{-123456789012345LL}; // At least 64 bits
    std::cout << "Long Long: " << llong_num << '\n';

    std::cout << '\n';

    /* Unsigned integer types (no negatives allowed)
    ================================================================== */
    unsigned short ushort_num{10}; // At least 16 bits
    std::cout << "Unsigned Short: " << ushort_num << '\n';

    unsigned int uint_num{1000U}; // At least 16 bits
    std::cout << "Unsigned Int: " << uint_num << '\n';

    unsigned long ulong_num{1000000UL}; // At least 32 bits
    std::cout << "Unsigned Long: " << ulong_num << '\n';

    unsigned long long ullong_num{123456789012345ULL}; // At least 64 bits
    std::cout << "Unsigned Long Long: " << ullong_num << '\n';

    std::cout << '\n';

    /* Min and max values for each type (using <limits>)
    ================================================================== */
    std::cout << "short (min): " << std::numeric_limits<short>::min() << '\n';
    std::cout << "short (max): " << std::numeric_limits<short>::max() << '\n';
    std::cout << '\n';
    std::cout << "unsigned short (min): " << std::numeric_limits<unsigned short>::min() << '\n';
    std::cout << "unsigned short (max): " << std::numeric_limits<unsigned short>::max() << '\n';
    std::cout << '\n';
    std::cout << "int (min): " << std::numeric_limits<int>::min() << '\n';
    std::cout << "int (max): " << std::numeric_limits<int>::max() << '\n';
    std::cout << '\n';
    std::cout << "unsigned int (min): " << std::numeric_limits<unsigned int>::min() << '\n';
    std::cout << "unsigned int (max): " << std::numeric_limits<unsigned int>::max() << '\n';
    std::cout << '\n';
    std::cout << "long (min): " << std::numeric_limits<long>::min() << '\n';
    std::cout << "long (max): " << std::numeric_limits<long>::max() << '\n';
    std::cout << '\n';
    std::cout << "unsigned long (min): " << std::numeric_limits<unsigned long>::min() << '\n';
    std::cout << "unsigned long (max): " << std::numeric_limits<unsigned long>::max() << '\n';
    std::cout << '\n';
    std::cout << "long long (min): " << std::numeric_limits<long long>::min() << '\n';
    std::cout << "long long (max): " << std::numeric_limits<long long>::max() << '\n';
    std::cout << '\n';
    std::cout << "unsigned long long (min): " << std::numeric_limits<unsigned long long>::min() << '\n';
    std::cout << "unsigned long long (max): " << std::numeric_limits<unsigned long long>::max() << '\n';
    std::cout << '\n';

    /* Fixed-Width Integer Types (>= C++11)
    ================================================================== */
    std::int8_t i8{127}; // 8-bit signed integer
    std::uint8_t u8{255}; // 8-bit unsigned integer
    std::int16_t i16{32767}; // 16-bit signed integer
    std::uint16_t u16{65535}; // 16-bit unsigned integer
    std::int32_t i32{2147483647}; // 32-bit signed integer
    std::uint32_t u32{4294967295U};// 32-bit unsigned integer
    std::int64_t i64{9223372036854775807LL}; // 64-bit signed integer
    std::uint64_t u64{18446744073709551615ULL}; // 64-bit unsigned integer

    // Min and Max values for fixed-width types
    std::cout << "std::int8_t: " << +std::numeric_limits<std::int8_t>::min() << " to " << +std::numeric_limits<std::int8_t>::max() << '\n';
    std::cout << "std::uint8_t: " << +std::numeric_limits<std::uint8_t>::min() << " to " << +std::numeric_limits<std::uint8_t>::max() << '\n';
    std::cout << "std::int16_t: " << std::numeric_limits<std::int16_t>::min() << " to " << std::numeric_limits<std::int16_t>::max() << '\n';
    std::cout << "std::uint16_t: " << std::numeric_limits<std::uint16_t>::min() << " to " << std::numeric_limits<std::uint16_t>::max() << '\n';
    std::cout << "std::int32_t: " << std::numeric_limits<std::int32_t>::min() << " to " << std::numeric_limits<std::int32_t>::max() << '\n';
    std::cout << "std::uint32_t: " << std::numeric_limits<std::uint32_t>::min() << " to " << std::numeric_limits<std::uint32_t>::max() << '\n';
    std::cout << "std::int64_t: " << std::numeric_limits<std::int64_t>::min() << " to " << std::numeric_limits<std::int64_t>::max() << '\n';
    std::cout << "std::uint64_t: " << std::numeric_limits<std::uint64_t>::min() << " to " << std::numeric_limits<std::uint64_t>::max() << '\n';

    return 0;
}

/* NOTES
=====================================================================
- int: Typically 32-bit, no suffix required.
- short: Typically 16-bit, no suffix required.
- long: Typically 32-bit or 64-bit, 'L' suffix for literals.
- long long: At least 64-bit, 'LL' suffix for literals.
- unsigned types: Same sizes as their signed counterparts, but only store non-negative values.
- std::numeric_limits provides min and max values for each type.
================================================================== */
