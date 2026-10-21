/* Check if the elements on the diagonal of a matrix are distinct...*/
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
int arr[n][m]; //Declaration of a 2-dimensional array...
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("Enter your element at the position (%d,%d) :",i,j);
scanf("%d",&arr[i][j]);
}
}
printf("\nMatrix Formed ...\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
// Checking whether the matrix is square...
if (n == m)
{
printf("\nProvided Matrix is a Square Matrix...");
printf("\nChecking whether the diagonal elements are distinct...");
int distinct = 1;
// Checking the diagonal elements...
for (int i = 0; i < n - 1; i++)
{
for (int j = i + 1; j < n; j++)
{
if (arr[i][i] == arr[j][j])
{
distinct = 0;
break;
}
}
if (distinct == 0)
{
break;
}
}
if (distinct)
{
printf("\nYes, all diagonal elements are distinct...");
}
else
{
printf("\nNo, the diagonal elements are not distinct...");
}
}
else
{
printf("\nProvided Matrix is not a Square Matrix...");
}
}
return 0;
}
// Program finished successfully...