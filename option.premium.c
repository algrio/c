#include <stdio.h>

int main (void)
{
    float premium, strike;

    printf("premium : ");
    scanf("%f", &premium);
    printf("strike : ");
    scanf("%f", &strike);
    printf("%% %.2f \n", (premium / strike)*100);

    return 0;
}