/*Print the initials of a name...*/
#include<stdio.h>
#include<string.h>
int main()
{
char str[50]; //Declaration of a character Array...
printf("Enter your name :");
scanf("%49[^\n]",str);
printf("\nProvided Name is : %s",str);
int size=strlen(str);
char temp[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char initial[50];
int count_word=0,count_initial=0;
for(int i=0;i<size;i++)
{
//Check whether the character is the beginning of a word...
if(i==0 || str[i-1]==' ')
{
	for(int j=0;j<26;j++)
	{
		//Check uppercase and lowercase characters...
		if(str[i]==temp[j] || str[i]==temp[j]+32)
		{
			initial[count_initial++]=temp[j];
			initial[count_initial++]='.';
			break;
		}
	}
}
}
initial[count_initial]='\0';
printf("\nThe initials of the given name are : %s",initial);
return 0;
}
//Program is finished successfully...