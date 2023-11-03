#include <stdio.h>
#include <stdbool.h>

int main(void)
{
float trade, commission, price, quantity, rival;

printf("Enter Trade Price : USD ");
scanf("%f", &price);
printf("Enter Trade Quantity : ");
scanf("%f", &quantity);
trade = price * quantity;

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

if (quantity < 2000)
    rival = 33 + .03 * quantity;
else rival = 33 + .02 * quantity;

printf("Rival Commission : USD %.2f\n", rival); 

return 0; 
}
