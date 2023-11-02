#include <stdio.h>

int main ()
{
    // float r, pi = 3.1415, v = ((4.0f/3.0f) * pi * r * r * r); value of v wont update after entering r in scanf line
    float r, pi = 3.1415;

    printf("enter radius : ");
    scanf("%f", &r);
    // printf("volume : %f\n", &v; // enter calculation in printf to receive updated value with initialized r
    printf("volume : %.2f m3\n", ((4.0f/3.0f) * pi * r * r * r));

    return 0;
}