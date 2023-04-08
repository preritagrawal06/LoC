#include<stdio.h>
int main(){
    int r;
    printf("Enter the radius\n");
    scanf("%d",&r);
    float pie=3.14;
    int diameter= 2*r;
    printf("diameter of the circle is %d\n",diameter);
    float cir=2*pie*r;
    printf("circumferance of the circle is %f\n",cir);
    float area=pie*r*r;
    printf("area of the circle is %f\n",area);
    return 0;

}