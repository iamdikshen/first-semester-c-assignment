// write a program to print number between 10 and zero and find their sum using while loop
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=10, sum;
    while (a>=0)
    {
        printf("%d",a);
        a--;
    }
    sum+=a;
    printf("%d\n",sum);
    
    return 0;
}
