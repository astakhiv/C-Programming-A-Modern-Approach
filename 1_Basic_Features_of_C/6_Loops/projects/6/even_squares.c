// Name: even_squares.c
// Purpose: prints even squares until given number
// Author: K. N. King, myn0name

#include <stdio.h>

int main(void) 
{
    int n, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}
