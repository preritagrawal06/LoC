#include<stdio.h>

int fac(int a){
  if(a<=1){
    return 1;
  }  
return a*fac(a-1);

}

int main(){
    int d;
    printf("Enter a number:");
    scanf("%d",&d);
int f=fac(d);
printf("%d",f);


    return 0;
}