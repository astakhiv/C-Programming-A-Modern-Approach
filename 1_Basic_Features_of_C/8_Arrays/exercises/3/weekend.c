#include <stdio.h>

typedef int bool;

int main(void) 
{
    bool weekend[7] = {1, 0, 0, 0, 0, 0, 1};

    for (int i = 0; i < 7; i++) {
        printf(weekend[i] ? " true" : " false");
    }
    printf("\n");

    return 0;
}
