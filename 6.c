//write a program to convert entered number of seconds into hours minutes and seconds.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int time;
    printf("enter the time");
    scanf("%d",&time);
    printf("%ds is equal to %d minutes",time,time/60);
    printf("%ds is equal to %f hours",time,(float)time/3600);
    printf("%ds is equal to %d ",time,time);
    return 0;
}
