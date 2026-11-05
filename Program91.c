/* Remove all vowels from a string...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a character array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nProvided string is : %s",str);
//Calculating the size of provided string...
int size=0;
int k=0;
while(str[k]!='\0')
{
size++;
k++;
}
printf("\nSize of the provided String is : %d",size);
char vowels[]="aeiou";
for(int i=0;i<size;i++)
{
for(int j=0;j<5;j++)
{
if(str[i]==vowels[j])
{
str[i]=' ';
}
}
}
printf("\nModified String is : %s",str);
return 0;
}
//Program is finished successfully...