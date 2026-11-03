/* Toggle case of each character in a string...*/
#include<stdio.h>
int main()
{
char str[50]; //Declaration of a character array...
printf("Enter your string :");
scanf("%[^\n]s",str);
printf("\nProvided string is : %s",str);
char capital[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //Declaration of a capital alphabetical Array...
char small[]="abcdefghijklmnopqrstuvwxyz"; //Declaration of a small alphabetical Array...
//Calculating the size of provided string...
int size=0;
int k=0;
while(str[k]!='\0')
{
	size++;
	k++;
}
printf("\nThe size of given string is : %d",size);
for(int i=0;i<size;i++)
{
	for(int j=0;j<26;j++)
	{
	if(str[i]==capital[j])
	{
		str[i]=small[j];
	}
	else if(str[i]==small[j])
	{
		str[i]=capital[j];
	}
	}
}
printf("\nModified String is : %s",str);
return 0;
}
//Program is finished successfully...	