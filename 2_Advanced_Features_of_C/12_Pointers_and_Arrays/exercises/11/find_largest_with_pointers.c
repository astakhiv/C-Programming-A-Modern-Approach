/* Implements a funtion to return a pointer to the largest element in the array, using pointer arithmetic */

#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void)
{
    int b[N], i, *largest_pt;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &b[i]);
    }

    largest_pt = find_largest(b, N);

    printf("The address of the largest number in the array is '%p' and it's value is '%d'\n", largest_pt, *largest_pt);

    return 0;
}

int *find_largest(int a[], int n)
{
    int *p, *max;

    max = &a[0];
    for (p = &a[1]; p < a + n; p++) {
        if (*p > *max) {
            max = p;
        }
    }

    return max;
}
