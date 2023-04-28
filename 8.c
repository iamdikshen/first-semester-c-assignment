//write a program to convert length from mm to km cm m and m
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int length;
    printf("enter the length");
    scanf("%d",&length);
    printf("%dmm is %fmetres",length,(float)length/1000);
    printf("%dmm is %fkm",length,(float)length/10000);
    printf("%dmm is %fcm",length,(float)length/100);
    printf("%dmm is %dmm",length,length);
    return 0;
}
