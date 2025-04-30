// Name: complex_polynomial_simplified.
// Purpose: calculate the 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 with inputed "x", using Horner's Rule
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    float x;

    printf("Polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    
    printf("Enter x: ");
    scanf("%f", &x);

    printf("Result: %.2f\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}
