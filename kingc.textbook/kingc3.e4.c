#include <stdio.h>

int main(void)
{
	int x, z;
	float y;

	scanf("%d%f%d", &x, &y, &z);
	printf("%d / %f / %d\n", x, y, z);

	// if float entered first eg 10.3, . will be taken as break in entry, inputting 10 and 3 

	return 0;
}
