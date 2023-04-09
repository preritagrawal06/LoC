#include <stdio.h>

void fact(int n, int *result)
{
    int i;
    *result = 1;

    for(i=1; i<=n; i++)
    {
        *result = *result * i;
    }
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    fact(n, &result);

    printf("Factorial of %d is %d\n", n, result);

    return 0;
}
