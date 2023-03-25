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
    int m=0;
    char *c = &(p[0]);
    for (int i = 0; i < l; i++)
    {
        char x = *c;
        int b = (int)x;
        if ((b>=32 && b<=40) || (b>=58 && b<=64) || (b>=123 && b<=127))
        {
            j++;
            
        }
        else if(b>=41 && b<=57)
        {
            k++;
        } else {
           m++;
        }
        x = (char)b;
        p[i] = x;
        c++;
    }
   
    printf("Special characters:%d\n", j);
    printf("Digits:%d\n", k);
    printf("Alphabets:%d", m);
return 0;
}

