#include <stdio.h>
#include <math.h>

#define DISP2(f, x, y) (printf(#f"(%g, %g) = %g\n", (x), (y), (f)((x), (y))))

int main(void)
{
    DISP2(pow, 2.0, 3.0);

    return 0;
}
