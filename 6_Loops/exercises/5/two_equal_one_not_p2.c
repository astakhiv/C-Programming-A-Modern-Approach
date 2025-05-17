#include <stdio.h>

int main(void) 
{
    int i;

    i = 11;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 11;
    for (; i < 10;) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 11;
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);
    printf("\n");

    return 0;
}
