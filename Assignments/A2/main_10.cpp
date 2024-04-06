#include <iostream>
#include <cmath>

int main() {
    double loan, interest, payment;
    std::cin >> loan >> interest >> payment;
    
    if (loan <= 0 || loan > pow(10, 10) || interest < 0 || interest > 0.5 || payment <= 0 || payment > loan) {
        std::cerr << "Invalid input!";
        return 1;
    }

    int months = 0;
    while (loan > 0) {
        loan *= (1 + interest);
        loan -= payment;
        ++months;

        if (loan < 0) {
            std::cerr << "Loan cannot be negative. Invalid input!";
            return 1;
        }
    }

    std::cout << months << std::endl;

    return 0;
}

