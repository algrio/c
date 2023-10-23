#include <stdio.h>

int main(void)
{
int num1, denom1, num2, denom2, result_num, result_denom;

printf("Enter first fraction: ");
scanf("%d / %d", &num1, &denom1);
printf("Enter second fraction: ");
scanf("%d / %d", &num2, &denom2);

result_num = num1 * denom2 + num2 * denom1;
result_denom = denom1 * denom2;

printf("The sum is %d/%d\n", result_num, result_denom);

// adding spaces without space in pattern breaks program? if space in scanf line, will be recognized as pattern, else ignored as end of input pattern

return 0;
}
