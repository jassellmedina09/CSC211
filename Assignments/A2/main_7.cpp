#include <iostream>

int main() {
    unsigned int n;
    std::cin >> n;

    if (n <= 0 || n >= 4294967296) {
        std::cerr << "Invalid input!";
        return 1;
    }

    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            sum = sum + digit;
        }
        n = n / 10;
    }

    std::cout << sum << std::endl;

    return 0;
}
