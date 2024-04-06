#include <iostream>
using namespace std;

int main() {
    int hash_value = 0;
    string entered;
    
    getline(cin, entered);

    int n = entered.size();

    if (n >= 1 && n <= 100) {
        for (int i = 0; i < n; i++) {
            hash_value = hash_value + (int)entered[i];
        }
        cout << hash_value << endl;
    }
    return 0;
}
