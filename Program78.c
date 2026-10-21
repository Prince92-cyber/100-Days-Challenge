/* Find the sum of main diagonal elements for a square matrix...*/
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
int arr[n][m]; //Declaration of a 2-dimensional Array...
//Taking input from user...
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("Enter the your element at the position (%d,%d) :",i,j);
scanf("%d",&arr[i][j]);
}
}
//Now printing the Matrix formed...
printf("\nMatrix formed...\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
//Now writing the code to find the sum of main diagonal elements of a square matrix...
//Checking whether the Matrix is a Square Matrix or not...
if(n==m)
{
int sum=0;
printf("\nProvided Matrix is a Square Matrix...");
for(int i=0;i<n;i++)
{
sum+=arr[i][i];
}
printf("\nThe Sum Of Main Diagonal Elements of Provided Square Matrix is = %d",sum);
}
else{
printf("\nProvided Matrix is not a Square Matrix...");
}
}
}
//Program is finished successfully...