#include <stdio.h>

int main(void)
{
int i =8, j = 5;

printf("%d\n", i / j );
printf("%d\n", -i / j );
printf("%d\n", i / -j );
printf("%d\n", -i / -j );
// same for -std=c99 1 -1 -1 1

return 0;
}
