#include <stdio.h>

int main(void)
{
int x, y, z;

/*
printf("Enter Two Digits : ");
scanf("%d", &x);
printf("Reversal : %d\n", x = (x%10)*10 + (x/10));
*/

/*
printf("Enter Three Digits : ");
scanf("%d", &x);
printf("Reversal : %d\n", x = (x%10)*100 + ((x/10)%10)*10 + x/100);
*/

printf("Enter Three Digits : ");
scanf("%1d%1d%1d", &x, &y, &z);
printf("Reversal : %d%d%d\n", z, y, x);

return 0;
}
