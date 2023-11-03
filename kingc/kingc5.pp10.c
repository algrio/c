#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int grade, ten, mod;
char letter;

printf("Enter Numerical Grade (0-100) : ");
scanf("%d", &grade);

ten = grade / 10;
mod = grade % 10;

switch (ten)
{
    case 0: case 1: case 2: case 3: case 4: case 5:
    letter = 'F';
    break;

    case 6:
    letter = 'D';
    break;

    case 7:
    letter = 'C';
    break;

    case 8:
    letter = 'B';
    break;

    case 9:
    letter = 'A';
    break;

    case 10:
        switch(mod)
        {
        case 0:
        letter = 'A';
        break;
        default:
        printf("Input Invalid\n");
        };
    break;

    default:
    printf("Input Invalid\n");
}
printf("Letter Grade : %c\n", letter);

return 0; 
}
