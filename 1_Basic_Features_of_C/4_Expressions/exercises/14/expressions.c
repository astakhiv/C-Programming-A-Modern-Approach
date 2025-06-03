#include <stdio.h>

int main(void) 
{
    int a = 2, b = 4, c = 3, d = 6, e = 9;

    printf("%d\n", a * b - c * d + e);
    printf("%d\n", (((a * b) - (c * d)) + e));

    printf("%d\n", a / b % c / d);
    printf("%d\n", (((a / b) % c) / d));

    printf("%d\n", - a - b + c - + d);
    printf("%d\n", ((((- a) - b) + c) - (+ d)));
    
    printf("%d\n", a * - b / c - d);
    printf("%d\n", (((a * (- b)) / c) - d));

    return 0;
}
