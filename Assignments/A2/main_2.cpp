#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n > 0 && n < 20) {
        for (int i = 0; i < n; i++) { // Control the number of rows
            // Print the spaces
            for (int k = 0; k < n - i - 1; k++) {
                std::cout << " ";
            }

            // Print the stars
            for (int j = 0; j <= i; j++) { // Control the number of columns
                std::cout << "*";
            }

            // End the line
            std::cout << std::endl; // After printing the line of stars, we print a newline
        }
    } else {
        for (int i = 0; i < 20; i++) { // Control the number of rows
            // Print the spaces
            for (int k = 0; k < 20 - i - 1; k++) {
                std::cout << " ";
            }

            // Print the stars
            for (int j = 0; j <= i; j++) { // Control the number of columns
                std::cout << "*";
            }

            // End the line
            std::cout << std::endl; // After printing the line of stars, we print a newline
        }
    }

    return 0;
}

