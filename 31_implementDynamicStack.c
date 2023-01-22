#include <stdio.h>
#include <stdlib.h>

void push(int *s, int *top)
{
    int ele;
    printf("Enter a element: ");
    scanf("%d", &ele);

    (*top)++;

    if ((*top) == 0)
        s[*top] = ele;
    else
    {
        s = (int *)realloc(s, sizeof(int) * ((*top) + 1));
        s[*top] = ele;
    }
}

void pop(int *s, int *top)
{
    if (*top != -1)
    {
        printf("%d element will be popped!!\n", s[*top]);
        (*top)--;
        s = (int *)realloc(s, sizeof(int) * ((*top) + 1));
    }
    else
        printf("Underflow condition!!\n");
}

void display(int *s, int top)
{
    printf("Displaying contents of stack: \n");
    printf("index\telement\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\t%d\n", i, s[i]);
    }
}

int main()
{
    int *s, top = -1;

    s = (int *)malloc(sizeof(int) * 1);
    int choice;
    while (1)
    {
        printf("\nChoose one of the option: \n");
        printf("1:push\n2:pop\n3:display\n4:exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(s, &top);
            break;
        case 2:
            pop(s, &top);
            break;
        case 3:
            display(s, top);
            break;
        case 4:
            printf("Exit\n");
            exit(0);
        default:
            printf("Invalid choice!!");
        }
    }

    return 0;
}
