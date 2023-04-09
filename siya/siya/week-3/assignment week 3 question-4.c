#include <stdio.h>

void factorial(int n, int *result);

int main() {
    int n, result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    factorial(n, &result);
    printf("The factorial of %d is %d\n", n, result);
    return 0;
}

void factorial(int n, int *result) {
    *result = 1;
    for (int i = 1; i <= n; i++) {
        *result *= i;
    }
}
