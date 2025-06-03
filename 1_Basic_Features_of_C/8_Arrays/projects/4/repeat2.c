// Name: reverse2.c
// Purpose: Reverse a series of numbers 
// Author: K. N. King

#include <stdio.h>

#define N ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
    int a[10], i;
    
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
