#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int number;

printf("Enter A Number : ");
scanf("%d", &number);

if (number > -10 && number < 10) 
    printf("The Number %d Has One Digit\n", number);
else if (number > -100 && number < 100) 
    printf("The Number %d Has Two Digits\n", number);
else if (number > -1000 && number < 1000) 
    printf("The Number %d Has Three Digits\n", number);
else if (number > -10000 && number < 10000) 
    printf("The Number %d Has Four Digits\n", number);
else printf("The Number %d Has More Than Four Digits\n", number);

return 0; 
}
