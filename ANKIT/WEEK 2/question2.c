#include <stdio.h>

int main() {
    int arr1[] = {6,7,8,9,10};
    int arr2[] = {11,12,13,14,15};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size = size1 + size2;
    int merged[size];

    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", merged[i]);
    }

    return 0;
}
