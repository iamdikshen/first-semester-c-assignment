#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,last,first,second,temp,reverse;
    printf("enter the three digit number\n");
    scanf("%d",&num);
    first=num%10;
    temp=num/10;
    second=temp%10;
    last=temp/10;
    reverse=first*100+second*10+last*1;
    printf("%d",reverse);
    return 0;
}
