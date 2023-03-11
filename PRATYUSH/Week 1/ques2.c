#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: \n");
    scanf ("%d",&num);
    if (num > 0){
        printf("%d is positive\n");
    }else if(num < 0){
        printf("%d is negetive\n");
    }else{
        printf("%d is zero\n");
    }
    return 0;
}