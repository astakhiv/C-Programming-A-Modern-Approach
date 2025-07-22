#include <stdio.h>

#include "my_malloc.h"

int main(void)
{
    unsigned long n;

    printf("Enter the size of block to allocate: ");
    scanf("%lu", &n);

    int *p = my_malloc(n);

    printf("Success.\n");

    return 0;
}
