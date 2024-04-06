#include <iostream>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        if(i+1 < str.length() && str[i] == str[i+1])
        {
            str.erase(i+1, 1);
            i--;
        }
    }

    cout << str << endl;

    return 0;
}
