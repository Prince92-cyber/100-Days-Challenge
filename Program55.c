/* Write a program to print all prime numbers from 1 to n */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, isPrime;

    printf("Enter the number up to which you want prime numbers: ");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("There are no prime numbers between 1 and %d.\n", num);
        return 0;
    }

    printf("Prime numbers between 1 and %d are:\n", num);

    // Check every number from 2 to num
    for (int i = 2; i <= num; i++)
    {
        isPrime = 1;  // Assume the number is prime

        // Check divisibility up to the square root of i
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;  // The number is not prime
                break;
            }
        }

        // Print only if the number is prime
        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

