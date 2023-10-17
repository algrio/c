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

	int height = 8, length = 12, width =10, volume = height * length * width, weight = (volume + 165) / 166; printf("Height: %d\nLength: %d\nWidth: %d\nVolume: %d\nWeight: %d\n", height, length, width, volume, weight);
	
}
