#include <stdio.h>

void TOH(int n, char s, char t, char d)
{
       if (n <= 0)
              return; 
       TOH(n - 1, s, d, t);
       printf("Disc %d moved from %c to %c\n", n, s, d);
       TOH(n - 1, t, s, d);
}

int main()
{
       
       TOH(3, 'A', 'B', 'C');

       return 0;
}
