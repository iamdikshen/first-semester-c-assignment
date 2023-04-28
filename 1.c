// write a program to find addition,subtraction,multiplication and divison of a number giveen by the user
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter the values\n");
    scanf("%d \t %d", &a,&b);
    printf("the sum of the number is %d\n",a+b);
    printf("the difference of the number is %d\n",a-b);
    printf("the muptiple of the number is %d\n", a*b);
    printf("the division of the number is %d\n",a/b);
    return 0;
}
