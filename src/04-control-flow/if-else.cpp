/* ==================================================================
IF ELSE

The `if`, `if-else`, and `else-if` statements in C++ are fundamental
control flow structures that allow you to make decisions in your
program based on conditions.

These statements help control the execution of code blocks depending
on whether a given condition is true or false.
================================================================== */

#include <iostream>

int main() {

    /* =============================================================
    BASIC IF STATEMENT
    ============================================================= */

    int number = 10;

    // If the condition is true, the following block of code is executed
    if (number > 5) {
        std::cout << "The number is greater than 5." << '\n';
    }

    /* =============================================================
    IF-ELSE STATEMENT
    ============================================================= */

    // If the condition is true, the first block of code is executed;
    // otherwise, the else block is executed.
    if (number < 5) {
        std::cout << "The number is less than 5." << '\n';
    } else {
        std::cout << "The number is not less than 5." << '\n';
    }

    /* =============================================================
    ELSE-IF LADDER
    ============================================================= */

    // The else-if ladder allows multiple conditions to be checked in sequence.
    if (number == 5) {
        std::cout << "The number is equal to 5." << '\n';
    } else if (number == 10) {
        std::cout << "The number is equal to 10." << '\n';
    } else if (number == 15) {
        std::cout << "The number is equal to 15." << '\n';
    } else {
        std::cout << "The number does not match any of the checked values." << '\n';
    }

    /* =============================================================
    NESTED IF STATEMENTS
    ============================================================= */

    // You can nest if statements within other if statements.
    if (number > 0) {
        std::cout << "The number is positive." << '\n';
        if (number % 2 == 0) {
            std::cout << "The number is also even." << '\n';
        } else {
            std::cout << "The number is odd." << '\n';
        }
    } else {
        std::cout << "The number is not positive." << '\n';
    }

    return 0;
}

/* NOTES
=====================================================================
- `if` statement: Executes a block of code if the condition evaluates to true.

- `if-else` statement: Executes the `if` block if the condition is true; otherwise,
it executes the `else` block.

- `else-if` ladder: Allows multiple conditions to be checked in sequence. The first
true condition's block is executed.

- Nested `if` statements: You can place an `if` statement inside another `if` statement
to check more complex conditions.

- Conditions in `if`, `if-else`, and `else-if` are evaluated in the order they appear.
Once a true condition is found, the associated block is executed, and the remaining
conditions are skipped.
================================================================== */
