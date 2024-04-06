#include <iostream>
#include <cstring>
using namespace std;

void lower(string &str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = tolower(str[i]);
}

void test(string &str)
{
    lower(str);
    bool flag = false;
    string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
            continue; 
        if (str[i] == '+')
            flag = true;
        if (str[i] == '@')
            flag = false;
        if (!flag)
            temp += str[i];
    }
    str = temp;
}

int main(int argc, char const *argv[])
{
    string email1, email2;
    cin >> email1 >> email2;
    test(email1);
    test(email2);
    if (email1 == email2)
        cout << "True\n";
    else
        cout << "False\n";
    return 0;
}
