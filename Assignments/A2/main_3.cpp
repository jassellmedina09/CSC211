#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 0 || n >= 30) {
        std::cerr << "Can't handle this." << std::endl;
        return 1;
    }

    int lim = 1;
    for (int i = 1; i <= n; ++i) {
        if (lim > 2147483647 / i) {
            std::cout << "Can't handle this" << std::endl;
            return 0;
        }
        lim *= i;
    }

    std::cout << lim << std::endl;

    return 0;
}
