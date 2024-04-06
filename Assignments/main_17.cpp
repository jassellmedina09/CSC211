#include <iostream>

int main() {
    char grade;

   // Enter a letter grade
    std::cin >> grade;

// grade output criteria for both upper and lower case letter inputs
    switch (grade) {
        case 'A':
        case 'a':
            std::cout << "Excellent";
            break;

        case 'B':
        case 'b':
            std::cout << "Good";
            break;

        case 'C':
        case 'c':
            std::cout << "Average";
            break;

        case 'D':
        case 'd':
            std::cout << "Poor";
            break;

        case 'F':
        case 'f':
            std::cout << "Failing";
            break;

        default:
            std::cout << "Invalid grade";
            break;
    }

    return 0;
}
