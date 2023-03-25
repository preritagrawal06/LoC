#include<stdio.h>
int main(){
    int a ;
    int sum =0;
    printf("Enter the number\n");
    scanf("%d",&a);
    do{
     sum += a % 10;
        a /= 10;

    }while(a>0);
    printf(" the sum is %d",sum);



    return 0;
}