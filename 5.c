// write a program to divide one integer by another and find the quotient and remainder
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter the values of a and b;\n");
    scanf("%d\t%d",&a,&b);
    printf("the remainder of the integer %d and %d is %d",a,b,a%b);
    printf("the quotient of the number %d and %d is %d",a,b,a/b);
    return 0;
}
