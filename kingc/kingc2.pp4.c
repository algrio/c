#include <stdio.h>

int main ()
{
    float a;

    printf("enter amount : $");
    scanf("%f", &a);
    printf("with tax : $%.2f\n", a * 1.05);

    return 0;
}