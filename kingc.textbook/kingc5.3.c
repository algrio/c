#include <stdio.h>
#include <stdbool.h>

int main(void)
{
bool x = 100;

while (x != 0)
    {
    if (x > 0)
    {printf("True %d", x); --x;}
    else if (x < 0) 
    {printf("True %d", x); ++x;}
    }

return 0; 
}
