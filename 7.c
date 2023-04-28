// write a program to convert entered number of days into year ,months and day
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int days;
    printf("enter the day");
    scanf("%d",&days);
    printf("%d days is %d years",days,days/360);
    printf("%d days is %d months",days,days/30);
    printf("%d days is %d days",days,days);

    return 0;
}
