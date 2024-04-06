#include <iostream> 
#include <string> 
using namespace std; 



void displayPermutation(const string& s1, const string& s2)
{ 
    if(s2.size() == 0){ 
        cout << s1 << endl; 
    } 

    else{

        for(int i = 0; i < s2.size(); i++){ 

            displayPermutation(s1+s2[i], s2.substr(0,i) + s2.substr(i+1)); 

        } 

    } 

} 


void displayPermutation(const string& s){ 

    displayPermutation("", s); 

} 


int main(){ 

    string s; 

    cout << "Enter a string: "; 

    cin >> s; 



    cout << "Permutations of the string: " << endl; 

    displayPermutation(s); 



    return 0; 

}