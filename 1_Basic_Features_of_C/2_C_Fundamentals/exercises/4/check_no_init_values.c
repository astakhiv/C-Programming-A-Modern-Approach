// Name: check_no_init_values.c
// Purpose: see values of uninitializer variables
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int a, b, c, d;
    float e, f, g, h;

    printf("Integers: %d, %d, %d, %d\n", a, b, c, d);
    printf("Floats: %d, %d, %d, %d\n", e, f, g, h);

    return 0;
}
