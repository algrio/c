#include <stdio.h>

int main(void)
{
int area, number1, number2;

printf("Enter Phone Number (XXX) XXX-XXXX : ");
scanf("(%d)%d-%d", &area, &number1, &number2);
printf("You Entered %d.%d.%d\n", area, number1, number2);

return 0;
}
