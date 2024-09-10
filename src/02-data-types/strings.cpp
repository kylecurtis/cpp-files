/* ==================================================================
STRINGS

In C++, strings are represented by the `std::string` class, which
provides a dynamic array of characters that can grow and shrink as needed.

The `std::string` class comes with many built-in functions to perform
common string operations such as concatenation, comparison, finding
substrings, and more.
================================================================== */

#include <iostream>
#include <string> // String library from the STL

int main() {

    /* =============================================================
    BASIC STRING OPERATIONS
    ============================================================= */

    // Declaring and initializing strings
    std::string str1 = "Hello, ";
    std::string str2 = "World!";

    // Concatenating strings
    std::string str3 = str1 + str2;
    std::cout << "Concatenated string: " << str3 << '\n';

    // Accessing individual characters
    char first_char = str3[0];
    std::cout << "First character: " << first_char << '\n';

    // Modifying individual characters
    str3[7] = 'w';  // Change 'W' to 'w'
    std::cout << "Modified string: " << str3 << '\n';

    // Getting the length of a string
    std::cout << "Length of string: " << str3.length() << '\n';

    /* =============================================================
    COMMON STRING FUNCTIONS
    ============================================================= */

    std::string test_str = "C++ programming is fun!";

    // Find a substring within a string
    std::size_t found = test_str.find("programming");
    if (found != std::string::npos) {
        std::cout << "Substring 'programming' found at position: " << found << '\n';
    }

    // Substring extraction
    std::string sub_str = test_str.substr(4, 11);  // Extract "programming"
    std::cout << "Extracted substring: " << sub_str << '\n';

    // Replacing part of a string
    test_str.replace(4, 11, "coding");  // Replace "programming" with "coding"
    std::cout << "After replacement: " << test_str << '\n';

    // Inserting into a string
    test_str.insert(4, "awesome ");
    std::cout << "After insertion: " << test_str << '\n';

    // Erasing part of a string
    test_str.erase(4, 8);  // Erase "awesome "
    std::cout << "After erasing: " << test_str << '\n';

    // Converting to C-style string (null-terminated)
    const char* c_str = test_str.c_str();
    std::cout << "C-style string: " << c_str << '\n';

    /* =============================================================
    STRING COMPARISON FUNCTIONS
    ============================================================= */

    std::string s1 = "apple";
    std::string s2 = "orange";

    // Comparing strings
    if (s1 == s2) {
        std::cout << "Strings are equal." << '\n';
    } else if (s1 > s2) {
        std::cout << "String 'apple' is greater than 'orange'." << '\n';
    } else {
        std::cout << "String 'apple' is less than 'orange'." << '\n';
    }

    return 0;
}

/* NOTES
=====================================================================
- std::string: Represents a dynamic array of characters in C++. It
supports various functions for string manipulation.

- Common string operations:
  - Concatenation: Use the `+` operator to join strings.
  - Access and modification: Access characters with `[]` and modify them by assignment.
  - Length: Use length() or size() to get the number of characters in the string.

- Common string functions:
  - find(): Searches for a substring and returns its position or `std::string::npos` if not found.
  - substr(): Extracts a substring given a starting position and length.
  - replace(): Replaces a portion of the string with another string.
  - insert(): Inserts a string into another string at a given position.
  - erase(): Removes a portion of the string.
  - c_str(): Returns a C-style null-terminated character array from the string.

- String comparisons:
  - `==`, `!=`, `<`, `>`, `<=`, `>=`: Compare strings lexicographically.
================================================================== */
