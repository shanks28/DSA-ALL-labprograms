#include<stdio.h>
typedef
struct Emp
{
    int id;
    char name[100];
}E;

void accept(E emp[], int *n)
{
    printf("Enter number of employees: ");
    scanf("%d", n);
    for(int i = 0;i < *n;i++)
    {
        printf("Enter employee id: ");
        scanf("%d", &(emp[i].id));
        printf("Enter employee name: ");
        scanf("%s", (emp[i].name));
    }
}

void binarySearch(E emp[], int n) 
{
    int l, r, mid, key_id;
    l = 0;
    r = n - 1;
    printf("Enter the id to be searched: ");
    scanf("%d", &key_id);
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(emp[mid].id == key_id)
        {
            printf("ID found at position %d\n", mid + 1);
            printf("Employee Id: %d\nEmployee name: %s\n", emp[mid].id, emp[mid].name);
            return;
        }
        else if(emp[mid].id > key_id)
            r = mid - 1;
        else
            l = mid + 1;
    }
    printf("ID match not found");
}

void selectionSort(E emp[], int n)
{
    int i, j;
    E temp;
    for(i = 0;i < n - 1;i++)
    {
        for(j = i + 1;j < n;j++)
        {
            if(emp[i].id > emp[j].id)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}
int main(){
    E emp[20];
    int n;
    accept(emp, &n);
    selectionSort(emp, n);
    binarySearch(emp, n);
    return 0;
}