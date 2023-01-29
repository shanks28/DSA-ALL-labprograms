#include <stdio.h>
#include <stdlib.h>
#define size 10
void insert(int q[], int *rear, int *count)
{
       int ele;
       printf("Enter element: ");
       scanf("%d", &ele);

       if(*count==size-1)
              printf("No more elements can be added");
       else
       {
              (*rear)++;
              (*rear) %= size;
              q[*rear] = ele;
              (*count)++;
       }
}

void delete(int q[], int *front, int *count)
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

void display(int q[], int front, int count)
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
       int q[size];
       
       int choice;
       while (1)
       {
              printf("\nchoose one of the following: \n");
              printf("1:INSERT\n2:DELETE\n3:DISPLAY\n4:exit\n");
              scanf("%d", &choice);
              switch (choice)
              {
              case 1:
                     insert(q, &rear, &count);
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
