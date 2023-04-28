// write a program to covert temperature in centigrade into farenheit t.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float F,C;
    printf("enter the temperature ");
    scanf("%f",&C);
    F=1.8*C+32;
    printf("%f C is equal to %f farenheit",C,(float)F);
    return 0;
}
