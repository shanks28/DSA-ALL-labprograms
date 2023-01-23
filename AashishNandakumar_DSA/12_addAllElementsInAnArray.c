#include <stdio.h>

void accept(int arr[], int *n)
{
    printf("Enter array size / no. of elements: ");
    scanf("%d", n);
    printf("Enter array elements: \n");
    for (int i = 0; i < *n; i++)
    {
        printf("for arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: %d\n", i + 1, arr[i]);
    }
}

void sum(int arr[], int n)
{
    int sum = 0;
    printf("For the following array elemnts: \n");
    display(arr, n);
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum: %d", sum);
}
int main()
{
    int arr[10], n = 0;
    accept(arr, &n);
    sum(arr, n);
    return 0;
}