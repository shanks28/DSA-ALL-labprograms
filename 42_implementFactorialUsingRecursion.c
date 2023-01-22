#include <stdio.h>
int recursiveFactorial(int n)
{
    if (n != 0)
        return n * recursiveFactorial(n - 1);
    else
        return 1;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Facorial: %d", recursiveFactorial(n));

    return 0;
}