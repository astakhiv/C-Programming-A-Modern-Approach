#include <stdio.h>

int main(void) 
{
    int i = 9384;

    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);

    printf("\n");

    return 0;
}
