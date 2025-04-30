// Name: check_op.c
// Purpose: print -1, 0 or 1 depending on i
// Author: K. N. King, myn0name

#include <stdio.h>

int main(void) 
{
    int i, j;

    j = 5;

    i = -10;
    printf("%d\n", (i > j) - (i < j));
    printf("%d\n", (i == j) ? 0 : (i > j) ? 1 : -1);

    i = 5;
    printf("%d\n", (i > j) - (i < j));
    printf("%d\n", (i == j) ? 0 : (i > j) ? 1 : -1);

    i = 10;
    printf("%d\n", (i > j) - (i < j));
    printf("%d\n", (i == j) ? 0 : (i > j) ? 1 : -1);

    return 0;
}
