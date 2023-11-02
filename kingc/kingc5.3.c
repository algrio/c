#include <stdio.h>
#include <stdbool.h>

int main(void)
{
/* char grade = 4;
switch (grade) 
{
  case 4:  printf("Excellent");
           break;
  case 3:  printf("Good");
           break;
  case 2:  printf("Average");
           break;
  case 1:  printf("Poor");
           break;
  case 0:  printf("Failing");
           break;
  default: printf("Illegal grade");
           break;
} */

int year, month, date;

printf("Enter Date YYYY-MM-DD : ");
scanf("%d-%d-%d", &year, &month, &date);

printf("Dated This %d", date);
switch (date)
{
    case 1: case 21: case 31:
        printf("st"); break;
    case 2: case 22:
        printf("nd"); break;
    case 3: case 23:
        printf("rd"); break;
    default:
        printf("th"); break;
}

printf(" Day Of ");
switch (month)
{
    case 1: printf("January"); break;
    case 2: printf("February"); break;
    case 3: printf("March"); break;
    case 4: printf("April"); break;
    case 5: printf("May"); break;
    case 6: printf("June"); break;
    case 7: printf("July"); break;
    case 8: printf("August"); break;
    case 9: printf("September"); break;
    case 10: printf("October"); break;
    case 11: printf("November"); break;
    case 12: printf("December"); break;
}

printf(", %d.\n", year);
return 0; 
}
