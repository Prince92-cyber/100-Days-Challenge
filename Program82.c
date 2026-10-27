/* Print each character in a string without using built-in-functions...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a character Array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nYour string is : %s",str);
//Calculating the size of inputed string...
int size=0;
int i=0;
while(str[i]!='\0')
{
	size++;
	i++;
}
printf("\nNumber of characters in the string = %d",size);
//Now printing each element of provided string in new line...
int j=0;
printf("\nRequired Output :");
while(j<size)
{
printf("\n%c",str[j]);
j++;
}
return 0;
}
//Program is finished successfully...