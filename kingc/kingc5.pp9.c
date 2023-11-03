#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int y1, m1, d1, y2, m2, d2;

printf("Enter First Date (YYYY-MM-DD) : ");
scanf("%d-%d-%d", &y1, &m1, &d1);
printf("Enter Second Date (YYYY-MM-DD) : ");
scanf("%d-%d-%d", &y2, &m2, &d2);

if (y1 > y2)
    printf("%d-%d-%d Is Earlier Than %d-%d-%d", y2, m2, d2, y1, m1, d1);
else if (y1 < y2)
    printf("%d-%d-%d Is Earlier Than %d-%d-%d", y1, m1, d1, y2, m2, d2);
else
    if (m1 > m2)
        printf("%d-%d-%d Is Earlier Than %d-%d-%d", y2, m2, d2, y1, m1, d1);
    else if (m1 < m2)
        printf("%d-%d-%d Is Earlier Than %d-%d-%d", y1, m1, d1, y2, m2, d2);
    else
        if (d1 > d2)
            printf("%d-%d-%d Is Earlier Than %d-%d-%d", y2, m2, d2, y1, m1, d1);
        else if (d1 < d2)
            printf("%d-%d-%d Is Earlier Than %d-%d-%d", y1, m1, d1, y2, m2, d2);
        else
            printf("%d-%d-%d Is The Same Date As %d-%d-%d", y1, m1, d1, y2, m2, d2);

printf("\n");

return 0; 
}
