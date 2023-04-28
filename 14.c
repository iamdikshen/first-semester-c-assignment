// write a program to input two numbers and interchange the content
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int first,second,temp;
    printf("first value:\t");
scanf("%d",&first);
    printf("second value:\t");
    scanf("%d",&second);
    temp=first;
    first=second;
    second=temp;
    printf("the first valus is %d\n",first);
    printf("the second value is %d\n",second);
    
    
    return 0;
}
