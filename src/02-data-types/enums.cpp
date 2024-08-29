/* ==================================================================
ENUMERATIONS (ENUMS)

Enums provide a way to define a set of named integer constants,
making your code more readable and easier to maintain.

They are particularly useful when you need to represent a fixed set of
related values, such as directions, states, or permissions. C++ also
offers strongly-typed enums (enum classes), which provide better type
safety and scoping compared to traditional enums.
================================================================== */

#include <iostream>

/* Enum for file permissions using bitwise flags
================================================================== */
enum FilePermissions {
    Read = 1, // 001 in binary, can read a file
    Write = 2, // 010 in binary, can write to a file
    Execute = 4 // 100 in binary, can execute a file
};

/* Enum for error codes
================================================================== */
enum class ErrorCode {
    Success = 0, // Operation succeeded
    NotFound = 404, // Resource not found
    PermissionDenied = 403, // Permission denied
    UnknownError = -1 // An unknown error occurred
};

int main() {

    /* Example 1: File permissions using bitwise operations
    ================================================================== */
    FilePermissions userPermissions = static_cast<FilePermissions>(Read | Write);

    // Check if the user has specific permissions
    if (userPermissions & Read) {
        std::cout << "User has read permissions." << '\n';
    }
    if (userPermissions & Write) {
        std::cout << "User has write permissions." << '\n';
    }
    if (!(userPermissions & Execute)) {
        std::cout << "User does not have execute permissions." << '\n';
    }

    /* Example 2: Handling error codes
    ================================================================== */
    ErrorCode result = ErrorCode::NotFound;

    // Handling the result using a switch statement
    switch (result) {
        case ErrorCode::Success:
            std::cout << "Operation completed successfully." << '\n';
            break;
        case ErrorCode::NotFound:
            std::cout << "Error: Resource not found (404)." << '\n';
            break;
        case ErrorCode::PermissionDenied:
            std::cout << "Error: Permission denied (403)." << '\n';
            break;
        case ErrorCode::UnknownError:
        default:
            std::cout << "Error: An unknown error occurred." << '\n';
            break;
    }

    return 0;
}

/* NOTES
=====================================================================
- FilePermissions enum:
  - Uses bitwise flags to represent different permissions.
  - Flags can be combined using bitwise OR (|) to grant multiple permissions.
  - Use bitwise AND (&) to check if a specific permission is set.

- ErrorCode enum class:
  - Enum classes provide better type safety and prevent accidental implicit conversions.
  - Error codes are assigned specific values that correspond to common HTTP status codes.
  - Use a switch statement or conditional checks to handle different error codes.
================================================================== */
