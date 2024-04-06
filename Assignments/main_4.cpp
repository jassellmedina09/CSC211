#include <iostream>

int main() {
    int a, b;
    char c;
    std::cin >> a >> b >> c;
    switch (c) {
        // addition
        case '+':
            std::cout << a << " + " << b << " = " << (a + b);
            break;
        // subtracttion
        case '-':
            std::cout << a << " - " << b << " = " << (a - b);
            break;
        // multiplication
        case '*':
            std::cout << a << " * " << b << " = " << (a * b);
            break;
        // division
        case '/':
            std::cout << a << " / " << b << " = " << (a / b);
            break;
        // else if not listed, print invalid
        default:
            std::cout << "Invalid operator";
            break;
    }

    return 0;
}
