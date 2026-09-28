/*Write a program to swap two numbers using a third variable...*/
#include <stdio.h>
int main()
// Main Programming...
{
int num1,num2,a;
printf("Enter the first number :");
scanf("%d",&num1);
printf("Enter the second number :");
scanf("%d",&num2);
printf("\nBefore swapping : num1 --> %d and num2 --> %d",num1,num2);
// Swapping using a third variable...
a=num1;
num1=num2;
num2=a;
printf("\nAfter swapping numbers are : num1 --> %d and num2 --> %d",num1,num2);
}
// Program is finished successfully....
