/*Find the transpose of a matrix...*/
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
int matrix[n][m]; //Declaration of a 2-dimensional Array...
//Taking input from user...
for(int i=0;i<n;i++) //Outer Loop...
{
for(int j=0;j<m;j++) //Inner Loop...
{
printf("Enter your element at the position (%d,%d) :",i,j);
scanf("%d",&matrix[i][j]);
}
}
printf("\n Matrix Formed ...\n");
for(int i=0;i<n;i++) //Outer Loop...
{
for(int j=0;j<m;j++) //Inner Loop...
{
printf("%d ",matrix[i][j]);
}
printf("\n");
}
int transpose[m][n]; //Declaration of another matrix for the Transpose...
printf("\nThe Transpose of given Matrix is ...\n");
for(int i=0;i<n;i++) //Outer Loop
{
for(int j=0;j<m;j++) //Inner Loop...
{
transpose[i][j]=matrix[j][i];
}
}
for(int i=0;i<n;i++) //Outer Loop...
{
for(int j=0;j<m;j++) //Inner Loop...
{
printf("%d ",transpose[i][j]);
}
printf("\n");
}
}
}
//Program is finished successfully...