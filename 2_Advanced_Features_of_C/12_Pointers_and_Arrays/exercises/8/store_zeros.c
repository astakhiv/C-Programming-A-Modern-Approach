#include <stdio.h>

#define N 20

void store_zeros(int a[], int n);

int main(void)
{
    int a[N], *p;
    store_zeros(a, N);

    for (p = a; p < a + N; p++) {
        printf(" %d", *p);
    }
    printf("\n");

    return 0;
}

void store_zeros(int a[], int n)
{
    int *p;

    for (p = a; p < a + n; p++) {
        *p = 0;
    }
}
