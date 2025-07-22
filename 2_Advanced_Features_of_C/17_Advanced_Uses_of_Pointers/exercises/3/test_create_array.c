#include <stdio.h>
#include <stdlib.h>

#include "create_array.h"

int main(void)
{
    int len, init_val, i;

    printf("Enter the lenght of the array: ");
    scanf("%d", &len);
    printf("Enter the initial value of the array element: ");
    scanf("%d", &init_val);

    int *arr = create_array(len, init_val);

    printf("Array:");
    for (i = 0; i < len; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}
