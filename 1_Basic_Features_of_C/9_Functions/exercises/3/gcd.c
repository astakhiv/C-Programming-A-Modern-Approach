#include <stdio.h>

int gcd(int n, int m);

int main(void) 
{
    int n, m;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    printf("Greatest common divisor is: %d\n", gcd(n, m));

    return 0;
}

int gcd(int n, int m) 
{
    int r;

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}
