// the following code is to evaluate postfix expression
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int compute(char o1, char o2, char ele)
{
    int op1 = o1 - '0';
    int op2 = o2 - '0';
    // printf("%d\n", op1);
    // printf("%d\n", op2);
    switch (ele)
    {
    case '+':
        return (op1 + op2);
    case '-':
        return (op1 - op2);
    case '*':
        return (op1 * op2);
    case '/':
        return (op1 / op2);
    case '%':
        return (op1 % op2);
    case '^':
        return (pow(op1, op2));
    }
}
void push(char eval[], int *top, int ele)
{
    if (*top != 20)
    {
        (*top)++;
        eval[*top] = ele;
    }
    // else
    // printf("Stacck overflow");
}
char pop(char eval[], int *top)
{
    char ele;
    if (*top != -1)
    {
        ele = eval[*top];
        (*top)--;
    }
    // else
    // printf("Stack uderflow condition\n");
    return ele;
}
char evaluation(char PF[], char eval[], int *top)
{
    *top = -1;
    int i, j, op1, op2;
    char res;
    for (i = 0; PF[i] != '\0'; i++)
    {
        char ele = PF[i];
        if (isdigit(ele))
        {
            push(eval, top, ele);
            // printf("HEYA");
        }
        else
        {
            op2 = pop(eval, top);
            op1 = pop(eval, top);
            res = (char)compute(op1, op2, ele);
            printf("%c\n", res);

            push(eval, top, res);
        }
    }
    return (pop(eval, top));
}

int main()
{
    char PF[20];
    printf("Enter postfix expression: ");
    scanf("%s", PF);
    char eval[20];
    int top = -1;
    char res = evaluation(PF, eval, &top);

    // res -= '0';
    printf("EVALUATION RESULT: %d", res);

    return 0;
}
