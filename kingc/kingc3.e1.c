#include <stdio.h>

int main(void)
{
	printf("%6d,%4d\n", 86, 1040); // prints dec integer minimum 6 and 4 characters, 000086, 1040
	printf("%12.5e\n", 30.253); // prints scientific notation 12 characters, 5 decimal places, 0000030.25300 _3.02530e+01
	printf("%.4f\n", 83.162); // prints float to 4 decimal places, 83.1620
	printf("%-6.2g\n", .0000009979); // prints float to either exp or fixed format, 9.9e-7 ~ 1e-0.6

	return 0;
}
