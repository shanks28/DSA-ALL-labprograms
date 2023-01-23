#include <stdio.h>

struct Emp
{
    int id;
    char name[10];
    float salary;
};

struct Emp acceptData()
{
    struct Emp temp;
    printf("Enter the following information: \n");
    printf("Enter name: ");
    scanf("%s", temp.name);
    printf("Enter id: ");
    scanf("%d", &temp.id);
    printf("Enter salary: ");
    scanf("%f", &temp.salary);

    return temp;
}
void displaydata(struct Emp e)
{
    printf("Displaying information: \n");
    printf("name: %s\n", e.name);
    printf("id: %d\n", e.id);
    printf("salary: %f\n", e.salary);
}
int main()
{
    struct Emp e;
    e = acceptData();
    displaydata(e);
    return 0;
}