#include <iostream>
int main(){
    int sum = 0;
    int j = 0;
    
    for (int i = 1; i <= 10; i++){
        if (i % 2 != 0){
            sum += i * j;
        } else {
            for (int j = (10 -i); j >= 5; j++){
                sum += i * j;
            }
        }

    }
}