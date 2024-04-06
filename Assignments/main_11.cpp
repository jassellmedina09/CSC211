// enter birthday and it in number format and vice versa (switch)
// ex: input of October 3, 1997 outputs 10 3 1997.
// ex: input of 1 1 2000 outputs January 1, 2000.
// print Imaginary month for invalid month.

#include <iostream>
#include <string>

int main() {
    int month, day, year;
//(month day year) input
    std::cin >> month >> day >> year;

    std::string monthName;
    switch (month) {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
        default:
            monthName = "Imaginary month";
            break;
    }


// Print:
    if (monthName != "Imaginary month") {
        std::cout << monthName << " " << day << ", " << year;
    } else {
        std::cout << monthName;
    }

    return 0;
}
