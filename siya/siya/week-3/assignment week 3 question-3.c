#include <stdio.h>

void add(int *a, int *b, int *c);

int main() {
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    add(&a, &b, &c);
    printf("The sum of %d and %d is %d\n", a, b, c);
    return 0;
}

void add(int *a, int *b, int *c) {
    *c = *a + *b;
}
