#include <iostream>
unsigned int string_len(char str[]){
    unsigned int length = 0;
    while (str[length] != '\0'){
        length++;
    }

return length;
}

bool palindrome(char str[]){
    unsigned int len = string_len(str);
    for (unsigned int i = 0; i < len / 2; ++i){
        if (str[i] != str[len -i-1]){
            return false;
        }
        return true;
    }

}

int main(){

    char str[] = "tacocat";
    if (palindrome(str)){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
    
    return 0;
}