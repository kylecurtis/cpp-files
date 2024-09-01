/* ==================================================================
STRUCTS

Structs are a way to group related variables together under a
single name. Each variable in a struct is called a "member" or 
"field."

Structs are commonly used to represent a simple data structure that
groups different types of data, such as a point in 2D space with x
and y coordinates, or a person with a name and age, etc.

Structs are similar to classes, but by default, all members of
a struct are public, whereas in a class they are private.
================================================================== */

#include <iostream>

// Simple struct to represent a 2D point
struct Point {
    int x; // x-coordinate
    int y; // y-coordinate
};

// Struct to represent a person
struct Person {
    std::string name; // Name of the person
    int age; // Age of the person
};

// Function to print Point
// Takes the Point struct as parameter
void printPoint(const Point& p) {
    std::cout << "Point coordinates: (" << p.x << ", " << p.y << ")" << '\n';
}

// Function to print Person
// Takes Person struct as parameter
void printPerson(const Person& p) {
    std::cout << "Person: " << p.name << ", Age: " << p.age << '\n';
}

int main() {

    /* =============================================================
    BASIC STRUCT USAGE
    ============================================================= */

    // Creating and initializing a Point struct
    Point p1 = {10, 20};

    // Accessing and modifying struct members
    p1.x = 15;  // Change the x-coordinate

    // Print the point's coordinates
    printPoint(p1);

    // Creating and initializing a Person struct
    Person person1 = {"Vic Rattlehead", 32};

    // Accessing and modifying struct members
    person1.age = 35; // Change the age

    // Print the person's details
    printPerson(person1);

    /* =============================================================
    NESTED STRUCTS
    ============================================================= */

    // Defining a struct that contains another struct
    struct Rectangle {
        Point topLeft; // Top-left corner of the rectangle
        Point bottomRight; // Bottom-right corner of the rectangle
    };

    // Creating and initializing a Rectangle struct
    Rectangle rect = {{0, 10}, {10, 0}};

    // Print the coordinates of the rectangle's corners
    std::cout << "Rectangle corners:" << '\n';
    printPoint(rect.topLeft);
    printPoint(rect.bottomRight);

    return 0;
}

/* NOTES
=====================================================================
- Structs are a way to group related variables under a single name, making it easier 
to manage complex data.

- Members of a struct can be of different types (e.g., integers, strings, other structs).

- By default, all members of a struct are public, meaning they can be accessed directly.

- Structs can be passed to functions, allowing you to manipulate structured data more easily.

- Nested structs allow for more complex data structures, where one struct contains another struct.

- Structs are similar to classes, but the primary difference is that struct members are 
public by default.
================================================================== */
