#include <stdio.h>
#include <stdlib.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int main(void)
{
    struct rectangle *p;

    p = malloc(sizeof(struct rectangle));
    p->upper_left.x = 10;
    p->upper_left.y = 25;
    p->lower_right.x = 20;
    p->lower_right.y = 15;
    
    printf("x: %d, y: %d\nx: %d, y: %d\n", 
    p->upper_left.x,
    p->upper_left.y,
    p->lower_right.x,
    p->lower_right.y
    );
    free(p);

    return 0;
}
