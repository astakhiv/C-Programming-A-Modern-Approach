#include <stdlib.h>

#include "create_array.h"

int *create_array(int n, int initial_value)
{
    int i;

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }

    for (i = 0; i < n; i++) {
        arr[i] = initial_value;
    }

    return arr;
}
