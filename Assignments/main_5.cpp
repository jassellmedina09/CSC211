#include <iostream>
#include <string>

int main() {
    int num;
    std::cin >> num;

// if num is divisible by 2 and leaves a remainder 0, even.
    if (num % 2 == 0) {
        std::cout << num << " is even";
// else if remainder is 1, then odd.
    } else {
        std::cout << num << " is odd";
    }

    return 0;
}
