#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a <= 0 || a > 20 || b <= 0 || b > 20 || c <= 0 || c > 20 || a > b) {
        std::cerr << "Invalid input!";
        return 1;
    }

    for (int i = a; i <= b; i += c) {
        int count = std::min(i, b - i + a); 
        for (int j = 0; j < count; ++j) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    for (int i = b - c; i >= a; i -= c) {
        int count = std::min(i, b - i + a); 
        for (int j = 0; j < count; ++j) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    return 0;
}
