/* Count spaces , digits , and special characters in a string...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a character Array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nYour string is : %s",str);
//Determining the size of the provided string...
int size=0;
int k=0;
while(str[k]!='\0')
{
size++;
k++;
}
printf("\nSize of given string is : %d",size);
//Now counting the number of spaces , digits , special characters in the provided string...
int spaces=0,digits=0,spe_char=0;
char temp[]="1234567890"; //Declaration of an character array containing digits...
char temp1[]="!@#$%^&*()_+-={}:<>?|[]\',./";
for(int i=0;i<size;i++)
{
if(str[i]==' ')
{
spaces++;
}
for(int j=0;j<10;j++)
{
if(str[i]==temp[j])
{
digits++;
}
}
for(int l=0;l<29;l++)
{
if(str[i]==temp1[l])
{
spe_char++;
}
}
}
printf("\nNumber of Digits : %d",digits);
printf("\nNumber of Spaces : %d",spaces);
printf("\nNumber of Special Characters : %d",spe_char);
return 0;
}
//Program is finished successfully...