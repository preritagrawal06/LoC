#include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a<0){
        printf("it is a negative number\n");

    }
    else if(a>0){
        printf("it is a positive number\n");

    }
    else{
        printf("it is a zero\n");
    }
    return 0;
}