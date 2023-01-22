#include <stdio.h>
#include <math.h>

struct Poly
{
    int coeff;
    int expo;
};

void accept(struct Poly p[], struct Poly q[], int *m, int *n)
{
    int i = 0;
    printf("Enter number of terms of polynomial 1 and 2: ");
    scanf("%d %d", m, n);
    printf("For polynomial 1 enter the details: \n");
    for (i = 0; i < *m; i++)
    {
        printf("for aX[%d]^b, enter values of a, b: ", i + 1);
        scanf("%d %d", &p[i].coeff, &p[i].expo);
    }
    printf("For polynomial 2 enter the details: \n");
    for (i = 0; i < *n; i++)
    {
        printf("for aX[%d]^b, enter values of a, b: ", i + 1);
        scanf("%d %d", &q[i].coeff, &q[i].expo);
    }
}

int Add(struct Poly p[], struct Poly q[], struct Poly res[], int m, int n)
{
    int i = 0, j = 0;
    int z = 0;
    for (i = 0, j = 0; i < m && j < n;)
    {
        if (p[i].expo > q[j].expo)
        {
            res[z].coeff = p[i].coeff;
            res[z++].expo = p[i++].expo;
        }
        else if (q[j].expo > p[i].expo)
        {
            res[z].coeff = q[j].coeff;
            res[z++].expo = q[j++].expo;
        }
        else
        {
            res[z].expo = q[i].expo;
            res[z++].coeff = q[j++].coeff + p[i++].coeff;
        }
    }
    for (; i < m; i++)
    {
        res[z].coeff = p[i].coeff;
        res[z++].expo = p[i].expo;
    }
    for (; j < n; j++)
    {
        res[z].coeff = q[j].coeff;
        res[z++].expo = q[j].expo;
    }

    return z;
}

void Display(struct Poly res[], int z)
{
    for (int i = 0; i < z; i++)
    {
        if (res[i].coeff > 0)
            printf("+ %dX^%d ", res[i].coeff, res[i].expo);
        else
            printf("%dX^%d", res[i].coeff, res[i].expo);
    }
}

void evaluate(struct Poly res[], int z)
{
    int x;
    printf("\nFor the above polynomial enter the value of X to evaluate the expression: ");
    scanf("%d", &x);
    int sum = 0;
    for (int i = 0; i < z; i++)
    {
        sum += res[i].coeff * pow(x, res[i].expo);
    }
    printf("Evaluation: %d", sum);
}

int main()
{
    struct Poly p[10], q[10], res[10];
    int m = 0, n = 0, z = 0;
    accept(p, q, &m, &n);
    z = Add(p, q, res, m, n);
    Display(res, z);
    evaluate(res, z);

    return 0;
}
