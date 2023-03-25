#include <stdio.h>

int count_occurrance (int arr[],int n, int num)
{
    int count = 0;
    for (int i=0;i< n;i++)
    {
        if (arr[i]==num)
        count++;
    }
    return 0;
}
int main ()
{
    int arr[]={1, 4, 7, 9, 4, 7, 8, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num=1;
    int occurrance =count_occurrance(arr,n,num);
    printf("%d %d",num,occurrance);
    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}