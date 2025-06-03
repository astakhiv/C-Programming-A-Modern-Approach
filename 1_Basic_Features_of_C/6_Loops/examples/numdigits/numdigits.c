/* Calculates the number of digits in an integer */

#include <stdio.h>

int main(void) 
{
    int n, digits = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("THe number has %d digit(s)\n", digits);


    return 0;
}
