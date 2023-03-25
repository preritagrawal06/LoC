#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 5, 6, 1, 5, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_occuring_element = arr[0];
    int max_count = 1;

    // Finding the maximum occurring element in the array
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_occuring_element = arr[i];
        }
    }

    // Printing the maximum occurring element
    printf("The maximum occurring element in the array is: %d\n", max_occuring_element);

    return 0;
}
