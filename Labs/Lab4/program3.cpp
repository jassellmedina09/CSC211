#include <iostream>
int main(){

int num = 0;
std::cout << "Enter a number: ";
std::cin >> num;

int i = 0;
while (i <= num){
    std::cout << i << std::endl;
    ++i;
}

return 0;

}