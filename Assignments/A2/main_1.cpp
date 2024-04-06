#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n > 0 && n < 20) {
        for (int i = 0; i < n; i++) { // Control the number of rows
            // Print the stars
            for (int j = 0; j <= i; j++) { // Control the number of columns
                std::cout << "*"; // We want to print stars on the same line, so we don't use std::endl
            }

            // End the line
            std::cout << std::endl; // After printing the line of stars, we print a newline
        }
    } else {
        for (int i = 0; i < 20; i++) { // Control the number of rows
            // Print the stars
            for (int j = 0; j <= (2 * i); j++) { // Control the number of columns
                std::cout << "*"; // We want to print stars on the same line, so we don't use std::endl
            }

            // End the line
            std::cout << std::endl; // After printing the line of stars, we print a newline
        }
    }

    return 0;
}
