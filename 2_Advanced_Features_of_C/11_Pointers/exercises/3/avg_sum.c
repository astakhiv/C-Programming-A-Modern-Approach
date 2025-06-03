/* Computes the sum and average of the numbers in the array */

#include <stdio.h>

#define N 10

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
    double a[N], sum, average;
    int i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%lf", &a[i]);
    }

    avg_sum(a, N, &average, &sum);

    printf("The sum of elements is: %.3lf\n", sum);
    printf("The average of elements is: %.3lf\n", average);

    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++) {
        *sum += a[i];
    }

    *avg = *sum / n;
}
