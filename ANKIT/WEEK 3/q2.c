#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0};
    int i, len;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        freq[str[i]]++;
    }

    printf("Frequency of each character in the string: \n");
    for(i=0; i<256; i++)
    {
        if(freq[i]!=0)
        {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}
