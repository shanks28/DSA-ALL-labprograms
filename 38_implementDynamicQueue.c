#include <stdio.h>
#include <stdlib.h>

int count = 0;
void insert(int *q, int *rear)
{
       (*rear)++;
       printf("Enter element : ");
       if (!count)
       {
              scanf("%d", &q[*rear]);
              count++;
       }
       else
       {
              q = (int *)realloc(q, sizeof(int) * (*rear) + 1);
              scanf("%d", &q[*rear]);
       }
}

void delete(int *q, int *front, int rear)
{
       if (*front > rear)
       {
              printf("No elements to display!\n");
       }
       else
       {
              printf("%d will be deleted", q[*front]);
              (*front)++;
              q = (int *)realloc(q, sizeof(int) * (*front) + 1);
       }
}

void display(int q[], int front, int rear)
{
       printf("Displaying elements: \n");
       for (int i = front; i <= rear; i++)
       {
              printf("%d\t", q[i]);
       }
}

int main()
{
       int *q;
       q = (int *)malloc(sizeof(int));
       int front = 0, rear = -1;

       int choice;
       while (1)
       {
              printf("\nchoose one of the following: \n");
              printf("1:INSERT\n2:DELETE\n3:DISPLAY\n4:exit\n");
              scanf("%d", &choice);
              switch (choice)
              {
              case 1:
                     insert(q, &rear);
                     break;
              case 2:
                     delete (q, &front, rear);
                     break;
              case 3:
                     display(q, front, rear);
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
