#include <stdio.h>

int main ()
{
    float loan, rate, payment, balance;

    printf("enter loan : $ ");
    scanf("%f", &loan);
    printf("enter rate : %% ");
    scanf("%f", &rate);
    printf("enter monthly : $ ");
    scanf("%f", &payment);
    printf("\n");

    balance = loan * ((100 + (rate/12))/100) - payment;
    printf("1st month balance : $ %.2f\n", balance);
    balance = balance * ((100 + (rate/12))/100) - payment;
    printf("2nd month balance : $ %.2f\n", balance);
    balance = balance * ((100 + (rate/12))/100) - payment;
    printf("3rd month balance : $ %.2f\n", balance);

    return 0;
}