#include <iostream>

unsigned int string_len(char* str) 
{
    unsigned int result = 0;
    while (*str != '\0') 
    {
        result++;
        str++;
    }
    return result;
}

void remove(char* str) 
{
    int length = string_len(str);
    char* write_ptr = str;

    for (char* read_ptr = str; *read_ptr != '\0'; read_ptr++) 
    {
        if (*read_ptr == '<') 
        {
            if (write_ptr > str) 
            {
                write_ptr--; 
            }
        } else 
        {
            *write_ptr++ = *read_ptr; 
        }
    }
    *write_ptr = '\0'; 
}

int main() 
{
    char str[107];
    std::cin >> str;
    remove(str);
    std::cout << str << std::endl;
    return 0;
}
