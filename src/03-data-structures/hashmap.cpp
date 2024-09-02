/* ==================================================================
HASH TABLES

A hash table (or hash map) is a data structure that stores key-value
pairs and allows for fast retrieval of values based on their keys.

In C++, the `std::unordered_map` is a commonly used hash table
implementation provided by the Standard Library.

It uses a hash function to map keys to their corresponding values,
enabling average-case constant time complexity O(1) for insertions,
deletions, and lookups.
================================================================== */

#include <iostream>
#include <unordered_map> // unordered_map library from the STL

int main() {

    /* =============================================================
    BASIC USAGE
    ============================================================= */

    // Declare and initialize an unordered_map (hash table)
    std::unordered_map<std::string, int> moon_map;

    // Adding elements (planet name and number of known moons) to the hash table
    moon_map["Earth"] = 1;
    moon_map["Mars"] = 2;
    moon_map["Jupiter"] = 95;

    // Accessing elements in the hash table using keys
    std::cout << "Number of moons around Earth: " << moon_map["Earth"] << '\n';
    std::cout << "Number of moons around Mars: " << moon_map["Mars"] << '\n';

    // Checking if a key exists in the hash table
    if (moon_map.find("Venus") != moon_map.end()) {
        std::cout << "Number of moons around Venus: " << moon_map["Venus"] << '\n';
    } else {
        std::cout << "Venus data not found." << '\n';
    }

    /* =============================================================
    ITERATING OVER AN unordered_map
    ============================================================= */

    // Loop through the hash table and print all planet names and their moons
    std::cout << "Known moons of planets:" << '\n';
    for (const auto& entry : moon_map) {
        std::cout << entry.first << ": " << entry.second << " moons" << '\n';
    }

    /* =============================================================
    REMOVING ELEMENTS FROM std::unordered_map
    ============================================================= */

    // Removing an element by key
    moon_map.erase("Mars");

    // Checking if the element was removed
    if (moon_map.find("Mars") == moon_map.end()) {
        std::cout << "Mars was removed from the moon_map." << '\n';
    }

    // Clearing all elements from the hash table
    moon_map.clear();

    // Checking if the hash table is empty
    if (moon_map.empty()) {
        std::cout << "The moon_map is now empty." << '\n';
    }

    return 0;
}

/* NOTES
=====================================================================
- Hash tables (hash maps) store key-value pairs and allow for fast lookups
based on the key.

- `std::unordered_map` is a hash table implementation in the C++ Standard Library.

- Hash tables provide average-case constant time complexity (O(1)) for insertions,
deletions, and lookups.

- The order of elements in `std::unordered_map` is not guaranteed, as it is based 
on the hash function.

- `std::unordered_map` is ideal for scenarios where fast lookup, insertion, and 
deletion are required.

- Basic operations include:
  - Adding elements: Use the `[]` operator to insert or modify elements.
  - Accessing elements: Use the `[]` operator to retrieve values based on keys.
  - Checking for existence: Use `find()` to check if a key exists before accessing it.
  - Removing elements: Use `erase()` to remove elements by key.
  - Iterating: Use a range-based for loop or iterator to loop through all key-value pairs.

================================================================== */