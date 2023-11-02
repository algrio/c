#include <stdio.h>

int main(void)
{
	/*
	* is a boxed, multiline comment
	* printf("To C, or not to C:\n");
	* printf("that is the question. \n")
	*/

	// is a single line comment
	
	/*
	printf("Brevity is the soul of wit.\n  --Shakespeare\n");
	return 0;
	*/

	/*
	int height, length, width, volume, weight;
	float profit, loss;

	height = 8;
	length = 12;
	width = 10;
	//profit = 2150.48f;
	volume = height * length * width;
	weight = (volume + 165) / 166;
	*/

	// int height = 8, length = 12, width =10, volume = height * length * width, weight = (volume + 165) / 166; printf("Height: %d\nLength: %d\nWidth: %d\nVolume: %d\nWeight: %d\n", height, length, width, volume, weight);
	
	//float i;

	//scanf("%f", &i);
	//printf("%f\n", i+1);

	/*
	#define INCHES_PER_POUND 166
	int height, length, width;

	printf("enter height : ");
	scanf("%d", &height);
	printf("enter length : ");
	scanf("%d", &length);
	printf("enter width : ");
	scanf("%d", &width);

	printf("volume : %d\n", height * length * width);
	printf("dims : %d\n", ((height * length * width) + 165) / INCHES_PER_POUND);
	*/

	/*
	#define FREEZING_POINT 32.0f
	#define SCALE_FACTOR (5.0f / 9.0f)

	float fahrenheit, celsius;

	printf ("enter fahrenheit : ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

	printf("celsius equivalent : %.1f\n", celsius);
	*/

	return 0;
}
