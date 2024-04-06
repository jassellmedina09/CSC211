#include <iostream>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int ascii[256] = {0};

    for (int i = 0; i < input.length(); i++)
    {
        char ch = input[i];
        ascii[ch]++;
    }

    int unique = 0;
    for (int i = 0; i < 256; i++)
    {
        if (ascii[i] > 0)
        {
            unique++;
        }
    }

    cout << unique << endl;

    return 0;
}
