#include <stdio.h>
#include <string.h>
typedef struct EMP
{
    int id;
    float salary;
    char name[20];
} E;

void accept(E e[])
{

    for (int i = 0; i < 2; i++)
    {
        printf("Enter id: ");
        scanf("%d", &e[i].id);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
        printf("Enter name: ");
        scanf("%s", e[i].name);
    }
}

void swap(E e[])
{
    E temp;
    temp.id = e[0].id;
    e[0].id = e[1].id;
    e[1].id = temp.id;

    temp.salary = e[0].salary;
    e[0].salary = e[1].salary;
    e[1].salary = temp.salary;

    strcpy(temp.name, e[0].name);
    strcpy(e[0].name, e[1].name);
    strcpy(e[1].name, temp.name);
}

void display(E e[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("id: %d\n", e[i].id);
        printf("salary: %f\n", e[i].salary);
        printf("Name: %s\n", e[i].name);
    }
}

int main()
{
    E e[2];

    accept(e);
    swap(e);
    display(e);
    return 0;
}
