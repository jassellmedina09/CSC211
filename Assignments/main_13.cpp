// find smallest number for 3 int values. Make variable to store smallest value.
// if second int is < first int, then it becomes smallest.
// if third int is < second int, then it becomes smallest.
// print: The smallest number entered was <number>

#include <iostream>

int main() {
    int num1, num2, num3, smallest;

   // Enter three integer values
    std::cin >> num1 >> num2 >> num3;

// setting the smallest value as first entered to compare
    smallest = num1;
// criteria:
    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }
// Print:
    std::cout << "The smallest number entered was " << smallest;

    return 0;
}
