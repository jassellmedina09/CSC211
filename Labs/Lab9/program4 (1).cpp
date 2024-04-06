#include <iostream>
#include <string>
using namespace std;

void binary_strings(string in, int len)
{
    if (len == 0){
        cout << in << endl;
        return;
    }

binary_strings(in + "0", len-1);
binary_strings(in + "1", len-1);
}

int main()
{
    int x;
    cout << "length of strings: ";
    cin >> x;

    cout << "possible: " << x;
    binary_strings("", x);

    return 0;
}