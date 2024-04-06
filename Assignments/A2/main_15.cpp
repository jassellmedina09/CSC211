#include <iostream>

bool perf(int x) {
    int sum = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            sum = sum + i;
        }
    }
    return sum == x;
}

int main() {
    int x;
    std::cin >> x;

    bool perfTest = perf(x);
    if (perfTest) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
