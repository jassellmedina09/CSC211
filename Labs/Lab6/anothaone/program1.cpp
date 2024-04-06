#include <iostream>

unsigned int string_len(char str[]){
    unsigned int length = 0;
    while (str[length] != '\0'){
        length++;
    }

return length;

}


int main(){
    char str[] = "Hello, world!";
    unsigned int length = string_len(str);
    std::cout << length << std::endl;

    return 0;
}