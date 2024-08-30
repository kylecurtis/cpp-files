/* ==================================================================
VECTORS

Vectors are dynamic arrays provided by the Standard Template
Library (STL). Unlike regular arrays, vectors can automatically
resize themselves when elements are added or removed, making them
more flexible. Vectors store elements in contiguous memory locations
and offer many built-in functions for common operations such as
adding, removing, and accessing elements.
================================================================== */

#include <iostream>
#include <vector> // Vector library from the STL

int main() {

    // Declare and initialize a vector of integers
    std::vector<int> numbers{1, 2, 3, 4, 5};

    /* =============================================================
    BASIC VECTOR OPERATIONS
    ============================================================= */

    // Add elements to the vector
    numbers.push_back(6); // Adds 6 at the end of the vector
    numbers.push_back(7); // Adds 7 at the end of the vector

    // Access elements in the vector
    std::cout << "First number: " << numbers.at(0) << '\n';
    std::cout << "Second number: " << numbers.at(1) << '\n';

    // Modify elements in the vector
    numbers[0] = 10;  // Change the value at index 0 (first element)

    // Get the size of the vector
    std::cout << "Vector size: " << numbers.size() << '\n';

    // Loop through the vector and print the elements
    std::cout << "Vector elements: ";
    for (std::size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << '\n';

    /* =============================================================
    ITERATING THROUGH A VECTOR
    ============================================================= */

    // Using a range-based for loop (C++11 and later)
    std::cout << "Vector elements (range-based loop): ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << '\n';

    // Using an iterator
    std::cout << "Vector elements (using iterator): ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << '\n';

    /* =============================================================
    REMOVING ELEMENTS FROM A VECTOR
    ============================================================= */

    // Remove the last element
    numbers.pop_back();

    // Erase an element at a specific position (e.g., erase the third element)
    numbers.erase(numbers.begin() + 2);

    // Clear all elements from the vector
    numbers.clear();

    // Check if the vector is empty
    if (numbers.empty()) {
        std::cout << "The vector is now empty." << '\n';
    }

    return 0;
}

/* NOTES
=====================================================================
- Vectors are dynamic arrays that can automatically resize themselves as needed.
- Basic operations include adding elements (`push_back`), accessing elements (`[]` operator), 
  and modifying elements (`[]` operator).
- The `size()` function returns the number of elements in the vector.
- Vectors can be iterated using traditional for loops, range-based for loops, or iterators.
- Vectors store elements in contiguous memory, making them efficient for access and modification.

- Common vector operations include:
  - push_back(): Adds an element to the end of the vector.
  - pop_back(): Removes the last element in the vector.
  - erase(): Removes an element at a specific position.
  - clear(): Removes all elements from the vector.
  - empty(): Checks if the vector is empty.
================================================================== */
