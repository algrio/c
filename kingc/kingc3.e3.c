#include <stdio.h>

int main(void)
{
	// int x, y, z; // for a & b
	float x, y, z;

	// scanf("%d%d%d", &x, &y, &z); // a, whitespace input ignored but accepted as end of input
	// scanf("%d -%d -%d", &x, &y, &z); // b, same as above
	// scanf("%f ", &x, &y, &z); // c, whitespace ignored again
	scanf("%f, %f", &x, &y, &z); // d, same
	printf("%f : %f : %f\n", x, y, z);

	return 0;
}
