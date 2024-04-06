#include <iostream>

void replace(char str[], char a, char b){
    for (int i = 0; str[i] != '\0'; ++i){
        if (str[i] == a){
            std::swap(str[i],b);
        }
    }
}

int main(){
    char str[] = "Hello, World!";
    char a = 'H';
    char b = 'R';

    replace(str, a, b);

    std::cout << str << std::endl;

    return 0;
}