/*Write a program to display the day of the week based on a number (1-7) using switch-case...*/
#include <stdio.h>
void main()
{
int day;
printf("Enter the number between (1-7) to check the day :");
scanf("%d",&day);
//Using switch-case to perform the desired task...
switch (day)
{
case 1:
{
printf("The day is Monday...");
break;
}
case 2:
{
printf("The day is Tuesday...");
break;
}
case 3:
{
printf("The day is Wednesday...");
break;
}
case 4:
{
printf("The day is Thursday...");
break;
}
case 5:
{
printf("The day is Friday...");
break;
}
case 6:
{
printf("The day is Saturday...");
break;
}
case 7:
{
printf("The day is Sunday...");
break;
}
}
}
// program is finished successfully...

