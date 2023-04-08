#include<stdio.h>

int main(){
    int a,b;
    printf(" enter the first the number\n");
    scanf("%d",&a);
    printf ("ener the second number\n");
    scanf("%d",&b);
    int op;
    printf("Addition=1\nSubtraction=2\nmultiplication=3\ndiv=4\ninput an operator\n");
    scanf("%d",&op);

    switch(op){
        case 1:
        printf("sum is %d\n",a+b);
        break;
        case 2:
        printf("sub is %d\n",a-b);
        break;
        case 3:
        printf("mul is %d\n",a*b);
        break;
        case 4:
        printf("div is %d\n",a/b);
        break;
        default:
        printf("Not valid");


    }

    return 0;
}