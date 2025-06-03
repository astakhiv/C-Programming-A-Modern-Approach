// Name: size_of_types.c
// Purpose: Prints size of types using sizeof
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of short: %lu\n", sizeof(short));
    printf("Size of long: %lu\n", sizeof(long));
    printf("Size of float: %lu\n", sizeof(float));
    printf("Size of double: %lu\n", sizeof(double));
    printf("Size of long double: %lu\n", sizeof(long double));

    return 0;
}
