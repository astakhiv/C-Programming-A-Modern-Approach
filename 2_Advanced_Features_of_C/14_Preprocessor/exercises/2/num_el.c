#include <stdio.h>

#define NELEMS(a) ((int) sizeof(a)/(sizeof(a[0])))

int main(void)
{
    int a[10] = {0};

    printf("Number of elements: %3d\n", NELEMS(a));

    return 0;
}
