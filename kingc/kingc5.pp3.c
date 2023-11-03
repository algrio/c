#include <stdio.h>
#include <stdbool.h>

int main(void)
{
float trade, commission;

printf("Enter Trade Value : USD ");
scanf("%f", &trade);

if (trade < 2500)
    commission = 30 + .017 * trade;
else if (trade < 6250)
    commission = 56 + .0066 * trade;
else if (trade < 20000)
    commission = 76 + .0034 * trade;
else if (trade < 50000)
    commission = 100 + .0022 * trade;
else if (trade < 500000)
    commission = 155 + .0011 * trade;
else
    commission = 266 + .0009 * trade;

if (commission < 39.0f)
    commission = 39.f;

printf("Commission : USD %.2f\n", commission); 

return 0; 
}
