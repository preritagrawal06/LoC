#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, diameter, circumference, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    
    printf("\nDiameter = %.2f units", diameter);
    printf("\nCircumference = %.2f units", circumference);
    printf("\nArea = %.2f sq. units", area);
    
    return 0;
}