#include <stdio.h>

int main(void)
{
int gs1, group, publisher, item, check;

printf("Enter ISBN : ");
scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &check);
printf("GS1 Prefix : %d\nGroup Identifier : %d\nPublisher Code : %d\nItem Number : %d\nCheck Digit : %d\n", gs1, group, publisher, item, check);

return 0;
}
