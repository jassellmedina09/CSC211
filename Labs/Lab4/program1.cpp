// get num from user
// print out all numbers up to given input value with for loop.

#include <iostream>
int main(){

int num = 0;
std::cout << "Enter a number: ";
std::cin >> num;

for (int i = 0; i <= num ; i++){
    std::cout << i << std::endl;
}

return 0;

}