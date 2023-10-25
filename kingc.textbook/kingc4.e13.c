#include <stdio.h>

int main(void)
{
int i = 7;

printf("%d\n", ++i);
printf("%d\n", i++); // would be 9 if prefix
printf("%d\n", i +=1 );

return 0;
}
