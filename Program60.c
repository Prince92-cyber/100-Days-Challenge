/*Count positive, negative, and zero elements in an array...*/
#include <stdio.h>
int main()
{
int n,count_positive=0,count_negative=0,count_zeroes=0;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
if(n<=0) //Checking the validity of input...
{
printf("Inavlid Input...");
}
else
{
int arr[n]; //Declaration of an Array...
for(int i=0;i<n;i++) //Taking input from the user ...
{
printf("Enter your element number %d ----> ",i+1);
scanf("%d",&arr[i]);
}
printf("The elements of the Array are --\n");
for(int j=0;j<n;j++) //Printing the elements of an Array...
{
printf("%d ",arr[j]);
}
//Now Writing the code to count the number of positive or negative or zeroes in the array...
for(int k=0;k<n;k++)
{
if(arr[k]<0) //Condition for a negative number...
{
count_negative+=1;
}
else if(arr[k]==0) //Condition for a zero...
{
count_zeroes+=1;
}
else
{
count_positive+=1;
}
}
printf("\nNumber of Positive Numbers = %d",count_positive);
printf("\nNumber of Negative Numbers = %d",count_negative);
printf("\nNumber of zeroes = %d",count_zeroes);
}
}
//Program is finished successfully...

 
