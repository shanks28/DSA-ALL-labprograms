#include <stdio.h>
#include <stdlib.h>
#define max 20

int G(char ch)
{
    // printf("entering G");
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 3;
    else if (ch == '$' || ch == '^')
        return 6;
    else if (ch == '(')
        return 9;
    else if (ch == ')')
        return 0;
    else
        return 7;
    // printf("Exitting G");
}

int F(char ch)
{
    // printf("Entering F");
    if (ch == '+' || ch == '=')
        return 2;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 4;
    else if (ch == '$' || ch == '^')
        return 5;
    else if (ch == '(')
        return 0;
    else if (ch == '#')
        return -1;
    else
        return 8;
    // printf("Exitting F");
}

void push(char s[max], int *top, char symbol)
{

    // printf("Entering push");
    if ((*top) < max)
    {
        (*top)++;
        s[*top] = symbol;
    }
    else
        printf("Overflow has occured!!!\n");

    // printf("Exitting push");
}

char pop(char s[max], int *top)
{
    char ele;
    // printf("inside pop");
    if (*top != -1)
    {
        ele = s[*top];
        (*top)--;
    }
    else
        printf("Underflow has occured!\n");

    // printf("Exitting pop");

    return ele;
}

void converter(char infix[20], char postfix[20])
{
    // printf("Enter convrerter");
    int top = -1;
    int j = 0, i = 0;
    char s[max], symbol;
    push(s, &top, '#');
    while (infix[i] != '\0')
    {
        symbol = infix[i++];
        while (F(s[top]) > G(symbol))
        {
            postfix[j++] = pop(s, &top);
        }
        if (F(s[top]) != G(symbol))
            push(s, &top, symbol);
        else
            pop(s, &top);
    }
    while (top)
    {
        postfix[j++] = pop(s, &top);
    }
    postfix[j] = '\0';
    // printf("exitting converter");
}

int main()
{
    char infix[20], postfix[20];
    printf("Provide infix expression: \n");
    scanf("%s", infix);

    converter(infix, postfix);

    printf("The postfix expression: %s\n", postfix);

    return 0;
}
