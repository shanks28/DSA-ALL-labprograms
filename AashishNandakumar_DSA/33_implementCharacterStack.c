#include <stdio.h>
#include <stdlib.h>
#define MAXI 10
void push(char s[], int *top)
{

    if ((*top) != MAXI - 1)
    {
        char ele;
        printf("Enter character: ");
        scanf(" %c", &ele);
        (*top)++;
        s[*top] = ele;
    }
    else
        printf("Overflow has occured!!!\n");
}

void pop(char s[], int *top)
{
    if ((*top) != -1)
    {
        printf("%c will be popped!\n", s[*top]);
        (*top)--;
    }
    else
        printf("Underflow has occured!\n");
}

void display(char s[], int top)
{
    printf("Displaying stack : \n");
    printf("index\telement\n");
    for (int i = top; i >= 0; i--)
    {

        printf("%d\t%c\n", i, s[i]);
    }
}
int main()
{
    char s[MAXI];
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
