/* Reverse a series of numbers */

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i;
    
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse:");
    for (i = N - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    putchar('\n');

    return 0;
}
