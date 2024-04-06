#include <iostream>
using namespace std;

bool sorted(int *a, int n) {
    if (n <= 1)
        return true;

    if (a[n - 2] >= a[n - 1] && sorted(a, n - 1))
        return true;

    return false;
}

int main() {
    const int MAX_SIZE = 100;
    int n = 0;
    int a[MAX_SIZE];

    cout << "Enter integers (-1 to end input): ";
    while (n < MAX_SIZE) {
        int num;
        cin >> num;
        if (num == -1)
            break;
        a[n++] = num;
    }

    if (n <= 1) {
        cout << "Sorted"; 
        return 0;
    }

    if (!sorted(a, n))
        cout << "Not Sorted";
    else
        cout << "Sorted";

    return 0;
}
