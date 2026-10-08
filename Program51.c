/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>
int main()
{
//Using Looping stetements to print the required pattern...
for (int i=1;i<=5;i++)
{
for (int k=5;k>i;k--)
{
printf(" ");
}
for (int j=6-i;j<=5;j++)
{
printf("%d",j);
}
printf("\n");
}
}
// Program is finished successfully...
