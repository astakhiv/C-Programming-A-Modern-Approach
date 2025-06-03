#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void) 
{
    int n, i;
    printf("Enter the length of the arrays: ");
    scanf("%d", &n);

    double a[n], b[n];
    printf("Enter %d element(s) of first array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }
    printf("Enter %d element(s) of second array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &b[i]);
    }

    printf("The inner product is %f\n", inner_product(a, b, n));

    return 0;
}

double inner_product(double a[], double b[], int n) 
{
    double product = 0;
    int i;

    for (i = 0; i < n; i++) {
        product += a[i] * b[i];
    }

    return product;
}

