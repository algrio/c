#include <stdio.h>

int main(void)
{
	float x, z;
	int y;

	scanf("%f%d%f", &x, &y, &z);
	printf("%f / %d / %f\n", x, y, z);

	// if float X.Y entered for 2nd variable int, it will take X as an int and then .Y as a float for the next conversion

	return 0;
}
