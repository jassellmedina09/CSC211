// if input entered by the user has a "-" symbol, then print nehative.
// else if it is zero, print that its neither positive nor negative
// else, print that its positive

#include <iostream>

int main() {
    int num;

    std::cin >> num;

    if (num > 0) {
        std::cout << num << " is positive";
    } else if (num < 0) {
        std::cout << num << " is negative";
    } else {
        std::cout << num << " is neither positive nor negative";
    }

    return 0;
}
