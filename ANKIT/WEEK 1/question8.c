// a program to convert length in centimeter to kilometer and meter


#include<stdio.h>
int main()
{
    int length cm ;
    printf("enter length cm");
    scanf ("%d",&length cm);

    length m =100*length cm;
    length km=100000*length cm;

    printf ("%d %d",length m,length km);

    return 0;
}