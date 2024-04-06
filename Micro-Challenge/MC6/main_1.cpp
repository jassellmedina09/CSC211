#include <iostream>
#include <vector>
#include <algorithm>

struct Input {
    std::string firstName;
    std::string lastName;
    std::string course;
};

bool operator<(const Input& s1, const Input& s2) {
    if (s1.course != s2.course)
        return s1.course < s2.course;
    int cmpFirstName = s1.firstName.compare(s2.firstName);
    if (cmpFirstName != 0)
        return cmpFirstName < 0;
    return s1.lastName < s2.lastName;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<Input> students(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> students[i].firstName >> students[i].lastName >> students[i].course;
    }

    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (students[j] < students[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(students[i], students[min_idx]);
    }

    std::string currentCourse = students[0].course;
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (students[i].course != currentCourse) {
            std::cout << currentCourse << " " << count << std::endl;
            currentCourse = students[i].course;
            count = 1;
        }
        else if (students[i].course == currentCourse && students[i].firstName != students[i - 1].firstName && students[i].lastName != students[i - 1].lastName) {
            ++count;
        }
    }
    std::cout << currentCourse << " " << count << std::endl;
    return 0;
}
