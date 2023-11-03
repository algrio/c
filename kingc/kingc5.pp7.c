#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int w, x, y, z, min1, max1, min2, max2, min, max;

printf("Enter Four Integers : ");
scanf("%d %d %d %d", &w, &x, &y, &z);

if (w > x)
    {max1 = w; min1 = x;}
    else {max1 = x; min1 = w;}
if (y > z)
    {max2 = y; min2 = z;}
    else {max2 = z; min2 = y;}
if (max1 > max2)
    max = max1;
    else max = max2;
if (min1 > min2)
    min = min2;
    else min = min1;

printf("Largest : %d\nSmallest : %d\n", max, min);

return 0; 
}
