#include<stdio.h>

void a(int c[],int n){
    int q=0;
for(int i=0;i<10;i++){
    if(c[i]==n){
     q++;
    
    }
}
printf("%d\n",q);

}




int main(){
int w[10]={1,4,2,4,2,4,3,4,5};

a(w,4);

    return 0;
}