// a program to check a triangle is valid or not for input angle


#include <stdio.h>
 int main()
{
    float angle1,angle2,angle3;
    printf(enter three angles);
    scanf("%f %f %f",&angle1,&angle2,&angle3);

    if (angle1+angle2+angle3=180)
        printf("it is triangle");
    else
        printf("it is not tringle"); 

    return 0;  
}