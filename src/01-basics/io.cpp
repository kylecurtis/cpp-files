/* ==================================================================
INPUT/OUTPUT OPERATIONS
================================================================== */

#include <iostream> 

int main() {

    // Declare a variable to store user input
    int userInput;

    // Prompt the user for input
    std::cout << "Enter a number: ";

    // Read input from the user
    std::cin >> userInput;

    // Output the value entered by the user
    std::cout << "You entered: " << userInput << std::endl;

    return 0;
}

/* NOTES
=====================================================================
- std::cin is used to read input from the standard input
(usually the keyboard).
- ">>" is the extraction operator used with std::cin.
- "<<" is the insertion operator used with std::cout.
================================================================== */
