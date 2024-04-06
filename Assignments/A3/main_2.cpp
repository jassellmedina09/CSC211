#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string entered, backwards, same;

    char letter;
    getline(cin, entered);
    for (int i = 0; i < entered.size(); ++i)
     {
        letter = tolower(entered[i]);
        if (isalnum(letter)) 
        {
            same += letter;
            backwards = letter + backwards;
        }
    }
    if (backwards == same) 
    {
        cout << "True" << endl;

    } 
    else 
    {
        cout << "False" << endl;
    }
    return 0;
}