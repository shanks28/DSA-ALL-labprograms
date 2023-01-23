#include <stdio.h>
#include <stdlib.h>
#define MAXI 20

typedef struct EMP
{
    int id;
    char name[20];
    float salary;
} E;
int i = 0;
void Push(E var[MAXI], E stack[MAXI], int *top)
{
    if (*top != MAXI - 1)
    {
        (*top)++;
        printf("Enter Employee id, name, salary :\n");
        scanf("%d %s %f", &var[i].id, var[i].name, &var[i].salary);
        stack[*top] = var[i++];
    }
    else
        printf("Stack overflow\n");
}

void Pop(E stack[], int *top)
{
    if (*top != -1)
    {
        printf("The information of employee: %s, whose id is %d, will be deleted\n", stack[*top].name, stack[*top].id);
        (*top)--;
    }
    else
        printf("stack underflow\n");
}

void Display(E stack[], int top)
{
    for (int j = top; j != -1; j--)
    {
        printf("\nfor employee %d\n", j - 1);
        printf("ID: %d\nNAME: %s\nSALARY:%f\n", stack[j].id, stack[j].name, stack[j].salary);
    }
}

int main()
{
    E stack[MAXI], var[MAXI];
    int top = -1;
    int choice;
    while (1)
    {
        printf("\nchoose one of the following: \n");
        printf("1:push\n2:pop\n3:display\n4:exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Push(var, stack, &top);
            break;
        case 2:
            Pop(stack, &top);
            break;
        case 3:
            Display(stack, top);
            break;
        case 4:
            printf("Exit\n");
            exit(0);
        default:
            printf("invalid choice!\n");
        }
    }

    return 0;
}
