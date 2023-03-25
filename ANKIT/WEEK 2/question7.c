#include <stdio.h>

int main() 
{
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = size - 1;

    while (i < j)
    {
    
        while (i < size && arr[i] >= 0)
        {
            i++;
        }

        while (j >= 0 && arr[j] < 0)
        {
            j--;
        }


        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    printf("The array after moving negative elements to one side:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
