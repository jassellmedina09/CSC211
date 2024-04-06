// indefinetly getting input from user & printing it
// until 0 is entered to stop with a for loop

#include <iostream>

int main(){

    int input;
    

    for (;input != 0;){

        std::cout << "Input: ";
        std::cin >> input;
        std::cout << input << std::endl;
        
        if (input == 0){
            break;
        }
    }
    
    return 0;
}