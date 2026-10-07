/* Write a program to print the following pattern:
5
45
345
2345
12345
*/
#include <stdio.h>
int main()
{
//Using Nested Looping statements to print the required pattern...
for(int i=5;i>0;i--)
{
for(int j=i;j<=5;j++)
{
printf("%d ",j);
}
printf("\n");
}
}
// Program is finished Successfully...

