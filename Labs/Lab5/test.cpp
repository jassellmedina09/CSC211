#include <iostream>

int main () {
        
    // n is gonna control rows and take input
    int n;
    std::cout << "input n: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) { // Control the number of rows
        // Print spaces to center the triangle of numbers
        for (int j = 0; j < (9 - n); j++) {
            std::cout << " ";
        }

        // Declare a new variable so we can use it outside the loops below
        int j;

        // Print the first half of the numbers
        for (j = (i + 1); j <= (2 * i) + 1; j++) { // Control the number of columns
            std::cout << j; // We want to print numbers on the same line, so we don't use std::endl
        }

        // Print the second half of the numbers
        for (j = (2 * i); j >= (i + 1); j--) { // Control the number of columns
            std::cout << j; // We want to print numbers on the same line, so we don't use std::endl
        }

        // End the line
        std::cout << std::endl; // After printing the line of stars, we print a newline
    }

    return 0;
}