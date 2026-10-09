/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
    */
#include <stdio.h>
int main()
{
//Printing the Upper Body...
for(int i=1;i<=5;i++) // Outer Loop...
{
for(int j=1;j<=2*i-1;j++) //Inner Loop...
{
printf("* ");
}
printf("\n");
}
//Printing Lower Body...
for(int i=4;i>=1;i--) // Outer Loop...
{
for(int j=1;j<=2*i-1;j++) //Inner Loop...
{
printf("* ");
}
printf("\n");
}
}
// Program is finished successfully...
