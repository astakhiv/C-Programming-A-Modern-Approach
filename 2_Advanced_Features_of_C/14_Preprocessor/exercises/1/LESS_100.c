#include <stdio.h>

#define LESS_100(x, y) (((x)*(y)) < 100)

int main (void)
{
    int i;
    
    for (i = 1; i < 20; i++) {
        printf("%5d %5d %5d\n", i, i*i, LESS_100(i, i));
    }

    return 0;
}
