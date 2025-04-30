// Name: complex_polynomial.c
// Purpose: calculate the 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 with inputed "x"
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    float x;

    printf("Polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Result: %.2f\n", (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6);

    return 0;
}
