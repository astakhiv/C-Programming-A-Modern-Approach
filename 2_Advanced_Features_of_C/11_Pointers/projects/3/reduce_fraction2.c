// Name: reduce_fraction2.c
// Purpose: reduces the fraction to lowest terms
// Author: myn0name

#include <stdio.h>

void reduce(int numberator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) 
{
    int numberator, denominator, n, m, remainder;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numberator, &denominator);

    reduce(numberator, denominator, &numberator, &denominator);
    printf("In lowest terms: %d/%d\n", numberator, denominator);

    return 0;
}

void reduce(int numberator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int n, m, remainder;

    n = numberator;
    m = denominator;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_numerator = numberator / m;
    *reduced_denominator = denominator / m;
}
