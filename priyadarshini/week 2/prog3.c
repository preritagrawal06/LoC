// wap to sort an array using function.
#include<stdio.h>


int smallest(int arr[],int k,int n);
void sort(int arr[],int n);

void main()
{
 int arr[20],i,n,j,k;
 
 printf("\nEnter the number of elements in the array: ");
 scanf("%d",&n);

 printf("\nEnter the elements of the array");
 for(i=0 ; i < n ; i++)
 {
  printf("\n arr[%d] = ",i);
  scanf("%d",&arr[i]);
 }

 sort(arr,n);
 printf("\nThe sorted array is: \n");
 for(i=0 ; i < n ;  i++)
 printf("%d\t",arr[i]);
 
}

int smallest(int arr[],int k,int n)
{
 int pos=k,small=arr[k],i;
 for(i=k+1;i<n;i++)
 {
  if(arr[i]<small)
  {
   small=arr[i];
   pos=i;
  }
 }
 return pos;
}


void sort(int arr[],int n)
{
 int k,pos,temp;
 for(k=0 ; k < n ; k++)
  {
   pos=smallest(arr,k,n);
   temp=arr[k];
   arr[k]=arr[pos];
   arr[pos]=temp;
  }
}