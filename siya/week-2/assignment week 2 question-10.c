#include <stdio.h>

int main()
{
    char str[100];
    int alphabets = 0, digits = 0, special_characters = 0, i;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            continue; // skip white spaces
        }
        else
        {
            special_characters++;
        }
    }
    
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", special_characters);
    
    return 0;
}