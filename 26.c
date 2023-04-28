// write a program to calculate factorial of a number
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,i,j=1;
    printf("enter the number you want to find the factorial of:\n");
    scanf("%d",&num);
    for ( i = 1; i<=num; i++)
    {
        j=j*i;
    }
    printf("%d",j);
    
    return 0;
}
