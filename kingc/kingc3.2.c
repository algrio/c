#include <stdio.h>

int main(void)
{
	int x, y, a, b;

	printf ("enter fraction : ");
	scanf ("%d/%d", &x, &y);
	printf ("enter fraction : ");
	scanf ("%d/%d", &a, &b);

	printf ("%d/%d\n", x*b+a*y, y*b);

	return 0;
}
