// program to print number from 1 to 100 and replace multiples of 3 with "FIZZ" and multiples of 5 with "BUZZ"

#include <stdio.h>
int main()
{
    int n;
    for(n=1;n<=100;n++)
    {
        if (n%3==0)
            printf("FIZZ\n");
        else if (n%5==0)
            printf("BUZZ\n");
        else 
            printf("%d\n",n);
    }
}


// program to check a number whether positive,negetive or zero

#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    if (n>0)
        printf("it is positive");

    else if(n=0)
        printf("it is zero");

    else
        printf("it is negetive");
}



// Program to find sum of digits of a number taking as a input

#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("enter a number");
    scanf("%d",&n);

    do
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    while(n>0);
    
    printf("%d",s);

}

// a program to enter two numbers and perform arithmatic operation by using switch and case

#include <stdio.h>
int main()
{
    int a,b,k;
    printf ("enter two number");
    scanf("%d %d" ,&a,&b);

    for (k=1;k<=5;k++)
    {
        switch (K)
        {
            case 1:
                printf("%d\n",a+b);
                break;
            case 2:
                printf("%d\n",a-b);
                break;
            case 3:
                printf("%d\n",a*b);
                break;
            case 4:
                printf("%d\n",a/b);
                break;
            case 5:
                printf("%d\n",a%b);
                break;
            default:
                printf("None");
        }
    }
}


// program to find diameter and circumference by taking input as radius

# include <stdio.h>
main()
{
    float radius,diameter,circumference;
    printf("enter radius");
    scanf ("%f",&radius);

    diameter=2*radius;
    circumference=2*3.14*radius;

    printf ("%f %f",diameter,circumference);
}

// program to check a year is leap year or not

#include <stdio.h>
main()
{
    int year ;
    printf("enter a year");
    scanf("%d",&year);

    if(year%4==0)
        printf("it is leap year");
    else
        printf("it is not leap year");

}


// a program to enter marks of five subjects and find its total,average,percentage

#include <stdio.h>
main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float total,avg;

    printf("enter marks of five subjects");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    avg= (sub1+sub2+sub3+sub4+sub5)/5;

    printf("%f %f\n",total,avg);

}




// a program to convert length in centimeter to kilometer and meter


#include<stdio.h>
main()
{
    int length cm ;
    printf("enter length cm");
    scanf ("%d",&length cm);

    length m =100*length cm;
    length km=100000*length cm;

    printf ("%d %d",length m,length km);
}


// a program to check a triangle is valid or not for input angle


#include <stdio.h>
main()
{
    float angle1,angle2,angle3;
    printf(enter three angles);
    scanf("%f %f %f",&angle1,&angle2,&angle3);

    if (angle1+angle2+angle3=180)
        printf("it is triangle");
    else
        printf("it is not tringle");   
}


// program to check whether triangle is equilateral isosceles


#include <stdio.h>
main()
{
    float angle1,angle2,angle3;
    printf(enter three angles);
    scanf("%f %f %f",&angle1,&angle2,&angle3);

    if(angle1=angle2=angle3)
        printf("it is equilateral");
    else
        printf("it is isosceles");
}