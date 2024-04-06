#include <iostream>
#include <iomanip> 

int main() {
    double temp;
    char system;

// Enter the temperature. Then, enter degree (C or F)
    std::cin >> temp >> system;

    double changeTemp;
    if (system == 'C') {
// C to F
        changeTemp = (temp * 9 / 5) + 32;
        std::cout << std::fixed << std::setprecision(4) << temp << " degree(s) C is equal to "
                  << changeTemp << " degree(s) F";
    } else {
// F to C
        changeTemp = (temp - 32) * 5 / 9;
        std::cout << std::fixed << std::setprecision(4) << temp << " degree(s) F is equal to "
                  << changeTemp << " degree(s) C";
    }

    return 0;
}
