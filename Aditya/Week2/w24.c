#include<stdio.h>

int main(){

int i=1;
int c=1;
while(i<6){

    int j=1;
    while(j<=i){
        
        printf("%d ",c);
        j=j+1;
    c++;
    }
    printf("\n");
    i++;
}



    return 0;
}