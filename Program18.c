/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria...
90-100 : Grade A
80-89 : Grade B
70-79 : Grdae C
60-69 : Grdae D
below 60 : Grade F. */
#include <stdio.h>
int main()
{
float marks;
printf("Enter your percentage :");
scanf("%f",&marks);
// Using Conditional statements for grade based arrangement...
if(marks<0)
printf("Invalid Input...");
else
{
if(marks>=90 && marks<=100)
{
printf("Your marks are A Grade...");
}
else if(marks>=80 && marks<=89)
{
printf("Your marks are B Grade...");
}
else if(marks>=70 && marks<=79)
{
printf("Your marks are C Grade...");
}
else if(marks>=60 && marks<=69)
{
printf("Your marks are D Grade...");
}
else 
printf("Your marks are F Grade...");
}
}
// Program is finished successfully...
