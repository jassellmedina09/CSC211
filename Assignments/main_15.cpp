#include <iostream>

int main() {
    double celsius, fahrenheit;

    // Enter temperature in Celsius
    std::cin >> celsius;

// celsius to faranheit
    fahrenheit = (celsius * 9 / 5) + 32;

// criteria to determine if it's cold out
    if (fahrenheit <= 32) {
        std::cout << "It is cold out";
    } else if (fahrenheit > 32 && fahrenheit <= 65) {
        std::cout << "Wear a jacket";
    } else {
        std::cout << "It is nice out";
    }

    return 0;
}
