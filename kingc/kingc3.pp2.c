#include <stdio.h>

int main(void)
{
int item, mm, dd , yyyy;
float price;

printf("Enter item number: ");
scanf("%d", &item);
printf("Enter unit price: ");
scanf("%f", &price);
printf("Enter purchase date (mm/dd/yyyy): ");
scanf("%d/%d/%d", &mm, &dd, &yyyy);

printf("Item\t\tUnit\t\tPurchase\nNumber\t\tPrice\t\tDate\n%-d\t\t$%7.2f\t%d/%d/%d\n", item, price, yyyy, mm, dd);

return 0;
}
