// Name: reduce_fraction.c
// Purpose: reduces the fraction to lowest terms
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int numberator, denominator, n, m, remainder;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numberator, &denominator);

    n = numberator;
    m = denominator;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    numberator /= m;
    denominator /= m;

    printf("In lowest terms: %d/%d\n", numberator, denominator);

    return 0;
}
