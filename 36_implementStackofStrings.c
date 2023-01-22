#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXI 20

void Push(char stack[][MAXI], int *top)
{
    char ele[MAXI];
    if (*top != MAXI - 1)
    {
        printf("Enter string to be inserted: ");
        scanf("%s", ele);
        (*top)++;
        strcpy(stack[*top], ele);
    }
    else
        printf("Stack overflow\n");
}

void Pop(char stack[][MAXI], int *top)
{
    if (*top != -1)
    {
        printf("%s will be popped\n", stack[*top]);
        (*top)--;
    }
    else
        printf("Stack underflow condition\n");
}

void Display(char stack[][MAXI], int top)
{
    printf("Displaying elements: \n");
    for (int i = top; i != -1; i--)
    {
        printf("%d\t%s\n", i, stack[i]);
    }
}

int main()
{
    char stack[MAXI][MAXI];
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
            Push(stack, &top);
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
