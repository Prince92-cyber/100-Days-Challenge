/*Write a program to input time in seconds and convert it to hours:minutes:seconds format*/
#include <stdio.h>
int main()
// Main Programming..
{
double time,hours,min,sec;
printf("Enter the time in seconds :");
scanf("%d",&time);
min=time/60;
hours=min/60;
sec=time;
printf("The given time in hours : minutes : seconds now --> %ld: %ld: %ld",hours,min,sec);
}
// Program is finished successfully...


