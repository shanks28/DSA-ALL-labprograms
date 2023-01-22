#include <stdio.h>

void Prime_or_not(int n)
{
    int flag = 0;
    if (n == 0 || n == 1)
        flag++;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                flag++;
            else
                continue;
        }
    }
    if (flag == 0)
        printf("%d is a prime number!", n);
    else
        printf("%d is not a prime number!", n);
}

int main()
{

    int num;
    printf("Provide a number: ");
    scanf("%d", &num);
    Prime_or_not(num);
    return 0;
}
