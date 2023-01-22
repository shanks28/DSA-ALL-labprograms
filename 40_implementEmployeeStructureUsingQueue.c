#include <stdio.h>
#include <stdlib.h>
#define MAXI 10

static int index = 0;
struct emp
{
       int id;
       char name[10];
} e[MAXI];

void insert(struct emp q[], int *rear)
{
       if (*rear == MAXI - 1)
              printf("No space");

       else
       {
              (*rear)++;
              printf("Enter employee name: ");
              scanf("%d", &e[index].id);
              printf("Enter employee name: ");
              scanf("%s", e[index].name);
              q[*rear] = e[index++];
       }
}

void delete(struct emp q[], int *front, int rear)
{
       if (*front > rear)
              printf("empty list");
       else
       {
              printf("Employee details whose id: %d will be deleted", q[*front].id);
              (*front)++;
       }
}

void display(struct emp q[], int front, int rear)
{
       printf("displaying element: \n");
       for (int i = front; i <= rear; i++)
       {
              printf("id: %d\n", q[i].id);
              printf("name: %s\n", q[i].name);
       }
}

int main()
{
       struct emp q[MAXI];
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
