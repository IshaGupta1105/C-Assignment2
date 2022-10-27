// WAP to swap values of two int variables.

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value of x and y =");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("Swap value of x=%d and y=%d",x,y);
    return 0;
}