#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;
    for (int i = 0; i < n; i++)
     {
        if (arr[i] < 0)
         {
            if (i != j)
             {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }

    printf("The array with negative elements on one side: ");
    for (int i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
