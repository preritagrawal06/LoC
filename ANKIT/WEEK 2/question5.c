#include <stdio.h>

int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int size = sizeof(arr1) / sizeof(arr1[0]);

    
    for (int i = 0; i < size; i++) 
    {
        arr2[i] = arr1[i];
    }

    printf("Elements of arr2:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
