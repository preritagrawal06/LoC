//wap to enter the radius of the circle and find its diameter,circumference and area
#include<stdio.h>
int main()
{
    int r,d;
    float circum,area;
    printf("enter the radius of the circle");
    scanf("%d",r);
    d=2*r;
    printf("The diameter of the circle is %d",d);
    circum=2*3.14*r;
    printf("The circumference of the circle is %f",circum);
    area=3.14*r*r;
    printf("the area of the circle is %f",area);
    return 0;
}