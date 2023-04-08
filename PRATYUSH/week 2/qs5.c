#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int i;

    // Copying elements of arr1 into arr2
    for (i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    // Printing the contents of arr1 and arr2
    printf("Contents of arr1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Contents of arr2: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
