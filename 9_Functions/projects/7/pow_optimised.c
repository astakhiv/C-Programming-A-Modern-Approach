// Name: pow_optimised.c
// Purpose: raises x to nth power
// Author: K. N. King, myn0name

#include <stdio.h>

int power(int x, int n);

int main(void) 
{
    int x, n;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d rasied to power %d is %d\n", x, n, power(x, n));

    return 0;
}

int power(int x, int n) 
{
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        int res = power(x, n / 2);
        return res * res;
    } else {
        return x * power(x, n - 1);
    }
}
