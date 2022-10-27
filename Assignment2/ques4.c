// WAP to swap values of two int variable without using a third variable.

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y=");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swap value of x=%d and y=%d",x,y);
    return 0;
}