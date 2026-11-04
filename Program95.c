/*Check if one string is a rotation of another ...*/
#include<stdio.h>
#include<string.h>
int main()
{
char str1[50]; //Declaration of a character Array...
char temp_str[50]; //Declaring a temporary character Array...
printf("Enter your word :");
scanf(" %49[^\n]",str1);
printf("\nProvided Word is : %s",str1);
int size=strlen(str1);
printf("\nLength of the provided Word is : %d",size);
//Writing a code to reverse the given word...
strcpy(temp_str,str1);
for(int i=0,j=(size-1);i<=j;i++,j--)
{
	char temp=str1[i];
	str1[i]=str1[j];
	str1[j]=temp;
}
char str2[5]; //Declaration of another character Array...
printf("\nEnter your another word :");
scanf(" %49[^\n]",str2);
printf("\nProvided another word is : %s",str2);
int size1=strlen(str2);
printf("\nLength of provided another word is : %d",size1);
//Now checking whether the provided word is a Rotation of another word or not...
int check=0;
if(size=size1)
{
	for(int i=0;i<size;i++)
	{
		if(str1[i]!=str2[i])
		{
			check++;
		}
		else
			check=0;
	}
}
else
{
	printf("\nProvided word is not the rotation of another...");
}
//Now printing the message related to the words...
if(check==0)
{
	printf("\nProvided word is the rotation of another...");
}
else
{
	printf("\nProvided word is not the rotation of another...");
}
return 0;
}
//Program is finished successfully...