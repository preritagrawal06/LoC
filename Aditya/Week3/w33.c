#include<stdio.h>

int main(){
int c,d;
int *a=&c;
int *b=&d;

scanf("%d",&c);
scanf("%d",&d);
printf("Addition:%d",*a+*b);
    return 0;
}