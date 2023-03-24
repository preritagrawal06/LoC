#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_count = 0;
    int max_num = arr[0];

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        
        for (int j = 0; j < size; j++) 
        {
            if (arr[j] == arr[i]) 
            {
                count++;
            }
        }

    
        if (count > max_count)
        {
            max_count = count;
            max_num = arr[i];
        }
    }

    printf(" %d\n", max_num);

    return 0;
}
