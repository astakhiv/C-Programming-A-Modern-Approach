// Name: prefix_vs_unary_op.c
// Purpose: check the result of ---v and -++v
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int i = 1;
    int j = 2;

    printf("i is: %d\n", i);
    printf("-+--i is: %d\n", -+--i);

    printf("j is %d\n", j);
    printf("-++j is %d\n", -++j);

    return 0;
}
