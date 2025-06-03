// Name: e_until_limit.c
// Purpose: calculates e constant, until given limit of fraction
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    float e = 1.0f, lim, fraction;
    int factorial = 1;

    printf("Enter a limit: ");
    scanf("%f", &lim);

    fraction = 1.0f / factorial;
    
    for (int i = 2; fraction >= lim; i++) {
        e += fraction;

        factorial *= i;
        fraction = 1.0f / factorial;
    }

    printf("e(until fraction less than %f): %f\n", lim, e);

    return 0;
}
