#include <stdio.h>

int main(void)
{
int a, b, c, d, e;

/*
printf("%d\n",a * b - c *d +e);
printf("%d\n",((a * b) - (c *d)) +e);
*/

/*
printf("%d\n",a / b % c /d);
printf("%d\n",((a / b) % c) /d);
*/

/* unaries first?
printf("%d\n",- a - b + c - + d);
printf("%d\n",(((- a) - b) + c) - (+ d));
*/

printf("%d\n",a * - b / c - d);
printf("%d\n",((a * (- b)) / c) - d);

return 0;
}
