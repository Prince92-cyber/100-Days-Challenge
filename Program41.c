/*Write a program to swap the first and last digit of a number...*/
#include <stdio.h>

int main()
{
    int num, swap_num;
    int rem, first, middle;
    int temp, place = 1;

    printf("Enter your number: ");
    scanf("%d", &num);

    temp = num;

    // Find the last digit
    rem = num % 10;

    // Find the first digit and place value
    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    // Remove first and last digits
    middle = (num % place) / 10;

    // Swap first and last digits
    swap_num = rem * place + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swap_num);

    return 0;
}
// Program is finished successfully...