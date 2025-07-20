#include <stdio.h>
#include "shape.h"

int main(void)
{
    struct shape s1 = read_shape();
    struct shape s2 = read_shape();
    int shift_x, shift_y;
    double scale_factor;

    printf("Enter shift x: ");
    scanf("%d", &shift_x);

    printf("Enter shift y: ");
    scanf("%d", &shift_y);

    printf("Enter the scale factor: ");
    scanf("%lf", &scale_factor);

    printf("Area of s1: %ld\n", compute_area(s1));
    printf("Area of s2: %ld\n", compute_area(s2));

    printf("\n");

    s1 = move_by(s1, shift_x, shift_y);
    s2 = move_by(s2, shift_x, shift_y);
    
    write_shape(s1);    
    write_shape(s2);    

    printf("\n");
    
    s1 = scale_by(s1, scale_factor);
    s2 = scale_by(s2, scale_factor);
    
    write_shape(s1);    
    write_shape(s2);    

    return 0;
}
