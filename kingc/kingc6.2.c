#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int i = 0, n, sum;

/* printf("Enter Number For Countdown: ");
scanf("%d", &n);

do
{
    printf("%d\n", n);
    --n;
}
while (n > i); */

printf("Enter An Integer : ");
scanf("%d", &n);

do
{
    n /= 10;
    i++;
}
while (n > 0);

if (i == 1)
    printf("Integer Entered Has %d Digit\n", i);
else
    printf("Integer Entered Has %d Digits\n", i);

return 0;
}
