#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int alphabets = 0, digits = 0, special_chars = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    for(int i = 0; i < strlen(str); i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            special_chars++;
        }
    }
    
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special_chars);
    
    return 0;
}
