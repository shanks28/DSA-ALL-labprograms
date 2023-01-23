#include <stdio.h>
#include <stdlib.h>

int size = 3;

int *insert(int *q, int *rear, int *front, int *count)
{
       int ele;
       printf("Enter element: ");
       scanf("%d", &ele);

       if (*count == size)
       {
              int i, j;
              size *= 2;
              int *p;
              p = (int *)malloc(sizeof(int) * size);

              if (*front == 0)
              {
                     for (i = 0, j = 0; j < (size / 2); i++, j++)
                     {
                            p[i] = q[j];
                     }
              }
              else
              {
                     for (i = 0, j = *front; j < (size / 2); i++, j++)
                     {
                            p[i] = q[j];
                     }
                     for (j = 0; j < *front; j++, i++)
                            ;
                     {
                            p[i] = q[j];
                     }
              }

              /*for(int i=0;i<*count;i++)
              {
                     p[i]=q[i+(*front)%(size/2)];
              }
              */
              *front = 0;
              *rear = (size / 2) - 1;

              (*count)++;
              (*rear)++;
              (*rear) %= size;
              p[*rear] = ele;
              // free(q);
              return p;
       }
       else
       {
              (*count)++;
              (*rear)++;
              (*rear) %= size;
              q[*rear] = ele;
              return q;
       }
}

void delete(int *temp, int *front, int *count)
{
       if (*count == 0)
              printf("no elements to delete");
       else
       {
              printf("%d will be deleted", temp[*front]);
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
       int *q, *temp;
       q = (int *)malloc(sizeof(int) * size);
       int choice;
       while (1)
       {
              printf("\nchoose one of the following: \n");
              printf("1:INSERT\n2:DELETE\n3:DISPLAY\n4:EXIT\n");
              scanf("%d", &choice);
              switch (choice)
              {
              case 1:
                     q = insert(q, &rear, &front, &count);
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
