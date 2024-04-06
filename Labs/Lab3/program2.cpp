//Implement an algorithm using C++ to detect a speeding car, given that the speed limit is 50 mph. 
//This algorithm should have three possible outputs, 
//"Safe" for any speed below the limit, "Pushing your luck" for any speed in the range [50-55]mph, 
// and "Speeding" for any speed greater than 55.

#include <iostream>

// Function for calculating is speeding or not
std::string calcSpeed(int speed) {
    const int speedLimit = 50;
    const int overLimit = 55;

    if (speed <= speedLimit) {
        return "Safe";
    } else if (speed <= overLimit) {
        return "Pushing your luck";
    } else {
        return "Speeding";
    }
}
// getting the speed of car from user to calculate if speeding
int main() {
    int enteredSpeed;
    std::cout << "Enter the car's speed (mph): ";
    std::cin >> enteredSpeed;

    std::string result = calcSpeed(enteredSpeed);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
