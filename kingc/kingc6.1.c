#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int i=1, n, sum = 0;

/* while (i < n) 
{
i=i*2;
printf("%d\n", i);
} */

/* printf("This program prints a table of squares.\nEnter The number of entries : ");
scanf("%d", &n);

while (i <= n)
{
    printf("%10d %10d\n", i, i*i);
    ++i;
} */

printf("This program sums a series of integers.\nEnter Integers : ");

scanf("%d", &n);
while (n != 0)
{
    sum += n;
    scanf("%d", &n);
}

printf("Sum : %d\n", sum);

return 0;
}
