//the length and breadth are input through the keyborad. write a program to calculate the area and perimeter of the rectangle
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int L,B;
    printf("enter the length and breadth of the rectangle\n");
    scanf("%d\t%d",&L,&B);
    printf("the area of the rectangle is %d",L*B);
    printf("the perimeter of the rectange is %d",2*L+B);
    return 0;
}
