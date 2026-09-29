#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, rem, check = 0, count = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    int a = num;
    int temp = num;

    // Count the number of digits
    if (temp == 0)
    {
        count = 1;
    }
    else
    {
        while (temp != 0)
        {
            temp /= 10;
            count++;
        }
    }

    n = count;

    // Check Armstrong number
    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        check += pow(rem, n);
        temp /= 10;
    }

    if (check == a)
    {
        printf("The given number is an Armstrong Number.");
    }
    else
    {
        printf("The given number is not an Armstrong Number.");
    }

    return 0;
}
