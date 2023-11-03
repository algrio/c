#include <stdio.h>
#include <stdbool.h>

int main(void)
{
float income, tax;

printf("Enter Taxable Income : USD ");
scanf("%f", &income);

if (income <= 750.00)
    tax = income * .01;
else if (income <= 2250.00)
    tax = 7.50 + (income - 750.00) * .02;
else if (income <= 3750.00)
    tax = 37.50 + (income - 2250.00) * .03;
else if (income <= 5250.00)
    tax = 82.50 + (income - 3750.00) * .04;
else if (income <= 7000.00)
    tax = 142.50 + (income - 5250.00) * .05;
else
    tax = 230 + (income - 7000.00) * .06;

printf("Total Tax Due : USD %.2f\n", tax);

return 0; 
}
