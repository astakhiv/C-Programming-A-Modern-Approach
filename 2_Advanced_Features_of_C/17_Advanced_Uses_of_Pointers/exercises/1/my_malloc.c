#include <stdio.h>
#include <stdlib.h>

void * my_malloc(unsigned long n)
{
    void *p = malloc(n);
    if (p == NULL) {
        printf("Unable to allocate a size of %d.\n", n);
        exit(0);
    }

    return p;
}
