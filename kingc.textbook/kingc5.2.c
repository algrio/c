#include <stdio.h>

int main(void)
{
int x = 0, y = 77777;

/* if (0 <= x && x < 8) printf("EQUAL\n"); */

/* if (x <= 0 || 8 < x) printf("EQUAL\n"); */

while (x != y)
    {
    printf("%d\n", x);
    ++x;
    }
printf("%d\n", x);
return 0;
}
