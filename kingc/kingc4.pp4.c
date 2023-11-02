#include <stdio.h>

int main(void)
{
int x;

printf("Enter Number 0 to 32767 : ");
scanf("%d", &x);
printf("Octal : %d%d%d%d%d\n", x /8/8/8/8%8, x /8/8/8%8, x /8/8%8, x /8%8, x %8);

return 0;
}
