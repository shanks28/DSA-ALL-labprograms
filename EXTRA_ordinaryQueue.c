#include <stdio.h>
#include <stdlib.h>
#define MAXI 10

void insert(int q[], int *rear)
{
       if (*rear == MAXI - 1)
              printf("No space\n");
       else
       {
              (*rear)++;
              printf("Enter element: ");
              scanf("%d", &q[*rear]);
       }
}
void delete(int q[], int *front, int rear)
{
       if (*front > rear)
              printf("No elements to delete\n");
       else
       {
              printf("%d will be deleted\n", q[*front]);
              (*front)++;
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
       int q[MAXI], rear = -1, front = 0;

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
