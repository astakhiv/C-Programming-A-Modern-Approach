#include <stdio.h>

#define LEN 10
#define N 5

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void)
{
    int a[N][LEN], *p;

    printf("Enter %d numers: ", N * LEN);
    for (p = &a[0][0]; p < &a[0][0] + N * LEN; p++) {
        scanf("%d", p);
    }

    printf("The sum of elements is: %d\n", sum_two_dimensional_array(a, N));

    return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int *p, sum = 0;

    for (p = &a[0][0]; p < &a[0][0] + n * LEN; p++) {
        sum += *p;
    }

    return sum;
}
