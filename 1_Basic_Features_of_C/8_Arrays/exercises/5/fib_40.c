#include <stdio.h>

#define LEN 40

int main(void) 
{
    int fib_numbers[LEN] = {0, 1};

    for (int i = 2; i < LEN; i++) {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }

    for (int i = 0; i < LEN; i++) {
        printf("%d ", fib_numbers[i]);
    }
    printf("\n");

    return 0;
}
