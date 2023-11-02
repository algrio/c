#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int i = -17;
printf("%d\n", i >= 0 ? i : -i);
return 0; 
}
