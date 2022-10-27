// WAP to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int x, sum=0;
    printf("Enter the number=");
    scanf("%d",&x);
    sum=x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum=x+sum;
    printf("The sum of digits of given number is= %d",sum);
    return 0;
}