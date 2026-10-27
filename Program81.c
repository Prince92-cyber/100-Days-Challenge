/* Count characters in a string without using bulit - in length functions...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of an character array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nYour String is : %s",str);
//Calculating the length of provided string without using built-in-functions...
int size=0;
int i=0;
while(str[i]!='\0')
{
size++;
i++;
}
printf("\nNumber of Characters = %d",size);
return 0;
}
//Program is finished successfully...