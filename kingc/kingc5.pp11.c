#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int number, one, ten;

printf("Enter A Two Digit Number : ");
scanf("%2d", &number);

one = number % 10;
ten = number / 10;

switch(ten)
{
    case 1:
    switch(one)
{
    case 0:
    printf("Ten\n");
    break;

    case 1:
    printf("Eleven\n");
    break;

    case 2:
    printf("Twelve\n");
    break;

    case 3:
    printf("Thirteen\n");
    break;

    case 4:
    printf("Fourteen\n");
    break;

    case 5:
    printf("Fifteen\n");
    break;

    case 6:
    printf("Sixteen\n");
    break;

    case 7:
    printf("Seventeen\n");
    break;

    case 8:
    printf("Eighteen\n");
    break;

    case 9:
    printf("Nineteen\n");
    break;
};
    break;

    case 2:
    printf("Twenty ");
    switch(one)
{
    case 0:
    printf("\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;
};
    break;

    case 3:
    printf("Thirty ");
    switch(one)
{
    case 0:
    printf("\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;
};
    break;

    case 4:
    printf("Forty ");
    switch(one)
{
    case 0:
    printf("\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;
};
    break;

    case 5:
    printf("Fifty ");
    switch(one)
{
    case 0:
    printf("\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;
};
    break;

    case 6:
    printf("Sixty ");
    switch(one)
{
    case 0:
    printf("\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;
};
    break;

    case 7:
    printf("Seventy ");
    switch(one)
{
    case 0:
    printf("\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;
};
    break;

    case 8:
    printf("Eighty ");
    switch(one)
{
    case 0:
    printf("\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;
};
    break;

    case 9:
    printf("Ninety ");
    switch(one)
{
    case 0:
    printf("\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("Two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("Four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;
};
    break;
}
return 0;
}
