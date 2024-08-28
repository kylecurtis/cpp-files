/* ==================================================================
CHARACTER TYPES 
================================================================== */

#include <iostream>
#include <limits>

int main() {

    /* Basic character types
    ================================================================== */
    char ch = 'A'; // Typically 1 byte, used for ASCII characters
    wchar_t wch = L'Ω'; // Wide character, size varies (typically 2 or 4 bytes)
    char16_t ch16 = u'あ'; // UTF-16 character, 16 bits (2 bytes)
    char32_t ch32 = U'😊'; // UTF-32 character, 32 bits (4 bytes)

    /* Output the character values
    ================================================================== */
    std::cout << "char: " << ch << '\n';
    std::wcout << L"wchar_t: " << wch << '\n';
    std::cout << "char16_t: " << static_cast<char16_t>(ch16) << '\n';
    std::cout << "char32_t: " << static_cast<char32_t>(ch32) << '\n';

    /* Size of character types
    ================================================================== */
    std::cout << "Size of char: " << sizeof(char) << " byte" << '\n';
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << '\n';
    std::cout << "Size of char16_t: " << sizeof(char16_t) << " bytes" << '\n';
    std::cout << "Size of char32_t: " << sizeof(char32_t) << " bytes" << '\n';

    // Min and Max values for char (using <limits>)
    std::cout << "char min: " << static_cast<int>(std::numeric_limits<char>::min()) 
              << ", max: " << static_cast<int>(std::numeric_limits<char>::max()) << '\n';

    // Handling characters as integers (ASCII values)
    char numChar = '9';
    int numValue = numChar - '0';   // Convert '9' to the integer 9
    std::cout << "Character '9' as integer: " << numValue << '\n';

    return 0;
}

/* NOTES
=====================================================================
- char: Used for ASCII characters, typically 1 byte (8 bits).
  - Min value: -128 (signed) or 0 (unsigned).
  - Max value: 127 (signed) or 255 (unsigned).
- wchar_t: Used for wide characters, size is platform-dependent (typically 2 or 4 bytes).
- char16_t: Used for UTF-16 encoded characters, 2 bytes (16 bits).
- char32_t: Used for UTF-32 encoded characters, 4 bytes (32 bits).

- Characters can be treated as integers (ASCII values), which is useful for certain operations.
- Wide and Unicode characters allow the use of non-ASCII characters, such as those from other alphabets or emoji.
================================================================== */
