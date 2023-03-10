// Program to find sum of digits of a number taking as a input

#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("enter a number");
    scanf("%d",&n);

    do
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    while(n>0);
    
    printf("%d",s);

    return 0;

}