/* Implements a function to swap values of variables */

#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i, j;
    
    printf("Enter value of i: ");
    scanf("%d", &i);

    printf("Enter value of j: ");
    scanf("%d", &j);

    swap(&i, &j);

    printf("Swapped | i: %d, j: %d\n", i, j);

    return 0;
}

void swap(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}
