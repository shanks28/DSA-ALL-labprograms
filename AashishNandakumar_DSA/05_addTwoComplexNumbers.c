#include <stdio.h>

void Accept(int *a, int *b, int *c, int *d)
{
    printf("for(a+ib), enter values of a and b: ");
    scanf("%d %d", a, b);
    printf("for(c+id), enter values of c and d: ");
    scanf("%d %d", c, d);
}

void Addition(int a, int b, int c, int d)
{
    int real = a + c;
    int imag = c + d;
    printf("The complex addition is : %d + i%d", real, imag);
}

int main()
{
    int a, b, c, d;
    Accept(&a, &b, &c, &d);
    Addition(a, b, c, d);

    return 0;
}
