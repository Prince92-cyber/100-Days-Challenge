/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
   */
#include <stdio.h>
int main()
{
    int i, j;

    // Increasing: 1, 3, 5
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    // Decreasing: 3, 1
    for (i = 2; i >= 1; i--)
    {
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
//Program is finished successfully...
