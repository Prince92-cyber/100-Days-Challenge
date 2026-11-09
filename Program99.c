/* Change the date format from dd/04/yyyy to dd-Apr-yyyy...*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char temp[20];

    char month[] = "JanFebMarAprMayJunJulAugSepOctNovDec";

    printf("Enter your date: ");
    scanf("%19s", str);

    printf("\nProvided date is: %s", str);

    int size = strlen(str);

    if (size == 10 && str[2] == '/' && str[5] == '/')
    {
        int monthNum = (str[3] - '0') * 10 + (str[4] - '0');

        if (monthNum >= 1 && monthNum <= 12)
        {
            for (int i = 1; i <= 12; i++)
            {
                if (monthNum == i)
                {
                    snprintf(temp, sizeof(temp), "%.2s-%.3s-%.4s",
                             str, month + (i - 1) * 3, str + 6);
                }
            }

            printf("\nNew date format: %s", temp);
        }
        else
        {
            printf("\nInvalid month!");
        }
    }
    else
    {
        printf("\nInvalid date format!");
    }

    return 0;
}
//Program is finished successfully...