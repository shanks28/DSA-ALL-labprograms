#include <stdio.h>
#include <stdlib.h>
void Menu()
{
    int a, b, op;
    int k, i;
    while (1)
    {
        printf("Choose one operation of the following: \n");
        printf("1: Modulus\n2: Bitwise-RightShift(>>1)\n3: Bitwise-AND(&)\n4: Bitwise-OR(|)\n5: Bitwise-NOT(~)\n6: Exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("U have choosen Modulus operation\n");
            printf("for(a modulus b), enter the values of a and b: ");
            scanf("%d %d", &a, &b);
            printf("%d modulus %d = %d", a, b, a % b);
            break;
        case 2:
            printf("U have choosen Bitwise-RightShift operation\n");
            printf("for(a>>1), enter the values of a: ");
            scanf("%d", &a);
            printf("%d >> 1 = %d", a, a >> 1);
            break;
        case 3:
            printf("U have choosen Bitwise-AND(&) operation\n");
            printf("for(a&b), enter the values of a and b: ");
            scanf("%d %d", &a, &b);
            printf("%d & %d = %d", a, b, a & b);
            break;
        case 4:
            printf("U have choosen Bitwise-OR(|) operation\n");
            printf("for(a|b), enter the values of a and b: ");
            scanf("%d %d", &a, &b);
            printf("%d | %d = %d", a, b, a | b);
            break;
        case 5:
            printf("U have choosen Bitwise-NOT(~) operation\n");
            printf("for(~a), enter the values of a: ");
            scanf("%d", &i);
            k = ~a;
            printf("~%d = %d", i, k);
            break;
        case 6:
            printf("Thank u");
            exit(0);
        default:
            printf("U have entered wrong choice ... pls try again");
        }
    }
}

int main()
{
    Menu();

    return 0;
}
