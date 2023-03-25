#include <stdio.h>

void s(int *a, int *b)
{

    int q = *a;
    *a = *b;
    *b = q;
}

int main()
{

    int a[10] = {-3, 2, -5, -4, 6, -1, 4, -6, 8};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[j] > a[j + 1])
                s(&a[j], &a[j + 1]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}