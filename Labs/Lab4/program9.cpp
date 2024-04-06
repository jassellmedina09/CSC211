#include <iostream>

int main(){

for (int i = 0; i < 4; i++){
    for (int j = 0; j < 14; j++){
        std::cout << '!';

        for (int k = (j*2); k < 4; k++){
            std::cout << '//' ;
        }
    
    }
    
    std::cout << std::endl;
    }

    return 0;
}