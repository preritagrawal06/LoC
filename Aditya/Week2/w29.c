#include<stdio.h>

int main(){

int i=1;

while(i<6){

    int j=1;
    while(j<=6-i){
        
        printf("%c ",'*');
        j=j+1;
    
    }
    printf("\n");
    i++;
}



    return 0;
}