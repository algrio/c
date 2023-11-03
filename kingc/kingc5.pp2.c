#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int hour, minute;

printf("Enter A 24 Hour Time (HH:MM): ");
scanf("%d:%d", &hour, &minute);

if (hour < 0 || hour > 23 || minute < 0 || minute > 59)
    printf("Hour Or Minute Entered Is Invalid\n");
else
    {
    printf("Equivalent 12 Hour Time is ");
    if (hour == 0)
        {
        hour += 12;
        printf("%02d:%02d AM.\n", hour, minute);
        }
    else if (hour == 12)
        {
        printf("%02d:%02d PM.\n", hour, minute);
        }
    else if (hour > 12)
        {
        hour -= 12;
        printf("%02d:%02d PM.\n", hour, minute);
        }
    else printf("%02d:%02d AM.\n", hour, minute);
    };

return 0; 
}
