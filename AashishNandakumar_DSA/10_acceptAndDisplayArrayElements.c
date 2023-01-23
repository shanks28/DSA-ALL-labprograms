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
    printf("Displaying array elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: %d\n", i + 1, arr[i]);
    }
}
int main()
{
    int arr[10], n = 0;
    accept(arr, &n);
    display(arr, n);
    return 0;
}