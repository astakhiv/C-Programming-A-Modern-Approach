// Name: gcd.c
// Purpose: calculate greatest common divisor of two given integers
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int n, m, r;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("Greatest common divisor is: %d\n", m);

    return 0;
}
