// Name: root.c
// Purpose: Calculates the square root of a positive integer using Newton's method
// Author: myn0name

#include <stdio.h>
#include <math.h>

int main(void) 
{
    double x, y, div, avrg = 1;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        y = avrg;

        div = x / y;
        avrg = (y + div) / 2;
    } while (fabs(y-avrg) > 0.00001);

    printf("Square root: %lf\n", y);

    return 0;
}
