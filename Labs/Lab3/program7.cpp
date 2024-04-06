// Implement an algorithm in C++ to print the maximum of three given numbers. This should take three values from the user (in any order) and print out the largest of the three.
#include <iostream>

int main() {
    int num1, num2, num3;

    // get numbers
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // setting standard for the first number given. Then, comparing it to the next value to see if higher & repeating
    int max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    // outputting  the largest number
    std::cout << "The maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << max << std::endl;

    return 0;
}
