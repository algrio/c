#include <stdio.h>

int main (void)
{
    int 
    //for, // is keyword
    If, // legal but lowercase if is keyword, confusing
    main //legal but confusing?
    // printf //legal but causes compiler error, thinks printf is not a function if declared as variable
    // while // is keyword
    ;

    printf("%d\n", main);

    return 0;
}