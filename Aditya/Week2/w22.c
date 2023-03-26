#include <stdio.h>
int main()
{
    int arr1 = 5, arr2 = 5, arr3 ,i, j;
 
    
    int a[5] = { 1, 2, 3, 4, 5 };
 
    
    int b[5] = { 6, 7, 8, 9, 10 };
 
    
    arr3 = arr1 + arr2;
    int c[arr3];
 
    
    for (i = 0; i < arr1; i++) {
        c[i] = a[i];
    }
 
    
    for (i = 0, j = arr1;
         j < arr3 && i < arr2; i++, j++) {
        c[j] = b[i];
    }
 
    
    for (i = 0; i < arr3; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}