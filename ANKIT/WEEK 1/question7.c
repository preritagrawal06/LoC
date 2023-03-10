// a program to enter marks of five subjects and find its total,average

#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float total,avg;

    printf("enter marks of five subjects");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    avg= (sub1+sub2+sub3+sub4+sub5)/5;

    printf("%f %f\n",total,avg);

    return 0;

}