#include <iostream>

int main(){

    int input;
    

    while (input != 0){

        std::cout << "Input: ";
        std::cin >> input;
        std::cout << input << std::endl;
        
        if (input == 0){
            break;
        }
    }
    
    return 0;
}