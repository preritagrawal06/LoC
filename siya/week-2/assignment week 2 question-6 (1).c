#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_count = 0;
    int max_num = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_num = arr[i];
        }
    }

    printf("The maximum occurring integer in the array is %d\n", max_num);

    return 0;
}
