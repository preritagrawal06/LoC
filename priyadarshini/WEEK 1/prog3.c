// wap to print sum of the digits of a number
#include<stdio.h>
int main()
{
    int n,sum=0,rev=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        rev=n%10;
        sum=sum+rev;
        n=n/10;
    }
    printf("the sum of the digits of the number is %d",sum);
    return 0;
}