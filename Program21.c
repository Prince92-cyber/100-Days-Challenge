/*Write a program to display the month name and number of days using switch-case for a given month number...*/
#include <stdio.h>
void main()
{
int month_num;
printf("Enter the month number (1-12) to know the name and number of days of that month :");
scanf("%d",&month_num);
//Using swith-case to get the desired output...
switch(month_num)
{
case 1:
{
printf("It is January having 31 days...");
break;
}
case 2:
{
printf("It is February having 28 or 29 days depending whether the year is a leap year or not...");
break;
}
case 3:
{
printf("It is March having 31 days...");
break;
}
case 4:
{
printf("It is April having 30 days...");
break;
}
case 5:
{
printf("It is May having 31 days...");
break;
}
case 6:
{
printf("It is June having 30 days...");
break;
}
case 7:
{
printf("It is July having 31 days...");
break;
}
case 8:
{
printf("It is August having 31 days...");
break;
}
case 9:
{
printf("It is September having 30 days...");
break;
}
case 10:
{
printf("It is October having 31 days...");
break;
}
case 11:
{
printf("It is November having 30 days...");
break;
}
case 12:
{
printf("It is December having 31 days...");
break;
}
}
}
// Program is finshed successfully...
 