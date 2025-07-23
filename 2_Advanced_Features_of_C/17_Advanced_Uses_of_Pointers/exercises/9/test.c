#include <stdio.h>

struct {
    int a;
} x;

int main(void)
{
    x.a = 10;

    printf("(&x)->a: %d\n", (&x)->a);

    return 0;
}
