#include<stdio.h>

int main(){

int a[10]={2,3,4,2,2,3,2,2,4,5};
int c=0;
for(int i=0;i<10;i++){
    if(a[i]==2){
        c++;
    }
}

printf("%d",c);
    return 0;
}