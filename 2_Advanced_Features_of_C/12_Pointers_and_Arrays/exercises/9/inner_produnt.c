#include <stdio.h>

#define N 10

double inner_product(const double *a, const double *b, int n);

int main(void)
{
    double a[N], b[N], *p;

    printf("Enter first %d nubmers: ", N);
    for (p = a; p < a + N; p++) {
        scanf("%lf", p);
    }
    printf("OK\n");

    printf("Enter second %d number: ", N);
    for (p = b; p < b + N; p++) {
        scanf("%lf", p);
    }

    printf("The inner product is: %lf\n", inner_product(a, b, N));
    
    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    double *p, *q, sum; 

    sum = 0;
    for (p = a, q = b; p < a + n; p++, q++) {
        sum += *p * *q;
    }

    return sum;
}
