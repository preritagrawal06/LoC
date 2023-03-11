#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nChoose an operation to perform:");
    printf("\n1. Addition (+)");
    printf("\n2. Subtraction (-)");
    printf("\n3. Multiplication (*)");
    printf("\n4. Division (/)");
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("\n%d + %d = %.1f", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("\n%d - %d = %.1f", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("\n%d * %d = %.1f", num1, num2, result);
            break;
        case 4:
            if(num2 == 0) {
                printf("\nError: Division by zero");
            } else {
                result = (float)num1 / num2;
                printf("\n%d / %d = %.1f", num1, num2, result);
            }
            break;
        default:
            printf("\nInvalid choice");
    }
    
    return 0;
}

