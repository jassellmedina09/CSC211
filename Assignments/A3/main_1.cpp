#include <iostream>
#include <sstream>
using namespace std;

#define MAX_SIZE 100

int main() 
{
    int sequence[MAX_SIZE];
    string seq;
    getline(cin, seq);
    istringstream ss(seq);
    int n = 0;
    while (ss >> sequence[n] && n < MAX_SIZE) 
    {
        n++;
    }

    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (sequence[i] == sequence[0])
            count++;
    }

    cout << count << endl;

    return 0;
}
