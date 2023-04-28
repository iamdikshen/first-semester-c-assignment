// write a  prgram to generate fibonacci series
#include <stdio.h>
int main()
{
    int num,a=0,b=1,c,i;
    printf("enter the limit;\n");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)

    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        

    }
    return 0;
}