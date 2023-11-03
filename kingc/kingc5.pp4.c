#include <stdio.h>
#include <stdbool.h>

int main(void)
{
float speed;

printf("Enter Wind Speed (Knots) : ");
scanf("%f", &speed);

if (speed < 1)
    printf("Wind Speed %.1f indicates Calm\n", speed);
else if (speed < 4)
    printf("Wind Speed %.1f indicates Light Air\n", speed);
else if (speed < 28)
    printf("Wind Speed %.1f indicates Breeze\n", speed);
else if (speed < 48)
    printf("Wind Speed %.1f indicates Gale\n", speed);
else if (speed < 64)
    printf("Wind Speed %.1f indicates Storm\n", speed);
else printf("Wind Speed %.1f indicates Hurricane\n", speed);

return 0; 
}
