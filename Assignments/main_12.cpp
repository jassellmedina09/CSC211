// avg of three numbers. decimal values. 
// print as: The average of <num1>, <num2>, and <num3> is <average>

#include <iostream>
#include <iomanip>

int main() {
    double num1, num2, num3;

    std::cout << "Enter three decimal values: ";
    std::cin >> num1 >> num2 >> num3;

    double average = (num1 + num2 + num3) / 3;

    std::cout << "The average of " << std::setprecision(4) << std::fixed
              << num1 << ", " << num2 << ", and " << num3
              << " is " << average << std::endl;
   
    return 0;
}

