/*Write a program to input two  numbers and display their sum , difference , product , quotiesnt...*/
#include <stdio.h>
int main()
//Main Programming..
{
int num1,num2,sum,diff,quot,pro;
printf("Enter your first number :");
scanf("%d",&num1);
printf("\nEnter your second number :");
scanf("%d",&num2);
sum=num1+num2;
pro=num1*num2;
quot=num1/num2;
diff=num1-num2;
printf("\nSum of given numbers is --> %d",sum);
printf("\nDifference of given number is --> %d",diff);
printf("\nQuotient of the given number is --> %d",quot);
printf("\nProduct of the given numbers is --> %d",pro);
}
// program is finished successfully...
