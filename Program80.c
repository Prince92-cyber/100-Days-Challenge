/* Creating a program for the Multiplication of two Matrices */

#include <stdio.h>

int main()
{
    int n, m, p, q;

    // Taking dimensions of Matrix A
    printf("Enter the number of rows in matrix A: ");
    scanf("%d", &m);

    printf("Enter the number of columns in matrix A: ");
    scanf("%d", &n);

    // Taking dimensions of Matrix B
    printf("Enter the number of rows in matrix B: ");
    scanf("%d", &p);

    printf("Enter the number of columns in matrix B: ");
    scanf("%d", &q);

    // Checking whether dimensions are valid
    if (m <= 0 || n <= 0 || p <= 0 || q <= 0)
    {
        printf("\nMatrix dimensions must be greater than 0.\n");
        return 0;
    }

    int A[m][n], B[p][q];

    // Entering elements of Matrix A
    printf("\nEnter the elements of Matrix A:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Entering elements of Matrix B
    printf("\nEnter the elements of Matrix B:\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Printing Matrix A
    printf("\nMatrix A is shown below:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Printing Matrix B
    printf("\nMatrix B is shown below:\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Checking whether multiplication is possible
    if (n != p)
    {
        printf("\nThe multiplication of the given two matrices is not possible.\n");
        return 0;
    }

    printf("\nThe multiplication of the given two matrices is possible.\n");

    // Result matrix will have m rows and q columns
    int C[m][q];

    // Matrix multiplication
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            C[i][j] = 0;

            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Printing the result
    printf("\nResult of Matrix A * Matrix B:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// program is finished successfully...
