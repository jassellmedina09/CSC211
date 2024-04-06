// if under 16 print too young. Else if 16-18 print Can Drive.
// Else if 18-21 print Can join the military. Else if <21, print Can have a beer.

#include <iostream>

int main() {
    int enteredAge;

    std::cin >> enteredAge;

    if (enteredAge < 16) {
        std::cout << "Too young";
    } else if (enteredAge >= 16 && enteredAge < 18) {
        std::cout << "Can drive";
    } else if (enteredAge >= 18 && enteredAge < 21) {
        std::cout << "Can join the military";
    } else {
        std::cout << "Can have a beer";
    }

    return 0;
}
