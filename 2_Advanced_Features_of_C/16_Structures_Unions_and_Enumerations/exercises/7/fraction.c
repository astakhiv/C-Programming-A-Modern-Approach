#include <stdio.h>
#include "fraction.h"

struct fraction read_fraction(void)
{
    struct fraction f;

    printf("Enter the numerator: ");
    scanf("%d", &f.numerator);
    printf("Enter the denominator: ");
    scanf("%d", &f.denominator);

    return f;
}

void write_fraction(struct fraction *f)
{
    printf("%d/%d\n", (*f).numerator, (*f).denominator);
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

void reduce(struct fraction *f)
{
    int f_gcd = gcd((*f).numerator, (*f).denominator);
    (*f).numerator /= f_gcd;
    (*f).denominator /= f_gcd;
}

struct fraction add(struct fraction f1, struct fraction f2)
{
    struct fraction f3;
    
    f3.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    f3.denominator = f1.denominator * f2.denominator;
    reduce(&f3);

    return f3;
}

struct fraction subtract(struct fraction f1, struct fraction f2)
{
    struct fraction f3;
    
    f3.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    f3.denominator = f1.denominator * f2.denominator;
    reduce(&f3);

    return f3;
}

struct fraction multiply(struct fraction f1, struct fraction f2)
{
    struct fraction f3;
    
    f3.numerator = f1.numerator * f2.numerator;
    f3.denominator = f1.denominator * f2.denominator;
    reduce(&f3);

    return f3;
}

struct fraction divide(struct fraction f1, struct fraction f2)
{
    struct fraction f3;
    
    f3.numerator = f1.numerator * f2.denominator;
    f3.denominator = f1.denominator * f2.numerator;
    reduce(&f3);

    return f3;
}

