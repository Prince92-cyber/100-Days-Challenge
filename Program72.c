/*Find the sum of all elements in a matrix...*/
#include <stdio.h>
int main()
{
int n,m;
printf("Enter the number of rows you want :");
scanf("%d",&n);
printf("Enter the number of columns you want :");
scanf("%d",&m);
if(n<=0 || m<=0) //Checking the validity of input...
{
printf("Invalid Input...");
}
else
{
int matrix[n][m]; //Declaration of an 2-dimensional Array...
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("Enter your element at the position (%d,%d) :",i,j);
scanf("%d",&matrix[i][j]);
}
}
int sum=0;
printf("\n Matrix Formed ...\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",matrix[i][j]);
sum+=matrix[i][j];
}
printf("\n");
}
printf("Sum of all the elements of given Matrix is = %d",sum);
}
}
//Program is finished successfully...