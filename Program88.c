/* Replace spaces with hyphens in a string...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a Character Array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nYour string is : %s",str);
int i=0;
while(str[i]!='\0')
{
if(str[i]==' ')
{
str[i]='-';
}
i++;
}
printf("\nModified String : %s",str);
return 0;
}
//Program is finished successfully...