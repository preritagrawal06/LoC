// program to check a number whether positive,negetive or zero

#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    if (n>0)
        printf("it is positive");

    else if(n=0)
        printf("it is zero");

    else
        printf("it is negetive");

    return 0;
}