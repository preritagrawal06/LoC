//wap to copy the elements of one array into another array
#include <stdio.h>
  
int copy_array(int* a, int* b, int n)
{
    int i;
  
    
    for (i = 0; i < n; i++)
     {
        b[i] = a[i];
    }
  
    
    for (i = 0; i < n; i++)
     {
        printf("%d ", b[i]);
    }
}

int first_array(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
}
  
int main()
{
    int k[100], n ;
    printf("enter the number of integers in array");
    scanf("%d",&n);
     printf("emter the integers in array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    int l[n];
    printf("The first array is : ");
    first_array(k, n);
    printf("\nThe second array is : ");
    copy_array(k, l, n);
  
    return 0;
}