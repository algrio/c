#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int area;
printf("Enter Area Code : ");
scanf("%3d", &area);
printf("Major City : ");

switch(area)
{
case 229: printf("Albany\n"); break;
case 404: case 470: case 678: case 770: printf("Atlanta\n"); break;
case 478: printf("Macon\n"); break;
case 706: case 762: printf("Macon\n"); break;
case 912: printf("Savannah\n"); break;
default: printf("Invalid\n");
}
return 0; 
}
