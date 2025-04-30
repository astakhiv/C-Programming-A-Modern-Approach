// Name: print_float.c
// Purpose: display float variable in different formats
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    float x = 2.9979;

    printf("%-8.1e\n", x); // (a)
    printf("%10.6e\n", x); // (b)
    printf("%-8.3f\n", x); // (c)
    printf("%6.0f\n", x);  // (d)

    return 0;
}
