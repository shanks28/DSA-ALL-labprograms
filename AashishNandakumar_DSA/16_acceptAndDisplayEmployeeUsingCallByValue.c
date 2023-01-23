#include <stdio.h>

typedef struct EMP
{
    int id;
    float salary;
    char name[20];
} E;

void accept(E *e)
{
    printf("Enter id: ");
    scanf("%d", &e->id);
    printf("Enter salary: ");
    scanf("%f", &e->salary);
    printf("Enter name: ");
    scanf("%s", e->name);
}
void display(E e)
{
    printf("id: %d\n", e.id);
    printf("salary: %f\n", e.salary);
    printf("Name: %s\n", e.name);
}

int main()
{
    E e;
    accept(&e);
    display(e);
    return 0;
}
