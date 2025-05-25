// Name: polynomial.c
// Purpose: computes the value of the following polynomial: 3x5 + 2x4 – 5x3 – x2 + 7x – 6
// Author: K. N. King, myn0name

#include <stdio.h>

double compute_polynomial(double x);

int main(void) 
{
    double x;
    printf("This program computes the value of the following polynomial: 3x5 + 2x4 – 5x3 – x2 + 7x – 6\n");
    printf("Enter the x: ");
    scanf("%lf", &x);

    printf("Result: %.2lf\n", compute_polynomial(x));

    return 0;
}

double compute_polynomial(double x) 
{
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}
