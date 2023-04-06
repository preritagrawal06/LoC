#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 2;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("The number %d occurs %d times in the array.\n", num, count);
    return 0;
}
