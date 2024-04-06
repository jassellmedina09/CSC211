#include <iostream>
#include <string> 

std::string convert(int n) {
    std::string hex = "0123456789ABCDEF";
    return std::string(1, hex[n / 16]) + std::string(1, hex[n % 16]);
}

int main() {
    int r, g, b;
    std::cin >> r >> g >> b;

    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {
        std::cerr << "Invalid input!";
        return 1;
    }

    std::cout << "#" << convert(r) << convert(g) << convert(b) << std::endl;

    return 0;
}
