#include <iostream>

void calcTriangle(int angle1, int angle2, int angle3) {

// does triangle add up to 180? if not, impossible
    if (angle1 + angle2 + angle3 != 180) {
        std::cout << "This triangle is impossible." << std::endl;
        return;
    }

// criteria for finding out the type of triangle
    if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
        std::cout << "Acute" << std::endl;

    } else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        std::cout << "Right" << std::endl;

    } else {
        std::cout << "Obtuse" << std::endl;
    }
}

int main() {
    int angle1, angle2, angle3;

    // Enter three angles of triangle
    std::cin >> angle1 >> angle2 >> angle3;

    calcTriangle(angle1, angle2, angle3);

    return 0;
}
