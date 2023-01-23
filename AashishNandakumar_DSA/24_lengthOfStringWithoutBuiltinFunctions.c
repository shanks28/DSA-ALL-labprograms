#include <stdio.h>

void accept(char s[])
{
    printf("Emter a string;");
    scanf("%s", s);
}

void length(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        ;

    printf("String length: %d", i);
}

int main()
{
    char s[10];
    accept(s);
    length(s);

    return 0;
}
