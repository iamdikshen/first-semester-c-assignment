// write a program to ask the radius of a shphere and print the volume of the sphere;
#include<stdio.h>

int main()
{
 const double pi=3.14;       
 double volume,radius;
    printf("what is the  radius of the sphere:\n");
    scanf("%lf",&radius);
    volume=1.33*pi*radius*radius*radius;
    printf("the volume of the sphere of radius %lf is %lf",radius,volume);
}