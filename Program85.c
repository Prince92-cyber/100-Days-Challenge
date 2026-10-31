/* Reverse a String...*/
#include<stdio.h>
int main()
{
char str[50];
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nYour string is : %s",str);
//Calculating the size of provided string...
int size=0;
int k=0;
while(str[k]!='\0')
{
size++;
k++;
}
printf("\nSize of String is = %d",size);
//Reverse of the given string...
for(int i=0,j=(size-1);i<=j;i++,j--)
{
char temp=str[i];
str[i]=str[j];
str[j]=temp;
}
printf("\n Reversed String : %s",str);
return 0;
}
//Program is finished successfully...