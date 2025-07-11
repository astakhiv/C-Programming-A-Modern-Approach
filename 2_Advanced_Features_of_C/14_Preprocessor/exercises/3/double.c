#include <stdio.h>

// #define DOUBLE(x) 2*x
#define DOUBLE(x) (2*(x))

int main(void)
{
    printf("DOUBLE(1+2): %d\n", DOUBLE(1+2)); // 4 // 6
    printf("4/DOUBLE(2): %d\n", 4/DOUBLE(2)); // 4 // 1

    return 0;
}
