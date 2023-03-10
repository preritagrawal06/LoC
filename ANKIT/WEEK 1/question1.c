// program to print number from 1 to 100 and replace multiples of 3 with "FIZZ" and multiples of 5 with "BUZZ"

#include <stdio.h>
int main()
{
    int n;
    for(n=1;n<=100;n++)
    {
        if (n%3==0)
            printf("FIZZ\n");
        else if (n%5==0)
            printf("BUZZ\n");
        else 
            printf("%d\n",n);
    }
    return 0;
}