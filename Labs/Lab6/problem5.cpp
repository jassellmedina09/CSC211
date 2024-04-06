#include <iostream>

void remove(char str[], char a) {
    int i = 0;
    while (str[i] != '\0' && str[i] != a) {
        i++;
    }

    if (str[i] == a) {
        while (str[i] != '\0') {
            str[i] = str[i + 1];
            i++;
        }
    }
}

int main() {
    char str[] = "Chicken";
    char a = 'i';
    remove(str, a);

    std::cout << str << std::endl;

    return 0;
}
