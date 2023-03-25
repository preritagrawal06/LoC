#include<stdio.h>

int main(){

int a[]={1,2,3,4,5};
int b[]={6,7,8,9,10};

int *c=&a[0];
int *e=&b[0];
int t=5;
while(t--){
*e=*c;
c++;
e++;
}
for (int i = 0; i < 5; i++)
    {
        printf("%d",b[i]);
    }

    return 0;
}