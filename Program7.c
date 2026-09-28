/* Write a program to swap two numbers without using a third variable...*/
#include <stdio.h>
int main()
// MAIN PROGRAMMING...
{
int num1,num2;
printf("Enter the first number :");
scanf("%d",&num1);
printf("Enter the second number :");
scanf("%d",&num2);
printf("Before swapping : num1 --> %d and num2 --> %d",num1,num2);
// Swapping without using a third variable...
num1=(num1+num2);
num2=(num1-num2);
num1=(num1-num2);
printf("\nAfter swapping : num1 --> %d and num2 --> %d",num1,num2);
}
// Program is finished successfully...
