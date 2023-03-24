#include <stdio.h>

int main()
{
    int arr[10] = {2, -5, 6, -8, 10, -3, 9, -4, -7, 1};
    int i, j, temp;

    printf("Original array: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    j = 0; // index for negative elements
    for(i = 0; i < 10; i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++; // increment negative index
        }
    }

    printf("\nModified array: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
