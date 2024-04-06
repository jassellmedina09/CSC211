#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double calcAvg(const vector<int>& gradeList) {
    int student = gradeList.size();
    int sum = 0;
    for (int grade : gradeList) {
        sum += grade;
    }
    double average_grade = static_cast<double>(sum) / student;
    int j = 0;
    for (int grade : gradeList) {
        if (grade > average_grade) {
            j++;
        }
    }
    return (static_cast<double>(j) / student) * 100;
}

int main() {
    int amountGrades;
    cin >> amountGrades;
    for (int i = 0; i < amountGrades; ++i) {
        int howStudents;
        cin >> howStudents;
        vector<int> gradeList(howStudents);
    for (int j = 0; j < howStudents; ++j) {
            cin >> gradeList[j];
        }
        
        double result = calcAvg(gradeList);
        cout << fixed << setprecision(3) << result << "%" << endl;
    }

    return 0;
}
