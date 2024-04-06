// Implement an algorithm using C++ that outputs the letter grade from a number grade. You can use a typical grade scheme found

// grade to letter grade

#include <iostream>
#include <string>

std::string calcGrade(int gradeNum) {
    if (gradeNum>= 90) {
        return "A";
    } else if (gradeNum >= 80) {
        return "B";
    } else if (gradeNum >= 70) {
        return "C";
    } else if (gradeNum >= 60) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    int gradeNum;
    std::cout << "Enter grade number: ";
    std::cin >> gradeNum;

    if (gradeNum < 0 || gradeNum > 100) {
        std::cout << "Invalid numerical grade!" << std::endl;
    } else {
        std::string finalGrade = calcGrade(gradeNum);
        std::cout << "Your grade for the class is: " << finalGrade << std::endl;
    }
    return 0;
}
