#include <stdio.h>

#define N 10

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[N], *p, max, sec_max;

    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    find_two_largest(a, N, &max, &sec_max);

    printf("Max: %d, second max: %d\n", max, sec_max);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    int *p;

    if (*a > *(a + 1)) {
        *largest = *a;
        *second_largest = *(a + 1);
    } else {
        *largest = *(a + 1);
        *second_largest = *a;
    }

    for (p = a + 2; p < a + n; p++) {
       if (*p > *largest) {
           *second_largest = *largest;
           *largest = *p;
       } else if (*p > *second_largest) {
           *second_largest = *p;
       }
    }
}
