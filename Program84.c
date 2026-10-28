/* Convert a lowecase string to ypercase without using built-in-functions...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a character Array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nProvided String : %s",str);
// Code to convert lowecase string to uppercase...
char temp_str1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char temp_str2[]="abcdefghijklmnopqrstuvwxyz";
int i=0;
while(str[i]!='\0')
{
for(int j=0;j<26;j++)
{
if(str[i]==temp_str2[j])
{
str[i]=temp_str1[j];
}
}
i++;
}
printf("\nNew String : %s",str);
return 0;
}
//Program is finished successfully...