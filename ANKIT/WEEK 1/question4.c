// a program to enter two numbers and perform arithmatic operation by using switch and case

#include <stdio.h>
int main()
{
    int a,b,k;
    printf ("enter two number");
    scanf("%d %d" ,&a,&b);

    for (k=1;k<=5;k++)
    {
        switch (K)
        {
            case 1:
                printf("%d\n",a+b);
                break;
            case 2:
                printf("%d\n",a-b);
                break;
            case 3:
                printf("%d\n",a*b);
                break;
            case 4:
                printf("%d\n",a/b);
                break;
            case 5:
                printf("%d\n",a%b);
                break;
            default:
                printf("None");
        }
    }

    return 0;
}