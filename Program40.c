/* Write a program to find the 1's complement of a binary number */

#include <stdio.h>

int main()
{
    int bin_num, comp_bin_num = 0;
    int rem;
    int place = 1;
    int valid = 1;

    printf("Enter your binary number: ");
    scanf("%d", &bin_num);

    int a = bin_num;

    // Check each digit and find its complement
    for (; bin_num > 0; bin_num = bin_num / 10)
    {
        rem = bin_num % 10;

        // Check whether the digit is 0 or 1
        if (rem != 0 && rem != 1)
        {
            valid = 0;
            break;
        }

        // Find 1's complement
        if (rem == 1)
            rem = 0;
        else
            rem = 1;

        // Put the complemented digit in its original position
        comp_bin_num = comp_bin_num + (rem * place);

        place = place * 10;
    }

    if (valid)
    {
        printf("\nThe 1's complement of given Binary number (%d) is --> (%d)",
               a, comp_bin_num);
    }
    else
    {
        printf("\nInvalid Input!!");
        printf("\nPlease enter a binary number containing only 0 and 1.");
    }

    return 0;
}
// Program is finished successfully...
