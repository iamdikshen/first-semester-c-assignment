// write a program to calculate area and circumference of a circle
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float r,area,circumference;
    printf("enter the radius of the circle\n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("the area of the circle is %f", area);
    circumference=2*3.14*r;
    printf("the circumference of the circle is %f",circumference);
    return 0;
}
