/*Write a program to input three numbers and find the largest among them using if-else */
#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter the three numbers :");
scanf("%d %d %d",&num1,&num2,&num3);
// Using Conditional statements to check which number is the largest...
int largest=0;
if (num1>num2)
{
largest=num1;
if (largest>num3)
{
printf("The largest number among the given numbers is : %d",largest);
}
else
{
printf("The largest number among the given numbers is :%d",num3);
}
}
else
{
	largest=num2;
	if(largest>num3)
	{
		printf("The largest number among the given numbers is : %d",largest);
	}
	else
	{
		printf("The largest number among the given numbers is : %d",num3);
	}
}
}
// Program is finished successfully...

	

