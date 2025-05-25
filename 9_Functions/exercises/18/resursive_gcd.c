#include <stdio.h>

int gcd(int n, int m);

int main(void) 
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("The GCD for %d and %d is %d\n", a, b, gcd(a, b));

    return 0;
}

int gcd(int m, int n) 
{
    if (n == 0) {
        return m;
    } else {
        return gcd(n, m % n);
    }
}
