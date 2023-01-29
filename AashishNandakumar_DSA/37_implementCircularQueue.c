#include <stdio.h>
#include <stdlib.h>
int size = 3;
void insert(int *q, int *rear, int *front, int *count)
{
       int ele;
       printf("Enter element: ");
       scanf("%d", &ele);

       if (*count == size)
       {
              size *= 2;
              int *p;
              p = (int *)malloc(sizeof(int) * size);
              int i, j;
              if (*front == 0)
              {
                     for (i = 0, j = 0; j < (size / 2) - 1; i++, j++)
                     {
                            p[i] = q[i];
                     }
              }
              else
              {
                     for (i = 0, j = *front; j < ((size / 2) - 1); i++, j++)
                     {
                            p[i] = q[i];
                     }
                     for (j = 0; j < *front; j++, i++)
                            ;
                     {
                            p[i] = q[j];
                     }
              }
              *front = 0;
              *rear = (size / 2) - 1;

              (*count)++;
              *rear = ((*rear)++) % size;
              q[*rear] = ele;
       }
       else
       {
              (*count)++;
              *rear = ((*rear)++) % size;
              q[*rear] = ele;
       }
}

void delete(int *q, int *front, int *count)
{
       if (*count == 0)
              printf("no elements to delete");
       else
       {
              printf("%d will be deleted", q[*front]);
              (*front)++;
              (*front) %= size;

              (*count)--;
       }
}

void display(int *q, int front, int count)
{
       int i = front;
       while (count--)
       {
              printf("%d\t", q[i]);
              i++;
              i %= size;
       }
}

int main()
{
       int rear = size - 1, front = 0, count = 0;
       int *q;
       q = (int *)malloc(sizeof(int) * size);
       int choice;
       while (1)
       {
              printf("\nchoose one of the following: \n");
              printf("1:INSERT\n2:DELETE\n3:DISPLAY\n4:exit\n");
              scanf("%d", &choice);
              switch (choice)
              {
              case 1:
                     insert(q, &rear, &front, &count);
                     break;
              case 2:
                     delete (q, &front, &count);
                     break;
              case 3:
                     display(q, front, count);
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
