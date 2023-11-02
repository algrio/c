#include <stdio.h>

int main(void)
{
int i =8, j = 5;

printf("%d\n", i % j );
printf("%d\n", -i % j );
printf("%d\n", i % -j );
printf("%d\n", -i % -j );
// value of i % j always has the same sign as i in c99 (depends on implementation in c89)

return 0;
}
