#include <stdio.h>

int main(void)
{
int i = 1, j = 2;

//printf("%d\n", i += j);
//printf("%d\n", i--); printf("%d\n", i);
//printf("%d\n", i * j / i);
printf("%d\n", i % ++j);

return 0;
}
