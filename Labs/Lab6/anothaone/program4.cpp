#include <iostream>
unsigned int string_len(char str[]){
    unsigned int length = 0;
    while (str[length] != '\0'){
        length++;
    }

return length;

}

void reverse(char str[]){
    unsigned int length = string_len(str);
    while (str[length] != '\0'){
        length++;
    }

    for (unsigned int i = 0; i < length/2; ++i){
        char rev = str[i];
        str[i] = str[length - i -1];
        str[length - i -1] = rev;
    }

}


int main() {
    const int max_length = 101; 
    char str[max_length];
    
    std::cin.getline(str, max_length); 
    
    reverse(str);
    std::cout << str << std::endl;
    return 0;
}