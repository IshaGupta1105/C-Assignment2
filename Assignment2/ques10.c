//WAP to input a number from the user and also input a digit.Append a digit in the number and print the resulting number.
#include<stdio.h>

int main()
{
    int num,digit;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the digit:\n");
    scanf("%d",&digit);
    num=(num*10)+digit;
    printf("Number=%d",num);
    return 0;
}