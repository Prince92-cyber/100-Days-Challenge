/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int main()
{
// Using Nested  Looping to print the required pattern...
for(int i=5;i>0;i--)
{
for(int k=5;k>=i;k--)
{
printf("  ");
}
for(int j=1;j<=i;j++)
{
printf("* ");
}
printf("\n");
}
}
// program is finished successfully...

