// ! NOT CORRECT
#include <stdio.h>

typedef struct Sparse
{
    int row, col, value;
} S;

void Accept(S m1[])
{
    int m, n, k = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the sparse matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ele;
            printf("for A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &ele);
            if (ele != 0)
            {
                m1[k].row = i;
                m1[k].col = j;
                m1[k++].value = ele;
            }
        }
    }
    m1[0].row = m;
    m1[0].col = n;
    m1[0].value = k - 1;
}

void transpose(S m1[])
{
    int temp;
    temp = m1[0].row;
    m1[0].row = m1[0].col;
    m1[0].col = temp;
    for (int i = 1; i <= m1[0].value; i++)
    {
        temp = m1[i].row;
        m1[i].row = m1[i].col;
        m1[i].col = temp;
    }
}

void Display(S m1[])
{
    int k = 1;
    for (int i = 0; i < m1[0].row; i++)
    {
        for (int j = 0; j < m1[0].col; j++)
        {
            if (m1[k].row == i && m1[k].col == j)
                printf("%d ", m1[k++].value);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    S m1[100];
    Accept(m1);
    transpose(m1);
    printf("Transpose of sparse matrix:\n");
    Display(m1);
    return 0;
}
