// program to check a year is leap year or not

#include <stdio.h>
int main()
{
    int year ;
    printf("enter a year");
    scanf("%d",&year);

    if(year%4==0)
        printf("it is leap year");
    else
        printf("it is not leap year");

    return 0;

}