#include <stdio.h>

i*nt main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int *p;

    p = a;

    printf("p == a[0]: %d\n", p == a[0]);
    printf("p == &a[0]: %d\n", p == &a[0]);
    printf("*p == a[0]: %d\n", *p == a[0]);
    printf("p[0] == a[0]: %d\n", p[0] == a[0]);

    return 0;
}
