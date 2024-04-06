// quadrants determinator for given coordinate of floats. 
// if coordinates land on x-axis or y-axis print No quadrant.
// Else, print what quadrant the point falls into.
#include <iostream>

int main() {
    double x, y;

   // Enter the x and y coordinates
    std::cin >> x >> y;
// Criteria for finding quadrants.
    if (x > 0 && y > 0) {
        std::cout << "Quadrant 1";

    } else if (x < 0 && y > 0) {
        std::cout << "Quadrant 2";

    } else if (x < 0 && y < 0) {
        std::cout << "Quadrant 3";

    } else if (x > 0 && y < 0) {
        std::cout << "Quadrant 4";

    } else {
        std::cout << "No quadrant";
    }

    return 0;
}
