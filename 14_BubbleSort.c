#include <stdio.h>
void Accept(int arr[], int *n)
{
    printf("Enter number of elements: ");
    scanf("%d", n);
    printf("Enter array elements: ");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void Sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void Display(int arr[], int n)
{
    printf("Displaying elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int a[10], n;
    Accept(a, &n);
    Sort(a, n);
    Display(a, n);

    return 0;
}
