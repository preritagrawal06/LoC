#include <stdio.h>

int count_occurrences(int arr[], int n, int num) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 1;
    int occurrences = count_occurrences(arr, n, num);
    printf("The number %d occurs %d times in the array: ", num, occurrences);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
