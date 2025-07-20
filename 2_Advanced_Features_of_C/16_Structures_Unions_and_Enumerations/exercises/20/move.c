#include <stdio.h>

enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void)
{
    int x, y;

    printf("x: %d, y: %d\n", x, y);

    switch(direction) {
        case EAST: x++; break;
        case WEST: x--; break;
        case SOUTH: y++; break;
        case NORTH: y--; break;
    }     

    printf("x: %d, y: %d\n", x, y);

    return 0;
}
