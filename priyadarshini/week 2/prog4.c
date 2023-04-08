// wap to preint a pattern
#include<stdio.h>
int main()
{
    int n=1,n1;
    printf("enter the number of rows");
    scanf("%d",&n1);
    for (int i=1;i<=n1;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}