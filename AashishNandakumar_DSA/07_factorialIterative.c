#include <stdio.h>

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d", n, fact);
}

int main()
{
    int num;
    printf("Provide a positive integer: ");
    scanf("%d", &num);
    factorial(num);

    return 0;
}
