#include <stdio.h>

int main ()
{
    float r, pi = 3.1415;

    printf("enter radius : ");
    scanf("%f", &r);
    
    float v = ((4.0f/3.0f) * pi * r * r * r);
    printf("volume : %.2f m3\n", v);

    return 0;
}