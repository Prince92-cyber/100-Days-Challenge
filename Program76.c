/*Check if a matrix is symmetric...*/
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
int matrix[n][m]; //Declaration of a 2-dimensional matrix...
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("Enter your element at the position (%d,%d) :",i,j);
scanf("%d",&matrix[i][j]);
}
}
printf("\nMatrix Formed...\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",matrix[i][j]);
}
printf("\n");
}
printf("\nNow The Transpose of given Matrix formed is ...\n");
int transpose[n][m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
transpose[i][j]=matrix[j][i];
}}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",transpose[i][j]);
}
printf("\n");
}
printf("\nNow checking that whether the given Matrix is Symmetric or not...\n");
int count=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(transpose[i][j]==matrix[i][j])
{
count+=0;
}
else
{
count+=1;
}
}
}
if(count==0)
{
printf("\nProvided Matrix is a Symmetric Matrix...");
}
else
{
printf("\nProvided Matrix is Not A Symmetric Matrix...");
}
}
}
//Program is finished successfully...