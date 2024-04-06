#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string first_name;
    std::string last_name;
    std::string course;
};

bool operator<(const Student& s1, const Student& s2) {
    if (s1.course != s2.course)
        return s1.course < s2.course;
    if (s1.first_name != s2.first_name)
        return s1.first_name < s2.first_name;
    return s1.last_name < s2.last_name;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> students[i].first_name >> students[i].last_name >> students[i].course;
    }

    // Sort the students lexicographically
    // using Selection sort
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (students[j] < students[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(students[i], students[min_idx]);
    }

    // Count the number of requests for each course
    std::string current_course = students[0].course;
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (students[i].course != current_course) {
            std::cout << current_course << " " << count << std::endl;
            current_course = students[i].course;
            count = 1;
        } else if (students[i].course == current_course && students[i].first_name != students[i - 1].first_name && students[i].last_name != students[i - 1].last_name) {
            ++count;
        }
    }
    // Output the count for the last course
    std::cout << current_course << " " << count << std::endl;

    return 0;
}
