#include<stdio.h>
#define Max 4
void push(int S[],int* top,int element)
{
    if(*top==Max-1)
    {
        printf("Over Flow\n");
        return;
    }
    (*top)++;
    S[*top]=element;
    return;
}
void display(int S[],int top)
{
    if(top==-1)
    {
        printf("Underflow\n");
        return;
    }
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",S[i]);
    }
    return;
}
int pop(int S[],int* top)
{
    if(*top==-1)
    {
        printf("Underflow condition\n");
    }
    else{
        int res=S[*top];
        (*top)--;
        return res;
    }
}
int main()
{
    int S[Max];
    int element,top=-1;
    printf("Enter the element to be pushed\n");
    scanf("%d",&element);
    push(S,&top,element);
    printf("Enter the second element\n");
    scanf("%d",&element);
    push(S,&top,element);
    pop(S,&top);
    pop(S,&top);
    display(S,top);
}