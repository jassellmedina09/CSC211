#include <iostream>
#include <cmath>

bool armstrong(int n) {
    int digits = 0;
    int x = n;
    int sum = 0;
    while (x != 0) {
        x = x / 10;
        digits = digits + 1;
    }

    x = n;
    while (x != 0) {
        int digit = x % 10;
        sum = sum + pow(digit, digits);
        x = x / 10;
    }

    return sum == n;
}

int main() {
    int n;
    std::cin >> n;

    if (n <= 0 || n > 1000000000) {
        std::cerr << "Invalid input!";
        return 1;
    }

    bool result = armstrong(n);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
