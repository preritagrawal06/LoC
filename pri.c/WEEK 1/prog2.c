//WAP TO CHECK IF THE NUMBER IS ZERO,POSITIVE OR NEGATIVE
#include<stdio.h>
int main()
{
 int a;
 printf("enter a number");
 scanf("%d",&a);
 if(a==0)
 printf("the number is zero");
 else if(a<0)
 printf("the number is negative");
 else
 printf("the number is positive");
 return 0;
}