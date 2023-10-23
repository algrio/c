#include <stdio.h>

char a [] = "cool\n";
char* b = "cool\n";
float c = 777.777;

int main(void)
{
    printf("%s", &a[0]);
}