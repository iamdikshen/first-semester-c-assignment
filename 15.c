// write a program to enter a five digit number which prints the sum of the digits
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,first,second,third,fourth,fifth,temp,temp1,temp2,temp3,temp4;
    printf("enter the five digit number");
    scanf("%d",&num);
    first=num/10000;
    temp=num%10000;
    second=temp/1000;
    temp=num%1000;
    third=temp/100;
    temp=num%100;
    fourth=temp/10;
    temp=num%10;
    fifth=temp/1;
    printf("the sum of the digit is %d",first+second+third+fourth+fifth);
    return 0;
}
