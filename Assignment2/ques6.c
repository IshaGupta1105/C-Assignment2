// WAP which takes a character as an input and display its ASCII code.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character=");
    scanf("%c",&ch);
    printf("The ASCII code of %c is %d",ch,ch);
    return 0;
}