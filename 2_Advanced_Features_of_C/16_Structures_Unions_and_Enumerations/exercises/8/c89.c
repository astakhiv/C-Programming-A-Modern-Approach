#include <stdio.h>

struct color {
    int red;
    int green;
    int blue;
};

int main(void)
{
    const struct color MAGENTA = {255, 0, 255};

    printf("The magenta color is: r:%d, g:%d, b:%d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);

    return 0;
}
