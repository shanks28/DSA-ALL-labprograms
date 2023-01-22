#include <stdio.h>

void reversed(int *n, int *reverse)
{
    int remainder = 0;
    *reverse = 0;
    while ((*n) != 0)
    {
        remainder = (*n) % 10;
        (*reverse) = (*reverse) * 10 + remainder;
        (*n) = (*n) / 10;
    }
}
int main()
{
    int n, reverse;
    printf("Enter a number: ");
    scanf("%d", &n);
    reversed(&n, &reverse);
    printf("Reversed number is: %d", reverse);

    return 0;
}