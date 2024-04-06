// recursion function that will recursively build
// all permutations of a string it receives in main as 
// its choices argument

#include <iostream>
#include <string>
using namespace std;

void permute_str(const string& cur, const string& cho )
{
    if (cho.size() == 0){
        cout << cur << endl;
    }


else
{
    for (int i = 0; i < cho.size(); i ++){
        permute_str(cur+cho[i], cho.substr(0,i) + cho.substr(i+1));

    }
}
}

void show_permute_str(const string& x)
{
    show_permute_str("",x);
}

int main(){
    string x;
    cout << "Enter string: ";
    cin >> x;
    cout << "permutations: " << endl;

    show_permute_str(x);

    return 0;
}