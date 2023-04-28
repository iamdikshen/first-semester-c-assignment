// two number are entered through a keyboard and if the first number is greater than the second number then print the sum of the numeber other wise use the difference of the numberz
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("the two number a and b are:\n");
    scanf("%d \t %d", &a,&b);
    if(a>b)
    printf("the sum is %d",a+b);
    else
    printf("the difference is %d",a-b);
    return 0;
}
