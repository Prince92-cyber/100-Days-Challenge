/*Write a program to input a character and check whether it is a vowel or consonant using if-else*/
#include <stdio.h>
void main()
{
char data;
printf("Enter your character :");
scanf("%c",&data);
// Using Conditional Statements to check whether the entered character is a vowel or consonant...
if (data=='A'||data=='E'||data=='I'||data=='O'||data=='U'||data=='a'||data=='e'||data=='i'||data=='o'||data=='u')
{
printf("The entered character is a Vowel...");
}
else
{
printf("The entered character is a consonant...");
}
}
// Program is finished successfully...