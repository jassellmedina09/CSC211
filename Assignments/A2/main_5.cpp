#include <iostream>

int main() {
    int number;
    std::cin >> number;

    if (number <= 0 || number > 1000000000) {
        std::cerr << "Invalid input!";
        return 1;
    }

    bool isPrime = true;

    if (number == 1) {
        isPrime = false; 
    } else {
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    std::cout << (isPrime ? "True" : "False") << std::endl;

    return 0;
}
