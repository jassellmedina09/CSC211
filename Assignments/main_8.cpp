// if the entered num has 9 as the last digit, print that the given num is good.
// else, print that given num is no good.

#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int checkDigit;
        if (num >= 0) {
        checkDigit = num % 10;
    } 
    else {
        checkDigit = (-num) % 10; 
    }

    if (checkDigit == 9) {
        std::cout << num << " is good";
    } else {
        std::cout << num << " is no good";
    }

    return 0;
}
