// Name: sum2.c
// Purpose: Sums a series of numbers (using double variables) 
// Author: K. N. King, myn0name

#include <stdio.h>

int main(void) 
{
    double n, sum = 0;

    printf("This program sums a series of doubles.\n");
    printf("Enter doubles (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);

    return 0;
}
