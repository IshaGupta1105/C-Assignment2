// Assume price of 1 USD is INR 76.23. Write the program to take the amount in INR and convert it into USD. 
#include<stdio.h>
int main()
{
    float USD,INR;
    printf("Enter the amount in INR=");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("Value in USD = %.2f",USD);
    return 0;
}