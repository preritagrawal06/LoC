// wap to enter two numbers and perform all arithmetic operation using switch case
#include<stdio.h>
int main()
{
    int a,b,n,sum=0,diff=0,mult=0;
    float div=0;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("enter 1 for addition,2 for substraction,3 for multiplication and 4 for division ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        
        sum=a+b;
        printf("sum = %d\n",sum);
        case 2:
        
        if(a>b)
        diff=a-b;
        else
        diff=b-a;
        printf("differnce of two numbers =%d",diff);
        case 3:
        
        mult=a*b;
        printf("the multiplication of the number is=%d",mult);
        case 4:
        
        div=a/b;
        printf("the division of two number=%f",div);
        default:
        printf("wrong choice");
    }
    return 0;
}