// Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
    int num,temp,x;
    printf("Enter the number=");
    scanf("%d",&num);
    x=num%10;
    temp=num/10;
    num=(x*100)+temp;
    printf("Number=%d",num);
    return 0;
}