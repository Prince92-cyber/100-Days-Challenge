/* Count vowels and consonants in a string...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a character array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nProvided String is : %s",str);
//Counting number of vowels...
int i=0;
int count_vowels=0,count_consonants=0,spaces=0;
while(str[i]!='\0')
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
{
count_vowels++;
}
else
{
count_consonants++;
}
//Now counting number of spaces...
if(str[i]==' ')
{
spaces++;
}
i++;
}
count_consonants=(count_consonants-spaces);
printf("\nNumber of Vowels = %d",count_vowels);
printf("\nNumber of Consonants = %d",count_consonants);
return 0;
}
//Program is finished successfully...