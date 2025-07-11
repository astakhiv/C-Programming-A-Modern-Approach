#include <stdio.h>

#define AREA(x, y) (x)*(y)
#define AREA_CORRECT(x, y) ((x)*(y))

int main(void)
{
    int i;

    for (i = 1; i < 11; i++) {
        printf("%2d, %2d: %5f | %5f\n", i, i+i, 1.0/AREA(i, i+i), 1.0/AREA_CORRECT(i, i+i));
    }

    return 0;
}
