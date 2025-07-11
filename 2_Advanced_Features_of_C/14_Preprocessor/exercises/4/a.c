#include <stdio.h>

#define AVG(x, y) (x+y)/2
#define AVG_CORRECT(x, y) (((x)+(y))/2)

int main(void)
{
    int i;
    for (i = 0; i < 11; i++) {
        printf("%2d, %2d: %2d | %2d\n", i, i+2, 1/AVG(i, i+2), 1/AVG_CORRECT(i, i+2));
    }

    return 0;
}
