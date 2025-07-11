#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))

int main(void)
{
    int i;

    for (i = 1; i < 11; i++) {
        printf("%5d %5d\n", i, CUBE(i));
    }
   
    return 0;
}
