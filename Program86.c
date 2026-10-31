/* Check if a string is a palindrome...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a character Array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nYour string is : %s",str);
//Determining the size of string...
int size=0;
int k=0;
while(str[k]!='\0')
{
size++;
k++;
}
printf("\nSize of your string = %d",size);
//Now determining the reverse of string...
char temp[50]; //Copying the given string into a temporary string...
for(int i=0;i<size;i++)
{
temp[i]=str[i];
}
for(int i=0,j=(size-1);i<=j;i++,j--)
{
char temp1=str[i];
str[i]=str[j];
str[j]=temp1;
}
int check=0;
for(int i=0;i<size;i++)
{
if(temp[i]==str[i])
{
check=0;
}
else
{
check++;
}
}
if(check==0)
{
printf("\nGiven string is a Palindrome...");
}
else
{
printf("\nGiven string is not a Palindrome...");
}
return 0;
}
//Program is finished successfully...