#include <stdio.h>

typedef struct EMP
{
    int id;
    float salary;
    char name[20];
} E;

void accept(E e[], int *n)
{
    printf("Enter no of employees: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        printf("Enter id: ");
        scanf("%d", &e[i].id);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
        printf("Enter name: ");
        scanf("%s", e[i].name);
    }
}

void search(E e[], int n)
{
    int key;
    printf("Enter the id to be searched: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (key == e[i].id)
        {
            printf("id matched, printing employee deteils: ");
            printf("\nid: %d", e[i].id);
            printf("\nsalary: %f", e[i].salary);
            printf("\nname: %s", e[i].name);
            return;
        }
    }
    printf("No record for that id!!");
}

int main()
{
    E e[10];
    int n;
    accept(e, &n);
    search(e, n);
    return 0;
}
