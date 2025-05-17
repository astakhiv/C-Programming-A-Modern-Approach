#include <stdio.h>

int main(void) 
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%d ", i);
    printf("\n\n");

    for (i = 0; i < 10; ++i) 
        printf("%d ", i);
    printf("\n\n");

    for (i = 0; i++ < 10;) 
        printf("%d ", i);
    printf("\n\n");


    return 0;
}
