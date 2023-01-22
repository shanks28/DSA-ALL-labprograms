#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_PerfectSquare(int x)
{
    int S = sqrt(x);
    return (S * S == x);
}

bool is_Fibonacci(int n)
{
    if ((is_PerfectSquare(5 * n * n + 4)) || (is_PerfectSquare(5 * n * n - 4)))
        printf("%d is a fibonacci number!", n);
    else
        printf("%d is not a fibonacci number!", n);
}

int main()
{
    int num;
    printf("Provide a number: ");
    scanf("%d", &num);

    is_Fibonacci(num);
    return 0;
}
