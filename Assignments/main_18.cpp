#include <iostream>
#include <string>

std::string calcWeekday(int day, int month, int year) {
    int century = year / 100;
    int yearpart = year % 100;

    if (month == 1 || month == 2) {
        month += 12;
        yearpart--;
    }

    int weekday = (day + ((month + 1) * 26 / 10) + yearpart + (yearpart / 4) + (century / 4) + 5 * century) % 7;

    switch (weekday) {
        case 0:
            return "Saturday";
        case 1:
            return "Sunday";
        case 2:
            return "Monday";
        case 3:
            return "Tuesday";
        case 4:
            return "Wednesday";
        case 5:
            return "Thursday";
        case 6:
            return "Friday";
        default:
            return "Invalid";
    }
}

int main() {
    int day, month, year;

 //  Enter the day, month, and year
    std::cin >> day >> month >> year;

    std::string weekday = calcWeekday(day, month, year);

    std::cout << weekday << std::endl;

    return 0;
}
