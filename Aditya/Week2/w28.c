#include <stdio.h>
#include <string.h>


int main()
{
    char p[100];
     printf("Enter a string : ");
    gets(p);
    int l = strlen(p);
    int j=0;
    int k=0;
    char *c = &(p[0]);
    for (int i = 0; i < l; i++)
    {
        char x = *c;
        int b = (int)x;
        if ((b == 97) || (b == 101) || (b== 105) || (b==111) || (b==117) )
        {
            j++;
            
        }
        else
        {
            k++;
        }
        x = (char)b;
        p[i] = x;
        c++;
    }
   
    printf("Vowels:%d\n", j);
    printf("Consonants:%d", k);
return 0;
}

