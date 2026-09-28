/*Write a program to input a character and check whether it is an uppercase alphabet , lowercase alphabet,
 digits , or special character...*/
#include <stdio.h>
void main()
{
char value;
printf("Enter your character :");
scanf("%c",&value);
// Using Conditional statements to check the type of character...
if (value>='A' && value<='Z')
{
printf(" The entered data is an Upper Case Alphabet...");
}
else if (value>='a' && value<='z')
{
printf("The entered data is a Lower Case Alphabet...");
}
else if (value>='0' && value<='9')
{
printf("The entered data is a digit...");
}
else
printf("The entered data is a special character...");
}
// Program is finished successfully...
 