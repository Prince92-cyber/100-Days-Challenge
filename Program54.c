/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main()
{
	// Printing the Upper Half of the Diamond...
for(int i=1;i<=4;i++) // Outer Loop...
{
for(int j=4;j>i;j--) // Inner Loop to print spaces...
{
printf(" ");
}
for(int k=1;k<=2*i-1;k++) //Inner Loop to print stars...
{
printf("*");
}
printf("\n");
}
// printing the Lower Half of the Diamond...
for(int i=3;i>=1;i--) //Outer Loop...
{
	for(int j=4;j>i;j--) //Inner Loop to print spaces...
	{
		printf(" ");
	}
	for(int k=1;k<=2*i-1;k++) //Inner Loop to print stars...
	{
		printf("*");
	}
	printf("\n");
}
}
// program is finished successfully...
