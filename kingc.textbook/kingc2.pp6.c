#include <stdio.h>

int main ()
{
    int x;

    printf("enter x : ");
    scanf("%d", &x);
    printf("result : %d\n", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);

    return 0;
}