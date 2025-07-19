#include <stdio.h>
#include "rectangle.h"

int main(void)
{
    struct rectangle r1 = read_rectangle();
    struct rectangle r2 = read_rectangle();
    struct point p = read_point();
    
    int x_shift = 10;
    int y_shift = 5;

    printf("r1 area is: %ld\n", area(r1));
    printf("r2 area is: %ld\n", area(r2));

    printf("The center point of r1\n");
    write_rectangle(r1);
    printf("is: ");
    write_point(center(r1));

    printf("The center point of r2\n");
    write_rectangle(r2);
    printf("is: ");
    write_point(center(r2));

    printf("r1 shifter by x: %d and y: %d is\n", x_shift, y_shift);
    write_rectangle(move(r1, x_shift, y_shift));
    printf("r2 shifter by x: %d and y: %d is\n", x_shift, y_shift);
    write_rectangle(move(r2, x_shift, y_shift));

    printf("\nThe point\n");
    write_point(p);
    printf("Is %s in r1\n", is_point_in(p, r1) ? "" : "not");
    
    printf("\nThe point\n");
    write_point(p);
    printf("Is %s in r2\n", is_point_in(p, r2) ? "" : "not");

    return 0;
}
