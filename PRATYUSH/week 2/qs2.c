#include <stdio.h>

int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int size1, size2, i, j, k;

    
    printf("Enter the size of array 1: ");
    scanf("%d", &size1);
    printf("Enter the elements of array 1: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of array 2: ");
    scanf("%d", &size2);
    printf("Enter the elements of array 2: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    i = 0; j = 0; k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < size1) {
        mergedArr[k] = arr1[i];
        i++; k++;
    }
    while (j < size2) {
        mergedArr[k] = arr2[j];
        j++; k++;
    }

    printf("Merged array in reverse order: ");
    for (i = k-1; i >= 0; i--) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}
