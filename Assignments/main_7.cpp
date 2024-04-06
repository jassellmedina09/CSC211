// if the number is divisible by 8 with a remainder % 0
// AND it is larger than 100, print that the given num satisfies the criteria.
// else, print that the number does not satisfy the criteria.

#include <iostream>

int main() {
    int number;

    std::cin >> number;

    if (number % 8 == 0 && number > 100) {
        std::cout << number << " satisfies the criteria";
    } else {
        std::cout << number << " does not satisfy the criteria";
    }

    return 0;
}
