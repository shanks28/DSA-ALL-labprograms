#include <stdio.h>

void accept(int a[][10], int *m, int *n)
{
    printf("For a 2d array, enter rows and coloumns: \n");
    scanf("%d %d", m, n);
    printf("Enter array elements: \n");
    for (int i = 0; i < *m; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            printf("for A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void row_col(int a[][10], int r[], int c[], int m, int n, int *sz)
{
    *sz = m * n;
    int z = 0;
    printf("Implementing row-major mapping \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            r[z++] = a[i][j];
        }
    }
    z = 0;
    printf("Implementing coloumn-major mapping\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[z++] = a[i][j];
        }
    }
}

void display(int r[], int c[], int m, int n)
{
    int z = 0;
    printf("Displaying via row major mapping: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", r[z++]);
        }
        printf("\n");
    }
    z = 0;
    printf("Displaying via coloumn major mapping \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", c[z++]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], r[10], c[10], m, n, sz;
    accept(a, &m, &n);
    row_col(a, r, c, m, n, &sz);
    display(r, c, m, n);

    return 0;
}
