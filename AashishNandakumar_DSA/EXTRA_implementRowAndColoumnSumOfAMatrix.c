#include <stdio.h>
#include <stdlib.h>

void display(int a[][10], int n)
{
    printf("The entered matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void accept(int a[][10], int *n)
{
    printf("Enter dimension: ");
    scanf("%d", n);
    printf("Enter elements of the matrix : \n");
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            printf("for a[%d][%d] enter, ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

void rowSum(int a[][10], int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
        printf("\nfor row: %d, sum = %d", i + 1, sum);
    }
}

void diaSum(int a[][10], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sum = sum + a[i][j];
        }
    }
    printf("\nThe sum of diagonal elelemens is : %d", sum);
}

int main()
{
    int a[10][10], n;
    accept(a, &n);
    display(a, n);
    rowSum(a, n);
    diaSum(a, n);
    return 0;
}
