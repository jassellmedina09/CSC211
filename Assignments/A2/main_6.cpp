#include <iostream>

int main() {
    int n, s;
    std::cin >> n >> s;
    if (n < 1 || n > 10000 || s < 1 || s > n) {
        std::cerr << "Invalid input!";
        return 1;
    }

    int sum = 0;
    int start = n - s + 1;
    for (int i = start; i <= n; ++i) {
        sum = sum + i;
    }

    std::cout << sum << std::endl; 
    return 0;
}
