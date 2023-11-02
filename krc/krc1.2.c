#include <stdio.h>

/* program will print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main() /* main function to initialize program */
{
	float fahr, celsius; /* declaring int variables*/
	float lower, upper, step; /* declaring int variables*/

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower; /*sets fahr to lower ie 0*/
	printf("%10s\t%10s\n","FAHRENHEIT","CELSIUS");
	while (fahr <= upper) /* loop condition while fahr does not hit upper limit */
	{
		celsius = 5.0 * (fahr-32.0) / 9.0; /* sets celsius to conversion of fahr value */
		printf("%10.2f\t%10.2f\n", fahr, celsius); /* prints integer arg, tab, integer arg, newline of both vars */
		fahr = fahr + step; /* increases fahr by step, thus approaching upper to close loop */
	} 
}

