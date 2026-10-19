/*Add two matrices...*/
#include <stdio.h>
int main()
{
int n,m;
printf("Provide Information related to Matrix 1...\n");
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
int matrix1[n][m]; //Declaration of a 2-dimensional matrix...
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("Enter your element at the position (%d,%d) :",i,j);
scanf("%d",&matrix1[i][j]);
}
}
printf("\nProvided Matrix 1...\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",matrix1[i][j]);
}
printf("\n");
}
int p,q;
printf("Provide Information related to Matrix 2...\n");
printf("Enter the number of rows you want :");
scanf("%d",&p);
printf("Enter the number of columns you want :");
scanf("%d",&q);
if(p<=0 || q<=0) //Checking the validity of input...
{
printf("Invalid Input...");
}
else
{
int matrix2[p][q]; //Declaration of a 2-dimensional matrix...
for(int i=0;i<p;i++)
{
for(int j=0;j<q;j++)
{
printf("Enter your element at the position (%d,%d) :",i,j);
scanf("%d",&matrix2[i][j]);
}
}
printf("\nProvided Matrix 2...\n");
for(int i=0;i<p;i++)
{
for(int j=0;j<q;j++)
{
printf("%d ",matrix2[i][j]);
}
printf("\n");
}
if(n==p && m==q) //Checking the possibility of summation...
{
int sum[n][m]; //Declaring a 2-dimensional matricx to store the sum of given two matrices...
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
sum[i][j]=matrix1[i][j] + matrix2[i][j];
}
}
printf("\nThe sum of given two Matrices is ...\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",sum[i][j]);
}
printf("\n");
}
}
else{
printf("\nSum of two Matrices can't be performed...");
}
}
}
}
//Program is finished successfully... 