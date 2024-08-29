/* ==================================================================
ARRAYS

Arrays are a fixed-size collection of elements of the same type
stored in contiguous memory locations. They provide a way to store
multiple values in a single variable, which can be accessed using an
index.

Arrays are useful when you need to work with a fixed number of
elements of the same type. C++ also supports multidimensional arrays,
which are arrays of arrays, allowing you to represent data in a
matrix-like structure.
================================================================== */

#include <iostream>

int main() {

    /* =============================================================
    ONE-DIMENSIONAL ARRAYS
    ============================================================= */

    // Declaring and initializing an array of integers
    int numbers[5] {1, 2, 3, 4, 5};

    // Accessing and modifying elements in the array
    numbers[2] = 10; // Changing the value at index 2 (third element)

    // Loop through the array and print the elements
    std::cout << "One-dimensional array elements: ";

    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }

    std::cout << '\n';

    /* =============================================================
    MULTIDIMENSIONAL ARRAYS
    ============================================================= */

    // Declaring and initializing a 2D array (3x3 matrix)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing and modifying elements in a 2D array
    matrix[1][1] = 50; // Changing the value at row 1, column 1 (second row, second column)

    // Loop through the 2D array and print the elements
    std::cout << "Multidimensional array (2D) elements:" << '\n';

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }

        std::cout << '\n';
    }

    return 0;
}

/* NOTES
=====================================================================
- Arrays are a collection of elements of the same type stored in contiguous memory locations.
- One-dimensional arrays:
  - Access elements using an index, starting from 0.
  - The size of the array is fixed at compile time and cannot be changed.
  - Use a loop to iterate over array elements.

- Multidimensional arrays:
  - Represent arrays of arrays, useful for matrices or grids.
  - Access elements using multiple indices (e.g., matrix[row][column]).
  - The first index corresponds to the row, and the second index corresponds to the column in a 2D array.
  - You can have arrays with more than two dimensions, though they are less common.

- Arrays have a fixed size that is determined at compile time, and they do not support dynamic resizing.
- Array bounds are not checked, so accessing an element out of bounds can lead to undefined behavior.
================================================================== */
