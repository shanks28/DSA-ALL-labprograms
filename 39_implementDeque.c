#include <stdio.h>
#include <stdlib.h>
#define MAXI 10

void insertFront(int q[], int *front, int *rear)
{
       int ele;
       printf("Enter the element: ");
       scanf("%d", &ele);

       if (*front == 0 && *rear == -1)
       {
              (*rear)++;
              q[*rear] = ele;
       }
       else if (*front != 0)
       {
              (*front)--;
              q[*front] = ele;
       }
       else
              printf("Insertion not possible\n");
}

void insertRear(int q[], int *front, int *rear)
{
       int ele;
       printf("Enter element: ");
       scanf("%d", &ele);
       if (*front == 0 && *rear == -1)
       {
              (*rear)++;
              q[*rear] = ele;
       }
       else if (*rear != MAXI - 1)
       {
              (*rear)++;
              q[*rear] = ele;
       }
       else
              printf("Insertion not possible!\n");
}

void deleteFront(int q[], int *front, int *rear)
{
       if (*front > *rear)
              printf("No elements to delete\n");
       else if (*front == *rear)
       {
              printf("%d will be deleted\n", q[*front]);
              *front = 0;
              *rear = -1;
       }
       else
       {
              printf("%d will be deleted\n", q[*front]);
              (*front)++;
       }
}

void deleteRear(int q[], int *front, int *rear)
{
       if (*front > *rear)
              printf("No elements to delete\n");
       else
       {
              printf("%d will be deleted\n", q[*rear]);
              (*rear)--;
              if (*front > *rear)
              {
                     *front = 0;
                     *rear = -1;
              }
       }
}

void display(int q[], int front, int rear)
{
       printf("Elements of Deque: \n");
       for (int i = front; i <= rear; i++)
       {
              printf("%d\t", q[i]);
       }
}

int main()
{
       int q[MAXI], rear = -1, front = 0;

       int choice;
       while (1)
       {
              printf("\n\nchoose one of the following: \n");
              printf("1:INSERT FRONT\n2:INSERT REAR\n3:DELETE FRONT\n4:DELETE REAR\n5:DISPLAY\n6:exit\n");
              scanf("%d", &choice);
              switch (choice)
              {
              case 1:
                     insertFront(q, &front, &rear);
                     break;
              case 2:
                     insertRear(q, &front, &rear);
                     break;
              case 3:
                     deleteFront(q, &front, &rear);
                     break;
              case 4:
                     deleteRear(q, &front, &rear);
                     break;
              case 5:
                     display(q, front, rear);
                     break;
              case 6:
                     printf("Exit\n");
                     exit(0);
              default:
                     printf("invalid choice!\n");
              }
       }
       return 0;
}
