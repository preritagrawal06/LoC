// program to check whether triangle is equilateral isosceles


#include <stdio.h>
 int main()
{
    float angle1,angle2,angle3;
    printf(enter three angles);
    scanf("%f %f %f",&angle1,&angle2,&angle3);

    if(angle1=angle2=angle3)
        printf("it is equilateral");
    else
        printf("it is isosceles");

    return 0;
}