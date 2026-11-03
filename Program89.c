/*Count frequency of a given character in a string...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a character Array...
char ch[1];
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("Enter the character :");
scanf(" %c",&ch[0]);
int i=0;
int count=0;
while(str[i]!='\0')
{
if(str[i]==ch[0])
{
count++;
}
i++;
}
printf("Frequency of given character %c is = %d",ch[0],count);
return 0;
}
//Program is finished successfully...