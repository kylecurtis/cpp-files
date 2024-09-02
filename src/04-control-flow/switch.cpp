/* ==================================================================
SWITCH STATEMENTS

The `switch` statement allows you to execute one block of code
out of many based on the value of a variable or expression.

It is an alternative to using multiple `if-else` statements when
you need to compare the same variable against many different values.

Each case in a switch statement is checked in order, and the
corresponding code block is executed when a match is found.

The `break` keyword is used to exit the `switch` statement after a
case is executed, preventing "fall-through" to the next case.
================================================================== */

#include <iostream>

int main() {

    /* =============================================================
    BASIC SWITCH STATEMENT
    ============================================================= */

    int day = 3;

    // Switch statement to determine the day of the week
    switch (day) {
        case 1:
            std::cout << "Monday" << '\n';
            break;
        case 2:
            std::cout << "Tuesday" << '\n';
            break;
        case 3:
            std::cout << "Wednesday" << '\n';
            break;
        case 4:
            std::cout << "Thursday" << '\n';
            break;
        case 5:
            std::cout << "Friday" << '\n';
            break;
        case 6:
            std::cout << "Saturday" << '\n';
            break;
        case 7:
            std::cout << "Sunday" << '\n';
            break;
        default:
            std::cout << "Invalid day number" << '\n';
            break;
    }

    /* =============================================================
    SWITCH WITH FALL-THROUGH
    ============================================================= */

    char grade = 'B';

    // Switch statement that demonstrates fall-through
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << '\n';
            break;
        case 'B':
        case 'C':
            std::cout << "Well done!" << '\n';
            break;
        case 'D':
        case 'F':
            std::cout << "You did not pass. Try again." << '\n';
            break;
        default:
            std::cout << "Invalid grade." << '\n';
            break;
    }

    /* =============================================================
    SWITCH WITHOUT BREAK (FALL-THROUGH)
    ============================================================= */

    int level = 2;

    // Switch statement without break to demonstrate fall-through behavior
    switch (level) {
        case 1:
            std::cout << "Level 1" << '\n';
        case 2:
            std::cout << "Level 2" << '\n';
        case 3:
            std::cout << "Level 3" << '\n';
        default:
            std::cout << "Invalid level." << '\n';
    }

    return 0;
}

/* NOTES
=====================================================================
- The `switch` statement compares the value of a variable (or expression)
against multiple `case` labels.

- The `break` keyword is essential to prevent "fall-through," where execution
continues into the next case.

- The `default` case is optional and is executed if none of the other cases match.

- Fall-through can be useful when multiple cases share the same code block, as
seen in the `grade` example.

- If `break` is omitted, execution will continue into the subsequent cases,
which may or may not be desired.

- Use `switch` statements when comparing a variable against a fixed set of 
values, as it can be more efficient and cleaner than multiple `if-else` statements.
================================================================== */
