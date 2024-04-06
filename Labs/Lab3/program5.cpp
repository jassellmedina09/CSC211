// Implement an algorithm using C++ to implement the following rules. Note that a single entry can trigger multiple rules.

// Output 1 if the number is even.
// Output 2 if the number is odd.
// Output 3 if the number is evenly divisible by 2.
// Output 4 if the number is evenly divisible by 3.
// Examples:
// If 6 is entered, the program would output "134"
// If 9 is entered, the program would output "24"


#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int output = 0;

    if (number % 2 == 0) {
        output += 1; 
    }
    if (number % 2 != 0) {
        output += 2; 
    }
    if (number % 2 == 0) {
        output += 3; 
    }
    if (number % 3 == 0) {
        output += 4; 
    }

    std::cout << "Output: " << output << std::endl;

    return 0;
}
