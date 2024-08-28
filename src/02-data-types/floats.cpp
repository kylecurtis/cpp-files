/* ==================================================================
FLOATING POINT TYPES
================================================================== */

#include <iostream>
#include <limits>
#include <iomanip> // Controlling output format
#include <cmath> // Math functions like fabs

int main() {

    /* Basic floating-point types
    ================================================================== */
    // Single precision (usually 32-bit)
    float float_num{3.14159f};

    // Double precision (usually 64-bit)
    double double_num{3.141592653589793};

    // Extended precision (platform-dependent)
    long double long_double_num{3.141592653589793238462643383279L};

    std::cout << '\n';

    /* Output the floating-point values with different precision
    ================================================================== */
    // Precision up to 7 digits
    std::cout << "Float: " << std::setprecision(7) << float_num << '\n';

    // Precision up to 15-16 digits
    std::cout << "Double: " << std::setprecision(16) << double_num << '\n';

    // Precision usually more than double
    std::cout << "Long Double: " << std::setprecision(20) << long_double_num << '\n';

    std::cout << '\n';

    /* Min and Max values for floating-point types (using <limits>)
    ================================================================== */
    std::cout << "Float (min): " << std::numeric_limits<float>::min() << '\n';
    std::cout << "Float (max): " << std::numeric_limits<float>::max() << '\n';
    std::cout << '\n';
    std::cout << "Double (min): " << std::numeric_limits<double>::min() << '\n';
    std::cout << "Double (max): " << std::numeric_limits<double>::max() << '\n';
    std::cout << '\n';
    std::cout << "Long Double (min): " << std::numeric_limits<long double>::min() << '\n';
    std::cout << "Long Double (max): " << std::numeric_limits<long double>::max() << '\n';
    std::cout << '\n';

    /* Special values for floating-point types
    ================================================================== */
    // Infinity 
    std::cout << "Float infinity: " << std::numeric_limits<float>::infinity() << '\n';

    // Quiet NaN
    std::cout << "Double quiet NaN: " << std::numeric_limits<double>::quiet_NaN() << '\n';

    // Signaling NaN
    std::cout << "Long Double signaling NaN: " << std::numeric_limits<long double>::signaling_NaN() << '\n';

    std::cout << '\n';

    /* =============================================================
    PRECISION COMPARISON ERRORS AND USING EPSILON
    ============================================================= */
    double x = 0.1;
    double y = 0.2;
    double z = 0.3;

    /* Incorrect comparison due to precision issues
    ================================================================== */
    if (x + y == z) {
        std::cout << "x + y == z (unexpected)" << std::endl;
    } else {
        std::cout << "x + y != z (expected due to precision errors)" << std::endl;
    }

    std::cout << '\n';

    /* Correct comparison using epsilon
    ================================================================== */
    double epsilon = std::numeric_limits<double>::epsilon();
    if (std::fabs((x + y) - z) < epsilon) {
        std::cout << "x + y is approximately equal to z (using epsilon)" << std::endl;
    } else {
        std::cout << "x + y is not approximately equal to z (even with epsilon)" << std::endl;
    }

    std::cout << '\n';

    /* Using a custom tolerance for comparison
    ================================================================== */
    double tolerance = 1e-9; // Adjust tolerance as needed for the application

    if (std::fabs((x + y) - z) < tolerance) {
        std::cout << "x + y is approximately equal to z (using custom tolerance)" << std::endl;
    } else {
        std::cout << "x + y is not approximately equal to z (even with custom tolerance)" << std::endl;
    }

    return 0;
}

/* NOTES
=====================================================================
- float: Single precision, typically 32-bit, precision of about 7 digits.
- double: Double precision, typically 64-bit, precision of about 15-16 digits.
- long double: Extended precision, usually more than 64-bit, platform-dependent precision.
- std::numeric_limits provides min and max values, as well as special values like infinity and NaN.
- NaN: Not a Number, can be quiet (non-signaling) or signaling.

- Precision comparison errors:
  - Due to rounding errors in floating-point arithmetic, direct comparisons may fail.
  - Use std::numeric_limits<T>::epsilon() for comparing floating-point numbers.
  - Epsilon is the smallest difference between two representable floating-point numbers.
  - For higher precision needs, use a custom tolerance value.
================================================================== */
