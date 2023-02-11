#include <stdio.h>
#include <stdlib.h>
#define max 5
void push(int s[max], int *top)
{
    int ele;

    if ((*top) < max)
    {
        printf("Enter element: ");
        scanf("%d", &ele);
        (*top)++;
        s[*top] = ele;
    }
    else
        printf("Overflow has occured!!!\n");

    return;
}

void pop(int s[max], int *top)
{
    if ((*top) != -1)
    {
        printf("%d will be popped!\n", s[*top]);
        (*top)--;
    }
    else
        printf("Underflow has occured!\n");

    return;
}

void display(int s[max], int top)
{
    printf("Displaying stack : \n");
    printf("index\telement\n");
    for (int i = top; i >= 0; i--)
    {

        printf("%d\t%d\n", i, s[i]);
    }
}
int main()
{
    int s[max], top = -1;
    int choice;
    while (1)
    {
        printf("\nchoose one of the following: \n");
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
            printf("invalid choice!\n");
        }
    }

    return 0;
}
