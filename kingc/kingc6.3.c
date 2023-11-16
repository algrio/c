#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int n, i;

printf("This program prints a table of squares.\nEnter The number of entries : ");
scanf("%d", &n);

for (i = 1; i <= n; ++i)
    printf("%3d %3d\n", i, i*i);

return 0;
}
