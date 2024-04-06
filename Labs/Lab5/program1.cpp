#include <iostream>

int add(int a, int b);
int mult(int a, int b);
int exp(int a, int b);

int main() {
    std::cout << exp(2, 6) << std::endl;
    return 0;
}

int exp(int a, int b)  {
    {
    int result = 1;
    for (int i = 0; i < b; ++i) {
        result *= a; 
    }
    return result;
}
}
   


int mult(int a, int b) {
    int sum = 0;
    for (int i = 0; i < b; ++i) {
        sum = sum + a; 
    }
    return sum;
}

int add(int a, int b) {
    //add a to b
    std::cout << (a + b) << std::endl;
    //return result
    return 0;
}