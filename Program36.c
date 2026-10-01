/*Write a program to find the HCF of two numbers...*/
#include <stdio.h>

int main()
{
    int num1, num2, HCF = 1;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }

    printf("HCF of %d and %d is --> %d", num1, num2, HCF);

    return 0;
}
// Program is finished successfully...
