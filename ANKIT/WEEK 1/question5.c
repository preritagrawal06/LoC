// program to find diameter and circumference by taking input as radius

# include <stdio.h>
int main()
{
    float radius,diameter,circumference;
    printf("enter radius");
    scanf ("%f",&radius);

    diameter=2*radius;
    circumference=2*3.14*radius;

    printf ("%f %f",diameter,circumference);

    return 0;
}